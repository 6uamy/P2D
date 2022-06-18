#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task`1<System.String>>
struct Func_1_tE3031631B358DBD11550DB02AEF5184F29198698;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>
struct Func_2_t205151E428A30E59468E02F2C47045044D12F629;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF;
// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task`1<System.String>>>
struct IEnumerable_1_t355F64E22304A1CE24904CE9C64AB51FF1546848;
// System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task`1<System.String>>>
struct IEnumerator_1_t2AA587485B8DEDA0D325D813466140B2FDCA7B9C;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.Numerics.BigInteger>
struct IHexConvertor_1_t794B7D393FC8A699DB3E43617E8DCF1FC80ACCCF;
// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList>
struct List_1_tACB6116B8F6E8DD639F964F9D6BE4818AC14EF96;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.TaskFactory`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct TaskFactory_1_t90AB62FD0CD0D1B2F9BE247DA82AB73392DEC5DB;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>
struct Task_1_tE281D603674DB3D781C59918C4C67B064849B54F;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Nethereum.RPC.Eth.DTOs.TransactionReceipt[]
struct TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Nethereum.RPC.Eth.DTOs.BlockParameter
struct BlockParameter_t389BD391D09A5F2F3D3AA63006636974EDB47B99;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Nethereum.RPC.Eth.Exceptions.ContractDeploymentException
struct ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Nethereum.RPC.Eth.EthGetCode
struct EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0;
// Nethereum.RPC.Eth.Transactions.EthGetTransactionReceipt
struct EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6;
// System.Exception
struct Exception_t;
// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Nethereum.JsonRpc.Client.IClient
struct IClient_t5E054FBA9FE33F84409D60E8271E9501601D5780;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Nethereum.RPC.TransactionManagers.ITransactionManager
struct ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87;
// Newtonsoft.Json.Linq.JArray
struct JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90;
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
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// Nethereum.RPC.Eth.DTOs.TransactionInput
struct TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121;
// Nethereum.RPC.Eth.DTOs.TransactionReceipt
struct TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC;
// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService
struct TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t8D3DF8CA0A826F0FDB0354953F6635EA80639B88;
// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t8998D8EEA42628A35EA4D4C3119FA1F75D4B502C;
// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t55A732186A90AD8255C18D6F1E889AD093F7B82B;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t355F64E22304A1CE24904CE9C64AB51FF1546848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2AA587485B8DEDA0D325D813466140B2FDCA7B9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4065630F4DEC563504C24E26EB31DB20EEAF10E5;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9_m143CD06FE95866ACC234F8DAB12B5F43C8DA45DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m400D7F016FC72954CC77182FE936D8B8158AC803_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m3C7C7C04DBF3B28AB8499431C445CB72E39D9C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m8CF0B5B53AC9F9578B1995A2FA5DFFB389E0E223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m2B868D677C948162D330D41A6D282A0125A59A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_mA983A9681052ADF20A61C3173CD5914E9B691E27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m12A70E265E47EE4F964000D5B416F47BB7DB3224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m6E195A319521C9C75C86B17EFE149E557F27AEBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m5DC5C43942EA5FA9B8D814C2280E965A876312B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mD0BE58966FAC23DC425525F58ACA0993B30EA472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4A12A73C2D59F22B4CCA2DD8C3C772F00E5068E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m03774C51841DBD0C55DB615C253ACEA8987CAE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF29C1EDAAEB6B90989E095F108A507AE8E2F6AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBEE3C85FC20CE4F393023C6B65A8EE5C2FA0C1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_MoveNext_m3C480AC1BAAE7A84C40B5B0F3076A59804D87B4E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC, ____items_1)); }
	inline TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA* get__items_1() const { return ____items_1; }
	inline TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC_StaticFields, ____emptyArray_5)); }
	inline TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransactionReceiptU5BU5D_t999D4C48B111A92CDAE7889A9484D2FA7E5965CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1<System.String>
struct RpcRequestResponseHandler_1_t8A1408FB1129B916AE33E5A733E1A4DDC523A324  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.RpcRequestBuilder Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<RpcRequestBuilder>k__BackingField
	RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * ___U3CRpcRequestBuilderU3Ek__BackingField_0;
	// Nethereum.JsonRpc.Client.IClient Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRpcRequestBuilderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequestResponseHandler_1_t8A1408FB1129B916AE33E5A733E1A4DDC523A324, ___U3CRpcRequestBuilderU3Ek__BackingField_0)); }
	inline RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * get_U3CRpcRequestBuilderU3Ek__BackingField_0() const { return ___U3CRpcRequestBuilderU3Ek__BackingField_0; }
	inline RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 ** get_address_of_U3CRpcRequestBuilderU3Ek__BackingField_0() { return &___U3CRpcRequestBuilderU3Ek__BackingField_0; }
	inline void set_U3CRpcRequestBuilderU3Ek__BackingField_0(RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * value)
	{
		___U3CRpcRequestBuilderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRpcRequestBuilderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcRequestResponseHandler_1_t8A1408FB1129B916AE33E5A733E1A4DDC523A324, ___U3CClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_1() const { return ___U3CClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_1() { return &___U3CClientU3Ek__BackingField_1; }
	inline void set_U3CClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_1), (void*)value);
	}
};


// Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct RpcRequestResponseHandler_1_t044C59FDA40AA18BAC86301F7D2EE96134BDB840  : public RuntimeObject
{
public:
	// Nethereum.JsonRpc.Client.RpcRequestBuilder Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<RpcRequestBuilder>k__BackingField
	RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * ___U3CRpcRequestBuilderU3Ek__BackingField_0;
	// Nethereum.JsonRpc.Client.IClient Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRpcRequestBuilderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcRequestResponseHandler_1_t044C59FDA40AA18BAC86301F7D2EE96134BDB840, ___U3CRpcRequestBuilderU3Ek__BackingField_0)); }
	inline RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * get_U3CRpcRequestBuilderU3Ek__BackingField_0() const { return ___U3CRpcRequestBuilderU3Ek__BackingField_0; }
	inline RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 ** get_address_of_U3CRpcRequestBuilderU3Ek__BackingField_0() { return &___U3CRpcRequestBuilderU3Ek__BackingField_0; }
	inline void set_U3CRpcRequestBuilderU3Ek__BackingField_0(RpcRequestBuilder_tA46380165E116699769232E7EF881C812BC1CC90 * value)
	{
		___U3CRpcRequestBuilderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRpcRequestBuilderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcRequestResponseHandler_1_t044C59FDA40AA18BAC86301F7D2EE96134BDB840, ___U3CClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClientU3Ek__BackingField_1() const { return ___U3CClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClientU3Ek__BackingField_1() { return &___U3CClientU3Ek__BackingField_1; }
	inline void set_U3CClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Nethereum.RPC.Eth.DTOs.CallInput
struct CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8  : public RuntimeObject
{
public:
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_from
	String_t* ____from_0;
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_to
	String_t* ____to_1;
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_data
	String_t* ____data_2;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Gas>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CGasU3Ek__BackingField_3;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<GasPrice>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CGasPriceU3Ek__BackingField_4;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Value>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CValueU3Ek__BackingField_5;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<MaxFeePerGas>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CMaxFeePerGasU3Ek__BackingField_6;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<MaxPriorityFeePerGas>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CMaxPriorityFeePerGasU3Ek__BackingField_7;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Type>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CTypeU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__from_0() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ____from_0)); }
	inline String_t* get__from_0() const { return ____from_0; }
	inline String_t** get_address_of__from_0() { return &____from_0; }
	inline void set__from_0(String_t* value)
	{
		____from_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____from_0), (void*)value);
	}

	inline static int32_t get_offset_of__to_1() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ____to_1)); }
	inline String_t* get__to_1() const { return ____to_1; }
	inline String_t** get_address_of__to_1() { return &____to_1; }
	inline void set__to_1(String_t* value)
	{
		____to_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____to_1), (void*)value);
	}

	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ____data_2)); }
	inline String_t* get__data_2() const { return ____data_2; }
	inline String_t** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(String_t* value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ___U3CGasU3Ek__BackingField_3)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CGasU3Ek__BackingField_3() const { return ___U3CGasU3Ek__BackingField_3; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CGasU3Ek__BackingField_3() { return &___U3CGasU3Ek__BackingField_3; }
	inline void set_U3CGasU3Ek__BackingField_3(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CGasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGasU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGasPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ___U3CGasPriceU3Ek__BackingField_4)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CGasPriceU3Ek__BackingField_4() const { return ___U3CGasPriceU3Ek__BackingField_4; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CGasPriceU3Ek__BackingField_4() { return &___U3CGasPriceU3Ek__BackingField_4; }
	inline void set_U3CGasPriceU3Ek__BackingField_4(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CGasPriceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGasPriceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ___U3CValueU3Ek__BackingField_5)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CValueU3Ek__BackingField_5() const { return ___U3CValueU3Ek__BackingField_5; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CValueU3Ek__BackingField_5() { return &___U3CValueU3Ek__BackingField_5; }
	inline void set_U3CValueU3Ek__BackingField_5(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CValueU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaxFeePerGasU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ___U3CMaxFeePerGasU3Ek__BackingField_6)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CMaxFeePerGasU3Ek__BackingField_6() const { return ___U3CMaxFeePerGasU3Ek__BackingField_6; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CMaxFeePerGasU3Ek__BackingField_6() { return &___U3CMaxFeePerGasU3Ek__BackingField_6; }
	inline void set_U3CMaxFeePerGasU3Ek__BackingField_6(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CMaxFeePerGasU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaxFeePerGasU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaxPriorityFeePerGasU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ___U3CMaxPriorityFeePerGasU3Ek__BackingField_7)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CMaxPriorityFeePerGasU3Ek__BackingField_7() const { return ___U3CMaxPriorityFeePerGasU3Ek__BackingField_7; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CMaxPriorityFeePerGasU3Ek__BackingField_7() { return &___U3CMaxPriorityFeePerGasU3Ek__BackingField_7; }
	inline void set_U3CMaxPriorityFeePerGasU3Ek__BackingField_7(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CMaxPriorityFeePerGasU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaxPriorityFeePerGasU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8, ___U3CTypeU3Ek__BackingField_8)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CTypeU3Ek__BackingField_8() const { return ___U3CTypeU3Ek__BackingField_8; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CTypeU3Ek__BackingField_8() { return &___U3CTypeU3Ek__BackingField_8; }
	inline void set_U3CTypeU3Ek__BackingField_8(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_8), (void*)value);
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


// Nethereum.RPC.Eth.DTOs.TransactionReceipt
struct TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC  : public RuntimeObject
{
public:
	// System.String Nethereum.RPC.Eth.DTOs.TransactionReceipt::<TransactionHash>k__BackingField
	String_t* ___U3CTransactionHashU3Ek__BackingField_0;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::<TransactionIndex>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CTransactionIndexU3Ek__BackingField_1;
	// System.String Nethereum.RPC.Eth.DTOs.TransactionReceipt::<BlockHash>k__BackingField
	String_t* ___U3CBlockHashU3Ek__BackingField_2;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::<BlockNumber>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CBlockNumberU3Ek__BackingField_3;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::<CumulativeGasUsed>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CCumulativeGasUsedU3Ek__BackingField_4;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::<GasUsed>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CGasUsedU3Ek__BackingField_5;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::<EffectiveGasPrice>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CEffectiveGasPriceU3Ek__BackingField_6;
	// System.String Nethereum.RPC.Eth.DTOs.TransactionReceipt::<ContractAddress>k__BackingField
	String_t* ___U3CContractAddressU3Ek__BackingField_7;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::<Status>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CStatusU3Ek__BackingField_8;
	// Newtonsoft.Json.Linq.JArray Nethereum.RPC.Eth.DTOs.TransactionReceipt::<Logs>k__BackingField
	JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * ___U3CLogsU3Ek__BackingField_9;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::<Type>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CTypeU3Ek__BackingField_10;
	// System.String Nethereum.RPC.Eth.DTOs.TransactionReceipt::<LogsBloom>k__BackingField
	String_t* ___U3CLogsBloomU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CTransactionHashU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CTransactionHashU3Ek__BackingField_0)); }
	inline String_t* get_U3CTransactionHashU3Ek__BackingField_0() const { return ___U3CTransactionHashU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTransactionHashU3Ek__BackingField_0() { return &___U3CTransactionHashU3Ek__BackingField_0; }
	inline void set_U3CTransactionHashU3Ek__BackingField_0(String_t* value)
	{
		___U3CTransactionHashU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransactionHashU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransactionIndexU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CTransactionIndexU3Ek__BackingField_1)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CTransactionIndexU3Ek__BackingField_1() const { return ___U3CTransactionIndexU3Ek__BackingField_1; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CTransactionIndexU3Ek__BackingField_1() { return &___U3CTransactionIndexU3Ek__BackingField_1; }
	inline void set_U3CTransactionIndexU3Ek__BackingField_1(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CTransactionIndexU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransactionIndexU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBlockHashU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CBlockHashU3Ek__BackingField_2)); }
	inline String_t* get_U3CBlockHashU3Ek__BackingField_2() const { return ___U3CBlockHashU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CBlockHashU3Ek__BackingField_2() { return &___U3CBlockHashU3Ek__BackingField_2; }
	inline void set_U3CBlockHashU3Ek__BackingField_2(String_t* value)
	{
		___U3CBlockHashU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBlockHashU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBlockNumberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CBlockNumberU3Ek__BackingField_3)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CBlockNumberU3Ek__BackingField_3() const { return ___U3CBlockNumberU3Ek__BackingField_3; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CBlockNumberU3Ek__BackingField_3() { return &___U3CBlockNumberU3Ek__BackingField_3; }
	inline void set_U3CBlockNumberU3Ek__BackingField_3(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CBlockNumberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBlockNumberU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCumulativeGasUsedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CCumulativeGasUsedU3Ek__BackingField_4)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CCumulativeGasUsedU3Ek__BackingField_4() const { return ___U3CCumulativeGasUsedU3Ek__BackingField_4; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CCumulativeGasUsedU3Ek__BackingField_4() { return &___U3CCumulativeGasUsedU3Ek__BackingField_4; }
	inline void set_U3CCumulativeGasUsedU3Ek__BackingField_4(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CCumulativeGasUsedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCumulativeGasUsedU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGasUsedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CGasUsedU3Ek__BackingField_5)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CGasUsedU3Ek__BackingField_5() const { return ___U3CGasUsedU3Ek__BackingField_5; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CGasUsedU3Ek__BackingField_5() { return &___U3CGasUsedU3Ek__BackingField_5; }
	inline void set_U3CGasUsedU3Ek__BackingField_5(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CGasUsedU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGasUsedU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEffectiveGasPriceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CEffectiveGasPriceU3Ek__BackingField_6)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CEffectiveGasPriceU3Ek__BackingField_6() const { return ___U3CEffectiveGasPriceU3Ek__BackingField_6; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CEffectiveGasPriceU3Ek__BackingField_6() { return &___U3CEffectiveGasPriceU3Ek__BackingField_6; }
	inline void set_U3CEffectiveGasPriceU3Ek__BackingField_6(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CEffectiveGasPriceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEffectiveGasPriceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContractAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CContractAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CContractAddressU3Ek__BackingField_7() const { return ___U3CContractAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CContractAddressU3Ek__BackingField_7() { return &___U3CContractAddressU3Ek__BackingField_7; }
	inline void set_U3CContractAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CContractAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractAddressU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CStatusU3Ek__BackingField_8)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CStatusU3Ek__BackingField_8() const { return ___U3CStatusU3Ek__BackingField_8; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CStatusU3Ek__BackingField_8() { return &___U3CStatusU3Ek__BackingField_8; }
	inline void set_U3CStatusU3Ek__BackingField_8(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CStatusU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatusU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CLogsU3Ek__BackingField_9)); }
	inline JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * get_U3CLogsU3Ek__BackingField_9() const { return ___U3CLogsU3Ek__BackingField_9; }
	inline JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 ** get_address_of_U3CLogsU3Ek__BackingField_9() { return &___U3CLogsU3Ek__BackingField_9; }
	inline void set_U3CLogsU3Ek__BackingField_9(JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * value)
	{
		___U3CLogsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CTypeU3Ek__BackingField_10)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CTypeU3Ek__BackingField_10() const { return ___U3CTypeU3Ek__BackingField_10; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CTypeU3Ek__BackingField_10() { return &___U3CTypeU3Ek__BackingField_10; }
	inline void set_U3CTypeU3Ek__BackingField_10(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogsBloomU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC, ___U3CLogsBloomU3Ek__BackingField_11)); }
	inline String_t* get_U3CLogsBloomU3Ek__BackingField_11() const { return ___U3CLogsBloomU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CLogsBloomU3Ek__BackingField_11() { return &___U3CLogsBloomU3Ek__BackingField_11; }
	inline void set_U3CLogsBloomU3Ek__BackingField_11(String_t* value)
	{
		___U3CLogsBloomU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogsBloomU3Ek__BackingField_11), (void*)value);
	}
};


// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService
struct TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1  : public RuntimeObject
{
public:
	// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService::_transactionManager
	RuntimeObject* ____transactionManager_0;
	// System.Int32 Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService::_retryMiliseconds
	int32_t ____retryMiliseconds_1;

public:
	inline static int32_t get_offset_of__transactionManager_0() { return static_cast<int32_t>(offsetof(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1, ____transactionManager_0)); }
	inline RuntimeObject* get__transactionManager_0() const { return ____transactionManager_0; }
	inline RuntimeObject** get_address_of__transactionManager_0() { return &____transactionManager_0; }
	inline void set__transactionManager_0(RuntimeObject* value)
	{
		____transactionManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transactionManager_0), (void*)value);
	}

	inline static int32_t get_offset_of__retryMiliseconds_1() { return static_cast<int32_t>(offsetof(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1, ____retryMiliseconds_1)); }
	inline int32_t get__retryMiliseconds_1() const { return ____retryMiliseconds_1; }
	inline int32_t* get_address_of__retryMiliseconds_1() { return &____retryMiliseconds_1; }
	inline void set__retryMiliseconds_1(int32_t value)
	{
		____retryMiliseconds_1 = value;
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

// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t8D3DF8CA0A826F0FDB0354953F6635EA80639B88  : public RuntimeObject
{
public:
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass10_0::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_0;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass10_0::transactionInput
	TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * ___transactionInput_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t8D3DF8CA0A826F0FDB0354953F6635EA80639B88, ___U3CU3E4__this_0)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_transactionInput_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t8D3DF8CA0A826F0FDB0354953F6635EA80639B88, ___transactionInput_1)); }
	inline TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * get_transactionInput_1() const { return ___transactionInput_1; }
	inline TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 ** get_address_of_transactionInput_1() { return &___transactionInput_1; }
	inline void set_transactionInput_1(TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * value)
	{
		___transactionInput_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionInput_1), (void*)value);
	}
};


// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t8998D8EEA42628A35EA4D4C3119FA1F75D4B502C  : public RuntimeObject
{
public:
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass3_0::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_0;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass3_0::transactionInput
	TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * ___transactionInput_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t8998D8EEA42628A35EA4D4C3119FA1F75D4B502C, ___U3CU3E4__this_0)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_transactionInput_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t8998D8EEA42628A35EA4D4C3119FA1F75D4B502C, ___transactionInput_1)); }
	inline TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * get_transactionInput_1() const { return ___transactionInput_1; }
	inline TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 ** get_address_of_transactionInput_1() { return &___transactionInput_1; }
	inline void set_transactionInput_1(TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * value)
	{
		___transactionInput_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionInput_1), (void*)value);
	}
};


// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t55A732186A90AD8255C18D6F1E889AD093F7B82B  : public RuntimeObject
{
public:
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass4_0::transactionInput
	TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * ___transactionInput_0;
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass4_0::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_transactionInput_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t55A732186A90AD8255C18D6F1E889AD093F7B82B, ___transactionInput_0)); }
	inline TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * get_transactionInput_0() const { return ___transactionInput_0; }
	inline TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 ** get_address_of_transactionInput_0() { return &___transactionInput_0; }
	inline void set_transactionInput_0(TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * value)
	{
		___transactionInput_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionInput_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t55A732186A90AD8255C18D6F1E889AD093F7B82B, ___U3CU3E4__this_1)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
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


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>
struct ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4, ___m_task_0)); }
	inline Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
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


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// Nethereum.RPC.Eth.EthGetCode
struct EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0  : public RpcRequestResponseHandler_1_t8A1408FB1129B916AE33E5A733E1A4DDC523A324
{
public:
	// Nethereum.RPC.Eth.DTOs.BlockParameter Nethereum.RPC.Eth.EthGetCode::<DefaultBlock>k__BackingField
	BlockParameter_t389BD391D09A5F2F3D3AA63006636974EDB47B99 * ___U3CDefaultBlockU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CDefaultBlockU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0, ___U3CDefaultBlockU3Ek__BackingField_2)); }
	inline BlockParameter_t389BD391D09A5F2F3D3AA63006636974EDB47B99 * get_U3CDefaultBlockU3Ek__BackingField_2() const { return ___U3CDefaultBlockU3Ek__BackingField_2; }
	inline BlockParameter_t389BD391D09A5F2F3D3AA63006636974EDB47B99 ** get_address_of_U3CDefaultBlockU3Ek__BackingField_2() { return &___U3CDefaultBlockU3Ek__BackingField_2; }
	inline void set_U3CDefaultBlockU3Ek__BackingField_2(BlockParameter_t389BD391D09A5F2F3D3AA63006636974EDB47B99 * value)
	{
		___U3CDefaultBlockU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultBlockU3Ek__BackingField_2), (void*)value);
	}
};


// Nethereum.RPC.Eth.Transactions.EthGetTransactionReceipt
struct EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6  : public RpcRequestResponseHandler_1_t044C59FDA40AA18BAC86301F7D2EE96134BDB840
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


// Nethereum.RPC.Eth.DTOs.TransactionInput
struct TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121  : public CallInput_t6D9CD0639FB40A58DFBBB4243D2B72022F2618D8
{
public:
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionInput::<Nonce>k__BackingField
	HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * ___U3CNonceU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList> Nethereum.RPC.Eth.DTOs.TransactionInput::<AccessList>k__BackingField
	List_1_tACB6116B8F6E8DD639F964F9D6BE4818AC14EF96 * ___U3CAccessListU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CNonceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121, ___U3CNonceU3Ek__BackingField_9)); }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * get_U3CNonceU3Ek__BackingField_9() const { return ___U3CNonceU3Ek__BackingField_9; }
	inline HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 ** get_address_of_U3CNonceU3Ek__BackingField_9() { return &___U3CNonceU3Ek__BackingField_9; }
	inline void set_U3CNonceU3Ek__BackingField_9(HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * value)
	{
		___U3CNonceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNonceU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAccessListU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121, ___U3CAccessListU3Ek__BackingField_10)); }
	inline List_1_tACB6116B8F6E8DD639F964F9D6BE4818AC14EF96 * get_U3CAccessListU3Ek__BackingField_10() const { return ___U3CAccessListU3Ek__BackingField_10; }
	inline List_1_tACB6116B8F6E8DD639F964F9D6BE4818AC14EF96 ** get_address_of_U3CAccessListU3Ek__BackingField_10() { return &___U3CAccessListU3Ek__BackingField_10; }
	inline void set_U3CAccessListU3Ek__BackingField_10(List_1_tACB6116B8F6E8DD639F964F9D6BE4818AC14EF96 * value)
	{
		___U3CAccessListU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessListU3Ek__BackingField_10), (void*)value);
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>
struct AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE281D603674DB3D781C59918C4C67B064849B54F * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B, ___m_task_2)); }
	inline Task_1_tE281D603674DB3D781C59918C4C67B064849B54F * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tE281D603674DB3D781C59918C4C67B064849B54F ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tE281D603674DB3D781C59918C4C67B064849B54F * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE281D603674DB3D781C59918C4C67B064849B54F * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tE281D603674DB3D781C59918C4C67B064849B54F * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tE281D603674DB3D781C59918C4C67B064849B54F ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tE281D603674DB3D781C59918C4C67B064849B54F * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_task_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6, ___m_task_2)); }
	inline Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * value)
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


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>
struct ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
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


// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_6;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_7;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_8;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_10;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_11;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_5() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_5)); }
	inline int32_t get_m_state_5() const { return ___m_state_5; }
	inline int32_t* get_address_of_m_state_5() { return &___m_state_5; }
	inline void set_m_state_5(int32_t value)
	{
		___m_state_5 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_6() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_6)); }
	inline int32_t get_m_threadIDExecutingCallbacks_6() const { return ___m_threadIDExecutingCallbacks_6; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_6() { return &___m_threadIDExecutingCallbacks_6; }
	inline void set_m_threadIDExecutingCallbacks_6(int32_t value)
	{
		___m_threadIDExecutingCallbacks_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_8() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_8)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_8() const { return ___m_linkingRegistrations_8; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_8() { return &___m_linkingRegistrations_8; }
	inline void set_m_linkingRegistrations_8(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_10)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_10() const { return ___m_executingCallback_10; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_10() { return &___m_executingCallback_10; }
	inline void set_m_executingCallback_10(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_11)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_11() const { return ___m_timer_11; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_11() { return &___m_timer_11; }
	inline void set_m_timer_11(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_11), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_9;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_12;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_9)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_9() const { return ___s_LinkedTokenCancelDelegate_9; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_9() { return &___s_LinkedTokenCancelDelegate_9; }
	inline void set_s_LinkedTokenCancelDelegate_9(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_12)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_12() const { return ___s_timerCallback_12; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_12() { return &___s_timerCallback_12; }
	inline void set_s_timerCallback_12(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_12), (void*)value);
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


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>
struct Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0, ___m_result_22)); }
	inline TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * get_m_result_22() const { return ___m_result_22; }
	inline TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t90AB62FD0CD0D1B2F9BE247DA82AB73392DEC5DB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t205151E428A30E59468E02F2C47045044D12F629 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t90AB62FD0CD0D1B2F9BE247DA82AB73392DEC5DB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t90AB62FD0CD0D1B2F9BE247DA82AB73392DEC5DB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t90AB62FD0CD0D1B2F9BE247DA82AB73392DEC5DB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t205151E428A30E59468E02F2C47045044D12F629 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t205151E428A30E59468E02F2C47045044D12F629 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t205151E428A30E59468E02F2C47045044D12F629 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// Nethereum.RPC.Eth.Exceptions.ContractDeploymentException
struct ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1  : public Exception_t
{
public:
	// Nethereum.RPC.Eth.DTOs.TransactionReceipt Nethereum.RPC.Eth.Exceptions.ContractDeploymentException::<TransactionReceipt>k__BackingField
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * ___U3CTransactionReceiptU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CTransactionReceiptU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1, ___U3CTransactionReceiptU3Ek__BackingField_17)); }
	inline TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * get_U3CTransactionReceiptU3Ek__BackingField_17() const { return ___U3CTransactionReceiptU3Ek__BackingField_17; }
	inline TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC ** get_address_of_U3CTransactionReceiptU3Ek__BackingField_17() { return &___U3CTransactionReceiptU3Ek__BackingField_17; }
	inline void set_U3CTransactionReceiptU3Ek__BackingField_17(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * value)
	{
		___U3CTransactionReceiptU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransactionReceiptU3Ek__BackingField_17), (void*)value);
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

// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9
struct U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 
{
public:
	// System.Int32 Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_2;
	// System.Func`1<System.Threading.Tasks.Task`1<System.String>> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::deployFunction
	Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * ___deployFunction_3;
	// System.Threading.CancellationTokenSource Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::tokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::<>u__1
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9, ___U3CU3E4__this_2)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_deployFunction_3() { return static_cast<int32_t>(offsetof(U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9, ___deployFunction_3)); }
	inline Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * get_deployFunction_3() const { return ___deployFunction_3; }
	inline Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 ** get_address_of_deployFunction_3() { return &___deployFunction_3; }
	inline void set_deployFunction_3(Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * value)
	{
		___deployFunction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deployFunction_3), (void*)value);
	}

	inline static int32_t get_offset_of_tokenSource_4() { return static_cast<int32_t>(offsetof(U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9, ___tokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_tokenSource_4() const { return ___tokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_tokenSource_4() { return &___tokenSource_4; }
	inline void set_tokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___tokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8
struct U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A 
{
public:
	// System.Int32 Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  ___U3CU3Et__builder_1;
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_2;
	// System.Func`1<System.Threading.Tasks.Task`1<System.String>> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::deployFunction
	Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * ___deployFunction_3;
	// System.Threading.CancellationTokenSource Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::tokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource_4;
	// Nethereum.RPC.Eth.DTOs.TransactionReceipt Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::<transactionReceipt>5__2
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * ___U3CtransactionReceiptU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::<>u__1
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::<>u__2
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___U3CU3E4__this_2)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_deployFunction_3() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___deployFunction_3)); }
	inline Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * get_deployFunction_3() const { return ___deployFunction_3; }
	inline Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 ** get_address_of_deployFunction_3() { return &___deployFunction_3; }
	inline void set_deployFunction_3(Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * value)
	{
		___deployFunction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deployFunction_3), (void*)value);
	}

	inline static int32_t get_offset_of_tokenSource_4() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___tokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_tokenSource_4() const { return ___tokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_tokenSource_4() { return &___tokenSource_4; }
	inline void set_tokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___tokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionReceiptU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___U3CtransactionReceiptU3E5__2_5)); }
	inline TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * get_U3CtransactionReceiptU3E5__2_5() const { return ___U3CtransactionReceiptU3E5__2_5; }
	inline TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC ** get_address_of_U3CtransactionReceiptU3E5__2_5() { return &___U3CtransactionReceiptU3E5__2_5; }
	inline void set_U3CtransactionReceiptU3E5__2_5(TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * value)
	{
		___U3CtransactionReceiptU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionReceiptU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A, ___U3CU3Eu__2_7)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6
struct U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F 
{
public:
	// System.Int32 Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  ___U3CU3Et__builder_1;
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_2;
	// System.String Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::transaction
	String_t* ___transaction_3;
	// System.Threading.CancellationTokenSource Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::tokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource_4;
	// Nethereum.RPC.Eth.Transactions.EthGetTransactionReceipt Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::<getTransactionReceipt>5__2
	EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * ___U3CgetTransactionReceiptU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::<>u__1
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::<>u__2
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___U3CU3E4__this_2)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_transaction_3() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___transaction_3)); }
	inline String_t* get_transaction_3() const { return ___transaction_3; }
	inline String_t** get_address_of_transaction_3() { return &___transaction_3; }
	inline void set_transaction_3(String_t* value)
	{
		___transaction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_3), (void*)value);
	}

	inline static int32_t get_offset_of_tokenSource_4() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___tokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_tokenSource_4() const { return ___tokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_tokenSource_4() { return &___tokenSource_4; }
	inline void set_tokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___tokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgetTransactionReceiptU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___U3CgetTransactionReceiptU3E5__2_5)); }
	inline EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * get_U3CgetTransactionReceiptU3E5__2_5() const { return ___U3CgetTransactionReceiptU3E5__2_5; }
	inline EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 ** get_address_of_U3CgetTransactionReceiptU3E5__2_5() { return &___U3CgetTransactionReceiptU3E5__2_5; }
	inline void set_U3CgetTransactionReceiptU3E5__2_5(EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * value)
	{
		___U3CgetTransactionReceiptU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgetTransactionReceiptU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F, ___U3CU3Eu__2_7)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5
struct U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 
{
public:
	// System.Int32 Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  ___U3CU3Et__builder_1;
	// System.Func`1<System.Threading.Tasks.Task`1<System.String>> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::transactionFunction
	Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * ___transactionFunction_2;
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_3;
	// System.Threading.CancellationTokenSource Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::tokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::<>u__1
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::<>u__2
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_transactionFunction_2() { return static_cast<int32_t>(offsetof(U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625, ___transactionFunction_2)); }
	inline Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * get_transactionFunction_2() const { return ___transactionFunction_2; }
	inline Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 ** get_address_of_transactionFunction_2() { return &___transactionFunction_2; }
	inline void set_transactionFunction_2(Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * value)
	{
		___transactionFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionFunction_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625, ___U3CU3E4__this_3)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_tokenSource_4() { return static_cast<int32_t>(offsetof(U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625, ___tokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_tokenSource_4() const { return ___tokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_tokenSource_4() { return &___tokenSource_4; }
	inline void set_tokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___tokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625, ___U3CU3Eu__2_6)); }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7
struct U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D 
{
public:
	// System.Int32 Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B  ___U3CU3Et__builder_1;
	// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task`1<System.String>>> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::transactionFunctions
	RuntimeObject* ___transactionFunctions_2;
	// Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>4__this
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * ___U3CU3E4__this_3;
	// System.Threading.CancellationTokenSource Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::tokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource_4;
	// System.Collections.Generic.List`1<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<txnList>5__2
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CtxnListU3E5__2_5;
	// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<receipts>5__3
	List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * ___U3CreceiptsU3E5__3_6;
	// System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task`1<System.String>>> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_7;
	// System.Collections.Generic.List`1<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>7__wrap4
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CU3E7__wrap4_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>u__1
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___U3CU3Eu__1_9;
	// System.Collections.Generic.List`1/Enumerator<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>7__wrap5
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  ___U3CU3E7__wrap5_10;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::<>u__2
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  ___U3CU3Eu__2_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_transactionFunctions_2() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___transactionFunctions_2)); }
	inline RuntimeObject* get_transactionFunctions_2() const { return ___transactionFunctions_2; }
	inline RuntimeObject** get_address_of_transactionFunctions_2() { return &___transactionFunctions_2; }
	inline void set_transactionFunctions_2(RuntimeObject* value)
	{
		___transactionFunctions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionFunctions_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3E4__this_3)); }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_tokenSource_4() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___tokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_tokenSource_4() const { return ___tokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_tokenSource_4() { return &___tokenSource_4; }
	inline void set_tokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___tokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtxnListU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CtxnListU3E5__2_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CtxnListU3E5__2_5() const { return ___U3CtxnListU3E5__2_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CtxnListU3E5__2_5() { return &___U3CtxnListU3E5__2_5; }
	inline void set_U3CtxnListU3E5__2_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CtxnListU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtxnListU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptsU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CreceiptsU3E5__3_6)); }
	inline List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * get_U3CreceiptsU3E5__3_6() const { return ___U3CreceiptsU3E5__3_6; }
	inline List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC ** get_address_of_U3CreceiptsU3E5__3_6() { return &___U3CreceiptsU3E5__3_6; }
	inline void set_U3CreceiptsU3E5__3_6(List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * value)
	{
		___U3CreceiptsU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptsU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_7() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3E7__wrap3_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap3_7() const { return ___U3CU3E7__wrap3_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap3_7() { return &___U3CU3E7__wrap3_7; }
	inline void set_U3CU3E7__wrap3_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_8() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3E7__wrap4_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CU3E7__wrap4_8() const { return ___U3CU3E7__wrap4_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CU3E7__wrap4_8() { return &___U3CU3E7__wrap4_8; }
	inline void set_U3CU3E7__wrap4_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CU3E7__wrap4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3Eu__1_9)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap5_10() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3E7__wrap5_10)); }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  get_U3CU3E7__wrap5_10() const { return ___U3CU3E7__wrap5_10; }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * get_address_of_U3CU3E7__wrap5_10() { return &___U3CU3E7__wrap5_10; }
	inline void set_U3CU3E7__wrap5_10(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  value)
	{
		___U3CU3E7__wrap5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap5_10))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap5_10))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_11() { return static_cast<int32_t>(offsetof(U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D, ___U3CU3Eu__2_11)); }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  get_U3CU3Eu__2_11() const { return ___U3CU3Eu__2_11; }
	inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * get_address_of_U3CU3Eu__2_11() { return &___U3CU3Eu__2_11; }
	inline void set_U3CU3Eu__2_11(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  value)
	{
		___U3CU3Eu__2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_11))->___m_task_0), (void*)NULL);
	}
};


// System.Func`1<System.Threading.Tasks.Task`1<System.String>>
struct Func_1_tE3031631B358DBD11550DB02AEF5184F29198698  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9_m00645A718CB18068E19E7470B2D4614EF8E55B54_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m3F8D42E8E893604DC804BC275A3B064B4DA5EDF3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * ___stateMachine1, const RuntimeMethod* method);
// !0 Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_gshared (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m2973A25D644B88C16F702B66BBE8AF9B0DAAABF5_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_mD6E5D08AC6215E0D885F3788260D0183A6E7C33A_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_mC641B5D9149708E95B5ACBAADC36ED09D51EB405_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m0BC53CF14F6659EC0BBB8A818F3CCF9196CB6411_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService::DeployContractAndWaitForReceiptAsync(System.Func`1<System.Threading.Tasks.Task`1<System.String>>,System.Threading.CancellationTokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * TransactionReceiptPollingService_DeployContractAndWaitForReceiptAsync_m487146997036F1A0481D41FDE15461D54A1645EB (TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * __this, Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * ___deployFunction0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0 (Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  (*) (Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::GetAwaiter()
inline ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_inline (ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  (*) (ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5 (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9_m143CD06FE95866ACC234F8DAB12B5F43C8DA45DB (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * ___awaiter0, U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *, U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9_m00645A718CB18068E19E7470B2D4614EF8E55B54_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::GetResult()
inline TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * __this, const RuntimeMethod* method)
{
	return ((  TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * (*) (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.String Nethereum.RPC.Eth.DTOs.TransactionReceipt::get_ContractAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TransactionReceipt_get_ContractAddress_mEB0897B8593ED939B12A986C92669B68A6C6CACC_inline (TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndGetAddressAsyncU3Ed__9_MoveNext_mE0BA401796BC4A0AB7A69E1BD7841BDBBBE644C2 (U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndGetAddressAsyncU3Ed__9_SetStateMachine_m0CB17A75F002158B88F17FB2B1015BEC4A6B8C37 (U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService::SendRequestAndWaitForReceiptAsync(System.Func`1<System.Threading.Tasks.Task`1<System.String>>,System.Threading.CancellationTokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * TransactionReceiptPollingService_SendRequestAndWaitForReceiptAsync_mB21B2E261E2F075E8A46A4454B6504AB77B86374 (TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * __this, Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * ___transactionFunction0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m400D7F016FC72954CC77182FE936D8B8158AC803 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * ___awaiter0, U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *, U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m3F8D42E8E893604DC804BC275A3B064B4DA5EDF3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionReceipt::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * TransactionReceipt_get_Status_m00B5FEB284579CE75B55D157B98589F1D44BC926_inline (TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * __this, const RuntimeMethod* method);
// !0 Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9 (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF * __this, const RuntimeMethod* method)
{
	return ((  BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  (*) (HexRPCType_1_t071A5D5CD88D695FE303DC72328903D298589FAF *, const RuntimeMethod*))HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_gshared)(__this, method);
}
// System.Boolean System.Numerics.BigInteger::op_Inequality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mBCE9D82DD962F9D41383F1285D97A1AC12116114 (BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  ___left0, int64_t ___right1, const RuntimeMethod* method);
// System.Void Nethereum.RPC.Eth.EthGetCode::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthGetCode__ctor_m246F69258515D86CEF266A0BFC1D4CCF44E74CD6 (EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.Eth.EthGetCode::SendRequestAsync(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * EthGetCode_SendRequestAsync_mA9DCA7623C839B857ED538FE4E8A9C80B7EBE082 (EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0 * __this, String_t* ___address0, RuntimeObject * ___id1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.String>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>::GetAwaiter()
inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline (ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  (*) (ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3 (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_mA983A9681052ADF20A61C3173CD5914E9B691E27 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * ___awaiter0, U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m3F8D42E8E893604DC804BC275A3B064B4DA5EDF3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::GetResult()
inline String_t* ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587 (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Nethereum.RPC.Eth.Exceptions.ContractDeploymentException::.ctor(System.String,Nethereum.RPC.Eth.DTOs.TransactionReceipt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractDeploymentException__ctor_m14677FCB24D15E5E9BD599F7902212B87EA5098B (ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1 * __this, String_t* ___message0, TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * ___transactionReceipt1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_MoveNext_m3C480AC1BAAE7A84C40B5B0F3076A59804D87B4E (U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_SetStateMachine_m425CE8B1AC02979F25555F1FC4F6B5DE735CD994 (U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Nethereum.RPC.Eth.Transactions.EthGetTransactionReceipt::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthGetTransactionReceipt__ctor_m0531E65B12FD67FFF58351C85885F36481B0BF8C (EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.Eth.Transactions.EthGetTransactionReceipt::SendRequestAsync(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * EthGetTransactionReceipt_SendRequestAsync_m7317A2602C96508EB0C0D3498F98703913D91BA3 (EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * __this, String_t* ___transactionHash0, RuntimeObject * ___id1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m3C7C7C04DBF3B28AB8499431C445CB72E39D9C85 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * ___awaiter0, U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *, U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m2973A25D644B88C16F702B66BBE8AF9B0DAAABF5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_m1CF07794A72A4AB5575AA9360D8CCEE3D9004FA6 (int32_t ___millisecondsDelay0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m5DC5C43942EA5FA9B8D814C2280E965A876312B3 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_mD6E5D08AC6215E0D885F3788260D0183A6E7C33A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPollForReceiptAsyncU3Ed__6_MoveNext_m4151005BCC158CB02FD20E8D9DFC4FFA4446DEF1 (U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * __this, const RuntimeMethod* method);
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPollForReceiptAsyncU3Ed__6_SetStateMachine_m9A06365A3108D963C35F057AE28B9B7C832C80E8 (U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// !0 System.Func`1<System.Threading.Tasks.Task`1<System.String>>::Invoke()
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3 (Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m12A70E265E47EE4F964000D5B416F47BB7DB3224 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * ___awaiter0, U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_mC641B5D9149708E95B5ACBAADC36ED09D51EB405_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService::PollForReceiptAsync(System.String,System.Threading.CancellationTokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * TransactionReceiptPollingService_PollForReceiptAsync_mAD9B7C0B2E46B407B6C90A55637731BF4E757173 (TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * __this, String_t* ___transaction0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m8CF0B5B53AC9F9578B1995A2FA5DFFB389E0E223 (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * __this, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * ___awaiter0, U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *, U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_mC641B5D9149708E95B5ACBAADC36ED09D51EB405_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_MoveNext_m60C738E0EC69889D455ED88205C038CFC25E5CF2 (U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * __this, const RuntimeMethod* method);
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_SetStateMachine_m32EA7A113D92DB9F808D8C59B9C0C9425B265297 (U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m6E195A319521C9C75C86B17EFE149E557F27AEBD (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * __this, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * ___awaiter0, U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m0BC53CF14F6659EC0BBB8A818F3CCF9196CB6411_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::.ctor()
inline void List_1__ctor_mBEE3C85FC20CE4F393023C6B65A8EE5C2FA0C1B6 (List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.RPC.Eth.DTOs.TransactionReceipt>,Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m2B868D677C948162D330D41A6D282A0125A59A14 (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * __this, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * ___awaiter0, U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *, ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *, U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m0BC53CF14F6659EC0BBB8A818F3CCF9196CB6411_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>::Add(!0)
inline void List_1_Add_mAF29C1EDAAEB6B90989E095F108A507AE8E2F6AE (List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * __this, TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC *, TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mD0BE58966FAC23DC425525F58ACA0993B30EA472 (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m4A12A73C2D59F22B4CCA2DD8C3C772F00E5068E4 (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * __this, List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *, List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_MoveNext_m4C2A016F5D535BB249CF2658F75915DAE1269BCD (U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.TransactionReceipt>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m03774C51841DBD0C55DB615C253ACEA8987CAE95 (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_SetStateMachine_m94164C0D0AF341F522890D4D549F1FE22E29560E (U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m6539C4F16287667EE7775ABFFBF323635D32ABB6 (U3CU3Ec__DisplayClass10_0_t8D3DF8CA0A826F0FDB0354953F6635EA80639B88 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass10_0::<DeployContractAndWaitForReceiptAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * U3CU3Ec__DisplayClass10_0_U3CDeployContractAndWaitForReceiptAsyncU3Eb__0_m7475A93B08B1706871E40BC6FE27368A2B6B4181 (U3CU3Ec__DisplayClass10_0_t8D3DF8CA0A826F0FDB0354953F6635EA80639B88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = L_0->get__transactionManager_0();
		TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * L_2 = __this->get_transactionInput_1();
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_3;
		L_3 = InterfaceFuncInvoker1< Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * >::Invoke(11 /* System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.TransactionManagers.ITransactionManager::SendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput) */, ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9B86AA3A5246004C218FFDDF59B23566D3B7A821 (U3CU3Ec__DisplayClass3_0_t8998D8EEA42628A35EA4D4C3119FA1F75D4B502C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass3_0::<SendRequestAndWaitForReceiptAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * U3CU3Ec__DisplayClass3_0_U3CSendRequestAndWaitForReceiptAsyncU3Eb__0_m9EEE7843CD9923BCD54B994052D67636E4B2A39B (U3CU3Ec__DisplayClass3_0_t8998D8EEA42628A35EA4D4C3119FA1F75D4B502C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = L_0->get__transactionManager_0();
		TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * L_2 = __this->get_transactionInput_1();
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_3;
		L_3 = InterfaceFuncInvoker1< Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * >::Invoke(11 /* System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.TransactionManagers.ITransactionManager::SendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput) */, ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m663D02359DF88910CF11DCF9D94EA0978AFB0033 (U3CU3Ec__DisplayClass4_0_t55A732186A90AD8255C18D6F1E889AD093F7B82B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<>c__DisplayClass4_0::<SendRequestsAndWaitForReceiptAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * U3CU3Ec__DisplayClass4_0_U3CSendRequestsAndWaitForReceiptAsyncU3Eb__0_m69E80BFFB38B57756E957E0E52F21A4AFFDD7C24 (U3CU3Ec__DisplayClass4_0_t55A732186A90AD8255C18D6F1E889AD093F7B82B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_0 = __this->get_U3CU3E4__this_1();
		RuntimeObject* L_1 = L_0->get__transactionManager_0();
		TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * L_2 = __this->get_transactionInput_0();
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_3;
		L_3 = InterfaceFuncInvoker1< Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, TransactionInput_t01B511A27270162D3E726F205A097AB8CB15B121 * >::Invoke(11 /* System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.TransactionManagers.ITransactionManager::SendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput) */, ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndGetAddressAsyncU3Ed__9_MoveNext_mE0BA401796BC4A0AB7A69E1BD7841BDBBBE644C2 (U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9_m143CD06FE95866ACC234F8DAB12B5F43C8DA45DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * V_1 = NULL;
	String_t* V_2 = NULL;
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005c;
			}
		}

IL_0011:
		{
			TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_3 = V_1;
			Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * L_4 = __this->get_deployFunction_3();
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_5 = __this->get_tokenSource_4();
			Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * L_6;
			L_6 = TransactionReceiptPollingService_DeployContractAndWaitForReceiptAsync_m487146997036F1A0481D41FDE15461D54A1645EB(L_3, L_4, L_5, /*hidden argument*/NULL);
			ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  L_7;
			L_7 = Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0(L_6, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
			V_4 = L_7;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_8;
			L_8 = ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_inline((ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
			V_3 = L_8;
			bool L_9;
			L_9 = ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0078;
			}
		}

IL_003c:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_11 = V_3;
			__this->set_U3CU3Eu__1_5(L_11);
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9_m143CD06FE95866ACC234F8DAB12B5F43C8DA45DB((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_12, (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_3), (U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9_m143CD06FE95866ACC234F8DAB12B5F43C8DA45DB_RuntimeMethod_var);
			goto IL_00b4;
		}

IL_005c:
		{
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_13 = __this->get_U3CU3Eu__1_5();
			V_3 = L_13;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * L_14 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_14, sizeof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_0078:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_16;
			L_16 = ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
			String_t* L_17;
			L_17 = TransactionReceipt_get_ContractAddress_mEB0897B8593ED939B12A986C92669B68A6C6CACC_inline(L_16, /*hidden argument*/NULL);
			V_2 = L_17;
			goto IL_00a0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_18, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b4;
	} // end catch (depth: 1)

IL_00a0:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_00b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeployContractAndGetAddressAsyncU3Ed__9_MoveNext_mE0BA401796BC4A0AB7A69E1BD7841BDBBBE644C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * _thisAdjusted = reinterpret_cast<U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 *>(__this + _offset);
	U3CDeployContractAndGetAddressAsyncU3Ed__9_MoveNext_mE0BA401796BC4A0AB7A69E1BD7841BDBBBE644C2(_thisAdjusted, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndGetAddressAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndGetAddressAsyncU3Ed__9_SetStateMachine_m0CB17A75F002158B88F17FB2B1015BEC4A6B8C37 (U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeployContractAndGetAddressAsyncU3Ed__9_SetStateMachine_m0CB17A75F002158B88F17FB2B1015BEC4A6B8C37_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 * _thisAdjusted = reinterpret_cast<U3CDeployContractAndGetAddressAsyncU3Ed__9_tF8DDAF55CD81F4C61FA4F0926082E5718BB433E9 *>(__this + _offset);
	U3CDeployContractAndGetAddressAsyncU3Ed__9_SetStateMachine_m0CB17A75F002158B88F17FB2B1015BEC4A6B8C37(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_MoveNext_m3C480AC1BAAE7A84C40B5B0F3076A59804D87B4E (U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m400D7F016FC72954CC77182FE936D8B8158AC803_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_mA983A9681052ADF20A61C3173CD5914E9B691E27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * V_1 = NULL;
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * V_2 = NULL;
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * V_3 = NULL;
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0068;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0113;
			}
		}

IL_0018:
		{
			TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_4 = V_1;
			Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * L_5 = __this->get_deployFunction_3();
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_6 = __this->get_tokenSource_4();
			Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * L_7;
			L_7 = TransactionReceiptPollingService_SendRequestAndWaitForReceiptAsync_mB21B2E261E2F075E8A46A4454B6504AB77B86374(L_4, L_5, L_6, /*hidden argument*/NULL);
			ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  L_8;
			L_8 = Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0(L_7, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
			V_5 = L_8;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_9;
			L_9 = ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_inline((ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
			V_4 = L_9;
			bool L_10;
			L_10 = ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0085;
			}
		}

IL_0044:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_12 = V_4;
			__this->set_U3CU3Eu__1_6(L_12);
			AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m400D7F016FC72954CC77182FE936D8B8158AC803((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_13, (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), (U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_m400D7F016FC72954CC77182FE936D8B8158AC803_RuntimeMethod_var);
			goto IL_0198;
		}

IL_0068:
		{
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_14 = __this->get_U3CU3Eu__1_6();
			V_4 = L_14;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * L_15 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_15, sizeof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0085:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_17;
			L_17 = ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
			V_3 = L_17;
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_18 = V_3;
			__this->set_U3CtransactionReceiptU3E5__2_5(L_18);
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_19 = __this->get_U3CtransactionReceiptU3E5__2_5();
			HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * L_20;
			L_20 = TransactionReceipt_get_Status_m00B5FEB284579CE75B55D157B98589F1D44BC926_inline(L_19, /*hidden argument*/NULL);
			BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2  L_21;
			L_21 = HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9(L_20, /*hidden argument*/HexRPCType_1_get_Value_m9EBE99746FD588B10FEE49599A7F68819CC0AAF9_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB5F51572CFCA06393E28819DAD57C189747B58F2_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = BigInteger_op_Inequality_mBCE9D82DD962F9D41383F1285D97A1AC12116114(L_21, ((int64_t)((int64_t)1)), /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0154;
			}
		}

IL_00b0:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_23 = __this->get_U3CtransactionReceiptU3E5__2_5();
			String_t* L_24;
			L_24 = TransactionReceipt_get_ContractAddress_mEB0897B8593ED939B12A986C92669B68A6C6CACC_inline(L_23, /*hidden argument*/NULL);
			V_6 = L_24;
			TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_25 = V_1;
			RuntimeObject* L_26 = L_25->get__transactionManager_0();
			RuntimeObject* L_27;
			L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.ITransactionManager::get_Client() */, ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var, L_26);
			EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0 * L_28 = (EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0 *)il2cpp_codegen_object_new(EthGetCode_tFC71BDCE3330982332FD15718F9AF8B33F1697F0_il2cpp_TypeInfo_var);
			EthGetCode__ctor_m246F69258515D86CEF266A0BFC1D4CCF44E74CD6(L_28, L_27, /*hidden argument*/NULL);
			String_t* L_29 = V_6;
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_30;
			L_30 = EthGetCode_SendRequestAsync_mA9DCA7623C839B857ED538FE4E8A9C80B7EBE082(L_28, L_29, NULL, /*hidden argument*/NULL);
			ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  L_31;
			L_31 = Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A(L_30, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
			V_8 = L_31;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_32;
			L_32 = ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline((ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *)(&V_8), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
			V_7 = L_32;
			bool L_33;
			L_33 = ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_7), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_0130;
			}
		}

IL_00ef:
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->set_U3CU3E1__state_0(L_34);
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_35 = V_7;
			__this->set_U3CU3Eu__2_7(L_35);
			AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_mA983A9681052ADF20A61C3173CD5914E9B691E27((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_36, (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_7), (U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A_mA983A9681052ADF20A61C3173CD5914E9B691E27_RuntimeMethod_var);
			goto IL_0198;
		}

IL_0113:
		{
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_37 = __this->get_U3CU3Eu__2_7();
			V_7 = L_37;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * L_38 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_38, sizeof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 ));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
		}

IL_0130:
		{
			String_t* L_40;
			L_40 = ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_7), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
			bool L_41;
			L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, /*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_0154;
			}
		}

IL_0143:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_42 = __this->get_U3CtransactionReceiptU3E5__2_5();
			ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1 * L_43 = (ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractDeploymentException_t83AFA3DD02ED31DE86E6F451A302A47BA7261FB1_il2cpp_TypeInfo_var)));
			ContractDeploymentException__ctor_m14677FCB24D15E5E9BD599F7902212B87EA5098B(L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4065630F4DEC563504C24E26EB31DB20EEAF10E5)), L_42, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_MoveNext_m3C480AC1BAAE7A84C40B5B0F3076A59804D87B4E_RuntimeMethod_var)));
		}

IL_0154:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_44 = __this->get_U3CtransactionReceiptU3E5__2_5();
			V_2 = L_44;
			goto IL_017d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015d;
		}
		throw e;
	}

CATCH_015d:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtransactionReceiptU3E5__2_5((TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC *)NULL);
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_46 = V_9;
		AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_45, L_46, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0198;
	} // end catch (depth: 1)

IL_017d:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtransactionReceiptU3E5__2_5((TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC *)NULL);
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_48 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_47, L_48, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698_RuntimeMethod_var);
	}

IL_0198:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_MoveNext_m3C480AC1BAAE7A84C40B5B0F3076A59804D87B4E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * _thisAdjusted = reinterpret_cast<U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A *>(__this + _offset);
	U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_MoveNext_m3C480AC1BAAE7A84C40B5B0F3076A59804D87B4E(_thisAdjusted, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<DeployContractAndWaitForReceiptAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_SetStateMachine_m425CE8B1AC02979F25555F1FC4F6B5DE735CD994 (U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_SetStateMachine_m425CE8B1AC02979F25555F1FC4F6B5DE735CD994_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A * _thisAdjusted = reinterpret_cast<U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_tE718836E7E807E0B2A7DC176C1D118DFD14D609A *>(__this + _offset);
	U3CDeployContractAndWaitForReceiptAsyncU3Ed__8_SetStateMachine_m425CE8B1AC02979F25555F1FC4F6B5DE735CD994(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPollForReceiptAsyncU3Ed__6_MoveNext_m4151005BCC158CB02FD20E8D9DFC4FFA4446DEF1 (U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m3C7C7C04DBF3B28AB8499431C445CB72E39D9C85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m5DC5C43942EA5FA9B8D814C2280E965A876312B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * V_1 = NULL;
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * V_2 = NULL;
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * V_3 = NULL;
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * G_B12_0 = NULL;
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * G_B11_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0086;
				}
				case 1:
				{
					goto IL_010f;
				}
				case 2:
				{
					goto IL_019a;
				}
			}
		}

IL_0020:
		{
			TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_3 = V_1;
			RuntimeObject* L_4 = L_3->get__transactionManager_0();
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.ITransactionManager::get_Client() */, ITransactionManager_t859770ACABFA2EFDDBC7E131CA511036213ADB87_il2cpp_TypeInfo_var, L_4);
			EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * L_6 = (EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 *)il2cpp_codegen_object_new(EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6_il2cpp_TypeInfo_var);
			EthGetTransactionReceipt__ctor_m0531E65B12FD67FFF58351C85885F36481B0BF8C(L_6, L_5, /*hidden argument*/NULL);
			__this->set_U3CgetTransactionReceiptU3E5__2_5(L_6);
			EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * L_7 = __this->get_U3CgetTransactionReceiptU3E5__2_5();
			String_t* L_8 = __this->get_transaction_3();
			Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * L_9;
			L_9 = EthGetTransactionReceipt_SendRequestAsync_m7317A2602C96508EB0C0D3498F98703913D91BA3(L_7, L_8, NULL, /*hidden argument*/NULL);
			ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  L_10;
			L_10 = Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0(L_9, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
			V_5 = L_10;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_11;
			L_11 = ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_inline((ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
			V_4 = L_11;
			bool L_12;
			L_12 = ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_00a3;
			}
		}

IL_0062:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_14 = V_4;
			__this->set_U3CU3Eu__1_6(L_14);
			AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m3C7C7C04DBF3B28AB8499431C445CB72E39D9C85((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_15, (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), (U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m3C7C7C04DBF3B28AB8499431C445CB72E39D9C85_RuntimeMethod_var);
			goto IL_0204;
		}

IL_0086:
		{
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_16 = __this->get_U3CU3Eu__1_6();
			V_4 = L_16;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * L_17 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_17, sizeof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_00a3:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_19;
			L_19 = ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
			V_3 = L_19;
			goto IL_01bf;
		}

IL_00b0:
		{
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_20 = __this->get_tokenSource_4();
			if (!L_20)
			{
				goto IL_014d;
			}
		}

IL_00bb:
		{
			TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_21 = V_1;
			int32_t L_22 = L_21->get__retryMiliseconds_1();
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_23 = __this->get_tokenSource_4();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_24;
			L_24 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_25;
			L_25 = Task_Delay_m1CF07794A72A4AB5575AA9360D8CCEE3D9004FA6(L_22, L_24, /*hidden argument*/NULL);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_26;
			L_26 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_25, (bool)0, /*hidden argument*/NULL);
			V_7 = L_26;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_27;
			L_27 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_7), /*hidden argument*/NULL);
			V_6 = L_27;
			bool L_28;
			L_28 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), /*hidden argument*/NULL);
			if (L_28)
			{
				goto IL_012c;
			}
		}

IL_00eb:
		{
			int32_t L_29 = 1;
			V_0 = L_29;
			__this->set_U3CU3E1__state_0(L_29);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_30 = V_6;
			__this->set_U3CU3Eu__2_7(L_30);
			AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m5DC5C43942EA5FA9B8D814C2280E965A876312B3((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_31, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), (U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m5DC5C43942EA5FA9B8D814C2280E965A876312B3_RuntimeMethod_var);
			goto IL_0204;
		}

IL_010f:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_32 = __this->get_U3CU3Eu__2_7();
			V_6 = L_32;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_33 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_33, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_34 = (-1);
			V_0 = L_34;
			__this->set_U3CU3E1__state_0(L_34);
		}

IL_012c:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_6), /*hidden argument*/NULL);
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_35 = __this->get_tokenSource_4();
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_36 = L_35;
			G_B11_0 = L_36;
			if (L_36)
			{
				G_B12_0 = L_36;
				goto IL_013f;
			}
		}

IL_013c:
		{
			goto IL_014d;
		}

IL_013f:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_37;
			L_37 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(G_B12_0, /*hidden argument*/NULL);
			V_8 = L_37;
			CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_8), /*hidden argument*/NULL);
		}

IL_014d:
		{
			EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 * L_38 = __this->get_U3CgetTransactionReceiptU3E5__2_5();
			String_t* L_39 = __this->get_transaction_3();
			Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * L_40;
			L_40 = EthGetTransactionReceipt_SendRequestAsync_m7317A2602C96508EB0C0D3498F98703913D91BA3(L_38, L_39, NULL, /*hidden argument*/NULL);
			ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  L_41;
			L_41 = Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0(L_40, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
			V_5 = L_41;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_42;
			L_42 = ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_inline((ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
			V_4 = L_42;
			bool L_43;
			L_43 = ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
			if (L_43)
			{
				goto IL_01b7;
			}
		}

IL_0179:
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_45 = V_4;
			__this->set_U3CU3Eu__1_6(L_45);
			AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m3C7C7C04DBF3B28AB8499431C445CB72E39D9C85((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_46, (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), (U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F_m3C7C7C04DBF3B28AB8499431C445CB72E39D9C85_RuntimeMethod_var);
			goto IL_0204;
		}

IL_019a:
		{
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_47 = __this->get_U3CU3Eu__1_6();
			V_4 = L_47;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * L_48 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_48, sizeof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 ));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->set_U3CU3E1__state_0(L_49);
		}

IL_01b7:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_50;
			L_50 = ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
			V_3 = L_50;
		}

IL_01bf:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_51 = V_3;
			if (!L_51)
			{
				goto IL_00b0;
			}
		}

IL_01c5:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_52 = V_3;
			V_2 = L_52;
			goto IL_01e9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c9;
		}
		throw e;
	}

CATCH_01c9:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CgetTransactionReceiptU3E5__2_5((EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 *)NULL);
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_53 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_54 = V_9;
		AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_53, L_54, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0204;
	} // end catch (depth: 1)

IL_01e9:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CgetTransactionReceiptU3E5__2_5((EthGetTransactionReceipt_t7E8C0D7D35F329D63D85FC0589663BE4B01937B6 *)NULL);
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_56 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_55, L_56, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698_RuntimeMethod_var);
	}

IL_0204:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPollForReceiptAsyncU3Ed__6_MoveNext_m4151005BCC158CB02FD20E8D9DFC4FFA4446DEF1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * _thisAdjusted = reinterpret_cast<U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F *>(__this + _offset);
	U3CPollForReceiptAsyncU3Ed__6_MoveNext_m4151005BCC158CB02FD20E8D9DFC4FFA4446DEF1(_thisAdjusted, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<PollForReceiptAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPollForReceiptAsyncU3Ed__6_SetStateMachine_m9A06365A3108D963C35F057AE28B9B7C832C80E8 (U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPollForReceiptAsyncU3Ed__6_SetStateMachine_m9A06365A3108D963C35F057AE28B9B7C832C80E8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F * _thisAdjusted = reinterpret_cast<U3CPollForReceiptAsyncU3Ed__6_tF48C6267CDC64E9540CD98456BEED7576486260F *>(__this + _offset);
	U3CPollForReceiptAsyncU3Ed__6_SetStateMachine_m9A06365A3108D963C35F057AE28B9B7C832C80E8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_MoveNext_m60C738E0EC69889D455ED88205C038CFC25E5CF2 (U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m8CF0B5B53AC9F9578B1995A2FA5DFFB389E0E223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m12A70E265E47EE4F964000D5B416F47BB7DB3224_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * V_1 = NULL;
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * V_2 = NULL;
	String_t* V_3 = NULL;
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0061;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00ce;
			}
		}

IL_0018:
		{
			Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * L_4 = __this->get_transactionFunction_2();
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_5;
			L_5 = Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3(L_4, /*hidden argument*/Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3_RuntimeMethod_var);
			ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  L_6;
			L_6 = Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A(L_5, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
			V_5 = L_6;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_7;
			L_7 = ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline((ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
			V_4 = L_7;
			bool L_8;
			L_8 = ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007e;
			}
		}

IL_003d:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_10 = V_4;
			__this->set_U3CU3Eu__1_5(L_10);
			AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m12A70E265E47EE4F964000D5B416F47BB7DB3224((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_11, (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_4), (U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m12A70E265E47EE4F964000D5B416F47BB7DB3224_RuntimeMethod_var);
			goto IL_0122;
		}

IL_0061:
		{
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_12 = __this->get_U3CU3Eu__1_5();
			V_4 = L_12;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * L_13 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_13, sizeof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_007e:
		{
			String_t* L_15;
			L_15 = ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
			V_3 = L_15;
			TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_16 = V_1;
			String_t* L_17 = V_3;
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_18 = __this->get_tokenSource_4();
			Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * L_19;
			L_19 = TransactionReceiptPollingService_PollForReceiptAsync_mAD9B7C0B2E46B407B6C90A55637731BF4E757173(L_16, L_17, L_18, /*hidden argument*/NULL);
			ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  L_20;
			L_20 = Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0(L_19, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
			V_7 = L_20;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_21;
			L_21 = ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_inline((ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 *)(&V_7), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
			V_6 = L_21;
			bool L_22;
			L_22 = ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00eb;
			}
		}

IL_00ad:
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->set_U3CU3E1__state_0(L_23);
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_24 = V_6;
			__this->set_U3CU3Eu__2_6(L_24);
			AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m8CF0B5B53AC9F9578B1995A2FA5DFFB389E0E223((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_25, (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_6), (U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625_m8CF0B5B53AC9F9578B1995A2FA5DFFB389E0E223_RuntimeMethod_var);
			goto IL_0122;
		}

IL_00ce:
		{
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_26 = __this->get_U3CU3Eu__2_6();
			V_6 = L_26;
			ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * L_27 = __this->get_address_of_U3CU3Eu__2_6();
			il2cpp_codegen_initobj(L_27, sizeof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 ));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
		}

IL_00eb:
		{
			TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_29;
			L_29 = ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_6), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
			V_2 = L_29;
			goto IL_010e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f5;
		}
		throw e;
	}

CATCH_00f5:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_8;
		AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_30, L_31, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mECDB3C6E6B85B8D4BF6EF5E7CC65BCF3D729B4C1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0122;
	} // end catch (depth: 1)

IL_010e:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_33 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m202C42B6F210D1B0F1DB23590AFC7B73E1CE0698_RuntimeMethod_var);
	}

IL_0122:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_MoveNext_m60C738E0EC69889D455ED88205C038CFC25E5CF2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * _thisAdjusted = reinterpret_cast<U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 *>(__this + _offset);
	U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_MoveNext_m60C738E0EC69889D455ED88205C038CFC25E5CF2(_thisAdjusted, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestAndWaitForReceiptAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_SetStateMachine_m32EA7A113D92DB9F808D8C59B9C0C9425B265297 (U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E((AsyncTaskMethodBuilder_1_t168DA05FF60108F06C04E37CEB62A78F19A41ED6 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m0479E5F98EAE0478B5AEB801761F174AEC6E866E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_SetStateMachine_m32EA7A113D92DB9F808D8C59B9C0C9425B265297_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 * _thisAdjusted = reinterpret_cast<U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_tD55BD53B4EDE6E906940A55E3F93C1C3DD7C2625 *>(__this + _offset);
	U3CSendRequestAndWaitForReceiptAsyncU3Ed__5_SetStateMachine_m32EA7A113D92DB9F808D8C59B9C0C9425B265297(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_MoveNext_m4C2A016F5D535BB249CF2658F75915DAE1269BCD (U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m2B868D677C948162D330D41A6D282A0125A59A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m6E195A319521C9C75C86B17EFE149E557F27AEBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4A12A73C2D59F22B4CCA2DD8C3C772F00E5068E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t355F64E22304A1CE24904CE9C64AB51FF1546848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2AA587485B8DEDA0D325D813466140B2FDCA7B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF29C1EDAAEB6B90989E095F108A507AE8E2F6AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBEE3C85FC20CE4F393023C6B65A8EE5C2FA0C1B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * V_1 = NULL;
	List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * V_2 = NULL;
	String_t* V_3 = NULL;
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * V_7 = NULL;
	ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0034;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_011c;
			}
		}

IL_0018:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_4, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			__this->set_U3CtxnListU3E5__2_5(L_4);
			RuntimeObject* L_5 = __this->get_transactionFunctions_2();
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task`1<System.String>>>::GetEnumerator() */, IEnumerable_1_t355F64E22304A1CE24904CE9C64AB51FF1546848_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap3_7(L_6);
		}

IL_0034:
		{
		}

IL_0035:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0097;
				}
			}

IL_0038:
			{
				goto IL_00cf;
			}

IL_003d:
			{
				RuntimeObject* L_8 = __this->get_U3CU3E7__wrap3_7();
				Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * L_9;
				L_9 = InterfaceFuncInvoker0< Func_1_tE3031631B358DBD11550DB02AEF5184F29198698 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task`1<System.String>>>::get_Current() */, IEnumerator_1_t2AA587485B8DEDA0D325D813466140B2FDCA7B9C_il2cpp_TypeInfo_var, L_8);
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = __this->get_U3CtxnListU3E5__2_5();
				__this->set_U3CU3E7__wrap4_8(L_10);
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_11;
				L_11 = Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3(L_9, /*hidden argument*/Func_1_Invoke_mCA74F4A820C73CABA54F50B96A44F79FA9C92DD3_RuntimeMethod_var);
				ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  L_12;
				L_12 = Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A(L_11, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
				V_5 = L_12;
				ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_13;
				L_13 = ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline((ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
				V_4 = L_13;
				bool L_14;
				L_14 = ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00b4;
				}
			}

IL_0073:
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
				ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_16 = V_4;
				__this->set_U3CU3Eu__1_9(L_16);
				AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m6E195A319521C9C75C86B17EFE149E557F27AEBD((AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *)L_17, (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_4), (U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m6E195A319521C9C75C86B17EFE149E557F27AEBD_RuntimeMethod_var);
				IL2CPP_LEAVE(0x238, FINALLY_00e1);
			}

IL_0097:
			{
				ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_18 = __this->get_U3CU3Eu__1_9();
				V_4 = L_18;
				ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * L_19 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_19, sizeof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 ));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->set_U3CU3E1__state_0(L_20);
			}

IL_00b4:
			{
				String_t* L_21;
				L_21 = ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
				V_3 = L_21;
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_22 = __this->get_U3CU3E7__wrap4_8();
				String_t* L_23 = V_3;
				List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_22, L_23, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
				__this->set_U3CU3E7__wrap4_8((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
			}

IL_00cf:
			{
				RuntimeObject* L_24 = __this->get_U3CU3E7__wrap3_7();
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_003d;
				}
			}

IL_00df:
			{
				IL2CPP_LEAVE(0xF9, FINALLY_00e1);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e1;
		}

FINALLY_00e1:
		{ // begin finally (depth: 2)
			{
				int32_t L_26 = V_0;
				if ((((int32_t)L_26) >= ((int32_t)0)))
				{
					goto IL_00f8;
				}
			}

IL_00e5:
			{
				RuntimeObject* L_27 = __this->get_U3CU3E7__wrap3_7();
				if (!L_27)
				{
					goto IL_00f8;
				}
			}

IL_00ed:
			{
				RuntimeObject* L_28 = __this->get_U3CU3E7__wrap3_7();
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
			}

IL_00f8:
			{
				IL2CPP_END_FINALLY(225)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(225)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x238, IL_0238)
			IL2CPP_JUMP_TBL(0xF9, IL_00f9)
		}

IL_00f9:
		{
			__this->set_U3CU3E7__wrap3_7((RuntimeObject*)NULL);
			List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * L_29 = (List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC *)il2cpp_codegen_object_new(List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC_il2cpp_TypeInfo_var);
			List_1__ctor_mBEE3C85FC20CE4F393023C6B65A8EE5C2FA0C1B6(L_29, /*hidden argument*/List_1__ctor_mBEE3C85FC20CE4F393023C6B65A8EE5C2FA0C1B6_RuntimeMethod_var);
			__this->set_U3CreceiptsU3E5__3_6(L_29);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_30 = __this->get_U3CtxnListU3E5__2_5();
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_31;
			L_31 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_30, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap5_10(L_31);
		}

IL_011c:
		{
		}

IL_011d:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_32 = V_0;
				if ((((int32_t)L_32) == ((int32_t)1)))
				{
					goto IL_017f;
				}
			}

IL_0121:
			{
				goto IL_01b2;
			}

IL_0126:
			{
				Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_33 = __this->get_address_of_U3CU3E7__wrap5_10();
				String_t* L_34;
				L_34 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_33, /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
				V_6 = L_34;
				TransactionReceiptPollingService_t166A82D85802067E63FB83370D0F710C68C07DB1 * L_35 = V_1;
				String_t* L_36 = V_6;
				CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_37 = __this->get_tokenSource_4();
				Task_1_t724753A70C99D0D79459493E5F2C7BADAD8C37A0 * L_38;
				L_38 = TransactionReceiptPollingService_PollForReceiptAsync_mAD9B7C0B2E46B407B6C90A55637731BF4E757173(L_35, L_36, L_37, /*hidden argument*/NULL);
				ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265  L_39;
				L_39 = Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0(L_38, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_mA933D6FDB4870DAA6655581AD1E6D60D870359F0_RuntimeMethod_var);
				V_9 = L_39;
				ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_40;
				L_40 = ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_inline((ConfiguredTaskAwaitable_1_tEA6D6F87DF663A5120F7782BDBD60F0D47ED6265 *)(&V_9), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1054FAF5452ED286DABCF624E5F07E21ED13978F_RuntimeMethod_var);
				V_8 = L_40;
				bool L_41;
				L_41 = ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_8), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mA15FB2904795175583142334176C098D82D151D5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_019c;
				}
			}

IL_015b:
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->set_U3CU3E1__state_0(L_42);
				ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_43 = V_8;
				__this->set_U3CU3Eu__2_11(L_43);
				AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * L_44 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m2B868D677C948162D330D41A6D282A0125A59A14((AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *)L_44, (ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_8), (U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4_TisU3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D_m2B868D677C948162D330D41A6D282A0125A59A14_RuntimeMethod_var);
				IL2CPP_LEAVE(0x238, FINALLY_01c4);
			}

IL_017f:
			{
				ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4  L_45 = __this->get_U3CU3Eu__2_11();
				V_8 = L_45;
				ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 * L_46 = __this->get_address_of_U3CU3Eu__2_11();
				il2cpp_codegen_initobj(L_46, sizeof(ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 ));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->set_U3CU3E1__state_0(L_47);
			}

IL_019c:
			{
				TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_48;
				L_48 = ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B((ConfiguredTaskAwaiter_t67E68E79E9E4AA58C46BF2446E4660424D6C99D4 *)(&V_8), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mA933F76AD0C0890DE531B734CA4CE9DED8F7C43B_RuntimeMethod_var);
				V_7 = L_48;
				List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * L_49 = __this->get_U3CreceiptsU3E5__3_6();
				TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * L_50 = V_7;
				List_1_Add_mAF29C1EDAAEB6B90989E095F108A507AE8E2F6AE(L_49, L_50, /*hidden argument*/List_1_Add_mAF29C1EDAAEB6B90989E095F108A507AE8E2F6AE_RuntimeMethod_var);
			}

IL_01b2:
			{
				Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_51 = __this->get_address_of_U3CU3E7__wrap5_10();
				bool L_52;
				L_52 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_51, /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
				if (L_52)
				{
					goto IL_0126;
				}
			}

IL_01c2:
			{
				IL2CPP_LEAVE(0x1DA, FINALLY_01c4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01c4;
		}

FINALLY_01c4:
		{ // begin finally (depth: 2)
			{
				int32_t L_53 = V_0;
				if ((((int32_t)L_53) >= ((int32_t)0)))
				{
					goto IL_01d9;
				}
			}

IL_01c8:
			{
				Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_54 = __this->get_address_of_U3CU3E7__wrap5_10();
				Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_54, /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
			}

IL_01d9:
			{
				IL2CPP_END_FINALLY(452)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(452)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x238, IL_0238)
			IL2CPP_JUMP_TBL(0x1DA, IL_01da)
		}

IL_01da:
		{
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_55 = __this->get_address_of_U3CU3E7__wrap5_10();
			il2cpp_codegen_initobj(L_55, sizeof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B ));
			List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * L_56 = __this->get_U3CreceiptsU3E5__3_6();
			V_2 = L_56;
			goto IL_0216;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ef;
		}
		throw e;
	}

CATCH_01ef:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtxnListU3E5__2_5((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		__this->set_U3CreceiptsU3E5__3_6((List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC *)NULL);
		AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_58 = V_10;
		AsyncTaskMethodBuilder_1_SetException_mD0BE58966FAC23DC425525F58ACA0993B30EA472((AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *)L_57, L_58, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD0BE58966FAC23DC425525F58ACA0993B30EA472_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0238;
	} // end catch (depth: 1)

IL_0216:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtxnListU3E5__2_5((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		__this->set_U3CreceiptsU3E5__3_6((List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC *)NULL);
		AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * L_59 = __this->get_address_of_U3CU3Et__builder_1();
		List_1_t8B606104F1C0F9BA79FEBCC07616DA7583A623DC * L_60 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m4A12A73C2D59F22B4CCA2DD8C3C772F00E5068E4((AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *)L_59, L_60, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m4A12A73C2D59F22B4CCA2DD8C3C772F00E5068E4_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_MoveNext_m4C2A016F5D535BB249CF2658F75915DAE1269BCD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * _thisAdjusted = reinterpret_cast<U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D *>(__this + _offset);
	U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_MoveNext_m4C2A016F5D535BB249CF2658F75915DAE1269BCD(_thisAdjusted, method);
}
// System.Void Nethereum.RPC.TransactionReceipts.TransactionReceiptPollingService/<SendRequestsAndWaitForReceiptAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_SetStateMachine_m94164C0D0AF341F522890D4D549F1FE22E29560E (U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m03774C51841DBD0C55DB615C253ACEA8987CAE95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m03774C51841DBD0C55DB615C253ACEA8987CAE95((AsyncTaskMethodBuilder_1_tA8A04210BF5D8AA54000FA064C65B577FCE8852B *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m03774C51841DBD0C55DB615C253ACEA8987CAE95_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_SetStateMachine_m94164C0D0AF341F522890D4D549F1FE22E29560E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D * _thisAdjusted = reinterpret_cast<U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_tE6AC5B210BA4EBD1C50947930A1382CF01C7CC9D *>(__this + _offset);
	U3CSendRequestsAndWaitForReceiptAsyncU3Ed__7_SetStateMachine_m94164C0D0AF341F522890D4D549F1FE22E29560E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TransactionReceipt_get_ContractAddress_mEB0897B8593ED939B12A986C92669B68A6C6CACC_inline (TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractAddressU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * TransactionReceipt_get_Status_m00B5FEB284579CE75B55D157B98589F1D44BC926_inline (TransactionReceipt_t871EEC0874CE7383FF1BB97071658BC8F7A33BEC * __this, const RuntimeMethod* method)
{
	{
		HexBigInteger_t836E2BA02881DE4382959F8ACAFF0C7A75462C81 * L_0 = __this->get_U3CStatusU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
