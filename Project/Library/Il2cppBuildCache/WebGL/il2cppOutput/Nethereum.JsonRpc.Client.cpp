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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>>
struct Func_2_t51F1F851C1DA8B0069CD6C972B3DC6B2C112514F;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27;
// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>
struct Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672;
// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t506CA082EE40D9DFBE82C3CAF44181A1323BC77A;
// System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>
struct Func_4_t9ADBEB0F9700A038FC405B3366659D009C0C5949;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IEnumerable_1_t88E97B47E263815E0815957E5F85089F38648DF7;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_tB4F4A6EFD4950033CCAA8CCFC21AA9D447EC68ED;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_tE610B242E706015DDFCC774FD3713DD5D073FE08;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IList_1_tE56A9472E9A625595C8D50A8EBE5C51C878BD143;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_tA3D8878C081314F33202EE6062210303CFA700B6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskFactory_1_tBD25E0D00DF6327A2ADA6BAEB9748FC10FE1E74A;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct ThreadSafeStore_2_t5306132C9A7C3E62FC4786A1768F28F7BCB0D7DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t14A6367F9191FF71C256AF550BCD721DB99FFC4C;
// Newtonsoft.Json.Serialization.JsonProperty[]
struct JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// Nethereum.JsonRpc.Client.Configuration
struct Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15;
// Newtonsoft.Json.DefaultJsonNameTable
struct DefaultJsonNameTable_t192C702F7F1E9A69FADA5CD7D7284CB06FEDA52C;
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
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_t6D2B30EB0021FC97B12D3D5745BFAC47D8884FC4;
// Nethereum.JsonRpc.Client.IClientRequestHeaderSupport
struct IClientRequestHeaderSupport_tC92F9D84A11FE6483C551331136ABF3B8F34E3A6;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t2E517D3D3DF34BA8FAF8B94B730633F223B6BE74;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Common.Logging.ILog
struct ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t69B4D897F5DA4B0101366760B5435E5931FB5962;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t789F5E8B570462D827B19564065D38BD57E46890;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_tF1B860432239F8832248D294A3278F8A09540734;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t8E02656C5633E10F98A312A10005E574CEDEFDFA;
// Newtonsoft.Json.Linq.JArray
struct JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_tCE7553F62CB1EEE2300A18884423B047DC37B545;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t82EFCE101134E781C41E1A2C4C5451CEB9586A6E;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7;
// Newtonsoft.Json.JsonReader
struct JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_t1E0001A7C5680731F4605F750F0CC2077B1A83CC;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver
struct NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F;
// Nethereum.JsonRpc.Client.NullParamsValueProvider
struct NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05;
// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t510B262FA7079FAA9DAE6367124BCD3511E3EA0D;
// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_t71310CC29DB0CC70E5A7CB77BE4ADEF97D80B648;
// Nethereum.JsonRpc.Client.RpcError
struct RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07;
// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D;
// Nethereum.JsonRpc.Client.RpcLogger
struct RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C;
// Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter
struct RpcParametersJsonConverter_t3FD557A7940D31BE8EC3DE9DB144B039DEA9AD0D;
// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7;
// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773;
// Nethereum.JsonRpc.Client.RpcResponseException
struct RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2;
// Nethereum.JsonRpc.Client.RpcResponseFormatException
struct RpcResponseFormatException_t4597A9AEE7D725274C9985F5A299BFF0E2477058;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344;
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams
struct RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C;
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage
struct RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo
struct BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientRequestHeaderSupport_tC92F9D84A11FE6483C551331136ABF3B8F34E3A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral068F780F4A8A2BE8B460C4858E09ED5587C3D171;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1CCB509D9C2863877C3F9A21BA22023008BB1A;
IL2CPP_EXTERN_C String_t* _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960;
IL2CPP_EXTERN_C String_t* _stringLiteral4C5CD570816F5EF21DB031C8819A29AB3FE1F6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral50506C2EC1EE335E6927A35852C7F4E22A2A095D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACFAF82BBAB8E0AF489CE8E5C705D5561B275DF;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral9125A6F7AF01C617D0C306146BFE095F99C613FA;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB642385221D006B3B8DB45C10F626FD2A3DB7C;
IL2CPP_EXTERN_C String_t* _stringLiteralD004EBBBC1070E7D0C496A257FCFE588E4B23913;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_mA277416DECC519D87133802176AE7D80979398C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m9C5DDA51E4E61E1B6F39481A3CEED59205D22C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m1DAA2E63E620E55519F7297539AAFC3B870C9011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_m779A60A06105B971A15A3A547616D83C2CD96CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m92D38944F28FFE7CBFD08FC906761280C35BDF06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m9B7B9C63B1A75EB9D4E435A22FF3BA22DFDB2397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_HandleRpcError_mFA0F94EBE4FC85452DF022196B286A93349B34F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_mE3646DA18049ACFBAD1441BC7A2E9667B01031D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_m84D7660E07E99E51DFB383139577EBD16897AF75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBF8F562197DC962069E0336FDD407C651BA92C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_mB5594CCADF4AD09C84131542615A68A0E1F93CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_4_Invoke_m169B602674C6B22D83A4235FC539B4113946646E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_m2E4851A88140327C51FB94D8A84EC44CB0AF3BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RpcParametersJsonConverter_ReadJson_m3294682834EB680842FD0C21671A09396185BB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_mC4F11109AB6BABCE402F3EE14EB0DFA66EF495B4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
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
struct U3CModuleU3E_t64F1CFFF2CD2BB258754DA9F96D7BA5DF77F001B 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_tA3D8878C081314F33202EE6062210303CFA700B6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3D8878C081314F33202EE6062210303CFA700B6, ____items_1)); }
	inline JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93* get__items_1() const { return ____items_1; }
	inline JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3D8878C081314F33202EE6062210303CFA700B6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3D8878C081314F33202EE6062210303CFA700B6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3D8878C081314F33202EE6062210303CFA700B6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3D8878C081314F33202EE6062210303CFA700B6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3D8878C081314F33202EE6062210303CFA700B6_StaticFields, ____emptyArray_5)); }
	inline JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonPropertyU5BU5D_t1455D08A47C8A5D6D195E95F5661DAF71FE5BF93* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Nethereum.JsonRpc.Client.Configuration
struct Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44  : public RuntimeObject
{
public:

public:
};

struct Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_StaticFields
{
public:
	// System.Object Nethereum.JsonRpc.Client.Configuration::<DefaultRequestId>k__BackingField
	RuntimeObject * ___U3CDefaultRequestIdU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDefaultRequestIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_StaticFields, ___U3CDefaultRequestIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CDefaultRequestIdU3Ek__BackingField_0() const { return ___U3CDefaultRequestIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CDefaultRequestIdU3Ek__BackingField_0() { return &___U3CDefaultRequestIdU3Ek__BackingField_0; }
	inline void set_U3CDefaultRequestIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CDefaultRequestIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRequestIdU3Ek__BackingField_0), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.DefaultJsonSerializerSettingsFactory
struct DefaultJsonSerializerSettingsFactory_t634D3D15EF9CA6EE11C5920E73F3313DE07838FC  : public RuntimeObject
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


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_0)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_0() const { return ____parent_0; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_1() const { return ____previous_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_2() const { return ____next_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// Newtonsoft.Json.JsonConverter
struct JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926  : public RuntimeObject
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


// Nethereum.JsonRpc.Client.NullParamsValueProvider
struct NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Nethereum.JsonRpc.Client.NullParamsValueProvider::_memberInfo
	PropertyInfo_t * ____memberInfo_0;

public:
	inline static int32_t get_offset_of__memberInfo_0() { return static_cast<int32_t>(offsetof(NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572, ____memberInfo_0)); }
	inline PropertyInfo_t * get__memberInfo_0() const { return ____memberInfo_0; }
	inline PropertyInfo_t ** get_address_of__memberInfo_0() { return &____memberInfo_0; }
	inline void set__memberInfo_0(PropertyInfo_t * value)
	{
		____memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memberInfo_0), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05  : public RuntimeObject
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcError
struct RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07  : public RuntimeObject
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.RpcError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcError::<Data>k__BackingField
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___U3CDataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07, ___U3CCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07, ___U3CDataU3Ek__BackingField_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_U3CDataU3Ek__BackingField_2() const { return ___U3CDataU3Ek__BackingField_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_U3CDataU3Ek__BackingField_2() { return &___U3CDataU3Ek__BackingField_2; }
	inline void set_U3CDataU3Ek__BackingField_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___U3CDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D  : public RuntimeObject
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::<Data>k__BackingField
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___U3CDataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D, ___U3CCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D, ___U3CDataU3Ek__BackingField_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_U3CDataU3Ek__BackingField_2() const { return ___U3CDataU3Ek__BackingField_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_U3CDataU3Ek__BackingField_2() { return &___U3CDataU3Ek__BackingField_2; }
	inline void set_U3CDataU3Ek__BackingField_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___U3CDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcLogger
struct RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C  : public RuntimeObject
{
public:
	// Common.Logging.ILog Nethereum.JsonRpc.Client.RpcLogger::<Log>k__BackingField
	RuntimeObject* ___U3CLogU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcLogger::<RequestJsonMessage>k__BackingField
	String_t* ___U3CRequestJsonMessageU3Ek__BackingField_1;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::<ResponseMessage>k__BackingField
	RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___U3CResponseMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CLogU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C, ___U3CLogU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CLogU3Ek__BackingField_0() const { return ___U3CLogU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CLogU3Ek__BackingField_0() { return &___U3CLogU3Ek__BackingField_0; }
	inline void set_U3CLogU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CLogU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestJsonMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C, ___U3CRequestJsonMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CRequestJsonMessageU3Ek__BackingField_1() const { return ___U3CRequestJsonMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CRequestJsonMessageU3Ek__BackingField_1() { return &___U3CRequestJsonMessageU3Ek__BackingField_1; }
	inline void set_U3CRequestJsonMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CRequestJsonMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestJsonMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C, ___U3CResponseMessageU3Ek__BackingField_2)); }
	inline RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * get_U3CResponseMessageU3Ek__BackingField_2() const { return ___U3CResponseMessageU3Ek__BackingField_2; }
	inline RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 ** get_address_of_U3CResponseMessageU3Ek__BackingField_2() { return &___U3CResponseMessageU3Ek__BackingField_2; }
	inline void set_U3CResponseMessageU3Ek__BackingField_2(RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * value)
	{
		___U3CResponseMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseMessageU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7  : public RuntimeObject
{
public:
	// System.Object Nethereum.JsonRpc.Client.RpcRequest::<Id>k__BackingField
	RuntimeObject * ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcRequest::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_1;
	// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::<RawParameters>k__BackingField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___U3CRawParametersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7, ___U3CIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7, ___U3CMethodU3Ek__BackingField_1)); }
	inline String_t* get_U3CMethodU3Ek__BackingField_1() const { return ___U3CMethodU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMethodU3Ek__BackingField_1() { return &___U3CMethodU3Ek__BackingField_1; }
	inline void set_U3CMethodU3Ek__BackingField_1(String_t* value)
	{
		___U3CMethodU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRawParametersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7, ___U3CRawParametersU3Ek__BackingField_2)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_U3CRawParametersU3Ek__BackingField_2() const { return ___U3CRawParametersU3Ek__BackingField_2; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_U3CRawParametersU3Ek__BackingField_2() { return &___U3CRawParametersU3Ek__BackingField_2; }
	inline void set_U3CRawParametersU3Ek__BackingField_2(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___U3CRawParametersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawParametersU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90  : public RuntimeObject
{
public:
	// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::<MethodName>k__BackingField
	String_t* ___U3CMethodNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMethodNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90, ___U3CMethodNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CMethodNameU3Ek__BackingField_0() const { return ___U3CMethodNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMethodNameU3Ek__BackingField_0() { return &___U3CMethodNameU3Ek__BackingField_0; }
	inline void set_U3CMethodNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CMethodNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodNameU3Ek__BackingField_0), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773  : public RuntimeObject
{
public:
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Id>k__BackingField
	RuntimeObject * ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_2;
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<RawParameters>k__BackingField
	RuntimeObject * ___U3CRawParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773, ___U3CIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773, ___U3CJsonRpcVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CJsonRpcVersionU3Ek__BackingField_1() const { return ___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return &___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline void set_U3CJsonRpcVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CJsonRpcVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773, ___U3CMethodU3Ek__BackingField_2)); }
	inline String_t* get_U3CMethodU3Ek__BackingField_2() const { return ___U3CMethodU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMethodU3Ek__BackingField_2() { return &___U3CMethodU3Ek__BackingField_2; }
	inline void set_U3CMethodU3Ek__BackingField_2(String_t* value)
	{
		___U3CMethodU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRawParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773, ___U3CRawParametersU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CRawParametersU3Ek__BackingField_3() const { return ___U3CRawParametersU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CRawParametersU3Ek__BackingField_3() { return &___U3CRawParametersU3Ek__BackingField_3; }
	inline void set_U3CRawParametersU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CRawParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawParametersU3Ek__BackingField_3), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseExtensions
struct RpcResponseExtensions_t83BBB35FF77894E4BA1ECF7AF0187C9847A9DD09  : public RuntimeObject
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344  : public RuntimeObject
{
public:
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Id>k__BackingField
	RuntimeObject * ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Result>k__BackingField
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___U3CResultU3Ek__BackingField_2;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Error>k__BackingField
	RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * ___U3CErrorU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344, ___U3CIdU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344, ___U3CJsonRpcVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CJsonRpcVersionU3Ek__BackingField_1() const { return ___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CJsonRpcVersionU3Ek__BackingField_1() { return &___U3CJsonRpcVersionU3Ek__BackingField_1; }
	inline void set_U3CJsonRpcVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CJsonRpcVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJsonRpcVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344, ___U3CResultU3Ek__BackingField_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344, ___U3CErrorU3Ek__BackingField_3)); }
	inline RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * get_U3CErrorU3Ek__BackingField_3() const { return ___U3CErrorU3Ek__BackingField_3; }
	inline RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D ** get_address_of_U3CErrorU3Ek__BackingField_3() { return &___U3CErrorU3Ek__BackingField_3; }
	inline void set_U3CErrorU3Ek__BackingField_3(RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * value)
	{
		___U3CErrorU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_3), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams
struct RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C  : public RuntimeObject
{
public:
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::<Subscription>k__BackingField
	String_t* ___U3CSubscriptionU3Ek__BackingField_0;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::<Result>k__BackingField
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___U3CResultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CSubscriptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C, ___U3CSubscriptionU3Ek__BackingField_0)); }
	inline String_t* get_U3CSubscriptionU3Ek__BackingField_0() const { return ___U3CSubscriptionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSubscriptionU3Ek__BackingField_0() { return &___U3CSubscriptionU3Ek__BackingField_0; }
	inline void set_U3CSubscriptionU3Ek__BackingField_0(String_t* value)
	{
		___U3CSubscriptionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubscriptionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C, ___U3CResultU3Ek__BackingField_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get_U3CResultU3Ek__BackingField_1() const { return ___U3CResultU3Ek__BackingField_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of_U3CResultU3Ek__BackingField_1() { return &___U3CResultU3Ek__BackingField_1; }
	inline void set_U3CResultU3Ek__BackingField_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		___U3CResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_1), (void*)value);
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


// Nethereum.JsonRpc.Client.UserAuthentication
struct UserAuthentication_t97D7959D1E0C953724D9A03D5FEB7200D3C09867  : public RuntimeObject
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

// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo
struct BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA  : public RuntimeObject
{
public:
	// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::<Password>k__BackingField
	String_t* ___U3CPasswordU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA, ___U3CUserNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_0() const { return ___U3CUserNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_0() { return &___U3CUserNameU3Ek__BackingField_0; }
	inline void set_U3CUserNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPasswordU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA, ___U3CPasswordU3Ek__BackingField_1)); }
	inline String_t* get_U3CPasswordU3Ek__BackingField_1() const { return ___U3CPasswordU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPasswordU3Ek__BackingField_1() { return &___U3CPasswordU3Ek__BackingField_1; }
	inline void set_U3CPasswordU3Ek__BackingField_1(String_t* value)
	{
		___U3CPasswordU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPasswordU3Ek__BackingField_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41, ___m_task_0)); }
	inline Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * ____addingNew_15;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_16;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_17;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_18;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__addingNew_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____addingNew_15)); }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * get__addingNew_15() const { return ____addingNew_15; }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 ** get_address_of__addingNew_15() { return &____addingNew_15; }
	inline void set__addingNew_15(AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * value)
	{
		____addingNew_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingNew_15), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_16)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_16() const { return ____collectionChanged_16; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_16() { return &____collectionChanged_16; }
	inline void set__collectionChanged_16(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_16), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_17)); }
	inline RuntimeObject * get__syncRoot_17() const { return ____syncRoot_17; }
	inline RuntimeObject ** get_address_of__syncRoot_17() { return &____syncRoot_17; }
	inline void set__syncRoot_17(RuntimeObject * value)
	{
		____syncRoot_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_17), (void*)value);
	}

	inline static int32_t get_offset_of__busy_18() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_18)); }
	inline bool get__busy_18() const { return ____busy_18; }
	inline bool* get_address_of__busy_18() { return &____busy_18; }
	inline void set__busy_18(bool value)
	{
		____busy_18 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter
struct RpcParametersJsonConverter_t3FD557A7940D31BE8EC3DE9DB144B039DEA9AD0D  : public JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage
struct RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15  : public RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344
{
public:
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_4;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::<Params>k__BackingField
	RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * ___U3CParamsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15, ___U3CMethodU3Ek__BackingField_4)); }
	inline String_t* get_U3CMethodU3Ek__BackingField_4() const { return ___U3CMethodU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CMethodU3Ek__BackingField_4() { return &___U3CMethodU3Ek__BackingField_4; }
	inline void set_U3CMethodU3Ek__BackingField_4(String_t* value)
	{
		___U3CMethodU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParamsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15, ___U3CParamsU3Ek__BackingField_5)); }
	inline RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * get_U3CParamsU3Ek__BackingField_5() const { return ___U3CParamsU3Ek__BackingField_5; }
	inline RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C ** get_address_of_U3CParamsU3Ek__BackingField_5() { return &___U3CParamsU3Ek__BackingField_5; }
	inline void set_U3CParamsU3Ek__BackingField_5(RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * value)
	{
		___U3CParamsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParamsU3Ek__BackingField_5), (void*)value);
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


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
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


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
};

// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_t936AB529ED1CF5420199A4048C49780F1C148A0A 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_t936AB529ED1CF5420199A4048C49780F1C148A0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t171B66EC67B4D43985C6B45D2A5894C661316735 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_t171B66EC67B4D43985C6B45D2A5894C661316735, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t27AD1889475040BC780E7FA7F13A37FBC638CA2F 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t27AD1889475040BC780E7FA7F13A37FBC638CA2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t93AD981B1E14E6EDFE0A3FEB1FA9D84BEE52CAD3 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t93AD981B1E14E6EDFE0A3FEB1FA9D84BEE52CAD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t8C0F4C0B53CD53E979CCC30500D5E226619A2C1F 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t8C0F4C0B53CD53E979CCC30500D5E226619A2C1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t4BF076992036A2F32CEA395615368F6CB674CEAB 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t4BF076992036A2F32CEA395615368F6CB674CEAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t6F19B08179C74C754E906BF62B59158DDB367367 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t6F19B08179C74C754E906BF62B59158DDB367367, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_tC48D8CA3A6D725EDA6C7C1829BD2DFF87EB109D4 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tC48D8CA3A6D725EDA6C7C1829BD2DFF87EB109D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JArray
struct JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A * ____values_19;

public:
	inline static int32_t get_offset_of__values_19() { return static_cast<int32_t>(offsetof(JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3, ____values_19)); }
	inline List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A * get__values_19() const { return ____values_19; }
	inline List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A ** get_address_of__values_19() { return &____values_19; }
	inline void set__values_19(List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A * value)
	{
		____values_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_19), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_19;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_20;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_21;

public:
	inline static int32_t get_offset_of__properties_19() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_19)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_19() const { return ____properties_19; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_19() { return &____properties_19; }
	inline void set__properties_19(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_20)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_20() const { return ___PropertyChanged_20; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_20() { return &___PropertyChanged_20; }
	inline void set_PropertyChanged_20(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_20), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_21() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_21)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_21() const { return ___PropertyChanging_21; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_21() { return &___PropertyChanging_21; }
	inline void set_PropertyChanging_21(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_21), (void*)value);
	}
};


// Newtonsoft.Json.JsonContainerType
struct JsonContainerType_tB6A7E99375AA833E9BBE43F27115C53A084358C3 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContainerType_tB6A7E99375AA833E9BBE43F27115C53A084358C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonToken
struct JsonToken_t41141826DB84310B9794040FAE8DD8338CF27023 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t41141826DB84310B9794040FAE8DD8338CF27023, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MemberSerialization
struct MemberSerialization_tBFDA7172D731B83F601E2DEAEA60B2B9330FCFB9 
{
public:
	// System.Int32 Newtonsoft.Json.MemberSerialization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberSerialization_tBFDA7172D731B83F601E2DEAEA60B2B9330FCFB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_t73F7BE7C60C802285FC2AC49314C26BC26BF770E 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_t73F7BE7C60C802285FC2AC49314C26BC26BF770E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_t5400D6B74412E3171D7A1BB6D6493907BA9B234A 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_t5400D6B74412E3171D7A1BB6D6493907BA9B234A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t6E78D075517457213329ADA45589150FAF5DDA82 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t6E78D075517457213329ADA45589150FAF5DDA82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_t9A8DEC546FF320F7CD2A9B2D6A6E4C46B70720A3 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t9A8DEC546FF320F7CD2A9B2D6A6E4C46B70720A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_t5DFA7D8E4705E2F08D1A56DDFFC28644A2EBB4D0 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t5DFA7D8E4705E2F08D1A56DDFFC28644A2EBB4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t86A953E12C98CC222AEE20C44996424CBE266D89 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t86A953E12C98CC222AEE20C44996424CBE266D89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Required
struct Required_tF6FF5ABC50DA127B2E300315C53E18C26E5B13B0 
{
public:
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_tF6FF5ABC50DA127B2E300315C53E18C26E5B13B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t2AC40F5E70DC7577F288BB2C84B13F2C11F76F58 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t2AC40F5E70DC7577F288BB2C84B13F2C11F76F58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Nethereum.JsonRpc.Client.Streaming.SubscriptionState
struct SubscriptionState_t6EE386DD746AF8EA52EE845DD1F7954E0F3A4FAA 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.Streaming.SubscriptionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SubscriptionState_t6EE386DD746AF8EA52EE845DD1F7954E0F3A4FAA, ___value___2)); }
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


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Newtonsoft.Json.TypeNameAssemblyFormatHandling
struct TypeNameAssemblyFormatHandling_t68DA4F0AA3281A2CF348C1348AD52F298FEAE7CE 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameAssemblyFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameAssemblyFormatHandling_t68DA4F0AA3281A2CF348C1348AD52F298FEAE7CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t7D26906BA4ED9E93294CDA393052F3C7989C3405 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t7D26906BA4ED9E93294CDA393052F3C7989C3405, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t8458DADF42886D79E7681A6BEA9DFD12D5C83B46 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t8458DADF42886D79E7681A6BEA9DFD12D5C83B46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_tDAA1704166AD5983294D6A8AACCAE7553EF79252 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tDAA1704166AD5983294D6A8AACCAE7553EF79252, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_tF4A54D2E6763EFD61DA565D5C7833E1EC15C63E7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF4A54D2E6763EFD61DA565D5C7833E1EC15C63E7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF4A54D2E6763EFD61DA565D5C7833E1EC15C63E7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80, ___m_result_22)); }
	inline RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * get_m_result_22() const { return ___m_result_22; }
	inline RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBD25E0D00DF6327A2ADA6BAEB9748FC10FE1E74A * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t51F1F851C1DA8B0069CD6C972B3DC6B2C112514F * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tBD25E0D00DF6327A2ADA6BAEB9748FC10FE1E74A * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tBD25E0D00DF6327A2ADA6BAEB9748FC10FE1E74A ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tBD25E0D00DF6327A2ADA6BAEB9748FC10FE1E74A * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t51F1F851C1DA8B0069CD6C972B3DC6B2C112514F * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t51F1F851C1DA8B0069CD6C972B3DC6B2C112514F ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t51F1F851C1DA8B0069CD6C972B3DC6B2C112514F * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::<OverridingRequestInterceptor>k__BackingField
	RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * ___U3COverridingRequestInterceptorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COverridingRequestInterceptorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E, ___U3COverridingRequestInterceptorU3Ek__BackingField_1)); }
	inline RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * get_U3COverridingRequestInterceptorU3Ek__BackingField_1() const { return ___U3COverridingRequestInterceptorU3Ek__BackingField_1; }
	inline RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 ** get_address_of_U3COverridingRequestInterceptorU3Ek__BackingField_1() { return &___U3COverridingRequestInterceptorU3Ek__BackingField_1; }
	inline void set_U3COverridingRequestInterceptorU3Ek__BackingField_1(RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * value)
	{
		___U3COverridingRequestInterceptorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COverridingRequestInterceptorU3Ek__BackingField_1), (void*)value);
	}
};

struct ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_StaticFields
{
public:
	// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::<ConnectionTimeout>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CConnectionTimeoutU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CConnectionTimeoutU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_StaticFields, ___U3CConnectionTimeoutU3Ek__BackingField_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CConnectionTimeoutU3Ek__BackingField_0() const { return ___U3CConnectionTimeoutU3Ek__BackingField_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CConnectionTimeoutU3Ek__BackingField_0() { return &___U3CConnectionTimeoutU3Ek__BackingField_0; }
	inline void set_U3CConnectionTimeoutU3Ek__BackingField_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CConnectionTimeoutU3Ek__BackingField_0 = value;
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15  : public RuntimeObject
{
public:
	// Newtonsoft.Json.DefaultJsonNameTable Newtonsoft.Json.Serialization.DefaultContractResolver::_nameTable
	DefaultJsonNameTable_t192C702F7F1E9A69FADA5CD7D7284CB06FEDA52C * ____nameTable_3;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.DefaultContractResolver::_contractCache
	ThreadSafeStore_2_t5306132C9A7C3E62FC4786A1768F28F7BCB0D7DB * ____contractCache_4;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreIsSpecifiedMembers>k__BackingField
	bool ___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreShouldSerializeMembers>k__BackingField
	bool ___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver::<NamingStrategy>k__BackingField
	NamingStrategy_t1E0001A7C5680731F4605F750F0CC2077B1A83CC * ___U3CNamingStrategyU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of__nameTable_3() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ____nameTable_3)); }
	inline DefaultJsonNameTable_t192C702F7F1E9A69FADA5CD7D7284CB06FEDA52C * get__nameTable_3() const { return ____nameTable_3; }
	inline DefaultJsonNameTable_t192C702F7F1E9A69FADA5CD7D7284CB06FEDA52C ** get_address_of__nameTable_3() { return &____nameTable_3; }
	inline void set__nameTable_3(DefaultJsonNameTable_t192C702F7F1E9A69FADA5CD7D7284CB06FEDA52C * value)
	{
		____nameTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nameTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__contractCache_4() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ____contractCache_4)); }
	inline ThreadSafeStore_2_t5306132C9A7C3E62FC4786A1768F28F7BCB0D7DB * get__contractCache_4() const { return ____contractCache_4; }
	inline ThreadSafeStore_2_t5306132C9A7C3E62FC4786A1768F28F7BCB0D7DB ** get_address_of__contractCache_4() { return &____contractCache_4; }
	inline void set__contractCache_4(ThreadSafeStore_2_t5306132C9A7C3E62FC4786A1768F28F7BCB0D7DB * value)
	{
		____contractCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contractCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5)); }
	inline int32_t get_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5() const { return ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5() { return &___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5; }
	inline void set_U3CDefaultMembersSearchFlagsU3Ek__BackingField_5(int32_t value)
	{
		___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6)); }
	inline bool get_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6() const { return ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6() { return &___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6; }
	inline void set_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6(bool value)
	{
		___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7)); }
	inline bool get_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7() const { return ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7() { return &___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7; }
	inline void set_U3CIgnoreSerializableInterfaceU3Ek__BackingField_7(bool value)
	{
		___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8)); }
	inline bool get_U3CIgnoreSerializableAttributeU3Ek__BackingField_8() const { return ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_8() { return &___U3CIgnoreSerializableAttributeU3Ek__BackingField_8; }
	inline void set_U3CIgnoreSerializableAttributeU3Ek__BackingField_8(bool value)
	{
		___U3CIgnoreSerializableAttributeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9)); }
	inline bool get_U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9() const { return ___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9() { return &___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9; }
	inline void set_U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9(bool value)
	{
		___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10)); }
	inline bool get_U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10() const { return ___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10() { return &___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10; }
	inline void set_U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10(bool value)
	{
		___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CNamingStrategyU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15, ___U3CNamingStrategyU3Ek__BackingField_11)); }
	inline NamingStrategy_t1E0001A7C5680731F4605F750F0CC2077B1A83CC * get_U3CNamingStrategyU3Ek__BackingField_11() const { return ___U3CNamingStrategyU3Ek__BackingField_11; }
	inline NamingStrategy_t1E0001A7C5680731F4605F750F0CC2077B1A83CC ** get_address_of_U3CNamingStrategyU3Ek__BackingField_11() { return &___U3CNamingStrategyU3Ek__BackingField_11; }
	inline void set_U3CNamingStrategyU3Ek__BackingField_11(NamingStrategy_t1E0001A7C5680731F4605F750F0CC2077B1A83CC * value)
	{
		___U3CNamingStrategyU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNamingStrategyU3Ek__BackingField_11), (void*)value);
	}
};

struct DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	RuntimeObject* ____instance_0;
	// System.String[] Newtonsoft.Json.Serialization.DefaultContractResolver::BlacklistedTypeNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___BlacklistedTypeNames_1;
	// Newtonsoft.Json.JsonConverter[] Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_t14A6367F9191FF71C256AF550BCD721DB99FFC4C* ___BuiltInConverters_2;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15_StaticFields, ____instance_0)); }
	inline RuntimeObject* get__instance_0() const { return ____instance_0; }
	inline RuntimeObject** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(RuntimeObject* value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_BlacklistedTypeNames_1() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15_StaticFields, ___BlacklistedTypeNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_BlacklistedTypeNames_1() const { return ___BlacklistedTypeNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_BlacklistedTypeNames_1() { return &___BlacklistedTypeNames_1; }
	inline void set_BlacklistedTypeNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___BlacklistedTypeNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlacklistedTypeNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_BuiltInConverters_2() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15_StaticFields, ___BuiltInConverters_2)); }
	inline JsonConverterU5BU5D_t14A6367F9191FF71C256AF550BCD721DB99FFC4C* get_BuiltInConverters_2() const { return ___BuiltInConverters_2; }
	inline JsonConverterU5BU5D_t14A6367F9191FF71C256AF550BCD721DB99FFC4C** get_address_of_BuiltInConverters_2() { return &___BuiltInConverters_2; }
	inline void set_BuiltInConverters_2(JsonConverterU5BU5D_t14A6367F9191FF71C256AF550BCD721DB99FFC4C* value)
	{
		___BuiltInConverters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuiltInConverters_2), (void*)value);
	}
};


// Newtonsoft.Json.JsonPosition
struct JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
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

// Nethereum.JsonRpc.Client.RpcClientTimeoutException
struct RpcClientTimeoutException_t510B262FA7079FAA9DAE6367124BCD3511E3EA0D  : public Exception_t
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcClientUnknownException
struct RpcClientUnknownException_t71310CC29DB0CC70E5A7CB77BE4ADEF97D80B648  : public Exception_t
{
public:

public:
};


// Nethereum.JsonRpc.Client.RpcResponseException
struct RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2  : public Exception_t
{
public:
	// Nethereum.JsonRpc.Client.RpcError Nethereum.JsonRpc.Client.RpcResponseException::<RpcError>k__BackingField
	RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * ___U3CRpcErrorU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CRpcErrorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2, ___U3CRpcErrorU3Ek__BackingField_17)); }
	inline RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * get_U3CRpcErrorU3Ek__BackingField_17() const { return ___U3CRpcErrorU3Ek__BackingField_17; }
	inline RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 ** get_address_of_U3CRpcErrorU3Ek__BackingField_17() { return &___U3CRpcErrorU3Ek__BackingField_17; }
	inline void set_U3CRpcErrorU3Ek__BackingField_17(RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * value)
	{
		___U3CRpcErrorU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRpcErrorU3Ek__BackingField_17), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcResponseFormatException
struct RpcResponseFormatException_t4597A9AEE7D725274C9985F5A299BFF0E2477058  : public Exception_t
{
public:

public:
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::<>4__this
	NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F * ___U3CU3E4__this_0;
	// Newtonsoft.Json.MemberSerialization Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::memberSerialization
	int32_t ___memberSerialization_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19, ___U3CU3E4__this_0)); }
	inline NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_memberSerialization_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19, ___memberSerialization_1)); }
	inline int32_t get_memberSerialization_1() const { return ___memberSerialization_1; }
	inline int32_t* get_address_of_memberSerialization_1() { return &___memberSerialization_1; }
	inline void set_memberSerialization_1(int32_t value)
	{
		___memberSerialization_1 = value;
	}
};


// System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>
struct Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>
struct Func_4_t9ADBEB0F9700A038FC405B3366659D009C0C5949  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 
{
public:
	// T System.Nullable`1::value
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___value_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_value_0() const { return ___value_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_tF4A54D2E6763EFD61DA565D5C7833E1EC15C63E7  ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_tCE7553F62CB1EEE2300A18884423B047DC37B545 * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 * ___U3CConverterU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_17;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsReferenceU3Ek__BackingField_18;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  ___U3CNullValueHandlingU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  ___U3CDefaultValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  ___U3CReferenceLoopHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  ___U3CObjectCreationHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  ___U3CTypeNameHandlingU3Ek__BackingField_23;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldSerializeU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldDeserializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CGetIsSpecifiedU3Ek__BackingField_26;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___U3CSetIsSpecifiedU3Ek__BackingField_27;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 * ___U3CItemConverterU3Ek__BackingField_28;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CItemIsReferenceU3Ek__BackingField_29;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  ___U3CItemTypeNameHandlingU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ____required_0)); }
	inline Nullable_1_tF4A54D2E6763EFD61DA565D5C7833E1EC15C63E7  get__required_0() const { return ____required_0; }
	inline Nullable_1_tF4A54D2E6763EFD61DA565D5C7833E1EC15C63E7 * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_tF4A54D2E6763EFD61DA565D5C7833E1EC15C63E7  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_tCE7553F62CB1EEE2300A18884423B047DC37B545 * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_tCE7553F62CB1EEE2300A18884423B047DC37B545 ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_tCE7553F62CB1EEE2300A18884423B047DC37B545 * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CIgnoredU3Ek__BackingField_14)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_14() const { return ___U3CIgnoredU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_14() { return &___U3CIgnoredU3Ek__BackingField_14; }
	inline void set_U3CIgnoredU3Ek__BackingField_14(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CReadableU3Ek__BackingField_15)); }
	inline bool get_U3CReadableU3Ek__BackingField_15() const { return ___U3CReadableU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_15() { return &___U3CReadableU3Ek__BackingField_15; }
	inline void set_U3CReadableU3Ek__BackingField_15(bool value)
	{
		___U3CReadableU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CWritableU3Ek__BackingField_16)); }
	inline bool get_U3CWritableU3Ek__BackingField_16() const { return ___U3CWritableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_16() { return &___U3CWritableU3Ek__BackingField_16; }
	inline void set_U3CWritableU3Ek__BackingField_16(bool value)
	{
		___U3CWritableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CHasMemberAttributeU3Ek__BackingField_17)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_17() const { return ___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return &___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_17(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CIsReferenceU3Ek__BackingField_18)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsReferenceU3Ek__BackingField_18() const { return ___U3CIsReferenceU3Ek__BackingField_18; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsReferenceU3Ek__BackingField_18() { return &___U3CIsReferenceU3Ek__BackingField_18; }
	inline void set_U3CIsReferenceU3Ek__BackingField_18(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsReferenceU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CNullValueHandlingU3Ek__BackingField_19)); }
	inline Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  get_U3CNullValueHandlingU3Ek__BackingField_19() const { return ___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA * get_address_of_U3CNullValueHandlingU3Ek__BackingField_19() { return &___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_19(Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CDefaultValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  get_U3CDefaultValueHandlingU3Ek__BackingField_20() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return &___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_20(Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CReferenceLoopHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  get_U3CReferenceLoopHandlingU3Ek__BackingField_21() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89 * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_21(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CObjectCreationHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  get_U3CObjectCreationHandlingU3Ek__BackingField_22() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2 * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return &___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_22(Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CTypeNameHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  get_U3CTypeNameHandlingU3Ek__BackingField_23() const { return ___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return &___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_23(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CShouldSerializeU3Ek__BackingField_24)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldSerializeU3Ek__BackingField_24() const { return ___U3CShouldSerializeU3Ek__BackingField_24; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldSerializeU3Ek__BackingField_24() { return &___U3CShouldSerializeU3Ek__BackingField_24; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_24(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CShouldDeserializeU3Ek__BackingField_25)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldDeserializeU3Ek__BackingField_25() const { return ___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_25() { return &___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_25(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CGetIsSpecifiedU3Ek__BackingField_26)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CGetIsSpecifiedU3Ek__BackingField_26() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return &___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_26(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CSetIsSpecifiedU3Ek__BackingField_27)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_U3CSetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return &___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_27(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CItemConverterU3Ek__BackingField_28)); }
	inline JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 * get_U3CItemConverterU3Ek__BackingField_28() const { return ___U3CItemConverterU3Ek__BackingField_28; }
	inline JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 ** get_address_of_U3CItemConverterU3Ek__BackingField_28() { return &___U3CItemConverterU3Ek__BackingField_28; }
	inline void set_U3CItemConverterU3Ek__BackingField_28(JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 * value)
	{
		___U3CItemConverterU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CItemIsReferenceU3Ek__BackingField_29)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CItemIsReferenceU3Ek__BackingField_29() const { return ___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_29() { return &___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_29(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CItemTypeNameHandlingU3Ek__BackingField_30)); }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  get_U3CItemTypeNameHandlingU3Ek__BackingField_30() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_30(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_31(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_31 = value;
	}
};


// Newtonsoft.Json.JsonReader
struct JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____currentPosition_4)); }
	inline JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7 * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7  value)
	{
		____currentPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_4))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____culture_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_5), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____maxDepth_7)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ____stack_12)); }
	inline List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 * get__stack_12() const { return ____stack_12; }
	inline List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};


// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE  : public RuntimeObject
{
public:
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t82EFCE101134E781C41E1A2C4C5451CEB9586A6E * ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * ___Error_30;

public:
	inline static int32_t get_offset_of__typeNameHandling_0() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____typeNameHandling_0)); }
	inline int32_t get__typeNameHandling_0() const { return ____typeNameHandling_0; }
	inline int32_t* get_address_of__typeNameHandling_0() { return &____typeNameHandling_0; }
	inline void set__typeNameHandling_0(int32_t value)
	{
		____typeNameHandling_0 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormatHandling_1() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____typeNameAssemblyFormatHandling_1)); }
	inline int32_t get__typeNameAssemblyFormatHandling_1() const { return ____typeNameAssemblyFormatHandling_1; }
	inline int32_t* get_address_of__typeNameAssemblyFormatHandling_1() { return &____typeNameAssemblyFormatHandling_1; }
	inline void set__typeNameAssemblyFormatHandling_1(int32_t value)
	{
		____typeNameAssemblyFormatHandling_1 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_2() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____preserveReferencesHandling_2)); }
	inline int32_t get__preserveReferencesHandling_2() const { return ____preserveReferencesHandling_2; }
	inline int32_t* get_address_of__preserveReferencesHandling_2() { return &____preserveReferencesHandling_2; }
	inline void set__preserveReferencesHandling_2(int32_t value)
	{
		____preserveReferencesHandling_2 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____referenceLoopHandling_3)); }
	inline int32_t get__referenceLoopHandling_3() const { return ____referenceLoopHandling_3; }
	inline int32_t* get_address_of__referenceLoopHandling_3() { return &____referenceLoopHandling_3; }
	inline void set__referenceLoopHandling_3(int32_t value)
	{
		____referenceLoopHandling_3 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____missingMemberHandling_4)); }
	inline int32_t get__missingMemberHandling_4() const { return ____missingMemberHandling_4; }
	inline int32_t* get_address_of__missingMemberHandling_4() { return &____missingMemberHandling_4; }
	inline void set__missingMemberHandling_4(int32_t value)
	{
		____missingMemberHandling_4 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____objectCreationHandling_5)); }
	inline int32_t get__objectCreationHandling_5() const { return ____objectCreationHandling_5; }
	inline int32_t* get_address_of__objectCreationHandling_5() { return &____objectCreationHandling_5; }
	inline void set__objectCreationHandling_5(int32_t value)
	{
		____objectCreationHandling_5 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____nullValueHandling_6)); }
	inline int32_t get__nullValueHandling_6() const { return ____nullValueHandling_6; }
	inline int32_t* get_address_of__nullValueHandling_6() { return &____nullValueHandling_6; }
	inline void set__nullValueHandling_6(int32_t value)
	{
		____nullValueHandling_6 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____defaultValueHandling_7)); }
	inline int32_t get__defaultValueHandling_7() const { return ____defaultValueHandling_7; }
	inline int32_t* get_address_of__defaultValueHandling_7() { return &____defaultValueHandling_7; }
	inline void set__defaultValueHandling_7(int32_t value)
	{
		____defaultValueHandling_7 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____constructorHandling_8)); }
	inline int32_t get__constructorHandling_8() const { return ____constructorHandling_8; }
	inline int32_t* get_address_of__constructorHandling_8() { return &____constructorHandling_8; }
	inline void set__constructorHandling_8(int32_t value)
	{
		____constructorHandling_8 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_9() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____metadataPropertyHandling_9)); }
	inline int32_t get__metadataPropertyHandling_9() const { return ____metadataPropertyHandling_9; }
	inline int32_t* get_address_of__metadataPropertyHandling_9() { return &____metadataPropertyHandling_9; }
	inline void set__metadataPropertyHandling_9(int32_t value)
	{
		____metadataPropertyHandling_9 = value;
	}

	inline static int32_t get_offset_of__converters_10() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____converters_10)); }
	inline JsonConverterCollection_t82EFCE101134E781C41E1A2C4C5451CEB9586A6E * get__converters_10() const { return ____converters_10; }
	inline JsonConverterCollection_t82EFCE101134E781C41E1A2C4C5451CEB9586A6E ** get_address_of__converters_10() { return &____converters_10; }
	inline void set__converters_10(JsonConverterCollection_t82EFCE101134E781C41E1A2C4C5451CEB9586A6E * value)
	{
		____converters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converters_10), (void*)value);
	}

	inline static int32_t get_offset_of__contractResolver_11() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____contractResolver_11)); }
	inline RuntimeObject* get__contractResolver_11() const { return ____contractResolver_11; }
	inline RuntimeObject** get_address_of__contractResolver_11() { return &____contractResolver_11; }
	inline void set__contractResolver_11(RuntimeObject* value)
	{
		____contractResolver_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contractResolver_11), (void*)value);
	}

	inline static int32_t get_offset_of__traceWriter_12() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____traceWriter_12)); }
	inline RuntimeObject* get__traceWriter_12() const { return ____traceWriter_12; }
	inline RuntimeObject** get_address_of__traceWriter_12() { return &____traceWriter_12; }
	inline void set__traceWriter_12(RuntimeObject* value)
	{
		____traceWriter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____traceWriter_12), (void*)value);
	}

	inline static int32_t get_offset_of__equalityComparer_13() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____equalityComparer_13)); }
	inline RuntimeObject* get__equalityComparer_13() const { return ____equalityComparer_13; }
	inline RuntimeObject** get_address_of__equalityComparer_13() { return &____equalityComparer_13; }
	inline void set__equalityComparer_13(RuntimeObject* value)
	{
		____equalityComparer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_13), (void*)value);
	}

	inline static int32_t get_offset_of__serializationBinder_14() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____serializationBinder_14)); }
	inline RuntimeObject* get__serializationBinder_14() const { return ____serializationBinder_14; }
	inline RuntimeObject** get_address_of__serializationBinder_14() { return &____serializationBinder_14; }
	inline void set__serializationBinder_14(RuntimeObject* value)
	{
		____serializationBinder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationBinder_14), (void*)value);
	}

	inline static int32_t get_offset_of__context_15() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____context_15)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get__context_15() const { return ____context_15; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of__context_15() { return &____context_15; }
	inline void set__context_15(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		____context_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____context_15))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__referenceResolver_16() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____referenceResolver_16)); }
	inline RuntimeObject* get__referenceResolver_16() const { return ____referenceResolver_16; }
	inline RuntimeObject** get_address_of__referenceResolver_16() { return &____referenceResolver_16; }
	inline void set__referenceResolver_16(RuntimeObject* value)
	{
		____referenceResolver_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceResolver_16), (void*)value);
	}

	inline static int32_t get_offset_of__formatting_17() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____formatting_17)); }
	inline Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  get__formatting_17() const { return ____formatting_17; }
	inline Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41 * get_address_of__formatting_17() { return &____formatting_17; }
	inline void set__formatting_17(Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  value)
	{
		____formatting_17 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____dateFormatHandling_18)); }
	inline Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  get__dateFormatHandling_18() const { return ____dateFormatHandling_18; }
	inline Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653 * get_address_of__dateFormatHandling_18() { return &____dateFormatHandling_18; }
	inline void set__dateFormatHandling_18(Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  value)
	{
		____dateFormatHandling_18 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____dateTimeZoneHandling_19)); }
	inline Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  get__dateTimeZoneHandling_19() const { return ____dateTimeZoneHandling_19; }
	inline Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7 * get_address_of__dateTimeZoneHandling_19() { return &____dateTimeZoneHandling_19; }
	inline void set__dateTimeZoneHandling_19(Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  value)
	{
		____dateTimeZoneHandling_19 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____dateParseHandling_20)); }
	inline Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  get__dateParseHandling_20() const { return ____dateParseHandling_20; }
	inline Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187 * get_address_of__dateParseHandling_20() { return &____dateParseHandling_20; }
	inline void set__dateParseHandling_20(Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  value)
	{
		____dateParseHandling_20 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____floatFormatHandling_21)); }
	inline Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  get__floatFormatHandling_21() const { return ____floatFormatHandling_21; }
	inline Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87 * get_address_of__floatFormatHandling_21() { return &____floatFormatHandling_21; }
	inline void set__floatFormatHandling_21(Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  value)
	{
		____floatFormatHandling_21 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_22() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____floatParseHandling_22)); }
	inline Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  get__floatParseHandling_22() const { return ____floatParseHandling_22; }
	inline Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A * get_address_of__floatParseHandling_22() { return &____floatParseHandling_22; }
	inline void set__floatParseHandling_22(Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  value)
	{
		____floatParseHandling_22 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____stringEscapeHandling_23)); }
	inline Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  get__stringEscapeHandling_23() const { return ____stringEscapeHandling_23; }
	inline Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61 * get_address_of__stringEscapeHandling_23() { return &____stringEscapeHandling_23; }
	inline void set__stringEscapeHandling_23(Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  value)
	{
		____stringEscapeHandling_23 = value;
	}

	inline static int32_t get_offset_of__culture_24() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____culture_24)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_24() const { return ____culture_24; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_24() { return &____culture_24; }
	inline void set__culture_24(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_24), (void*)value);
	}

	inline static int32_t get_offset_of__maxDepth_25() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____maxDepth_25)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_25() const { return ____maxDepth_25; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_25() { return &____maxDepth_25; }
	inline void set__maxDepth_25(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_25 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_26() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____maxDepthSet_26)); }
	inline bool get__maxDepthSet_26() const { return ____maxDepthSet_26; }
	inline bool* get_address_of__maxDepthSet_26() { return &____maxDepthSet_26; }
	inline void set__maxDepthSet_26(bool value)
	{
		____maxDepthSet_26 = value;
	}

	inline static int32_t get_offset_of__checkAdditionalContent_27() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____checkAdditionalContent_27)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__checkAdditionalContent_27() const { return ____checkAdditionalContent_27; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__checkAdditionalContent_27() { return &____checkAdditionalContent_27; }
	inline void set__checkAdditionalContent_27(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____checkAdditionalContent_27 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_28() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____dateFormatString_28)); }
	inline String_t* get__dateFormatString_28() const { return ____dateFormatString_28; }
	inline String_t** get_address_of__dateFormatString_28() { return &____dateFormatString_28; }
	inline void set__dateFormatString_28(String_t* value)
	{
		____dateFormatString_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_28), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_29() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ____dateFormatStringSet_29)); }
	inline bool get__dateFormatStringSet_29() const { return ____dateFormatStringSet_29; }
	inline bool* get_address_of__dateFormatStringSet_29() { return &____dateFormatStringSet_29; }
	inline void set__dateFormatStringSet_29(bool value)
	{
		____dateFormatStringSet_29 = value;
	}

	inline static int32_t get_offset_of_Error_30() { return static_cast<int32_t>(offsetof(JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE, ___Error_30)); }
	inline EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * get_Error_30() const { return ___Error_30; }
	inline EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 ** get_address_of_Error_30() { return &___Error_30; }
	inline void set_Error_30(EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * value)
	{
		___Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_30), (void*)value);
	}
};


// Newtonsoft.Json.JsonWriter
struct JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_13;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____stack_2)); }
	inline List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 * get__stack_2() const { return ____stack_2; }
	inline List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_tE22419252804E0CA16664BAA4983C99C36FC3F76 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____currentPosition_3)); }
	inline JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7 * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t4418F70AD93FB33D0C3DF05227AC32CE1AF15FC7  value)
	{
		____currentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_3))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ___U3CAutoCompleteOnCloseU3Ek__BackingField_7)); }
	inline bool get_U3CAutoCompleteOnCloseU3Ek__BackingField_7() const { return ___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return &___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline void set_U3CAutoCompleteOnCloseU3Ek__BackingField_7(bool value)
	{
		___U3CAutoCompleteOnCloseU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____dateFormatHandling_8)); }
	inline int32_t get__dateFormatHandling_8() const { return ____dateFormatHandling_8; }
	inline int32_t* get_address_of__dateFormatHandling_8() { return &____dateFormatHandling_8; }
	inline void set__dateFormatHandling_8(int32_t value)
	{
		____dateFormatHandling_8 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____dateTimeZoneHandling_9)); }
	inline int32_t get__dateTimeZoneHandling_9() const { return ____dateTimeZoneHandling_9; }
	inline int32_t* get_address_of__dateTimeZoneHandling_9() { return &____dateTimeZoneHandling_9; }
	inline void set__dateTimeZoneHandling_9(int32_t value)
	{
		____dateTimeZoneHandling_9 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____stringEscapeHandling_10)); }
	inline int32_t get__stringEscapeHandling_10() const { return ____stringEscapeHandling_10; }
	inline int32_t* get_address_of__stringEscapeHandling_10() { return &____stringEscapeHandling_10; }
	inline void set__stringEscapeHandling_10(int32_t value)
	{
		____stringEscapeHandling_10 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_11() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____floatFormatHandling_11)); }
	inline int32_t get__floatFormatHandling_11() const { return ____floatFormatHandling_11; }
	inline int32_t* get_address_of__floatFormatHandling_11() { return &____floatFormatHandling_11; }
	inline void set__floatFormatHandling_11(int32_t value)
	{
		____floatFormatHandling_11 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_12() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____dateFormatString_12)); }
	inline String_t* get__dateFormatString_12() const { return ____dateFormatString_12; }
	inline String_t** get_address_of__dateFormatString_12() { return &____dateFormatString_12; }
	inline void set__dateFormatString_12(String_t* value)
	{
		____dateFormatString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_12), (void*)value);
	}

	inline static int32_t get_offset_of__culture_13() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9, ____culture_13)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_13() const { return ____culture_13; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_13() { return &____culture_13; }
	inline void set__culture_13(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_13), (void*)value);
	}
};

struct JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_t8C481A02DAB7FF6066AA33E84646CAD0D2BAA16F* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArrayTempate_1), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.NullParamsFirstElementResolver
struct NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F  : public DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15
{
public:

public:
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14
struct U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Nethereum.JsonRpc.Client.ClientBase Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>4__this
	ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * ___U3CU3E4__this_2;
	// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::request
	RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * ___request_3;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::route
	String_t* ___route_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::<>u__1
	ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD, ___U3CU3E4__this_2)); }
	inline ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_request_3() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD, ___request_3)); }
	inline RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * get_request_3() const { return ___request_3; }
	inline RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 ** get_address_of_request_3() { return &___request_3; }
	inline void set_request_3(RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * value)
	{
		___request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_3), (void*)value);
	}

	inline static int32_t get_offset_of_route_4() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD, ___route_4)); }
	inline String_t* get_route_4() const { return ___route_4; }
	inline String_t** get_address_of_route_4() { return &___route_4; }
	inline void set_route_4(String_t* value)
	{
		___route_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16
struct U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::method
	String_t* ___method_2;
	// System.Object[] Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::paramList
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___paramList_3;
	// Nethereum.JsonRpc.Client.ClientBase Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>4__this
	ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * ___U3CU3E4__this_4;
	// System.String Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::route
	String_t* ___route_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::<>u__1
	ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_method_2() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3, ___method_2)); }
	inline String_t* get_method_2() const { return ___method_2; }
	inline String_t** get_address_of_method_2() { return &___method_2; }
	inline void set_method_2(String_t* value)
	{
		___method_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_2), (void*)value);
	}

	inline static int32_t get_offset_of_paramList_3() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3, ___paramList_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_paramList_3() const { return ___paramList_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_paramList_3() { return &___paramList_3; }
	inline void set_paramList_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___paramList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramList_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3, ___U3CU3E4__this_4)); }
	inline ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_route_5() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3, ___route_5)); }
	inline String_t* get_route_5() const { return ___route_5; }
	inline String_t** get_address_of_route_5() { return &___route_5; }
	inline void set_route_5(String_t* value)
	{
		___route_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1
struct U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 
{
public:
	// System.Int32 Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task> Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::interceptedSendRequestAsync
	Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 * ___interceptedSendRequestAsync_2;
	// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::request
	RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * ___request_3;
	// System.String Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::route
	String_t* ___route_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_interceptedSendRequestAsync_2() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789, ___interceptedSendRequestAsync_2)); }
	inline Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 * get_interceptedSendRequestAsync_2() const { return ___interceptedSendRequestAsync_2; }
	inline Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 ** get_address_of_interceptedSendRequestAsync_2() { return &___interceptedSendRequestAsync_2; }
	inline void set_interceptedSendRequestAsync_2(Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 * value)
	{
		___interceptedSendRequestAsync_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interceptedSendRequestAsync_2), (void*)value);
	}

	inline static int32_t get_offset_of_request_3() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789, ___request_3)); }
	inline RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * get_request_3() const { return ___request_3; }
	inline RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 ** get_address_of_request_3() { return &___request_3; }
	inline void set_request_3(RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * value)
	{
		___request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_3), (void*)value);
	}

	inline static int32_t get_offset_of_route_4() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789, ___route_4)); }
	inline String_t* get_route_4() const { return ___route_4; }
	inline String_t** get_address_of_route_4() { return &___route_4; }
	inline void set_route_4(String_t* value)
	{
		___route_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18  ____typeNameAssemblyFormatHandling_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864  ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F  ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E  ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26  ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_28;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 * ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_30;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * ___U3CErrorU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__formatting_2() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____formatting_2)); }
	inline Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  get__formatting_2() const { return ____formatting_2; }
	inline Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41 * get_address_of__formatting_2() { return &____formatting_2; }
	inline void set__formatting_2(Nullable_1_t57ADE156DD71BB6096A62E555D06AF2B93DA9F41  value)
	{
		____formatting_2 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateFormatHandling_3)); }
	inline Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  get__dateFormatHandling_3() const { return ____dateFormatHandling_3; }
	inline Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653 * get_address_of__dateFormatHandling_3() { return &____dateFormatHandling_3; }
	inline void set__dateFormatHandling_3(Nullable_1_t864204CB67FFE04A57D5D66E2ECF7328C957D653  value)
	{
		____dateFormatHandling_3 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateTimeZoneHandling_4)); }
	inline Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  get__dateTimeZoneHandling_4() const { return ____dateTimeZoneHandling_4; }
	inline Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7 * get_address_of__dateTimeZoneHandling_4() { return &____dateTimeZoneHandling_4; }
	inline void set__dateTimeZoneHandling_4(Nullable_1_t381F288596D6CE1E2849E7373C62EF45321C97D7  value)
	{
		____dateTimeZoneHandling_4 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateParseHandling_5)); }
	inline Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  get__dateParseHandling_5() const { return ____dateParseHandling_5; }
	inline Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187 * get_address_of__dateParseHandling_5() { return &____dateParseHandling_5; }
	inline void set__dateParseHandling_5(Nullable_1_t6A6C8DF80736F7757985A714A4727954B7479187  value)
	{
		____dateParseHandling_5 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____floatFormatHandling_6)); }
	inline Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  get__floatFormatHandling_6() const { return ____floatFormatHandling_6; }
	inline Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87 * get_address_of__floatFormatHandling_6() { return &____floatFormatHandling_6; }
	inline void set__floatFormatHandling_6(Nullable_1_t367BAE3EDA39C8DA5161BFBEE3406DFC25555F87  value)
	{
		____floatFormatHandling_6 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____floatParseHandling_7)); }
	inline Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  get__floatParseHandling_7() const { return ____floatParseHandling_7; }
	inline Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A * get_address_of__floatParseHandling_7() { return &____floatParseHandling_7; }
	inline void set__floatParseHandling_7(Nullable_1_tD0392EDDA3211556DF9AC175EA3DDEDEE37D1E7A  value)
	{
		____floatParseHandling_7 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____stringEscapeHandling_8)); }
	inline Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  get__stringEscapeHandling_8() const { return ____stringEscapeHandling_8; }
	inline Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61 * get_address_of__stringEscapeHandling_8() { return &____stringEscapeHandling_8; }
	inline void set__stringEscapeHandling_8(Nullable_1_tE3F6C0F79B7BAE10A36DB9301B393B07A1EAFA61  value)
	{
		____stringEscapeHandling_8 = value;
	}

	inline static int32_t get_offset_of__culture_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____culture_9)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_9() const { return ____culture_9; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_9() { return &____culture_9; }
	inline void set__culture_9(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_9), (void*)value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____checkAdditionalContent_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__checkAdditionalContent_10() const { return ____checkAdditionalContent_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__checkAdditionalContent_10() { return &____checkAdditionalContent_10; }
	inline void set__checkAdditionalContent_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____checkAdditionalContent_10 = value;
	}

	inline static int32_t get_offset_of__maxDepth_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____maxDepth_11)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_11() const { return ____maxDepth_11; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_11() { return &____maxDepth_11; }
	inline void set__maxDepth_11(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_11 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____maxDepthSet_12)); }
	inline bool get__maxDepthSet_12() const { return ____maxDepthSet_12; }
	inline bool* get_address_of__maxDepthSet_12() { return &____maxDepthSet_12; }
	inline void set__maxDepthSet_12(bool value)
	{
		____maxDepthSet_12 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateFormatString_13)); }
	inline String_t* get__dateFormatString_13() const { return ____dateFormatString_13; }
	inline String_t** get_address_of__dateFormatString_13() { return &____dateFormatString_13; }
	inline void set__dateFormatString_13(String_t* value)
	{
		____dateFormatString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_13), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____dateFormatStringSet_14)); }
	inline bool get__dateFormatStringSet_14() const { return ____dateFormatStringSet_14; }
	inline bool* get_address_of__dateFormatStringSet_14() { return &____dateFormatStringSet_14; }
	inline void set__dateFormatStringSet_14(bool value)
	{
		____dateFormatStringSet_14 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormatHandling_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____typeNameAssemblyFormatHandling_15)); }
	inline Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18  get__typeNameAssemblyFormatHandling_15() const { return ____typeNameAssemblyFormatHandling_15; }
	inline Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18 * get_address_of__typeNameAssemblyFormatHandling_15() { return &____typeNameAssemblyFormatHandling_15; }
	inline void set__typeNameAssemblyFormatHandling_15(Nullable_1_tA4942D2E396FDC4B155D886548F420C2E718AA18  value)
	{
		____typeNameAssemblyFormatHandling_15 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____defaultValueHandling_16)); }
	inline Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  get__defaultValueHandling_16() const { return ____defaultValueHandling_16; }
	inline Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F * get_address_of__defaultValueHandling_16() { return &____defaultValueHandling_16; }
	inline void set__defaultValueHandling_16(Nullable_1_tF3FB4D4A8BEF8F50059DBE9C68FD78313513ED6F  value)
	{
		____defaultValueHandling_16 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____preserveReferencesHandling_17)); }
	inline Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864  get__preserveReferencesHandling_17() const { return ____preserveReferencesHandling_17; }
	inline Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864 * get_address_of__preserveReferencesHandling_17() { return &____preserveReferencesHandling_17; }
	inline void set__preserveReferencesHandling_17(Nullable_1_t9DBF574D78AD6054C4B6BE9BD3168E5B622AC864  value)
	{
		____preserveReferencesHandling_17 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____nullValueHandling_18)); }
	inline Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  get__nullValueHandling_18() const { return ____nullValueHandling_18; }
	inline Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA * get_address_of__nullValueHandling_18() { return &____nullValueHandling_18; }
	inline void set__nullValueHandling_18(Nullable_1_t3290292B4BADA5D4A183FF666136C62C9E4B36CA  value)
	{
		____nullValueHandling_18 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____objectCreationHandling_19)); }
	inline Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  get__objectCreationHandling_19() const { return ____objectCreationHandling_19; }
	inline Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2 * get_address_of__objectCreationHandling_19() { return &____objectCreationHandling_19; }
	inline void set__objectCreationHandling_19(Nullable_1_t50AC324268CFB9729259727D985A90820D5F64F2  value)
	{
		____objectCreationHandling_19 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____missingMemberHandling_20)); }
	inline Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F  get__missingMemberHandling_20() const { return ____missingMemberHandling_20; }
	inline Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F * get_address_of__missingMemberHandling_20() { return &____missingMemberHandling_20; }
	inline void set__missingMemberHandling_20(Nullable_1_t1F470DAE8876B92D1F795D939825D3C84DDA6B0F  value)
	{
		____missingMemberHandling_20 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____referenceLoopHandling_21)); }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  get__referenceLoopHandling_21() const { return ____referenceLoopHandling_21; }
	inline Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89 * get_address_of__referenceLoopHandling_21() { return &____referenceLoopHandling_21; }
	inline void set__referenceLoopHandling_21(Nullable_1_t3F96A3D4FEBC0E4866061C7E7E4D1730817C5C89  value)
	{
		____referenceLoopHandling_21 = value;
	}

	inline static int32_t get_offset_of__context_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____context_22)); }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  get__context_22() const { return ____context_22; }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 * get_address_of__context_22() { return &____context_22; }
	inline void set__context_22(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  value)
	{
		____context_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____context_22))->___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constructorHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____constructorHandling_23)); }
	inline Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E  get__constructorHandling_23() const { return ____constructorHandling_23; }
	inline Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E * get_address_of__constructorHandling_23() { return &____constructorHandling_23; }
	inline void set__constructorHandling_23(Nullable_1_tC0364F1F7E9FD91EA685F63448060A649C82E46E  value)
	{
		____constructorHandling_23 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____typeNameHandling_24)); }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  get__typeNameHandling_24() const { return ____typeNameHandling_24; }
	inline Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64 * get_address_of__typeNameHandling_24() { return &____typeNameHandling_24; }
	inline void set__typeNameHandling_24(Nullable_1_tE7FF89EEDCE61D545B930EC2293222CEE351ED64  value)
	{
		____typeNameHandling_24 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ____metadataPropertyHandling_25)); }
	inline Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26  get__metadataPropertyHandling_25() const { return ____metadataPropertyHandling_25; }
	inline Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26 * get_address_of__metadataPropertyHandling_25() { return &____metadataPropertyHandling_25; }
	inline void set__metadataPropertyHandling_25(Nullable_1_t640BDDFF9A54ABC8629DA5E7014E5EA5DA7F1E26  value)
	{
		____metadataPropertyHandling_25 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CConvertersU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_26() const { return ___U3CConvertersU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_26() { return &___U3CConvertersU3Ek__BackingField_26; }
	inline void set_U3CConvertersU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CContractResolverU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CContractResolverU3Ek__BackingField_27() const { return ___U3CContractResolverU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CContractResolverU3Ek__BackingField_27() { return &___U3CContractResolverU3Ek__BackingField_27; }
	inline void set_U3CContractResolverU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CContractResolverU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractResolverU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEqualityComparerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CEqualityComparerU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEqualityComparerU3Ek__BackingField_28() const { return ___U3CEqualityComparerU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEqualityComparerU3Ek__BackingField_28() { return &___U3CEqualityComparerU3Ek__BackingField_28; }
	inline void set_U3CEqualityComparerU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEqualityComparerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEqualityComparerU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CReferenceResolverProviderU3Ek__BackingField_29)); }
	inline Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 * get_U3CReferenceResolverProviderU3Ek__BackingField_29() const { return ___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 ** get_address_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return &___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline void set_U3CReferenceResolverProviderU3Ek__BackingField_29(Func_1_tD5CB748098C86E8B469E8BF6724C9AB138476149 * value)
	{
		___U3CReferenceResolverProviderU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceResolverProviderU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTraceWriterU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CTraceWriterU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CTraceWriterU3Ek__BackingField_30() const { return ___U3CTraceWriterU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CTraceWriterU3Ek__BackingField_30() { return &___U3CTraceWriterU3Ek__BackingField_30; }
	inline void set_U3CTraceWriterU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CTraceWriterU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTraceWriterU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationBinderU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CSerializationBinderU3Ek__BackingField_31)); }
	inline RuntimeObject* get_U3CSerializationBinderU3Ek__BackingField_31() const { return ___U3CSerializationBinderU3Ek__BackingField_31; }
	inline RuntimeObject** get_address_of_U3CSerializationBinderU3Ek__BackingField_31() { return &___U3CSerializationBinderU3Ek__BackingField_31; }
	inline void set_U3CSerializationBinderU3Ek__BackingField_31(RuntimeObject* value)
	{
		___U3CSerializationBinderU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerializationBinderU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D, ___U3CErrorU3Ek__BackingField_32)); }
	inline EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * get_U3CErrorU3Ek__BackingField_32() const { return ___U3CErrorU3Ek__BackingField_32; }
	inline EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 ** get_address_of_U3CErrorU3Ek__BackingField_32() { return &___U3CErrorU3Ek__BackingField_32; }
	inline void set_U3CErrorU3Ek__BackingField_32(EventHandler_1_tB914D3847BBA7599C13FB67C3C80E12781EE9232 * value)
	{
		___U3CErrorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_32), (void*)value);
	}
};

struct JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___DefaultCulture_1;

public:
	inline static int32_t get_offset_of_DefaultContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_StaticFields, ___DefaultContext_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_DefaultContext_0() const { return ___DefaultContext_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_DefaultContext_0() { return &___DefaultContext_0; }
	inline void set_DefaultContext_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___DefaultContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultContext_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DefaultCulture_1() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_StaticFields, ___DefaultCulture_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_DefaultCulture_1() const { return ___DefaultCulture_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_DefaultCulture_1() { return &___DefaultCulture_1; }
	inline void set_DefaultCulture_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___DefaultCulture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultCulture_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m92D38944F28FFE7CBFD08FC906761280C35BDF06_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m9B7B9C63B1A75EB9D4E435A22FF3BA22DFDB2397_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_m779A60A06105B971A15A3A547616D83C2CD96CBF_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * ___stateMachine0, const RuntimeMethod* method);
// !3 System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_4_Invoke_m282317979FEF2D13851062CA1496F9B6061F6A83_gshared (Func_4_t506CA082EE40D9DFBE82C3CAF44181A1323BC77A * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_TisRuntimeObject_m98FFBB28B8ABB689929C87AF73B903C1BE9A8696_gshared (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object>(Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_TisRuntimeObject_mA88B1F4C46084FC61474DD4A240AE2C53F032DE7_gshared (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE * ___jsonSerializer0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m8FE8735906EEAB9BC032B4078FC3897C67F27520_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m260E197372769662DF16177343CE72893F377B22_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * ___stateMachine1, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_mB97AAD621BCAD6A2DB25DAE966EC3A2EF2D3AB0A_gshared (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_mA277416DECC519D87133802176AE7D80979398C2_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * ___stateMachine1, const RuntimeMethod* method);

// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcResponseMessage_get_HasError_m5C39384CC0E7A2C8E3F944AD9731714E44C35CCC (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method);
// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method);
// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_m27D74994A00B23E269CF1563A625CE283A0248FE_inline (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m4343A78C3A4F8D3E30570012C25AB044014B6A6B_inline (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcError_get_Data_m1FF69AE6957834D6BA385AB8212330C9BF1A7C5B_inline (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_mEDA7EE56A2CAA2D863A501CA60BFCAB9448F9196 (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, int32_t ___code0, String_t* ___message1, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data2, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcResponseException::.ctor(Nethereum.JsonRpc.Client.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseException__ctor_m2D4C79C1D270A95B42F77F853CFFEFAC19374EA7 (RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2 * __this, RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * ___rpcError0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m92D38944F28FFE7CBFD08FC906761280C35BDF06 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m92D38944F28FFE7CBFD08FC906761280C35BDF06_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m9B7B9C63B1A75EB9D4E435A22FF3BA22DFDB2397 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m9B7B9C63B1A75EB9D4E435A22FF3BA22DFDB2397_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_m53ECCEB578642D4DEA4F22297AB5FEBF95AB6C5F (JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_NullValueHandling_mB54760CF3D0269F6BFB1FD1CA3D60640A881F47A (JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_MissingMemberHandling(Newtonsoft.Json.MissingMemberHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_MissingMemberHandling_mCB48FA1039972EE1C1658B9FF34065026DD5C88A (JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m9603CBCA2354F028E81B7976B5C5193707ED0768 (U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * __this, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBF8F562197DC962069E0336FDD407C651BA92C90 (Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Reflection.PropertyInfo,Newtonsoft.Json.Serialization.JsonProperty>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_mE3646DA18049ACFBAD1441BC7A2E9667B01031D6 (RuntimeObject* ___source0, Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Newtonsoft.Json.Serialization.JsonProperty>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tA3D8878C081314F33202EE6062210303CFA700B6 * Enumerable_ToList_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_m84D7660E07E99E51DFB383139577EBD16897AF75 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tA3D8878C081314F33202EE6062210303CFA700B6 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultContractResolver__ctor_m001BC08F2E16251AC3AC2AA574A6EE7C56DB3477 (DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15 * __this, const RuntimeMethod* method);
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE (PropertyInfo_t * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo_SetValue_m8397EBC06D7DC1EFB56EEA65E7DB4AA362CA4170 (PropertyInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_m779A60A06105B971A15A3A547616D83C2CD96CBF (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_m779A60A06105B971A15A3A547616D83C2CD96CBF_gshared)(__this, ___stateMachine0, method);
}
// !3 System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>::Invoke(!0,!1,!2)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_4_Invoke_m169B602674C6B22D83A4235FC539B4113946646E (Func_4_t9ADBEB0F9700A038FC405B3366659D009C0C5949 * __this, String_t* ___arg10, String_t* ___arg21, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___arg32, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_4_t9ADBEB0F9700A038FC405B3366659D009C0C5949 *, String_t*, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))Func_4_Invoke_m282317979FEF2D13851062CA1496F9B6061F6A83_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Code_mF4FB238BACAFFE9AAB4668673F206418F9E4D60A_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Message_m81225EB42FCA8028B4473E724DFB846502220D1A_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Data_m089F53731648722BA97D9726D1E798E2B6812910_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_Log(Common.Logging.ILog)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_Log_mF8268CB69E3374A8A1F2C28769E3297BB90E680A_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_RequestJsonMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_mEA9022E5B55DA592FFF4F6DBC1F868A286ED39E2_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogTraceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogTraceEnabled_m00553C72A7AAF2F47645CA838D6D25FA40629003 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method);
// Common.Logging.ILog Nethereum.JsonRpc.Client.RpcLogger::get_Log()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCRequestLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCRequestLogMessage_m0D03BB72CD0128CBF08199523314667FA43054A6 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcLogger::get_RequestJsonMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_m3A952B9C3088680FBBD35055315560DDC819831D_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::get_ResponseMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * RpcLogger_get_ResponseMessage_mC7A7F1EF144F51453ED379C0941F7D4BDEB92607_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcResponseMessage_get_Result_m1448BA94D44F60A0DC02A43973B6E2C096B2FABD_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_ResponseMessage(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_m62F21306D79B5F59B994340C468D43458E906229_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___value0, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCResponseLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCResponseLogMessage_m15D05E6486E94D3BF591E24739A744EA82106727 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method);
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::HasError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_HasError_m78EE8F36065AEE51D259CFCA70CAC7AB99CE868B (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___message0, const RuntimeMethod* method);
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogErrorEnabled_m898A3E89FBA1BEB19475575DC30C2E87BF3C0C1C (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializer_Serialize_m13EC1EC3DA944A8B7E001FF344BAD41D73FEA7AF (JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE * __this, JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9 * ___jsonWriter0, RuntimeObject * ___value1, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_Load_m63CA9FC6192E28BD632BC125842C8A3DEEA20EC6 (JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D * ___reader0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>()
inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81 (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * (*) (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m98FFBB28B8ABB689929C87AF73B903C1BE9A8696_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * JArray_Load_mAC3382B80ABE8EA55372E2A23EE5E34B4F54EC13 (JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D * ___reader0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object[]>(Newtonsoft.Json.JsonSerializer)
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* JToken_ToObject_TisObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_m2E4851A88140327C51FB94D8A84EC44CB0AF3BA7 (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE * ___jsonSerializer0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE *, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_mA88B1F4C46084FC61474DD4A240AE2C53F032DE7_gshared)(__this, ___jsonSerializer0, method);
}
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m8F9DA08B717BA883D2B2F8FD61442F789E4B059B (JsonConverter_tA2D0A3DC4DBEEF60DB71D63BEE89ECD2ADE10926 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Id(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Id_mB0CE2F71740D9C1D3AECA0C051980291A0C41CC0_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Method(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Method_m13C222285CE76416C7195ECD9B70C105F88EB45F_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_RawParameters(System.Object[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_m76C68B14FAA8E3E166146EF3F236AEE4DDF3CBFE_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___value0, const RuntimeMethod* method);
// System.Object Nethereum.JsonRpc.Client.Configuration::get_DefaultRequestId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Configuration_get_DefaultRequestId_mC23C3994E12A341872C00C79BB3842B0BF920E0A_inline (const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::get_MethodName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_m76F7A97E81A7CF643CF3E052DF80E6C003D8C708_inline (RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcRequest::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest__ctor_mA44D9BDDD8F221CEC3DAD7C40C0F18B61297AA9C (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameterList2, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Id(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_m64D585032E05DC2A8D7BF480CF0E9CE1441283FD_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_JsonRpcVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mADEB23EDB4ABCF786C072B95B9C9A86F99B7D875_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Method(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_m3205D30E30BC566D034953EE2AE18C655EB01FA6_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_RawParameters(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_m4583C6EFF03D3D9C22D0BC061E5DA9C49E4CC025_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_mA8FAD25C6868FBA49ED9EBB8FE10B5FDF9AC9F1C_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_JsonRpcVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_mBA08AFF0D08BB1AF34DF716FFC6B12B6F1451A23_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Id(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m0D35996CD0A3845F3866C641699DEE77A1819C3F_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m8D023E2A64056820F60B840EF79D844BD3AD646A (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RuntimeObject * ___id0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Error(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m5E32FB80190267373DF57573695FE698116263AC_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m783C1E4CEADFAD77FA7BCA586ADD1BD503635909_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mA42C171892E2517ACF2B349F8A336C9D7C557F7F (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Method(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_m43867DA4BB4449A1DE8694F2F9412125246E9230_inline (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Params(Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_m8A4EB2CFF7D3665D7966EC8FDA04CACAF95987A4_inline (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inArray0, const RuntimeMethod* method);
// System.String System.Uri::get_UserInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_UserInfo_m94767A0CEBE9994D43BFFD9D0E18ADA11EF96D25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo__ctor_m32F5A031EFC82DBCDA8AB3A084A263D2C43E4A14 (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_UserName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_UserName_m66C67C0B661D10A5F4616701313745EA2F8A186B_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_Password(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_Password_m55B13541B33837A420115F915FDCF0C8A5C30BFC_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, String_t* ___value0, const RuntimeMethod* method);
// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthenticationUserInfoFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m60B6B18BCD31425BA357B004517B5618B1C2160A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_UserName_m583C5B0B704F8FEC54448AB04537511EDB298BEF_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_Password()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_Password_m1A6A4338EC36480153E5EC0CE66BE97F3A65AEF6_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.UserAuthentication::SetBasicAuthenticationHeader(Nethereum.JsonRpc.Client.IClientRequestHeaderSupport,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAuthentication_SetBasicAuthenticationHeader_m5488D5CE0DE48DFE3443AD3237E11E7FAC0FFE33 (RuntimeObject* ___client0, String_t* ___userName1, String_t* ___password2, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthentication(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserAuthentication_GetBasicAuthentication_mA3779DF7EED57DE95D41B75CE77F403523F65891 (String_t* ___userName0, String_t* ___password1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Object Nethereum.JsonRpc.Client.RpcRequest::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * RpcRequest_get_Id_m0F1C1611A350F4AA663F665A078916B11D0085E0_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method);
// System.String Nethereum.JsonRpc.Client.RpcRequest::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_mEB7D095F1F4057296D708CE4C519B22CAC42F166_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method);
// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::get_RawParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* RpcRequest_get_RawParameters_m068CD497D2AF3D1E412456814AD4EB6528829DC4_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_mA6832A0FFA5CFEAE5F38AE08853DEC98A56A9793 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameterList2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82  Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD (Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82  (*) (Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetAwaiter()
inline ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_inline (ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  (*) (ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8 (ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m9C5DDA51E4E61E1B6F39481A3CEED59205D22C10 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * ___awaiter0, U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *, U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m8FE8735906EEAB9BC032B4078FC3897C67F27520_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetResult()
inline RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417 (ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * __this, const RuntimeMethod* method)
{
	return ((  RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * (*) (ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::HandleRpcError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_HandleRpcError_mFA0F94EBE4FC85452DF022196B286A93349B34F6 (ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___response0, String_t* ___reqMsg1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_MoveNext_mAD974866413ECA4891C78929FFB0A7D9419D8827 (U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_SetStateMachine_m0123CDFB960B3E138C301CF083CD10B63C504CA7 (U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>,Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m1DAA2E63E620E55519F7297539AAFC3B870C9011 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * ___awaiter0, U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *, U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m260E197372769662DF16177343CE72893F377B22_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_MoveNext_m239B32F3537F77C05C7DC61B0192CA42E59E1813 (U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_SetStateMachine_m6F8A7E9B8BC6A1070D19B6F23FF5B36BACDAF54A (U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider__ctor_m46641F777C1A754EF58F66B51C0FE5A0CA7F28F7 (NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572 * __this, PropertyInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ValueProvider(Newtonsoft.Json.Serialization.IValueProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_ValueProvider_m1B69B34809E411EDEF055EA2B6787B759978F31B_inline (JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// !2 System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>::Invoke(!0,!1)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_3_Invoke_mB5594CCADF4AD09C84131542615A68A0E1F93CE1 (Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 * __this, RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 *, RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 *, String_t*, const RuntimeMethod*))Func_3_Invoke_mB97AAD621BCAD6A2DB25DAE966EC3A2EF2D3AB0A_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_mA277416DECC519D87133802176AE7D80979398C2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_mA277416DECC519D87133802176AE7D80979398C2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m590694619AA985232829345E016859DD7A3EA298 (U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * __this, const RuntimeMethod* method);
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mB113A898E42281BEBB4970E3D3693A2892F30E23 (U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::get_ConnectionTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ClientBase_get_ConnectionTimeout_m688A7F94F7D1FFAA4B0AD945069F0D8C3B245E0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = ((ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var))->get_U3CConnectionTimeoutU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::set_ConnectionTimeout(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_set_ConnectionTimeout_mBA4FB998E6EC88DC693301DF752097DF893061E1 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var);
		((ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var))->set_U3CConnectionTimeoutU3Ek__BackingField_0(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::get_OverridingRequestInterceptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * ClientBase_get_OverridingRequestInterceptor_m2E09FDBADDFD1F923641CCFB5222D7B0F06C2E4A (ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * __this, const RuntimeMethod* method)
{
	{
		RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * L_0 = __this->get_U3COverridingRequestInterceptorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::set_OverridingRequestInterceptor(Nethereum.JsonRpc.Client.RequestInterceptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_set_OverridingRequestInterceptor_m1585B3C423E4A83B0F8DA2C0EF3C72ACDAD47790 (ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * __this, RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * ___value0, const RuntimeMethod* method)
{
	{
		RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * L_0 = ___value0;
		__this->set_U3COverridingRequestInterceptorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::HandleRpcError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_HandleRpcError_mFA0F94EBE4FC85452DF022196B286A93349B34F6 (ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___response0, String_t* ___reqMsg1, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0 = ___response0;
		bool L_1;
		L_1 = RpcResponseMessage_get_HasError_m5C39384CC0E7A2C8E3F944AD9731714E44C35CCC(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_2 = ___response0;
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_3;
		L_3 = RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = RpcError_get_Code_m27D74994A00B23E269CF1563A625CE283A0248FE_inline(L_3, /*hidden argument*/NULL);
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_5 = ___response0;
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_6;
		L_6 = RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = RpcError_get_Message_m4343A78C3A4F8D3E30570012C25AB044014B6A6B_inline(L_6, /*hidden argument*/NULL);
		String_t* L_8 = ___reqMsg1;
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155)), L_8, /*hidden argument*/NULL);
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_10 = ___response0;
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_11;
		L_11 = RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline(L_10, /*hidden argument*/NULL);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_12;
		L_12 = RpcError_get_Data_m1FF69AE6957834D6BA385AB8212330C9BF1A7C5B_inline(L_11, /*hidden argument*/NULL);
		RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * L_13 = (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07_il2cpp_TypeInfo_var)));
		RpcError__ctor_mEDA7EE56A2CAA2D863A501CA60BFCAB9448F9196(L_13, L_4, L_9, L_12, /*hidden argument*/NULL);
		RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2 * L_14 = (RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2_il2cpp_TypeInfo_var)));
		RpcResponseException__ctor_m2D4C79C1D270A95B42F77F853CFFEFAC19374EA7(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClientBase_HandleRpcError_mFA0F94EBE4FC85452DF022196B286A93349B34F6_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.ClientBase::SendRequestAsync(Nethereum.JsonRpc.Client.RpcRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ClientBase_SendRequestAsync_m062F363E94F2B233EC5DF6A2C9ACAFDC0D38B6F6 (ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * __this, RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * ___request0, String_t* ___route1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m92D38944F28FFE7CBFD08FC906761280C35BDF06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E4__this_2(__this);
		RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_1 = ___request0;
		(&V_0)->set_request_3(L_1);
		String_t* L_2 = ___route1;
		(&V_0)->set_route_4(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m92D38944F28FFE7CBFD08FC906761280C35BDF06((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, (U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m92D38944F28FFE7CBFD08FC906761280C35BDF06_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.ClientBase::SendRequestAsync(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ClientBase_SendRequestAsync_mB246C9023D0EE3F2826ECF3BB7277DD874EAD472 (ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * __this, String_t* ___method0, String_t* ___route1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___paramList2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m9B7B9C63B1A75EB9D4E435A22FF3BA22DFDB2397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E4__this_4(__this);
		String_t* L_1 = ___method0;
		(&V_0)->set_method_2(L_1);
		String_t* L_2 = ___route1;
		(&V_0)->set_route_5(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___paramList2;
		(&V_0)->set_paramList_3(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m9B7B9C63B1A75EB9D4E435A22FF3BA22DFDB2397((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, (U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m9B7B9C63B1A75EB9D4E435A22FF3BA22DFDB2397_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__ctor_m27B4C7DAD983ADC25C61A85D69152F57784ED6D9 (ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__cctor_m63F96F0CFE987DFC291C0BBA8D196F1D10F7014E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0;
		L_0 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0((20.0), /*hidden argument*/NULL);
		((ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_StaticFields*)il2cpp_codegen_static_fields_for(ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E_il2cpp_TypeInfo_var))->set_U3CConnectionTimeoutU3Ek__BackingField_0(L_0);
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
// System.Object Nethereum.JsonRpc.Client.Configuration::get_DefaultRequestId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Configuration_get_DefaultRequestId_mC23C3994E12A341872C00C79BB3842B0BF920E0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var))->get_U3CDefaultRequestIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::set_DefaultRequestId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_DefaultRequestId_mCAF185BD7E991365BF3CCEF8046D651C3954770E (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		((Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var))->set_U3CDefaultRequestIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mABC1A5591D1564C61C921ED687B271E14C032C2E (Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.Configuration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__cctor_m07CF51FEC679C5623E7DD7E597C52DC78155FB5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = 1;
		RuntimeObject * L_1 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_0);
		((Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var))->set_U3CDefaultRequestIdU3Ek__BackingField_0(L_1);
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
// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.DefaultJsonSerializerSettingsFactory::BuildDefaultJsonSerializerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * DefaultJsonSerializerSettingsFactory_BuildDefaultJsonSerializerSettings_m78F4CA26FD1AA9374B74D71964883B4A4FC9390C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * L_0 = (JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D *)il2cpp_codegen_object_new(JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D_il2cpp_TypeInfo_var);
		JsonSerializerSettings__ctor_m53ECCEB578642D4DEA4F22297AB5FEBF95AB6C5F(L_0, /*hidden argument*/NULL);
		JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * L_1 = L_0;
		JsonSerializerSettings_set_NullValueHandling_mB54760CF3D0269F6BFB1FD1CA3D60640A881F47A(L_1, 1, /*hidden argument*/NULL);
		JsonSerializerSettings_t71ADE8678FAB423FEE0F649245945E9040A8246D * L_2 = L_1;
		JsonSerializerSettings_set_MissingMemberHandling_mCB48FA1039972EE1C1658B9FF34065026DD5C88A(L_2, 0, /*hidden argument*/NULL);
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
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty> Nethereum.JsonRpc.Client.NullParamsFirstElementResolver::CreateProperties(System.Type,Newtonsoft.Json.MemberSerialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullParamsFirstElementResolver_CreateProperties_m725DB618D4E41D67B1DD10A37EF44D027B4E8BAE (NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F * __this, Type_t * ___type0, int32_t ___memberSerialization1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_mE3646DA18049ACFBAD1441BC7A2E9667B01031D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_m84D7660E07E99E51DFB383139577EBD16897AF75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBF8F562197DC962069E0336FDD407C651BA92C90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_mC4F11109AB6BABCE402F3EE14EB0DFA66EF495B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * L_0 = (U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m9603CBCA2354F028E81B7976B5C5193707ED0768(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * L_1 = V_0;
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * L_2 = V_0;
		int32_t L_3 = ___memberSerialization1;
		L_2->set_memberSerialization_1(L_3);
		Type_t * L_4 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_5;
		L_5 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6;
		L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(124 /* System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> System.Reflection.TypeInfo::get_DeclaredProperties() */, L_5);
		U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * L_7 = V_0;
		Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293 * L_8 = (Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293 *)il2cpp_codegen_object_new(Func_2_tBF5854D86B8AFA58F106F0848D856751AB25D293_il2cpp_TypeInfo_var);
		Func_2__ctor_mBF8F562197DC962069E0336FDD407C651BA92C90(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_mC4F11109AB6BABCE402F3EE14EB0DFA66EF495B4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBF8F562197DC962069E0336FDD407C651BA92C90_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_mE3646DA18049ACFBAD1441BC7A2E9667B01031D6(L_6, L_8, /*hidden argument*/Enumerable_Select_TisPropertyInfo_t_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_mE3646DA18049ACFBAD1441BC7A2E9667B01031D6_RuntimeMethod_var);
		List_1_tA3D8878C081314F33202EE6062210303CFA700B6 * L_10;
		L_10 = Enumerable_ToList_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_m84D7660E07E99E51DFB383139577EBD16897AF75(L_9, /*hidden argument*/Enumerable_ToList_TisJsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7_m84D7660E07E99E51DFB383139577EBD16897AF75_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsFirstElementResolver__ctor_m17580DE742725854898B37E901D351060D0606BF (NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultContractResolver_t059B53F86AE5FE45162CC1969A10F76B9A2F3F15_il2cpp_TypeInfo_var);
		DefaultContractResolver__ctor_m001BC08F2E16251AC3AC2AA574A6EE7C56DB3477(__this, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::.ctor(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider__ctor_m46641F777C1A754EF58F66B51C0FE5A0CA7F28F7 (NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572 * __this, PropertyInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		PropertyInfo_t * L_0 = ___memberInfo0;
		__this->set__memberInfo_0(L_0);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.NullParamsValueProvider::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NullParamsValueProvider_GetValue_mDF3ACE9A19DBB9C268D7C2389952521985EAC70B (NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1CCB509D9C2863877C3F9A21BA22023008BB1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	{
		PropertyInfo_t * L_0 = __this->get__memberInfo_0();
		RuntimeObject * L_1 = ___target0;
		RuntimeObject * L_2;
		L_2 = PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PropertyInfo_t * L_3 = __this->get__memberInfo_0();
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral2A1CCB509D9C2863877C3F9A21BA22023008BB1A, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject * L_6 = V_0;
		V_1 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_6, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = 0;
		RuntimeObject * L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		if (L_11)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
	}

IL_003f:
	{
		RuntimeObject * L_12 = V_0;
		return L_12;
	}
}
// System.Void Nethereum.JsonRpc.Client.NullParamsValueProvider::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullParamsValueProvider_SetValue_mB016FF55590184AF1C0A836BF3401BA316815B08 (NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572 * __this, RuntimeObject * ___target0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = __this->get__memberInfo_0();
		RuntimeObject * L_1 = ___target0;
		RuntimeObject * L_2 = ___value1;
		PropertyInfo_SetValue_m8397EBC06D7DC1EFB56EEA65E7DB4AA362CA4170(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.RequestInterceptor::InterceptSendRequestAsync(System.Func`3<Nethereum.JsonRpc.Client.RpcRequest,System.String,System.Threading.Tasks.Task>,Nethereum.JsonRpc.Client.RpcRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * RequestInterceptor_InterceptSendRequestAsync_m7C4A500E8DE33A3662B4B88F6DA8008FC6A90F22 (RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * __this, Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 * ___interceptedSendRequestAsync0, RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * ___request1, String_t* ___route2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_m779A60A06105B971A15A3A547616D83C2CD96CBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 * L_1 = ___interceptedSendRequestAsync0;
		(&V_0)->set_interceptedSendRequestAsync_2(L_1);
		RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_2 = ___request1;
		(&V_0)->set_request_3(L_2);
		String_t* L_3 = ___route2;
		(&V_0)->set_route_4(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_m779A60A06105B971A15A3A547616D83C2CD96CBF((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, (U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_m779A60A06105B971A15A3A547616D83C2CD96CBF_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task Nethereum.JsonRpc.Client.RequestInterceptor::InterceptSendRequestAsync(System.Func`4<System.String,System.String,System.Object[],System.Threading.Tasks.Task>,System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * RequestInterceptor_InterceptSendRequestAsync_m3B8572D493277C8366F4DF31A871B40FFB84FAC9 (RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * __this, Func_4_t9ADBEB0F9700A038FC405B3366659D009C0C5949 * ___interceptedSendRequestAsync0, String_t* ___method1, String_t* ___route2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___paramList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_Invoke_m169B602674C6B22D83A4235FC539B4113946646E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_4_t9ADBEB0F9700A038FC405B3366659D009C0C5949 * L_0 = ___interceptedSendRequestAsync0;
		String_t* L_1 = ___method1;
		String_t* L_2 = ___route2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___paramList3;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = Func_4_Invoke_m169B602674C6B22D83A4235FC539B4113946646E(L_0, L_1, L_2, L_3, /*hidden argument*/Func_4_Invoke_m169B602674C6B22D83A4235FC539B4113946646E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestInterceptor__ctor_mA3030BCB0D3990F77A5E4B32024AE038D00A1446 (RequestInterceptor_tD6CBD1227BD6714FAA4CEF3F8DC79ED5085D4C05 * __this, const RuntimeMethod* method)
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
// System.Void Nethereum.JsonRpc.Client.RpcClientTimeoutException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientTimeoutException__ctor_mFFEF8F94CF807F390851BC88B41DBAEA73CD622E (RpcClientTimeoutException_t510B262FA7079FAA9DAE6367124BCD3511E3EA0D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClientTimeoutException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientTimeoutException__ctor_mBAA447F110F33C669B2E57784CE685BD923ACEE6 (RpcClientTimeoutException_t510B262FA7079FAA9DAE6367124BCD3511E3EA0D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcClientUnknownException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientUnknownException__ctor_m301A6F8EAD363BCD3F3858D1BCDD972609FC516B (RpcClientUnknownException_t71310CC29DB0CC70E5A7CB77BE4ADEF97D80B648 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcClientUnknownException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClientUnknownException__ctor_m34049261F6AE95F0D5F16C37DF2E7E9E7378903A (RpcClientUnknownException_t71310CC29DB0CC70E5A7CB77BE4ADEF97D80B648 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcError::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_mEDA7EE56A2CAA2D863A501CA60BFCAB9448F9196 (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, int32_t ___code0, String_t* ___message1, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___data2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code0;
		RpcError_set_Code_mF4FB238BACAFFE9AAB4668673F206418F9E4D60A_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		RpcError_set_Message_m81225EB42FCA8028B4473E724DFB846502220D1A_inline(__this, L_1, /*hidden argument*/NULL);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_2 = ___data2;
		RpcError_set_Data_m089F53731648722BA97D9726D1E798E2B6812910_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Nethereum.JsonRpc.Client.RpcError::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_m0B3D58F946D33DFE817523AF1DFF0E4A424EA834 (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Code_mF4FB238BACAFFE9AAB4668673F206418F9E4D60A (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_mA8FAD25C6868FBA49ED9EBB8FE10B5FDF9AC9F1C (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Message_m81225EB42FCA8028B4473E724DFB846502220D1A (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcError::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcError_get_Data_mC50FDFB3F769285B5C53A560C64F34CCD1A71B95 (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Data_m089F53731648722BA97D9726D1E798E2B6812910 (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError__ctor_m0F3B03DC78470803AF285BC42E07940D62F8616B (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_m27D74994A00B23E269CF1563A625CE283A0248FE (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Code_mD458D78E8590272AC9F1263F1EADA44AD09E0A6B (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m4343A78C3A4F8D3E30570012C25AB044014B6A6B (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Message_m54396BBE72C7A2EAE8E74D7D6563CD786C1D5CEE (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcError::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcError_get_Data_m1FF69AE6957834D6BA385AB8212330C9BF1A7C5B (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcError::set_Data(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcError_set_Data_m32963B8DF6C71822B97B58ACE3E718ECCAF8F74A (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcLogger::.ctor(Common.Logging.ILog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger__ctor_m1E62D71CC16C00CFCE7AE6520818A26426C6AA5B (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RuntimeObject* ___log0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___log0;
		RpcLogger_set_Log_mF8268CB69E3374A8A1F2C28769E3297BB90E680A_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Common.Logging.ILog Nethereum.JsonRpc.Client.RpcLogger::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLogU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_Log(Common.Logging.ILog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_Log_mF8268CB69E3374A8A1F2C28769E3297BB90E680A (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CLogU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::get_RequestJsonMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_m3A952B9C3088680FBBD35055315560DDC819831D (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CRequestJsonMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_RequestJsonMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_mEA9022E5B55DA592FFF4F6DBC1F868A286ED39E2 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CRequestJsonMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage Nethereum.JsonRpc.Client.RpcLogger::get_ResponseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * RpcLogger_get_ResponseMessage_mC7A7F1EF144F51453ED379C0941F7D4BDEB92607 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0 = __this->get_U3CResponseMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::set_ResponseMessage(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_m62F21306D79B5F59B994340C468D43458E906229 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___value0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0 = ___value0;
		__this->set_U3CResponseMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogRequest_m8551F8569207F8F97685443B59D611B3EC4B3154 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, String_t* ___requestJsonMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___requestJsonMessage0;
		RpcLogger_set_RequestJsonMessage_mEA9022E5B55DA592FFF4F6DBC1F868A286ED39E2_inline(__this, L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = RpcLogger_IsLogTraceEnabled_m00553C72A7AAF2F47645CA838D6D25FA40629003(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = RpcLogger_GetRPCRequestLogMessage_m0D03BB72CD0128CBF08199523314667FA43054A6(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(0 /* System.Void Common.Logging.ILog::Trace(System.Object) */, ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0020:
	{
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCRequestLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCRequestLogMessage_m0D03BB72CD0128CBF08199523314667FA43054A6 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068F780F4A8A2BE8B460C4858E09ED5587C3D171);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = RpcLogger_get_RequestJsonMessage_m3A952B9C3088680FBBD35055315560DDC819831D_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral068F780F4A8A2BE8B460C4858E09ED5587C3D171, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcLogger::GetRPCResponseLogMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcLogger_GetRPCResponseLogMessage_m15D05E6486E94D3BF591E24739A744EA82106727 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD004EBBBC1070E7D0C496A257FCFE588E4B23913);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0;
		L_0 = RpcLogger_get_ResponseMessage_mC7A7F1EF144F51453ED379C0941F7D4BDEB92607_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_2;
		L_2 = RpcLogger_get_ResponseMessage_mC7A7F1EF144F51453ED379C0941F7D4BDEB92607_inline(__this, /*hidden argument*/NULL);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_3;
		L_3 = RpcResponseMessage_get_Result_m1448BA94D44F60A0DC02A43973B6E2C096B2FABD_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD004EBBBC1070E7D0C496A257FCFE588E4B23913, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogErrorEnabled_m898A3E89FBA1BEB19475575DC30C2E87BF3C0C1C (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Common.Logging.ILog::get_IsErrorEnabled() */, ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogResponse(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogResponse_m8E87093C4E7ADFBCAB59B049A3CC765BB5F83310 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___responseMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C5CD570816F5EF21DB031C8819A29AB3FE1F6D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0 = ___responseMessage0;
		RpcLogger_set_ResponseMessage_m62F21306D79B5F59B994340C468D43458E906229_inline(__this, L_0, /*hidden argument*/NULL);
		bool L_1;
		L_1 = RpcLogger_IsLogTraceEnabled_m00553C72A7AAF2F47645CA838D6D25FA40629003(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = RpcLogger_GetRPCResponseLogMessage_m15D05E6486E94D3BF591E24739A744EA82106727(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(0 /* System.Void Common.Logging.ILog::Trace(System.Object) */, ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0020:
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_4 = ___responseMessage0;
		bool L_5;
		L_5 = RpcLogger_HasError_m78EE8F36065AEE51D259CFCA70CAC7AB99CE868B(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		bool L_6;
		L_6 = RpcLogger_IsLogErrorEnabled_m898A3E89FBA1BEB19475575DC30C2E87BF3C0C1C(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		bool L_7;
		L_7 = RpcLogger_IsLogTraceEnabled_m00553C72A7AAF2F47645CA838D6D25FA40629003(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = RpcLogger_GetRPCResponseLogMessage_m15D05E6486E94D3BF591E24739A744EA82106727(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(0 /* System.Void Common.Logging.ILog::Trace(System.Object) */, ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_004a:
	{
		RuntimeObject* L_10;
		L_10 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_11 = ___responseMessage0;
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_12;
		L_12 = RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = RpcError_get_Message_m4343A78C3A4F8D3E30570012C25AB044014B6A6B_inline(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4C5CD570816F5EF21DB031C8819A29AB3FE1F6D1, L_13, /*hidden argument*/NULL);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void Common.Logging.ILog::Error(System.Object) */, ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var, L_10, L_14);
	}

IL_006a:
	{
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcLogger_LogException_m33BF679CF194528413C60AB8E47166E96BD1351D (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9125A6F7AF01C617D0C306146BFE095F99C613FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RpcLogger_IsLogErrorEnabled_m898A3E89FBA1BEB19475575DC30C2E87BF3C0C1C(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = RpcLogger_GetRPCRequestLogMessage_m0D03BB72CD0128CBF08199523314667FA43054A6(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = RpcLogger_GetRPCResponseLogMessage_m15D05E6486E94D3BF591E24739A744EA82106727(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral9125A6F7AF01C617D0C306146BFE095F99C613FA, L_2, L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = ___ex0;
		InterfaceActionInvoker2< RuntimeObject *, Exception_t * >::Invoke(3 /* System.Void Common.Logging.ILog::Error(System.Object,System.Exception) */, ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var, L_1, L_4, L_5);
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::HasError(Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_HasError_m78EE8F36065AEE51D259CFCA70CAC7AB99CE868B (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___message0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0 = ___message0;
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_1;
		L_1 = RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_2 = ___message0;
		bool L_3;
		L_3 = RpcResponseMessage_get_HasError_m5C39384CC0E7A2C8E3F944AD9731714E44C35CCC(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcLogger::IsLogTraceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcLogger_IsLogTraceEnabled_m00553C72A7AAF2F47645CA838D6D25FA40629003 (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline(__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Common.Logging.ILog::get_IsTraceEnabled() */, ILog_t1C9262AD87C108D6CDE59F62DA66FAAC3279C8E3_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcParametersJsonConverter_WriteJson_mBB3A3730D7BF58FF66BBF52F69656E696A51BCD3 (RpcParametersJsonConverter_t3FD557A7940D31BE8EC3DE9DB144B039DEA9AD0D * __this, JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE * ___serializer2, const RuntimeMethod* method)
{
	{
		JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE * L_0 = ___serializer2;
		JsonWriter_t9E2AD64EA9EE8952D1A3D0EEAE0C436714EE48F9 * L_1 = ___writer0;
		RuntimeObject * L_2 = ___value1;
		JsonSerializer_Serialize_m13EC1EC3DA944A8B7E001FF344BAD41D73FEA7AF(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcParametersJsonConverter_ReadJson_m3294682834EB680842FD0C21671A09396185BB56 (RpcParametersJsonConverter_t3FD557A7940D31BE8EC3DE9DB144B039DEA9AD0D * __this, JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_m2E4851A88140327C51FB94D8A84EC44CB0AF3BA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D * L_0 = ___reader0;
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0041;
	}

IL_0016:
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D * L_5 = ___reader0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_6;
		L_6 = JObject_Load_m63CA9FC6192E28BD632BC125842C8A3DEEA20EC6(L_5, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7;
		L_7 = JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81(L_6, /*hidden argument*/JToken_ToObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9ABC2A0F0A455DF2A669ACF85FFE0D691E754E81_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_004c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.Exception)
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50506C2EC1EE335E6927A35852C7F4E22A2A095D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcParametersJsonConverter_ReadJson_m3294682834EB680842FD0C21671A09396185BB56_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0031:
	{
		JsonReader_t377AB7D55EA976CEE9D1906FA0CDFEFEDD8D0B8D * L_9 = ___reader0;
		JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * L_10;
		L_10 = JArray_Load_mAC3382B80ABE8EA55372E2A23EE5E34B4F54EC13(L_9, /*hidden argument*/NULL);
		JsonSerializer_t420752EC0878E5AF44C8DFEE8D06E70DFA328FBE * L_11 = ___serializer3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12;
		L_12 = JToken_ToObject_TisObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_m2E4851A88140327C51FB94D8A84EC44CB0AF3BA7(L_10, L_11, /*hidden argument*/JToken_ToObject_TisObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_m2E4851A88140327C51FB94D8A84EC44CB0AF3BA7_RuntimeMethod_var);
		return (RuntimeObject *)L_12;
	}

IL_003f:
	{
		return NULL;
	}

IL_0041:
	{
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50506C2EC1EE335E6927A35852C7F4E22A2A095D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcParametersJsonConverter_ReadJson_m3294682834EB680842FD0C21671A09396185BB56_RuntimeMethod_var)));
	}

IL_004c:
	{
		RuntimeObject * L_14 = V_1;
		return L_14;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcParametersJsonConverter_CanConvert_mF1709AB5DE848B56BC46C3F7B3B8CFEC77A5C8BD (RpcParametersJsonConverter_t3FD557A7940D31BE8EC3DE9DB144B039DEA9AD0D * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcParametersJsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcParametersJsonConverter__ctor_m05F5E27A66E5324D7A383C479AE7BCED6D4D7A3A (RpcParametersJsonConverter_t3FD557A7940D31BE8EC3DE9DB144B039DEA9AD0D * __this, const RuntimeMethod* method)
{
	{
		JsonConverter__ctor_m8F9DA08B717BA883D2B2F8FD61442F789E4B059B(__this, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcRequest::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest__ctor_mA44D9BDDD8F221CEC3DAD7C40C0F18B61297AA9C (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameterList2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcRequest_set_Id_mB0CE2F71740D9C1D3AECA0C051980291A0C41CC0_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___method1;
		RpcRequest_set_Method_m13C222285CE76416C7195ECD9B70C105F88EB45F_inline(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___parameterList2;
		RpcRequest_set_RawParameters_m76C68B14FAA8E3E166146EF3F236AEE4DDF3CBFE_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcRequest::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcRequest_get_Id_m0F1C1611A350F4AA663F665A078916B11D0085E0 (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_Id_mB0CE2F71740D9C1D3AECA0C051980291A0C41CC0 (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_mEB7D095F1F4057296D708CE4C519B22CAC42F166 (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_Method_m13C222285CE76416C7195ECD9B70C105F88EB45F (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::get_RawParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* RpcRequest_get_RawParameters_m068CD497D2AF3D1E412456814AD4EB6528829DC4 (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get_U3CRawParametersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcRequest::set_RawParameters(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_m76C68B14FAA8E3E166146EF3F236AEE4DDF3CBFE (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___value0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_2(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcRequestBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestBuilder__ctor_m7FE03CEB866F7260BBCEE8B4D754D1DF26818642 (RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * __this, String_t* ___methodName0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___methodName0;
		__this->set_U3CMethodNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcRequestBuilder::get_MethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_m76F7A97E81A7CF643CF3E052DF80E6C003D8C708 (RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodNameU3Ek__BackingField_0();
		return L_0;
	}
}
// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RpcRequestBuilder::BuildRequest(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * RpcRequestBuilder_BuildRequest_m61A8F4581A4CC5A9475B5652F4E59D42465D4AA5 (RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * __this, RuntimeObject * ___id0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___paramList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___id0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = Configuration_get_DefaultRequestId_mC23C3994E12A341872C00C79BB3842B0BF920E0A_inline(/*hidden argument*/NULL);
		___id0 = L_1;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___id0;
		String_t* L_3;
		L_3 = RpcRequestBuilder_get_MethodName_m76F7A97E81A7CF643CF3E052DF80E6C003D8C708_inline(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___paramList1;
		RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_5 = (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 *)il2cpp_codegen_object_new(RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7_il2cpp_TypeInfo_var);
		RpcRequest__ctor_mA44D9BDDD8F221CEC3DAD7C40C0F18B61297AA9C(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Nethereum.JsonRpc.Client.RpcRequest Nethereum.JsonRpc.Client.RpcRequestBuilder::BuildRequest(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * RpcRequestBuilder_BuildRequest_mA720E81AAFD983681DE093CEE617549803FE97DD (RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * __this, RuntimeObject * ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___id0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = Configuration_get_DefaultRequestId_mC23C3994E12A341872C00C79BB3842B0BF920E0A_inline(/*hidden argument*/NULL);
		___id0 = L_1;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___id0;
		String_t* L_3;
		L_3 = RpcRequestBuilder_get_MethodName_m76F7A97E81A7CF643CF3E052DF80E6C003D8C708_inline(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_5 = (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 *)il2cpp_codegen_object_new(RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7_il2cpp_TypeInfo_var);
		RpcRequest__ctor_mA44D9BDDD8F221CEC3DAD7C40C0F18B61297AA9C(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m149639FD65D52352115FBEF00A5A875FA4E9A564 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_mA6832A0FFA5CFEAE5F38AE08853DEC98A56A9793 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___id0, String_t* ___method1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameterList2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcRequestMessage_set_Id_m64D585032E05DC2A8D7BF480CF0E9CE1441283FD_inline(__this, L_0, /*hidden argument*/NULL);
		RpcRequestMessage_set_JsonRpcVersion_mADEB23EDB4ABCF786C072B95B9C9A86F99B7D875_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, /*hidden argument*/NULL);
		String_t* L_1 = ___method1;
		RpcRequestMessage_set_Method_m3205D30E30BC566D034953EE2AE18C655EB01FA6_inline(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___parameterList2;
		RpcRequestMessage_set_RawParameters_m4583C6EFF03D3D9C22D0BC061E5DA9C49E4CC025_inline(__this, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m80EC18423B5A2FF38F6A204D931ACED745BBD611 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___id0, String_t* ___method1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameterMap2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcRequestMessage_set_Id_m64D585032E05DC2A8D7BF480CF0E9CE1441283FD_inline(__this, L_0, /*hidden argument*/NULL);
		RpcRequestMessage_set_JsonRpcVersion_mADEB23EDB4ABCF786C072B95B9C9A86F99B7D875_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, /*hidden argument*/NULL);
		String_t* L_1 = ___method1;
		RpcRequestMessage_set_Method_m3205D30E30BC566D034953EE2AE18C655EB01FA6_inline(__this, L_1, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = ___parameterMap2;
		RpcRequestMessage_set_RawParameters_m4583C6EFF03D3D9C22D0BC061E5DA9C49E4CC025_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcRequestMessage_get_Id_mAE7B6FCDC538D12921CBFF7D2D2537B1B04F8501 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_m64D585032E05DC2A8D7BF480CF0E9CE1441283FD (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_JsonRpcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_JsonRpcVersion_m2C4A63333041C7BF25DDC9C46A9966BDD4B22761 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CJsonRpcVersionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mADEB23EDB4ABCF786C072B95B9C9A86F99B7D875 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_Method_mB2DF0662A37F0DA182A19BEADEBA57FD17DD20FD (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_m3205D30E30BC566D034953EE2AE18C655EB01FA6 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_RawParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcRequestMessage_get_RawParameters_mB6C956C6A1F417E8D64E831AACE7E912720A4549 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CRawParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::set_RawParameters(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_m4583C6EFF03D3D9C22D0BC061E5DA9C49E4CC025 (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_3(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcResponseException::.ctor(Nethereum.JsonRpc.Client.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseException__ctor_m2D4C79C1D270A95B42F77F853CFFEFAC19374EA7 (RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2 * __this, RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * ___rpcError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * L_0 = ___rpcError0;
		String_t* L_1;
		L_1 = RpcError_get_Message_mA8FAD25C6868FBA49ED9EBB8FE10B5FDF9AC9F1C_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_1, /*hidden argument*/NULL);
		RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * L_2 = ___rpcError0;
		__this->set_U3CRpcErrorU3Ek__BackingField_17(L_2);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcError Nethereum.JsonRpc.Client.RpcResponseException::get_RpcError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * RpcResponseException_get_RpcError_m62E3F2970C10E1AAE571829ACF3460AF6526FFE4 (RpcResponseException_tBBA1AB8CD2C79D6EBA29AD00DD5C746816021EA2 * __this, const RuntimeMethod* method)
{
	{
		RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * L_0 = __this->get_U3CRpcErrorU3Ek__BackingField_17();
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
// System.Void Nethereum.JsonRpc.Client.RpcResponseFormatException::.ctor(System.String,System.FormatException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseFormatException__ctor_mEAC708D4601146D7EC6B3203F94EE47FF7E13881 (RpcResponseFormatException_t4597A9AEE7D725274C9985F5A299BFF0E2477058 * __this, String_t* ___message0, FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_1 = ___innerException1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mA42C171892E2517ACF2B349F8A336C9D7C557F7F (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RpcResponseMessage_set_JsonRpcVersion_mBA08AFF0D08BB1AF34DF716FFC6B12B6F1451A23_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m8D023E2A64056820F60B840EF79D844BD3AD646A (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RuntimeObject * ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___id0;
		RpcResponseMessage_set_Id_m0D35996CD0A3845F3866C641699DEE77A1819C3F_inline(__this, L_0, /*hidden argument*/NULL);
		RpcResponseMessage_set_JsonRpcVersion_mBA08AFF0D08BB1AF34DF716FFC6B12B6F1451A23_inline(__this, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object,Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_mDCCB9DC950C6E6D6D963EAA3A8AAC343AB993357 (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RuntimeObject * ___id0, RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * ___error1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___id0;
		RpcResponseMessage__ctor_m8D023E2A64056820F60B840EF79D844BD3AD646A(__this, L_0, /*hidden argument*/NULL);
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_1 = ___error1;
		RpcResponseMessage_set_Error_m5E32FB80190267373DF57573695FE698116263AC_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::.ctor(System.Object,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage__ctor_m55880E1D51374747E0512A7CC78F1504EB4B4DFE (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RuntimeObject * ___id0, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___result1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___id0;
		RpcResponseMessage__ctor_m8D023E2A64056820F60B840EF79D844BD3AD646A(__this, L_0, /*hidden argument*/NULL);
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_1 = ___result1;
		RpcResponseMessage_set_Result_m783C1E4CEADFAD77FA7BCA586ADD1BD503635909_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RpcResponseMessage_get_Id_mF38E13545BB7D8EC49F3849ED340685023B46F57 (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m0D35996CD0A3845F3866C641699DEE77A1819C3F (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_JsonRpcVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcResponseMessage_get_JsonRpcVersion_mF82AB7D2AA7C76BA99DFDAEFA9FFABF31036C584 (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CJsonRpcVersionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_JsonRpcVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_mBA08AFF0D08BB1AF34DF716FFC6B12B6F1451A23 (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcResponseMessage_get_Result_m1448BA94D44F60A0DC02A43973B6E2C096B2FABD (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = __this->get_U3CResultU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m783C1E4CEADFAD77FA7BCA586ADD1BD503635909 (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_2(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4 (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	{
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_0 = __this->get_U3CErrorU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::set_Error(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m5E32FB80190267373DF57573695FE698116263AC (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * ___value0, const RuntimeMethod* method)
{
	{
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RpcResponseMessage_get_HasError_m5C39384CC0E7A2C8E3F944AD9731714E44C35CCC (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	{
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_0;
		L_0 = RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams__ctor_m7CCEBE6C599DD5F509F0933ABEB2F5AF7315D1FD (RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::get_Subscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcStreamingParams_get_Subscription_mD9C9F68DCEA0FE189629C91E1959B0561A39A8D0 (RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSubscriptionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::set_Subscription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams_set_Subscription_m127EE8590960A45F0E2B5EE6F019DC9E8469E2B4 (RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSubscriptionU3Ek__BackingField_0(L_0);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcStreamingParams_get_Result_m10BDD3A58B4F9C55A6D4DE017E65C6E79777A10C (RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * __this, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = __this->get_U3CResultU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams::set_Result(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingParams_set_Result_mC2F16FAE7C0D0B014F75A556DA034D9A60CE5ADD (RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_1(L_0);
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
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_m6BFEA7F2AEAD67FE05C35A4E93F4423AA703B6B4 (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, const RuntimeMethod* method)
{
	{
		RpcResponseMessage__ctor_mA42C171892E2517ACF2B349F8A336C9D7C557F7F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor(Nethereum.JsonRpc.Client.RpcMessages.RpcError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_mF86F23FBD44CB91257F3D9A01F721A86EF8F65AB (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * ___error0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage__ctor_mA42C171892E2517ACF2B349F8A336C9D7C557F7F(__this, /*hidden argument*/NULL);
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_0 = ___error0;
		RpcResponseMessage_set_Error_m5E32FB80190267373DF57573695FE698116263AC_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::.ctor(System.String,Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage__ctor_m4EA9DB035DE40A9AF221B501A12062D846F68AAB (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, String_t* ___method0, RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * ___params1, const RuntimeMethod* method)
{
	{
		RpcResponseMessage__ctor_mA42C171892E2517ACF2B349F8A336C9D7C557F7F(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___method0;
		RpcStreamingResponseMessage_set_Method_m43867DA4BB4449A1DE8694F2F9412125246E9230_inline(__this, L_0, /*hidden argument*/NULL);
		RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * L_1 = ___params1;
		RpcStreamingResponseMessage_set_Params_m8A4EB2CFF7D3665D7966EC8FDA04CACAF95987A4_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcStreamingResponseMessage_get_Method_m15E71D976E433E1DCE4ACAC1F998B76FBEFE7364 (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_m43867DA4BB4449A1DE8694F2F9412125246E9230 (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
// Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::get_Params()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * RpcStreamingResponseMessage_get_Params_mE54D808FADE74FF3F7B534F7493C2F7B4D657790 (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, const RuntimeMethod* method)
{
	{
		RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * L_0 = __this->get_U3CParamsU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingResponseMessage::set_Params(Nethereum.JsonRpc.Client.RpcMessages.RpcStreamingParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_m8A4EB2CFF7D3665D7966EC8FDA04CACAF95987A4 (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * ___value0, const RuntimeMethod* method)
{
	{
		RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * L_0 = ___value0;
		__this->set_U3CParamsU3Ek__BackingField_5(L_0);
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
// System.String Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthentication(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserAuthentication_GetBasicAuthentication_mA3779DF7EED57DE95D41B75CE77F403523F65891 (String_t* ___userName0, String_t* ___password1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB642385221D006B3B8DB45C10F626FD2A3DB7C);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___userName0;
		String_t* L_2 = ___password1;
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_2, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_3);
		V_0 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Convert_ToBase64String_mE6E1FE504EF1E99DB2F8B92180A82A5F1512EF6A(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9EB642385221D006B3B8DB45C10F626FD2A3DB7C, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo Nethereum.JsonRpc.Client.UserAuthentication::GetBasicAuthenticationUserInfoFromUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m60B6B18BCD31425BA357B004517B5618B1C2160A (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_0 = NULL;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri0;
		String_t* L_1;
		L_1 = Uri_get_UserInfo_m94767A0CEBE9994D43BFFD9D0E18ADA11EF96D25(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = ___uri0;
		String_t* L_5;
		L_5 = Uri_get_UserInfo_m94767A0CEBE9994D43BFFD9D0E18ADA11EF96D25(L_4, /*hidden argument*/NULL);
		String_t* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_001f;
		}
	}
	{
		G_B4_0 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(NULL));
		goto IL_002f;
	}

IL_001f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = L_7;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9;
		L_9 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(G_B3_0, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_0;
		int32_t L_12 = 0;
		String_t* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_0;
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * L_17 = (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA *)il2cpp_codegen_object_new(BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA_il2cpp_TypeInfo_var);
		BasicAuthenticationUserInfo__ctor_m32F5A031EFC82DBCDA8AB3A084A263D2C43E4A14(L_17, /*hidden argument*/NULL);
		BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * L_18 = L_17;
		String_t* L_19 = V_1;
		BasicAuthenticationUserInfo_set_UserName_m66C67C0B661D10A5F4616701313745EA2F8A186B_inline(L_18, L_19, /*hidden argument*/NULL);
		BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * L_20 = L_18;
		String_t* L_21 = V_2;
		BasicAuthenticationUserInfo_set_Password_m55B13541B33837A420115F915FDCF0C8A5C30BFC_inline(L_20, L_21, /*hidden argument*/NULL);
		return L_20;
	}

IL_0052:
	{
		return (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA *)NULL;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication::SetBasicAuthenticationHeaderFromUri(Nethereum.JsonRpc.Client.IClientRequestHeaderSupport,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAuthentication_SetBasicAuthenticationHeaderFromUri_m649A4F94DAB60ABDD4E26E0A1F42D0DE7A796DC1 (RuntimeObject* ___client0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri1, const RuntimeMethod* method)
{
	BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * V_0 = NULL;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___uri1;
		BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * L_1;
		L_1 = UserAuthentication_GetBasicAuthenticationUserInfoFromUri_m60B6B18BCD31425BA357B004517B5618B1C2160A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_3 = ___client0;
		BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * L_4 = V_0;
		String_t* L_5;
		L_5 = BasicAuthenticationUserInfo_get_UserName_m583C5B0B704F8FEC54448AB04537511EDB298BEF_inline(L_4, /*hidden argument*/NULL);
		BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * L_6 = V_0;
		String_t* L_7;
		L_7 = BasicAuthenticationUserInfo_get_Password_m1A6A4338EC36480153E5EC0CE66BE97F3A65AEF6_inline(L_6, /*hidden argument*/NULL);
		UserAuthentication_SetBasicAuthenticationHeader_m5488D5CE0DE48DFE3443AD3237E11E7FAC0FFE33(L_3, L_5, L_7, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication::SetBasicAuthenticationHeader(Nethereum.JsonRpc.Client.IClientRequestHeaderSupport,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAuthentication_SetBasicAuthenticationHeader_m5488D5CE0DE48DFE3443AD3237E11E7FAC0FFE33 (RuntimeObject* ___client0, String_t* ___userName1, String_t* ___password2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientRequestHeaderSupport_tC92F9D84A11FE6483C551331136ABF3B8F34E3A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACFAF82BBAB8E0AF489CE8E5C705D5561B275DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___client0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1;
		L_1 = InterfaceFuncInvoker0< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Nethereum.JsonRpc.Client.IClientRequestHeaderSupport::get_RequestHeaders() */, IClientRequestHeaderSupport_tC92F9D84A11FE6483C551331136ABF3B8F34E3A6_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___userName1;
		String_t* L_3 = ___password2;
		String_t* L_4;
		L_4 = UserAuthentication_GetBasicAuthentication_mA3779DF7EED57DE95D41B75CE77F403523F65891(L_2, L_3, /*hidden argument*/NULL);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_1, _stringLiteral7ACFAF82BBAB8E0AF489CE8E5C705D5561B275DF, L_4, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
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
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_MoveNext_mAD974866413ECA4891C78929FFB0A7D9419D8827 (U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m9C5DDA51E4E61E1B6F39481A3CEED59205D22C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * V_1 = NULL;
	RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * V_2 = NULL;
	ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007c;
			}
		}

IL_0011:
		{
			ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * L_3 = V_1;
			RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_4 = __this->get_request_3();
			RuntimeObject * L_5;
			L_5 = RpcRequest_get_Id_m0F1C1611A350F4AA663F665A078916B11D0085E0_inline(L_4, /*hidden argument*/NULL);
			RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_6 = __this->get_request_3();
			String_t* L_7;
			L_7 = RpcRequest_get_Method_mEB7D095F1F4057296D708CE4C519B22CAC42F166_inline(L_6, /*hidden argument*/NULL);
			RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_8 = __this->get_request_3();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9;
			L_9 = RpcRequest_get_RawParameters_m068CD497D2AF3D1E412456814AD4EB6528829DC4_inline(L_8, /*hidden argument*/NULL);
			RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * L_10 = (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 *)il2cpp_codegen_object_new(RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773_il2cpp_TypeInfo_var);
			RpcRequestMessage__ctor_mA6832A0FFA5CFEAE5F38AE08853DEC98A56A9793(L_10, L_5, L_7, L_9, /*hidden argument*/NULL);
			String_t* L_11 = __this->get_route_4();
			Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 * L_12;
			L_12 = VirtFuncInvoker2< Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 *, RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 *, String_t* >::Invoke(13 /* System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String) */, L_3, L_10, L_11);
			ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82  L_13;
			L_13 = Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD(L_12, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD_RuntimeMethod_var);
			V_4 = L_13;
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  L_14;
			L_14 = ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_inline((ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_RuntimeMethod_var);
			V_3 = L_14;
			bool L_15;
			L_15 = ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8((ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0098;
			}
		}

IL_005c:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  L_17 = V_3;
			__this->set_U3CU3Eu__1_5(L_17);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m9C5DDA51E4E61E1B6F39481A3CEED59205D22C10((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, (ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *)(&V_3), (U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD_m9C5DDA51E4E61E1B6F39481A3CEED59205D22C10_RuntimeMethod_var);
			goto IL_00e0;
		}

IL_007c:
		{
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  L_19 = __this->get_U3CU3Eu__1_5();
			V_3 = L_19;
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * L_20 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_20, sizeof(ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_0098:
		{
			RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_22;
			L_22 = ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417((ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417_RuntimeMethod_var);
			V_2 = L_22;
			ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * L_23 = V_1;
			RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_24 = V_2;
			RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_25 = __this->get_request_3();
			String_t* L_26;
			L_26 = RpcRequest_get_Method_mEB7D095F1F4057296D708CE4C519B22CAC42F166_inline(L_25, /*hidden argument*/NULL);
			ClientBase_HandleRpcError_mFA0F94EBE4FC85452DF022196B286A93349B34F6(L_23, L_24, L_26, /*hidden argument*/NULL);
			goto IL_00cd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b4;
		}
		throw e;
	}

CATCH_00b4:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_28 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_27, L_28, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e0;
	} // end catch (depth: 1)

IL_00cd:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_29, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__14_MoveNext_mAD974866413ECA4891C78929FFB0A7D9419D8827_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__14_MoveNext_mAD974866413ECA4891C78929FFB0A7D9419D8827(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__14_SetStateMachine_m0123CDFB960B3E138C301CF083CD10B63C504CA7 (U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__14_SetStateMachine_m0123CDFB960B3E138C301CF083CD10B63C504CA7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__14_tE2A3B6D8FD8B2E506A9B866161EF15018857D4DD *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__14_SetStateMachine_m0123CDFB960B3E138C301CF083CD10B63C504CA7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_MoveNext_m239B32F3537F77C05C7DC61B0192CA42E59E1813 (U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m1DAA2E63E620E55519F7297539AAFC3B870C9011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * V_1 = NULL;
	RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * V_2 = NULL;
	RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * V_3 = NULL;
	Guid_t  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007f;
			}
		}

IL_0011:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
			Guid_t  L_3;
			L_3 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
			V_4 = L_3;
			String_t* L_4;
			L_4 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_4), /*hidden argument*/NULL);
			String_t* L_5 = __this->get_method_2();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_paramList_3();
			RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * L_7 = (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 *)il2cpp_codegen_object_new(RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773_il2cpp_TypeInfo_var);
			RpcRequestMessage__ctor_mA6832A0FFA5CFEAE5F38AE08853DEC98A56A9793(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * L_8 = V_1;
			RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * L_9 = V_2;
			String_t* L_10 = __this->get_route_5();
			Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 * L_11;
			L_11 = VirtFuncInvoker2< Task_1_t7FA78CBB4D19E168B33FA6473623732EF9048B80 *, RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 *, String_t* >::Invoke(13 /* System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.ClientBase::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String) */, L_8, L_9, L_10);
			ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82  L_12;
			L_12 = Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD(L_11, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m02460A1DAE6F53F74D64622D6F1B3369B80296BD_RuntimeMethod_var);
			V_6 = L_12;
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  L_13;
			L_13 = ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_inline((ConfiguredTaskAwaitable_1_t9DEA5302A2A6D5AA46B82440E778CE814510FC82 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m579349C54D9B640F71D84BCA4A05B30563B31128_RuntimeMethod_var);
			V_5 = L_13;
			bool L_14;
			L_14 = ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8((ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m1A406DA1FB75872DB4D931E22FCD67D2AE8318C8_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_009c;
			}
		}

IL_005e:
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  L_16 = V_5;
			__this->set_U3CU3Eu__1_6(L_16);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m1DAA2E63E620E55519F7297539AAFC3B870C9011((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, (ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *)(&V_5), (U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41_TisU3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3_m1DAA2E63E620E55519F7297539AAFC3B870C9011_RuntimeMethod_var);
			goto IL_00df;
		}

IL_007f:
		{
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41  L_18 = __this->get_U3CU3Eu__1_6();
			V_5 = L_18;
			ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 * L_19 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_19, sizeof(ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 ));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
		}

IL_009c:
		{
			RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_21;
			L_21 = ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417((ConfiguredTaskAwaiter_tFB54F415FC05FA980E53B44DD8BAC33EC9DECC41 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m7CFC286EC7E69965B8046B2A9BB34E5EC3AE1417_RuntimeMethod_var);
			V_3 = L_21;
			ClientBase_t3F4AF8264EB590FF64729DCD650144146CEFF20E * L_22 = V_1;
			RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_23 = V_3;
			String_t* L_24 = __this->get_method_2();
			ClientBase_HandleRpcError_mFA0F94EBE4FC85452DF022196B286A93349B34F6(L_22, L_23, L_24, /*hidden argument*/NULL);
			goto IL_00cc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b3;
		}
		throw e;
	}

CATCH_00b3:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_7;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00df;
	} // end catch (depth: 1)

IL_00cc:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_27, /*hidden argument*/NULL);
	}

IL_00df:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__16_MoveNext_m239B32F3537F77C05C7DC61B0192CA42E59E1813_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__16_MoveNext_m239B32F3537F77C05C7DC61B0192CA42E59E1813(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase/<SendRequestAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAsyncU3Ed__16_SetStateMachine_m6F8A7E9B8BC6A1070D19B6F23FF5B36BACDAF54A (U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAsyncU3Ed__16_SetStateMachine_m6F8A7E9B8BC6A1070D19B6F23FF5B36BACDAF54A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 * _thisAdjusted = reinterpret_cast<U3CSendRequestAsyncU3Ed__16_t24F8EE103CC8FE0CE4FD7C8AEFF7A6CD66D8F9C3 *>(__this + _offset);
	U3CSendRequestAsyncU3Ed__16_SetStateMachine_m6F8A7E9B8BC6A1070D19B6F23FF5B36BACDAF54A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m9603CBCA2354F028E81B7976B5C5193707ED0768 (U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Nethereum.JsonRpc.Client.NullParamsFirstElementResolver/<>c__DisplayClass0_0::<CreateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7 * U3CU3Ec__DisplayClass0_0_U3CCreatePropertiesU3Eb__0_mC4F11109AB6BABCE402F3EE14EB0DFA66EF495B4 (U3CU3Ec__DisplayClass0_0_t96D0F4EB7C7D314877CD2413B1AC35F4A7E1DF19 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullParamsFirstElementResolver_tE1A8504795BBB6698DF3EBA31FB976212B35882F * L_0 = __this->get_U3CU3E4__this_0();
		PropertyInfo_t * L_1 = ___p0;
		int32_t L_2 = __this->get_memberSerialization_1();
		JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7 * L_3;
		L_3 = VirtFuncInvoker2< JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7 *, MemberInfo_t *, int32_t >::Invoke(22 /* Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperty(System.Reflection.MemberInfo,Newtonsoft.Json.MemberSerialization) */, L_0, L_1, L_2);
		JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7 * L_4 = L_3;
		PropertyInfo_t * L_5 = ___p0;
		NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572 * L_6 = (NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572 *)il2cpp_codegen_object_new(NullParamsValueProvider_t4399D104A9062B0401EC4295E078944B174FF572_il2cpp_TypeInfo_var);
		NullParamsValueProvider__ctor_m46641F777C1A754EF58F66B51C0FE5A0CA7F28F7(L_6, L_5, /*hidden argument*/NULL);
		JsonProperty_set_ValueProvider_m1B69B34809E411EDEF055EA2B6787B759978F31B_inline(L_4, L_6, /*hidden argument*/NULL);
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
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m590694619AA985232829345E016859DD7A3EA298 (U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_mA277416DECC519D87133802176AE7D80979398C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_mB5594CCADF4AD09C84131542615A68A0E1F93CE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0059;
			}
		}

IL_000a:
		{
			Func_3_t62A00E6EC1635F4CA68AC6053BF15B4D46FC2672 * L_2 = __this->get_interceptedSendRequestAsync_2();
			RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * L_3 = __this->get_request_3();
			String_t* L_4 = __this->get_route_4();
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = Func_3_Invoke_mB5594CCADF4AD09C84131542615A68A0E1F93CE1(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_mB5594CCADF4AD09C84131542615A68A0E1F93CE1_RuntimeMethod_var);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_6;
			L_6 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_5, (bool)0, /*hidden argument*/NULL);
			V_2 = L_6;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_7;
			L_7 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_2), /*hidden argument*/NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0075;
			}
		}

IL_0039:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_10 = V_1;
			__this->set_U3CU3Eu__1_5(L_10);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_mA277416DECC519D87133802176AE7D80979398C2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_11, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), (U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789_mA277416DECC519D87133802176AE7D80979398C2_RuntimeMethod_var);
			goto IL_00a8;
		}

IL_0059:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_12 = __this->get_U3CU3Eu__1_5();
			V_1 = L_12;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_13 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_13, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0075:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_1), /*hidden argument*/NULL);
			goto IL_0095;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_16 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a8;
	} // end catch (depth: 1)

IL_0095:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m590694619AA985232829345E016859DD7A3EA298_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * _thisAdjusted = reinterpret_cast<U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 *>(__this + _offset);
	U3CInterceptSendRequestAsyncU3Ed__1_MoveNext_m590694619AA985232829345E016859DD7A3EA298(_thisAdjusted, method);
}
// System.Void Nethereum.JsonRpc.Client.RequestInterceptor/<InterceptSendRequestAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mB113A898E42281BEBB4970E3D3693A2892F30E23 (U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mB113A898E42281BEBB4970E3D3693A2892F30E23_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 * _thisAdjusted = reinterpret_cast<U3CInterceptSendRequestAsyncU3Ed__1_tAA25270DC8808783531345093FB7D52DDA8FC789 *>(__this + _offset);
	U3CInterceptSendRequestAsyncU3Ed__1_SetStateMachine_mB113A898E42281BEBB4970E3D3693A2892F30E23(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_UserName_m583C5B0B704F8FEC54448AB04537511EDB298BEF (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUserNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_UserName_m66C67C0B661D10A5F4616701313745EA2F8A186B (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUserNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::get_Password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_Password_m1A6A4338EC36480153E5EC0CE66BE97F3A65AEF6 (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPasswordU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::set_Password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_Password_m55B13541B33837A420115F915FDCF0C8A5C30BFC (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPasswordU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Nethereum.JsonRpc.Client.UserAuthentication/BasicAuthenticationUserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo__ctor_m32F5A031EFC82DBCDA8AB3A084A263D2C43E4A14 (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * RpcResponseMessage_get_Error_m5A79DAF976264F3D7FEB11E78FC6B52BF66E72D4_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	{
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_0 = __this->get_U3CErrorU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RpcError_get_Code_m27D74994A00B23E269CF1563A625CE283A0248FE_inline (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_m4343A78C3A4F8D3E30570012C25AB044014B6A6B_inline (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcError_get_Data_m1FF69AE6957834D6BA385AB8212330C9BF1A7C5B_inline (RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * __this, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Code_mF4FB238BACAFFE9AAB4668673F206418F9E4D60A_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Message_m81225EB42FCA8028B4473E724DFB846502220D1A_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcError_set_Data_m089F53731648722BA97D9726D1E798E2B6812910_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_Log_mF8268CB69E3374A8A1F2C28769E3297BB90E680A_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CLogU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_RequestJsonMessage_mEA9022E5B55DA592FFF4F6DBC1F868A286ED39E2_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CRequestJsonMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcLogger_get_Log_m246797387B0DDD39D7A8C85C5AE1C44BF0475ED1_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLogU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcLogger_get_RequestJsonMessage_m3A952B9C3088680FBBD35055315560DDC819831D_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CRequestJsonMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * RpcLogger_get_ResponseMessage_mC7A7F1EF144F51453ED379C0941F7D4BDEB92607_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0 = __this->get_U3CResponseMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * RpcResponseMessage_get_Result_m1448BA94D44F60A0DC02A43973B6E2C096B2FABD_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = __this->get_U3CResultU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcLogger_set_ResponseMessage_m62F21306D79B5F59B994340C468D43458E906229_inline (RpcLogger_tCB47F9643044505C9DCBCDBACBE7C91E291D2F5C * __this, RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * ___value0, const RuntimeMethod* method)
{
	{
		RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * L_0 = ___value0;
		__this->set_U3CResponseMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Id_mB0CE2F71740D9C1D3AECA0C051980291A0C41CC0_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_Method_m13C222285CE76416C7195ECD9B70C105F88EB45F_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequest_set_RawParameters_m76C68B14FAA8E3E166146EF3F236AEE4DDF3CBFE_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___value0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Configuration_get_DefaultRequestId_mC23C3994E12A341872C00C79BB3842B0BF920E0A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_StaticFields*)il2cpp_codegen_static_fields_for(Configuration_t6FFE440E22CF2C45B10D02D2B0680DEC6D85FD44_il2cpp_TypeInfo_var))->get_U3CDefaultRequestIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestBuilder_get_MethodName_m76F7A97E81A7CF643CF3E052DF80E6C003D8C708_inline (RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Id_m64D585032E05DC2A8D7BF480CF0E9CE1441283FD_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_JsonRpcVersion_mADEB23EDB4ABCF786C072B95B9C9A86F99B7D875_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_Method_m3205D30E30BC566D034953EE2AE18C655EB01FA6_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcRequestMessage_set_RawParameters_m4583C6EFF03D3D9C22D0BC061E5DA9C49E4CC025_inline (RpcRequestMessage_tDF4BAA4DD1B05EB710A85A05BC3EB5625161C773 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CRawParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcError_get_Message_mA8FAD25C6868FBA49ED9EBB8FE10B5FDF9AC9F1C_inline (RpcError_t3B471484629877BC7F981BEE2373BE5976B2AE07 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_JsonRpcVersion_mBA08AFF0D08BB1AF34DF716FFC6B12B6F1451A23_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CJsonRpcVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Id_m0D35996CD0A3845F3866C641699DEE77A1819C3F_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Error_m5E32FB80190267373DF57573695FE698116263AC_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * ___value0, const RuntimeMethod* method)
{
	{
		RpcError_tCBFDA03B3D598A69A6F79353E47C072ABCAD5A2D * L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcResponseMessage_set_Result_m783C1E4CEADFAD77FA7BCA586ADD1BD503635909_inline (RpcResponseMessage_tF2C02474E331816B79DB92EDCE7199788C963344 * __this, JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ___value0, const RuntimeMethod* method)
{
	{
		JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Method_m43867DA4BB4449A1DE8694F2F9412125246E9230_inline (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RpcStreamingResponseMessage_set_Params_m8A4EB2CFF7D3665D7966EC8FDA04CACAF95987A4_inline (RpcStreamingResponseMessage_t9BD80B3EA3AD520605B181DEB0512A8B657B5E15 * __this, RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * ___value0, const RuntimeMethod* method)
{
	{
		RpcStreamingParams_t4DA917E41DA7B22D60C9723546F29721AA2EB62C * L_0 = ___value0;
		__this->set_U3CParamsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_UserName_m66C67C0B661D10A5F4616701313745EA2F8A186B_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUserNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BasicAuthenticationUserInfo_set_Password_m55B13541B33837A420115F915FDCF0C8A5C30BFC_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPasswordU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_UserName_m583C5B0B704F8FEC54448AB04537511EDB298BEF_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUserNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BasicAuthenticationUserInfo_get_Password_m1A6A4338EC36480153E5EC0CE66BE97F3A65AEF6_inline (BasicAuthenticationUserInfo_tE60FA2F87DC1040504E1AD1CE39021DAB1C684EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPasswordU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * RpcRequest_get_Id_m0F1C1611A350F4AA663F665A078916B11D0085E0_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_mEB7D095F1F4057296D708CE4C519B22CAC42F166_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMethodU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* RpcRequest_get_RawParameters_m068CD497D2AF3D1E412456814AD4EB6528829DC4_inline (RpcRequest_tD3269B59E79B174CC1FE9B1AFAEF29E2550EABB7 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get_U3CRawParametersU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_ValueProvider_m1B69B34809E411EDEF055EA2B6787B759978F31B_inline (JsonProperty_tFCBD447EB41531AB0EDFD1256C85D12A6F71DBB7 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CValueProviderU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )L_0;
	}
}
