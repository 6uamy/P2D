#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// IEnumeratorAwaitExtensions/CoroutineWrapper`1<System.Object>
struct CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>
struct SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>
struct SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Networking.UnityWebRequest>
struct SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB;
// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B;
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4;
// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityAsyncAwaitUtil.AsyncCoroutineRunner
struct AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t95FF063A5295003D96C3C680EDF773DDF830DBF9;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.OperatingSystem
struct OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463;
// System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671;
// System.Diagnostics.ProcessModule
struct ProcessModule_tE3AE82E21530BD04879D2BE35E9EE885C525C21C;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F;
// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_tDDED47C3341F28742AE0F02339112484787F873D;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WaitForBackgroundThread
struct WaitForBackgroundThread_t8D30A5FA4AAD1E2198EF7CE29009329F92D12F52;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// WaitForUpdate
struct WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// UnityEngine.WaitWhile
struct WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61;
// AwaitExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543;
// IEnumeratorAwaitExtensions/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA;
// IEnumeratorAwaitExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3;
// IEnumeratorAwaitExtensions/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450;
// IEnumeratorAwaitExtensions/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C;
// IEnumeratorAwaitExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91;
// IEnumeratorAwaitExtensions/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// TaskExtensions/<AsIEnumerator>d__0
struct U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432;
// WaitForBackgroundThread/<>c
struct U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14;
// IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1
struct U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A;
// IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3
struct U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597;
// IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4
struct U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0;
// IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral723B5D4147D9C617FB4222E4A74939809B839C9A;
IL2CPP_EXTERN_C String_t* _stringLiteral88A11CF656D1C830877B6FE74FB6AD1CDAD939D8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_m46390A4279C9DE9DC94F4C13DE07842A874A6670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_mB8F82A43CE1AB8FDFEF1505359954DA0CD3C5BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoroutineWrapper_1_Run_m7582B4143579D6E377414C2C751E7B6FD5A88A32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoroutineWrapper_1__ctor_mE80A64A3CF178A0616D42D3B748B64DDC742AA46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_m684281DE9FE93CD47ABB2E44D85136029FF301EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_m71ACB803362FE91CEE18EC9808007D7CF0300C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisUnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_m62287B0FF5C7B3CE71C51EF3FCF915F9215D887C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_Complete_mEB02E4978E5018FDB43FD8F90706E51F240FF9A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_mC042A076850D69CA0FC23AB69B3448960FD06C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m222C3A33EEF0C1B77D7920634E735AE57285E949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAssetBundleCreateRequestU3Ed__1_System_Collections_IEnumerator_Reset_mA855587648EAB674A560BB4092565FBB7FFA75E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAssetBundleRequestU3Ed__3_System_Collections_IEnumerator_Reset_m56C742FBE645F087DE96A101018301502278C3EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResourceRequestU3Ed__4_System_Collections_IEnumerator_Reset_mA7679790EEECE93F0CA0DEA067F35407CB9076C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_Reset_mCDC5763AF93C059E8040867D7226C05ED80EA41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m7BCFF4B80FF08DE716F7F4B0512FF5D67DE006F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m94CE9A3B6E3238317976DC93249643436262D2B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CGetAwaiterU3Eb__0_m1749E7D7189C2E78D9A9DAF2C4D14B40D302CB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CGetAwaiterU3Eb__0_mAFE0213E4534A564D938CA5A4E2BC502F0DAA930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_mB00DFC642646431D34955F6AD2E2B8A2992B6320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CGetAwaiterReturnVoidU3Eb__0_mEF52FE7D9BB64F360CA8ADCAFC67C89B452D34C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CRunOnUnitySchedulerU3Eb__0_m0231F20C8B3A274B6FF41ABD11134601D62858CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGetAwaiterU3Eb__0_mA006D7B2E5AF16E4FE8E73BE433BC34222471A0E_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// IEnumeratorAwaitExtensions/CoroutineWrapper`1<System.Object>
struct CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014  : public RuntimeObject
{
public:
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T> IEnumeratorAwaitExtensions/CoroutineWrapper`1::_awaiter
	SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * ____awaiter_0;
	// System.Collections.Generic.Stack`1<System.Collections.IEnumerator> IEnumeratorAwaitExtensions/CoroutineWrapper`1::_processStack
	Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B * ____processStack_1;

public:
	inline static int32_t get_offset_of__awaiter_0() { return static_cast<int32_t>(offsetof(CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014, ____awaiter_0)); }
	inline SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * get__awaiter_0() const { return ____awaiter_0; }
	inline SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 ** get_address_of__awaiter_0() { return &____awaiter_0; }
	inline void set__awaiter_0(SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * value)
	{
		____awaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____awaiter_0), (void*)value);
	}

	inline static int32_t get_offset_of__processStack_1() { return static_cast<int32_t>(offsetof(CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014, ____processStack_1)); }
	inline Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B * get__processStack_1() const { return ____processStack_1; }
	inline Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B ** get_address_of__processStack_1() { return &____processStack_1; }
	inline void set__processStack_1(Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B * value)
	{
		____processStack_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processStack_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>
struct SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671  : public RuntimeObject
{
public:
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_exception
	Exception_t * ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____continuation_2;
	// T IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_result
	AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * ____result_3;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671, ____continuation_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__continuation_2() const { return ____continuation_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__continuation_2() { return &____continuation_2; }
	inline void set__continuation_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____continuation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_2), (void*)value);
	}

	inline static int32_t get_offset_of__result_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671, ____result_3)); }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * get__result_3() const { return ____result_3; }
	inline AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 ** get_address_of__result_3() { return &____result_3; }
	inline void set__result_3(AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * value)
	{
		____result_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____result_3), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7  : public RuntimeObject
{
public:
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_exception
	Exception_t * ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____continuation_2;
	// T IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_result
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ____result_3;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7, ____continuation_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__continuation_2() const { return ____continuation_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__continuation_2() { return &____continuation_2; }
	inline void set__continuation_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____continuation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_2), (void*)value);
	}

	inline static int32_t get_offset_of__result_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7, ____result_3)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get__result_3() const { return ____result_3; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of__result_3() { return &____result_3; }
	inline void set__result_3(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		____result_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____result_3), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935  : public RuntimeObject
{
public:
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_exception
	Exception_t * ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____continuation_2;
	// T IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_result
	RuntimeObject * ____result_3;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935, ____continuation_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__continuation_2() const { return ____continuation_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__continuation_2() { return &____continuation_2; }
	inline void set__continuation_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____continuation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_2), (void*)value);
	}

	inline static int32_t get_offset_of__result_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935, ____result_3)); }
	inline RuntimeObject * get__result_3() const { return ____result_3; }
	inline RuntimeObject ** get_address_of__result_3() { return &____result_3; }
	inline void set__result_3(RuntimeObject * value)
	{
		____result_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____result_3), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>
struct SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9  : public RuntimeObject
{
public:
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_exception
	Exception_t * ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____continuation_2;
	// T IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_result
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____result_3;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9, ____continuation_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__continuation_2() const { return ____continuation_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__continuation_2() { return &____continuation_2; }
	inline void set__continuation_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____continuation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_2), (void*)value);
	}

	inline static int32_t get_offset_of__result_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9, ____result_3)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__result_3() const { return ____result_3; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__result_3() { return &____result_3; }
	inline void set__result_3(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____result_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____result_3), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Networking.UnityWebRequest>
struct SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB  : public RuntimeObject
{
public:
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_exception
	Exception_t * ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____continuation_2;
	// T IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1::_result
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____result_3;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB, ____continuation_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__continuation_2() const { return ____continuation_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__continuation_2() { return &____continuation_2; }
	inline void set__continuation_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____continuation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_2), (void*)value);
	}

	inline static int32_t get_offset_of__result_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB, ____result_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__result_3() const { return ____result_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__result_3() { return &____result_3; }
	inline void set__result_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____result_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____result_3), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// AwaitExtensions
struct AwaitExtensions_tDFA7A151A3DB5496D9B902A0B6BA08A4DB0E73CF  : public RuntimeObject
{
public:

public:
};


// Awaiters
struct Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C  : public RuntimeObject
{
public:

public:
};

struct Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields
{
public:
	// WaitForUpdate Awaiters::_waitForUpdate
	WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * ____waitForUpdate_0;
	// UnityEngine.WaitForFixedUpdate Awaiters::_waitForFixedUpdate
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ____waitForFixedUpdate_1;
	// UnityEngine.WaitForEndOfFrame Awaiters::_waitForEndOfFrame
	WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * ____waitForEndOfFrame_2;

public:
	inline static int32_t get_offset_of__waitForUpdate_0() { return static_cast<int32_t>(offsetof(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields, ____waitForUpdate_0)); }
	inline WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * get__waitForUpdate_0() const { return ____waitForUpdate_0; }
	inline WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE ** get_address_of__waitForUpdate_0() { return &____waitForUpdate_0; }
	inline void set__waitForUpdate_0(WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * value)
	{
		____waitForUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForUpdate_0), (void*)value);
	}

	inline static int32_t get_offset_of__waitForFixedUpdate_1() { return static_cast<int32_t>(offsetof(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields, ____waitForFixedUpdate_1)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get__waitForFixedUpdate_1() const { return ____waitForFixedUpdate_1; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of__waitForFixedUpdate_1() { return &____waitForFixedUpdate_1; }
	inline void set__waitForFixedUpdate_1(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		____waitForFixedUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForFixedUpdate_1), (void*)value);
	}

	inline static int32_t get_offset_of__waitForEndOfFrame_2() { return static_cast<int32_t>(offsetof(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields, ____waitForEndOfFrame_2)); }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * get__waitForEndOfFrame_2() const { return ____waitForEndOfFrame_2; }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 ** get_address_of__waitForEndOfFrame_2() { return &____waitForEndOfFrame_2; }
	inline void set__waitForEndOfFrame_2(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * value)
	{
		____waitForEndOfFrame_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitForEndOfFrame_2), (void*)value);
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


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions
struct IEnumeratorAwaitExtensions_tF80B3EBADCAEAA12425B9AD035E9F910EAD27A2C  : public RuntimeObject
{
public:

public:
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


// UnityAsyncAwaitUtil.SyncContextUtil
struct SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F  : public RuntimeObject
{
public:

public:
};

struct SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields
{
public:
	// System.Int32 UnityAsyncAwaitUtil.SyncContextUtil::<UnityThreadId>k__BackingField
	int32_t ___U3CUnityThreadIdU3Ek__BackingField_0;
	// System.Threading.SynchronizationContext UnityAsyncAwaitUtil.SyncContextUtil::<UnitySynchronizationContext>k__BackingField
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___U3CUnitySynchronizationContextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUnityThreadIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields, ___U3CUnityThreadIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CUnityThreadIdU3Ek__BackingField_0() const { return ___U3CUnityThreadIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CUnityThreadIdU3Ek__BackingField_0() { return &___U3CUnityThreadIdU3Ek__BackingField_0; }
	inline void set_U3CUnityThreadIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CUnityThreadIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CUnitySynchronizationContextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields, ___U3CUnitySynchronizationContextU3Ek__BackingField_1)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_U3CUnitySynchronizationContextU3Ek__BackingField_1() const { return ___U3CUnitySynchronizationContextU3Ek__BackingField_1; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_U3CUnitySynchronizationContextU3Ek__BackingField_1() { return &___U3CUnitySynchronizationContextU3Ek__BackingField_1; }
	inline void set_U3CUnitySynchronizationContextU3Ek__BackingField_1(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___U3CUnitySynchronizationContextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnitySynchronizationContextU3Ek__BackingField_1), (void*)value);
	}
};


// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:

public:
};


// TaskExtensions
struct TaskExtensions_tA1B2C210DBA9C5A77330BD5FE0AF305F61F4D77E  : public RuntimeObject
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

// WaitForBackgroundThread
struct WaitForBackgroundThread_t8D30A5FA4AAD1E2198EF7CE29009329F92D12F52  : public RuntimeObject
{
public:

public:
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

// AwaitExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Int32> AwaitExtensions/<>c__DisplayClass0_0::tcs
	TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * ___tcs_0;
	// System.Diagnostics.Process AwaitExtensions/<>c__DisplayClass0_0::process
	Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * ___process_1;

public:
	inline static int32_t get_offset_of_tcs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543, ___tcs_0)); }
	inline TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * get_tcs_0() const { return ___tcs_0; }
	inline TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 ** get_address_of_tcs_0() { return &___tcs_0; }
	inline void set_tcs_0(TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * value)
	{
		___tcs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_0), (void*)value);
	}

	inline static int32_t get_offset_of_process_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543, ___process_1)); }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * get_process_1() const { return ___process_1; }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 ** get_address_of_process_1() { return &___process_1; }
	inline void set_process_1(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * value)
	{
		___process_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA  : public RuntimeObject
{
public:
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> IEnumeratorAwaitExtensions/<>c__DisplayClass10_0::awaiter
	SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * ___awaiter_0;
	// UnityEngine.AssetBundleCreateRequest IEnumeratorAwaitExtensions/<>c__DisplayClass10_0::instruction
	AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * ___instruction_1;

public:
	inline static int32_t get_offset_of_awaiter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA, ___awaiter_0)); }
	inline SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * get_awaiter_0() const { return ___awaiter_0; }
	inline SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 ** get_address_of_awaiter_0() { return &___awaiter_0; }
	inline void set_awaiter_0(SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * value)
	{
		___awaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_0), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA, ___instruction_1)); }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * get_instruction_1() const { return ___instruction_1; }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A ** get_address_of_instruction_1() { return &___instruction_1; }
	inline void set_instruction_1(AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * value)
	{
		___instruction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3  : public RuntimeObject
{
public:
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> IEnumeratorAwaitExtensions/<>c__DisplayClass11_0::awaiter
	SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter_0;
	// UnityEngine.AssetBundleRequest IEnumeratorAwaitExtensions/<>c__DisplayClass11_0::instruction
	AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___instruction_1;

public:
	inline static int32_t get_offset_of_awaiter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3, ___awaiter_0)); }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * get_awaiter_0() const { return ___awaiter_0; }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 ** get_address_of_awaiter_0() { return &___awaiter_0; }
	inline void set_awaiter_0(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * value)
	{
		___awaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_0), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3, ___instruction_1)); }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * get_instruction_1() const { return ___instruction_1; }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A ** get_address_of_instruction_1() { return &___instruction_1; }
	inline void set_instruction_1(AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * value)
	{
		___instruction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator IEnumeratorAwaitExtensions/<>c__DisplayClass13_0::coroutine
	RuntimeObject* ___coroutine_0;
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object> IEnumeratorAwaitExtensions/<>c__DisplayClass13_0::awaiter
	SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * ___awaiter_1;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450, ___coroutine_0)); }
	inline RuntimeObject* get_coroutine_0() const { return ___coroutine_0; }
	inline RuntimeObject** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(RuntimeObject* value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_0), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450, ___awaiter_1)); }
	inline SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * get_awaiter_1() const { return ___awaiter_1; }
	inline SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 ** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C  : public RuntimeObject
{
public:
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions/<>c__DisplayClass14_0::awaiter
	SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * ___awaiter_0;
	// System.Object IEnumeratorAwaitExtensions/<>c__DisplayClass14_0::instruction
	RuntimeObject * ___instruction_1;

public:
	inline static int32_t get_offset_of_awaiter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C, ___awaiter_0)); }
	inline SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * get_awaiter_0() const { return ___awaiter_0; }
	inline SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 ** get_address_of_awaiter_0() { return &___awaiter_0; }
	inline void set_awaiter_0(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * value)
	{
		___awaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_0), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C, ___instruction_1)); }
	inline RuntimeObject * get_instruction_1() const { return ___instruction_1; }
	inline RuntimeObject ** get_address_of_instruction_1() { return &___instruction_1; }
	inline void set_instruction_1(RuntimeObject * value)
	{
		___instruction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91  : public RuntimeObject
{
public:
	// System.Action IEnumeratorAwaitExtensions/<>c__DisplayClass16_0::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91, ___action_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_0() const { return ___action_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F  : public RuntimeObject
{
public:
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> IEnumeratorAwaitExtensions/<>c__DisplayClass8_0::awaiter
	SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter_0;
	// UnityEngine.ResourceRequest IEnumeratorAwaitExtensions/<>c__DisplayClass8_0::instruction
	ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___instruction_1;

public:
	inline static int32_t get_offset_of_awaiter_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F, ___awaiter_0)); }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * get_awaiter_0() const { return ___awaiter_0; }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 ** get_address_of_awaiter_0() { return &___awaiter_0; }
	inline void set_awaiter_0(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * value)
	{
		___awaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_0), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F, ___instruction_1)); }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * get_instruction_1() const { return ___instruction_1; }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD ** get_address_of_instruction_1() { return &___instruction_1; }
	inline void set_instruction_1(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * value)
	{
		___instruction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/InstructionWrappers
struct InstructionWrappers_t2E8C67B0223F2092094F38A08BD61418954E7BD3  : public RuntimeObject
{
public:

public:
};


// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941  : public RuntimeObject
{
public:
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::_exception
	Exception_t * ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::_continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____continuation_2;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941, ____continuation_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__continuation_2() const { return ____continuation_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__continuation_2() { return &____continuation_2; }
	inline void set__continuation_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____continuation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_2), (void*)value);
	}
};


// TaskExtensions/<AsIEnumerator>d__0
struct U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432  : public RuntimeObject
{
public:
	// System.Int32 TaskExtensions/<AsIEnumerator>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TaskExtensions/<AsIEnumerator>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Threading.Tasks.Task TaskExtensions/<AsIEnumerator>d__0::task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_task_2() { return static_cast<int32_t>(offsetof(U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432, ___task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_task_2() const { return ___task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_task_2() { return &___task_2; }
	inline void set_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_2), (void*)value);
	}
};


// WaitForBackgroundThread/<>c
struct U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_StaticFields
{
public:
	// WaitForBackgroundThread/<>c WaitForBackgroundThread/<>c::<>9
	U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * ___U3CU3E9_0;
	// System.Action WaitForBackgroundThread/<>c::<>9__0_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1
struct U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A  : public RuntimeObject
{
public:
	// System.Int32 IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AssetBundleCreateRequest IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::instruction
	AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * ___instruction_2;
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::awaiter
	SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_2() { return static_cast<int32_t>(offsetof(U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A, ___instruction_2)); }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * get_instruction_2() const { return ___instruction_2; }
	inline AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A ** get_address_of_instruction_2() { return &___instruction_2; }
	inline void set_instruction_2(AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * value)
	{
		___instruction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A, ___awaiter_3)); }
	inline SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * get_awaiter_3() const { return ___awaiter_3; }
	inline SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3
struct U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597  : public RuntimeObject
{
public:
	// System.Int32 IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AssetBundleRequest IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::instruction
	AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___instruction_2;
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::awaiter
	SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_2() { return static_cast<int32_t>(offsetof(U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597, ___instruction_2)); }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * get_instruction_2() const { return ___instruction_2; }
	inline AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A ** get_address_of_instruction_2() { return &___instruction_2; }
	inline void set_instruction_2(AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * value)
	{
		___instruction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597, ___awaiter_3)); }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * get_awaiter_3() const { return ___awaiter_3; }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4
struct U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0  : public RuntimeObject
{
public:
	// System.Int32 IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.ResourceRequest IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::instruction
	ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___instruction_2;
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::awaiter
	SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_2() { return static_cast<int32_t>(offsetof(U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0, ___instruction_2)); }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * get_instruction_2() const { return ___instruction_2; }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD ** get_address_of_instruction_2() { return &___instruction_2; }
	inline void set_instruction_2(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * value)
	{
		___instruction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0, ___awaiter_3)); }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * get_awaiter_3() const { return ___awaiter_3; }
	inline SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65  : public RuntimeObject
{
public:
	// System.Int32 IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::instruction
	RuntimeObject * ___instruction_2;
	// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::awaiter
	SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_2() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65, ___instruction_2)); }
	inline RuntimeObject * get_instruction_2() const { return ___instruction_2; }
	inline RuntimeObject ** get_address_of_instruction_2() { return &___instruction_2; }
	inline void set_instruction_2(RuntimeObject * value)
	{
		___instruction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65, ___awaiter_3)); }
	inline SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * get_awaiter_3() const { return ___awaiter_3; }
	inline SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
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


// WaitForUpdate
struct WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// UnityEngine.WaitWhile
struct WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
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

// System.Diagnostics.ProcessPriorityClass
struct ProcessPriorityClass_tFAAA1028D792EC9F980C6B44DB8D3D01036442E2 
{
public:
	// System.Int32 System.Diagnostics.ProcessPriorityClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessPriorityClass_tFAAA1028D792EC9F980C6B44DB8D3D01036442E2, ___value___2)); }
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


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Diagnostics.Process/StreamReadMode
struct StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A 
{
public:
	// System.Int32 System.Diagnostics.Process/StreamReadMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// UnityEngine.AssetBundle
struct AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
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

// System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.IntPtr System.Diagnostics.Process::minWorkingSet
	intptr_t ___minWorkingSet_14;
	// System.IntPtr System.Diagnostics.Process::maxWorkingSet
	intptr_t ___maxWorkingSet_15;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_16;
	// System.Diagnostics.ProcessPriorityClass System.Diagnostics.Process::priorityClass
	int32_t ___priorityClass_17;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * ___startInfo_18;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_19;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_20;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___onExited_21;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_22;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_23;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_24;
	// System.DateTime System.Diagnostics.Process::exitTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___exitTime_25;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_26;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_27;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * ___registeredWaitHandle_28;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * ___waitHandle_29;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_30;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardOutput_31;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___standardInput_32;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardError_33;
	// System.OperatingSystem System.Diagnostics.Process::operatingSystem
	OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * ___operatingSystem_34;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_35;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_36;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_37;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_38;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::OutputDataReceived
	DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * ___OutputDataReceived_39;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::ErrorDataReceived
	DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * ___ErrorDataReceived_40;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___output_41;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___error_42;
	// System.Boolean System.Diagnostics.Process::pendingOutputRead
	bool ___pendingOutputRead_43;
	// System.Boolean System.Diagnostics.Process::pendingErrorRead
	bool ___pendingErrorRead_44;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_46;

public:
	inline static int32_t get_offset_of_haveProcessId_4() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessId_4)); }
	inline bool get_haveProcessId_4() const { return ___haveProcessId_4; }
	inline bool* get_address_of_haveProcessId_4() { return &___haveProcessId_4; }
	inline void set_haveProcessId_4(bool value)
	{
		___haveProcessId_4 = value;
	}

	inline static int32_t get_offset_of_processId_5() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___processId_5)); }
	inline int32_t get_processId_5() const { return ___processId_5; }
	inline int32_t* get_address_of_processId_5() { return &___processId_5; }
	inline void set_processId_5(int32_t value)
	{
		___processId_5 = value;
	}

	inline static int32_t get_offset_of_haveProcessHandle_6() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessHandle_6)); }
	inline bool get_haveProcessHandle_6() const { return ___haveProcessHandle_6; }
	inline bool* get_address_of_haveProcessHandle_6() { return &___haveProcessHandle_6; }
	inline void set_haveProcessHandle_6(bool value)
	{
		___haveProcessHandle_6 = value;
	}

	inline static int32_t get_offset_of_m_processHandle_7() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processHandle_7)); }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * get_m_processHandle_7() const { return ___m_processHandle_7; }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C ** get_address_of_m_processHandle_7() { return &___m_processHandle_7; }
	inline void set_m_processHandle_7(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * value)
	{
		___m_processHandle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_processHandle_7), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteMachine_8() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___isRemoteMachine_8)); }
	inline bool get_isRemoteMachine_8() const { return ___isRemoteMachine_8; }
	inline bool* get_address_of_isRemoteMachine_8() { return &___isRemoteMachine_8; }
	inline void set_isRemoteMachine_8(bool value)
	{
		___isRemoteMachine_8 = value;
	}

	inline static int32_t get_offset_of_machineName_9() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___machineName_9)); }
	inline String_t* get_machineName_9() const { return ___machineName_9; }
	inline String_t** get_address_of_machineName_9() { return &___machineName_9; }
	inline void set_machineName_9(String_t* value)
	{
		___machineName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___machineName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_processAccess_10() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processAccess_10)); }
	inline int32_t get_m_processAccess_10() const { return ___m_processAccess_10; }
	inline int32_t* get_address_of_m_processAccess_10() { return &___m_processAccess_10; }
	inline void set_m_processAccess_10(int32_t value)
	{
		___m_processAccess_10 = value;
	}

	inline static int32_t get_offset_of_threads_11() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___threads_11)); }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * get_threads_11() const { return ___threads_11; }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 ** get_address_of_threads_11() { return &___threads_11; }
	inline void set_threads_11(ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * value)
	{
		___threads_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_11), (void*)value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___modules_12)); }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * get_modules_12() const { return ___modules_12; }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 ** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modules_12), (void*)value);
	}

	inline static int32_t get_offset_of_haveWorkingSetLimits_13() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveWorkingSetLimits_13)); }
	inline bool get_haveWorkingSetLimits_13() const { return ___haveWorkingSetLimits_13; }
	inline bool* get_address_of_haveWorkingSetLimits_13() { return &___haveWorkingSetLimits_13; }
	inline void set_haveWorkingSetLimits_13(bool value)
	{
		___haveWorkingSetLimits_13 = value;
	}

	inline static int32_t get_offset_of_minWorkingSet_14() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___minWorkingSet_14)); }
	inline intptr_t get_minWorkingSet_14() const { return ___minWorkingSet_14; }
	inline intptr_t* get_address_of_minWorkingSet_14() { return &___minWorkingSet_14; }
	inline void set_minWorkingSet_14(intptr_t value)
	{
		___minWorkingSet_14 = value;
	}

	inline static int32_t get_offset_of_maxWorkingSet_15() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___maxWorkingSet_15)); }
	inline intptr_t get_maxWorkingSet_15() const { return ___maxWorkingSet_15; }
	inline intptr_t* get_address_of_maxWorkingSet_15() { return &___maxWorkingSet_15; }
	inline void set_maxWorkingSet_15(intptr_t value)
	{
		___maxWorkingSet_15 = value;
	}

	inline static int32_t get_offset_of_havePriorityClass_16() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___havePriorityClass_16)); }
	inline bool get_havePriorityClass_16() const { return ___havePriorityClass_16; }
	inline bool* get_address_of_havePriorityClass_16() { return &___havePriorityClass_16; }
	inline void set_havePriorityClass_16(bool value)
	{
		___havePriorityClass_16 = value;
	}

	inline static int32_t get_offset_of_priorityClass_17() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___priorityClass_17)); }
	inline int32_t get_priorityClass_17() const { return ___priorityClass_17; }
	inline int32_t* get_address_of_priorityClass_17() { return &___priorityClass_17; }
	inline void set_priorityClass_17(int32_t value)
	{
		___priorityClass_17 = value;
	}

	inline static int32_t get_offset_of_startInfo_18() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___startInfo_18)); }
	inline ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * get_startInfo_18() const { return ___startInfo_18; }
	inline ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 ** get_address_of_startInfo_18() { return &___startInfo_18; }
	inline void set_startInfo_18(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * value)
	{
		___startInfo_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startInfo_18), (void*)value);
	}

	inline static int32_t get_offset_of_watchForExit_19() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchForExit_19)); }
	inline bool get_watchForExit_19() const { return ___watchForExit_19; }
	inline bool* get_address_of_watchForExit_19() { return &___watchForExit_19; }
	inline void set_watchForExit_19(bool value)
	{
		___watchForExit_19 = value;
	}

	inline static int32_t get_offset_of_watchingForExit_20() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchingForExit_20)); }
	inline bool get_watchingForExit_20() const { return ___watchingForExit_20; }
	inline bool* get_address_of_watchingForExit_20() { return &___watchingForExit_20; }
	inline void set_watchingForExit_20(bool value)
	{
		___watchingForExit_20 = value;
	}

	inline static int32_t get_offset_of_onExited_21() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___onExited_21)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_onExited_21() const { return ___onExited_21; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_onExited_21() { return &___onExited_21; }
	inline void set_onExited_21(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___onExited_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onExited_21), (void*)value);
	}

	inline static int32_t get_offset_of_exited_22() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exited_22)); }
	inline bool get_exited_22() const { return ___exited_22; }
	inline bool* get_address_of_exited_22() { return &___exited_22; }
	inline void set_exited_22(bool value)
	{
		___exited_22 = value;
	}

	inline static int32_t get_offset_of_exitCode_23() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exitCode_23)); }
	inline int32_t get_exitCode_23() const { return ___exitCode_23; }
	inline int32_t* get_address_of_exitCode_23() { return &___exitCode_23; }
	inline void set_exitCode_23(int32_t value)
	{
		___exitCode_23 = value;
	}

	inline static int32_t get_offset_of_signaled_24() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___signaled_24)); }
	inline bool get_signaled_24() const { return ___signaled_24; }
	inline bool* get_address_of_signaled_24() { return &___signaled_24; }
	inline void set_signaled_24(bool value)
	{
		___signaled_24 = value;
	}

	inline static int32_t get_offset_of_exitTime_25() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exitTime_25)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_exitTime_25() const { return ___exitTime_25; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_exitTime_25() { return &___exitTime_25; }
	inline void set_exitTime_25(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___exitTime_25 = value;
	}

	inline static int32_t get_offset_of_haveExitTime_26() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveExitTime_26)); }
	inline bool get_haveExitTime_26() const { return ___haveExitTime_26; }
	inline bool* get_address_of_haveExitTime_26() { return &___haveExitTime_26; }
	inline void set_haveExitTime_26(bool value)
	{
		___haveExitTime_26 = value;
	}

	inline static int32_t get_offset_of_raisedOnExited_27() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___raisedOnExited_27)); }
	inline bool get_raisedOnExited_27() const { return ___raisedOnExited_27; }
	inline bool* get_address_of_raisedOnExited_27() { return &___raisedOnExited_27; }
	inline void set_raisedOnExited_27(bool value)
	{
		___raisedOnExited_27 = value;
	}

	inline static int32_t get_offset_of_registeredWaitHandle_28() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___registeredWaitHandle_28)); }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * get_registeredWaitHandle_28() const { return ___registeredWaitHandle_28; }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F ** get_address_of_registeredWaitHandle_28() { return &___registeredWaitHandle_28; }
	inline void set_registeredWaitHandle_28(RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * value)
	{
		___registeredWaitHandle_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredWaitHandle_28), (void*)value);
	}

	inline static int32_t get_offset_of_waitHandle_29() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___waitHandle_29)); }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * get_waitHandle_29() const { return ___waitHandle_29; }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 ** get_address_of_waitHandle_29() { return &___waitHandle_29; }
	inline void set_waitHandle_29(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * value)
	{
		___waitHandle_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitHandle_29), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizingObject_30() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___synchronizingObject_30)); }
	inline RuntimeObject* get_synchronizingObject_30() const { return ___synchronizingObject_30; }
	inline RuntimeObject** get_address_of_synchronizingObject_30() { return &___synchronizingObject_30; }
	inline void set_synchronizingObject_30(RuntimeObject* value)
	{
		___synchronizingObject_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_30), (void*)value);
	}

	inline static int32_t get_offset_of_standardOutput_31() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardOutput_31)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardOutput_31() const { return ___standardOutput_31; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardOutput_31() { return &___standardOutput_31; }
	inline void set_standardOutput_31(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardOutput_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardOutput_31), (void*)value);
	}

	inline static int32_t get_offset_of_standardInput_32() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardInput_32)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_standardInput_32() const { return ___standardInput_32; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_standardInput_32() { return &___standardInput_32; }
	inline void set_standardInput_32(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___standardInput_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardInput_32), (void*)value);
	}

	inline static int32_t get_offset_of_standardError_33() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardError_33)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardError_33() const { return ___standardError_33; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardError_33() { return &___standardError_33; }
	inline void set_standardError_33(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardError_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardError_33), (void*)value);
	}

	inline static int32_t get_offset_of_operatingSystem_34() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___operatingSystem_34)); }
	inline OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * get_operatingSystem_34() const { return ___operatingSystem_34; }
	inline OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 ** get_address_of_operatingSystem_34() { return &___operatingSystem_34; }
	inline void set_operatingSystem_34(OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * value)
	{
		___operatingSystem_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___operatingSystem_34), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_35() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___disposed_35)); }
	inline bool get_disposed_35() const { return ___disposed_35; }
	inline bool* get_address_of_disposed_35() { return &___disposed_35; }
	inline void set_disposed_35(bool value)
	{
		___disposed_35 = value;
	}

	inline static int32_t get_offset_of_outputStreamReadMode_36() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___outputStreamReadMode_36)); }
	inline int32_t get_outputStreamReadMode_36() const { return ___outputStreamReadMode_36; }
	inline int32_t* get_address_of_outputStreamReadMode_36() { return &___outputStreamReadMode_36; }
	inline void set_outputStreamReadMode_36(int32_t value)
	{
		___outputStreamReadMode_36 = value;
	}

	inline static int32_t get_offset_of_errorStreamReadMode_37() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___errorStreamReadMode_37)); }
	inline int32_t get_errorStreamReadMode_37() const { return ___errorStreamReadMode_37; }
	inline int32_t* get_address_of_errorStreamReadMode_37() { return &___errorStreamReadMode_37; }
	inline void set_errorStreamReadMode_37(int32_t value)
	{
		___errorStreamReadMode_37 = value;
	}

	inline static int32_t get_offset_of_inputStreamReadMode_38() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___inputStreamReadMode_38)); }
	inline int32_t get_inputStreamReadMode_38() const { return ___inputStreamReadMode_38; }
	inline int32_t* get_address_of_inputStreamReadMode_38() { return &___inputStreamReadMode_38; }
	inline void set_inputStreamReadMode_38(int32_t value)
	{
		___inputStreamReadMode_38 = value;
	}

	inline static int32_t get_offset_of_OutputDataReceived_39() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___OutputDataReceived_39)); }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * get_OutputDataReceived_39() const { return ___OutputDataReceived_39; }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D ** get_address_of_OutputDataReceived_39() { return &___OutputDataReceived_39; }
	inline void set_OutputDataReceived_39(DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * value)
	{
		___OutputDataReceived_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputDataReceived_39), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorDataReceived_40() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___ErrorDataReceived_40)); }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * get_ErrorDataReceived_40() const { return ___ErrorDataReceived_40; }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D ** get_address_of_ErrorDataReceived_40() { return &___ErrorDataReceived_40; }
	inline void set_ErrorDataReceived_40(DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * value)
	{
		___ErrorDataReceived_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorDataReceived_40), (void*)value);
	}

	inline static int32_t get_offset_of_output_41() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___output_41)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_output_41() const { return ___output_41; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_output_41() { return &___output_41; }
	inline void set_output_41(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___output_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_41), (void*)value);
	}

	inline static int32_t get_offset_of_error_42() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___error_42)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_error_42() const { return ___error_42; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_error_42() { return &___error_42; }
	inline void set_error_42(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___error_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_42), (void*)value);
	}

	inline static int32_t get_offset_of_pendingOutputRead_43() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___pendingOutputRead_43)); }
	inline bool get_pendingOutputRead_43() const { return ___pendingOutputRead_43; }
	inline bool* get_address_of_pendingOutputRead_43() { return &___pendingOutputRead_43; }
	inline void set_pendingOutputRead_43(bool value)
	{
		___pendingOutputRead_43 = value;
	}

	inline static int32_t get_offset_of_pendingErrorRead_44() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___pendingErrorRead_44)); }
	inline bool get_pendingErrorRead_44() const { return ___pendingErrorRead_44; }
	inline bool* get_address_of_pendingErrorRead_44() { return &___pendingErrorRead_44; }
	inline void set_pendingErrorRead_44(bool value)
	{
		___pendingErrorRead_44 = value;
	}

	inline static int32_t get_offset_of_process_name_46() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___process_name_46)); }
	inline String_t* get_process_name_46() const { return ___process_name_46; }
	inline String_t** get_address_of_process_name_46() { return &___process_name_46; }
	inline void set_process_name_46(String_t* value)
	{
		___process_name_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_name_46), (void*)value);
	}
};

struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_StaticFields
{
public:
	// System.Diagnostics.TraceSwitch System.Diagnostics.Process::processTracing
	TraceSwitch_tDDED47C3341F28742AE0F02339112484787F873D * ___processTracing_45;
	// System.Diagnostics.ProcessModule System.Diagnostics.Process::current_main_module
	ProcessModule_tE3AE82E21530BD04879D2BE35E9EE885C525C21C * ___current_main_module_47;

public:
	inline static int32_t get_offset_of_processTracing_45() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_StaticFields, ___processTracing_45)); }
	inline TraceSwitch_tDDED47C3341F28742AE0F02339112484787F873D * get_processTracing_45() const { return ___processTracing_45; }
	inline TraceSwitch_tDDED47C3341F28742AE0F02339112484787F873D ** get_address_of_processTracing_45() { return &___processTracing_45; }
	inline void set_processTracing_45(TraceSwitch_tDDED47C3341F28742AE0F02339112484787F873D * value)
	{
		___processTracing_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processTracing_45), (void*)value);
	}

	inline static int32_t get_offset_of_current_main_module_47() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_StaticFields, ___current_main_module_47)); }
	inline ProcessModule_tE3AE82E21530BD04879D2BE35E9EE885C525C21C * get_current_main_module_47() const { return ___current_main_module_47; }
	inline ProcessModule_tE3AE82E21530BD04879D2BE35E9EE885C525C21C ** get_address_of_current_main_module_47() { return &___current_main_module_47; }
	inline void set_current_main_module_47(ProcessModule_tE3AE82E21530BD04879D2BE35E9EE885C525C21C * value)
	{
		___current_main_module_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_main_module_47), (void*)value);
	}
};


// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// AwaitExtensions/<WrapErrors>d__1
struct U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E 
{
public:
	// System.Int32 AwaitExtensions/<WrapErrors>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder AwaitExtensions/<WrapErrors>d__1::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.Threading.Tasks.Task AwaitExtensions/<WrapErrors>d__1::task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task_2;
	// System.Runtime.CompilerServices.TaskAwaiter AwaitExtensions/<WrapErrors>d__1::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_task_2() { return static_cast<int32_t>(offsetof(U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E, ___task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_task_2() const { return ___task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_task_2() { return &___task_2; }
	inline void set_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
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


// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A  : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_pinvoke : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A_marshaled_com : public ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
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


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
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


// UnityAsyncAwaitUtil.AsyncCoroutineRunner
struct AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_StaticFields
{
public:
	// UnityAsyncAwaitUtil.AsyncCoroutineRunner UnityAsyncAwaitUtil.AsyncCoroutineRunner::_instance
	AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_StaticFields, ____instance_4)); }
	inline AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * get__instance_4() const { return ____instance_4; }
	inline AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_gshared (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8_gshared (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_gshared_inline (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AwaitExtensions/<WrapErrors>d__1>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_mB8F82A43CE1AB8FDFEF1505359954DA0CD3C5BD4_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * ___stateMachine0, const RuntimeMethod* method);
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T> IEnumeratorAwaitExtensions::GetAwaiterReturnSelf<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisRuntimeObject_m145B471820D376F0FD43C61C5C9352E2E2B254D6_gshared (RuntimeObject * ___instruction0, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D_gshared (SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AwaitExtensions/<WrapErrors>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_m46390A4279C9DE9DC94F4C13DE07842A874A6670_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * ___stateMachine1, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/CoroutineWrapper`1<System.Object>::.ctor(System.Collections.IEnumerator,IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineWrapper_1__ctor_mE80A64A3CF178A0616D42D3B748B64DDC742AA46_gshared (CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 * __this, RuntimeObject* ___coroutine0, SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * ___awaiter1, const RuntimeMethod* method);
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/CoroutineWrapper`1<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoroutineWrapper_1_Run_m7582B4143579D6E377414C2C751E7B6FD5A88A32_gshared (CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>::Complete(T,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_1_Complete_m32B355BF7A71044D44468F89D6313EB30DC2644A_gshared (SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * __this, RuntimeObject * ___result0, Exception_t * ___e1, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityAsyncAwaitUtil.AsyncCoroutineRunner>()
inline AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * GameObject_AddComponent_TisAsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_m684281DE9FE93CD47ABB2E44D85136029FF301EC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void AwaitExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m73FEB81911DB12C79B2C4B78322E13D1A2476D27 (U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
inline void TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3 (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_gshared)(__this, method);
}
// System.Void System.Diagnostics.Process::set_EnableRaisingEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Process_set_EnableRaisingEvents_mE7631E1018C5905DCBA555D58861440159D81C71 (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Diagnostics.Process::add_Exited(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Process_add_Exited_m0947874ECA7C9DBFD1AE4B73BA7ED78654E281A0 (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Boolean System.Diagnostics.Process::get_HasExited()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Process_get_HasExited_m76E099052813E6276ED2EC44E507D366D3CB9621 (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, const RuntimeMethod* method);
// System.Int32 System.Diagnostics.Process::get_ExitCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Process_get_ExitCode_m87C978FF82C478033857D5F18114F35924B3CBAA (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8 (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, int32_t, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8_gshared)(__this, ___result0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_inline (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * (*) (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AwaitExtensions/<WrapErrors>d__1>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_mB8F82A43CE1AB8FDFEF1505359954DA0CD3C5BD4 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_mB8F82A43CE1AB8FDFEF1505359954DA0CD3C5BD4_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_m5DA00ED9A37FBDE983CC8895B36AA8702F965375 (WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_mB0E8597403591912547D7DA55C2AF73D614E2306 (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiterReturnVoid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9 (RuntimeObject * ___instruction0, const RuntimeMethod* method);
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T> IEnumeratorAwaitExtensions::GetAwaiterReturnSelf<UnityEngine.AsyncOperation>(T)
inline SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7 * IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_m71ACB803362FE91CEE18EC9808007D7CF0300C43 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___instruction0, const RuntimeMethod* method)
{
	return ((  SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7 * (*) (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*))IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisRuntimeObject_m145B471820D376F0FD43C61C5C9352E2E2B254D6_gshared)(___instruction0, method);
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m768A886334591EA0AC57A3535580C617EE523F45 (U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889 (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 *, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions::RunOnUnityScheduler(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T> IEnumeratorAwaitExtensions::GetAwaiterReturnSelf<UnityEngine.Networking.UnityWebRequest>(T)
inline SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB * IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisUnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_m62287B0FF5C7B3CE71C51EF3FCF915F9215D887C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___instruction0, const RuntimeMethod* method)
{
	return ((  SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB * (*) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, const RuntimeMethod*))IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisRuntimeObject_m145B471820D376F0FD43C61C5C9352E2E2B254D6_gshared)(___instruction0, method);
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC5FA167F4E632E52D15D77903F26A65DE8CADEFD (U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_mC042A076850D69CA0FC23AB69B3448960FD06C8A (SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 *, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D_gshared)(__this, method);
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m4A7EDCF8DD5F6044DA29CB13C699B0C9E0578E9C (U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9127AFA5111270F951D0723EC3E81221C682DC39 (U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D (SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 *, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D_gshared)(__this, method);
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mD4DACA65CFDD1C2D2028CD7B48E7EBF946748DDE (U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter__ctor_mD90E448AC1B12D30E051A1FBF659BC4AC0ABAD77 (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mC6E0C0D6BDC4E7D4593EE910F06604CEE2E9315C (U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942 (const RuntimeMethod* method);
// System.Threading.SynchronizationContext UnityAsyncAwaitUtil.SyncContextUtil::get_UnitySynchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SyncContextUtil_get_UnitySynchronizationContext_mDE536A1037BCD8DFD1F8F1EEDDD8A4A1DC39C495_inline (const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityAsyncAwaitUtil.SyncContextUtil::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtil_set_UnitySynchronizationContext_mDD2358552FA4654DE736F3350D0D1A60299AD44C_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void UnityAsyncAwaitUtil.SyncContextUtil::set_UnityThreadId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtil_set_UnityThreadId_m2CA851BE1A90DBFA3375EE5C2EA4E8B53E2108D3_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void TaskExtensions/<AsIEnumerator>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsIEnumeratorU3Ed__0__ctor_mE0065F096C070074F7A099DE999787E19ED35914 (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AwaitExtensions/<WrapErrors>d__1>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_m46390A4279C9DE9DC94F4C13DE07842A874A6670 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_m46390A4279C9DE9DC94F4C13DE07842A874A6670_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void AwaitExtensions/<WrapErrors>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapErrorsU3Ed__1_MoveNext_m7DD78890B1D4A9AA48F27A9A029780A317C95A37 (U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void AwaitExtensions/<WrapErrors>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapErrorsU3Ed__1_SetStateMachine_m087C15A12E1471AFC104005D29B88CA872F60417 (U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UnityAsyncAwaitUtil.AsyncCoroutineRunner UnityAsyncAwaitUtil.AsyncCoroutineRunner::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * AsyncCoroutineRunner_get_Instance_m02F77F2C407BE0EFEF9129F388FEC63EAAE97C3A (const RuntimeMethod* method);
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::AssetBundleCreateRequest(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>,UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleCreateRequest_m8718C127366948283DFB6EEDE2D13FD26B380C5F (SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * ___awaiter0, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * ___instruction1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::AssetBundleRequest(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleRequest_m0734DD82967A1B28505B47C7DE147E35626F93E9 (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter0, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___instruction1, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/CoroutineWrapper`1<System.Object>::.ctor(System.Collections.IEnumerator,IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T>)
inline void CoroutineWrapper_1__ctor_mE80A64A3CF178A0616D42D3B748B64DDC742AA46 (CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 * __this, RuntimeObject* ___coroutine0, SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * ___awaiter1, const RuntimeMethod* method)
{
	((  void (*) (CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 *, RuntimeObject*, SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 *, const RuntimeMethod*))CoroutineWrapper_1__ctor_mE80A64A3CF178A0616D42D3B748B64DDC742AA46_gshared)(__this, ___coroutine0, ___awaiter1, method);
}
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/CoroutineWrapper`1<System.Object>::Run()
inline RuntimeObject* CoroutineWrapper_1_Run_m7582B4143579D6E377414C2C751E7B6FD5A88A32 (CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 *, const RuntimeMethod*))CoroutineWrapper_1_Run_m7582B4143579D6E377414C2C751E7B6FD5A88A32_gshared)(__this, method);
}
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::ReturnVoid(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ReturnVoid_mF9586F9932000D82EADA9ADB3CA4F2CFA4D83E71 (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * ___awaiter0, RuntimeObject * ___instruction1, const RuntimeMethod* method);
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::ResourceRequest(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ResourceRequest_mDC3A15CEB68ED49F7CE4345E6353C530E57C3A51 (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter0, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___instruction1, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0__ctor_mE808618058FB1CC7D3AD53D011397812D0EB231D (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__1__ctor_m5AA41A9BF15EC7DDD80B1E39E195B53171D0260D (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__3__ctor_m241E620498832DA2088786E6AD1FD9836BB21BD7 (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__4__ctor_m22D276EA00D326BD4C9C566C720BC51548F97DFB (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1 (bool ___condition0, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB687C5F1C8A5A4F3F2413141592C0F59D48EE697 (U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * __this, const RuntimeMethod* method);
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * AssetBundleCreateRequest_get_assetBundle_m608C1516A7DC8E4B1F9D63EDCF6EE8D6C2CFF013 (AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>::Complete(T,System.Exception)
inline void SimpleCoroutineAwaiter_1_Complete_mEB02E4978E5018FDB43FD8F90706E51F240FF9A3 (SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * __this, AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * ___result0, Exception_t * ___e1, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 *, AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 *, Exception_t *, const RuntimeMethod*))SimpleCoroutineAwaiter_1_Complete_m32B355BF7A71044D44468F89D6313EB30DC2644A_gshared)(__this, ___result0, ___e1, method);
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813 (AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>::Complete(T,System.Exception)
inline void SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___result0, Exception_t * ___e1, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 *, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *, Exception_t *, const RuntimeMethod*))SimpleCoroutineAwaiter_1_Complete_m32B355BF7A71044D44468F89D6313EB30DC2644A_gshared)(__this, ___result0, ___e1, method);
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ResourceRequest_get_asset_m2930BE33A19198B82461486BF40A9E00963A1CD0 (ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * __this, const RuntimeMethod* method);
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_Complete_m3409136AA392113215E69747B271CC7BEA5D491C (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, Exception_t * ___e0, const RuntimeMethod* method);
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
// UnityAsyncAwaitUtil.AsyncCoroutineRunner UnityAsyncAwaitUtil.AsyncCoroutineRunner::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * AsyncCoroutineRunner_get_Instance_m02F77F2C407BE0EFEF9129F388FEC63EAAE97C3A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_m684281DE9FE93CD47ABB2E44D85136029FF301EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723B5D4147D9C617FB4222E4A74939809B839C9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_0 = ((AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_StaticFields*)il2cpp_codegen_static_fields_for(AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _instance = new GameObject("AsyncCoroutineRunner")
		//     .AddComponent<AsyncCoroutineRunner>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral723B5D4147D9C617FB4222E4A74939809B839C9A, /*hidden argument*/NULL);
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_3;
		L_3 = GameObject_AddComponent_TisAsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_m684281DE9FE93CD47ABB2E44D85136029FF301EC(L_2, /*hidden argument*/GameObject_AddComponent_TisAsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_m684281DE9FE93CD47ABB2E44D85136029FF301EC_RuntimeMethod_var);
		((AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_StaticFields*)il2cpp_codegen_static_fields_for(AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_il2cpp_TypeInfo_var))->set__instance_4(L_3);
	}

IL_0021:
	{
		// return _instance;
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_4 = ((AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_StaticFields*)il2cpp_codegen_static_fields_for(AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE_il2cpp_TypeInfo_var))->get__instance_4();
		return L_4;
	}
}
// System.Void UnityAsyncAwaitUtil.AsyncCoroutineRunner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCoroutineRunner_Awake_mB3FBF24ABED97708F318BDE8A18F083B953F2317 (AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_0, ((int32_t)61), /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityAsyncAwaitUtil.AsyncCoroutineRunner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCoroutineRunner__ctor_mAFF29E69F5ABB7D4DB5117F2BA51F96106C1DA07 (AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * __this, const RuntimeMethod* method)
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
// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> AwaitExtensions::GetAwaiter(System.Diagnostics.Process)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  AwaitExtensions_GetAwaiter_mB00B7E9094AE8B1B87A770C50529111F930DA127 (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * ___process0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m94CE9A3B6E3238317976DC93249643436262D2B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_0 = (U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m73FEB81911DB12C79B2C4B78322E13D1A2476D27(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_1 = V_0;
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_2 = ___process0;
		L_1->set_process_1(L_2);
		// var tcs = new TaskCompletionSource<int>();
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_3 = V_0;
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_4 = (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m0CF7C19DF4E0159239B9C4DA9CCF44B03FB841B3_RuntimeMethod_var);
		L_3->set_tcs_0(L_4);
		// process.EnableRaisingEvents = true;
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_5 = V_0;
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_6 = L_5->get_process_1();
		Process_set_EnableRaisingEvents_mE7631E1018C5905DCBA555D58861440159D81C71(L_6, (bool)1, /*hidden argument*/NULL);
		// process.Exited += (s, e) => tcs.TrySetResult(process.ExitCode);
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_7 = V_0;
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_8 = L_7->get_process_1();
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m94CE9A3B6E3238317976DC93249643436262D2B1_RuntimeMethod_var), /*hidden argument*/NULL);
		Process_add_Exited_m0947874ECA7C9DBFD1AE4B73BA7ED78654E281A0(L_8, L_10, /*hidden argument*/NULL);
		// if (process.HasExited)
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_11 = V_0;
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_12 = L_11->get_process_1();
		bool L_13;
		L_13 = Process_get_HasExited_m76E099052813E6276ED2EC44E507D366D3CB9621(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005f;
		}
	}
	{
		// tcs.TrySetResult(process.ExitCode);
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_14 = V_0;
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_15 = L_14->get_tcs_0();
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_16 = V_0;
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_17 = L_16->get_process_1();
		int32_t L_18;
		L_18 = Process_get_ExitCode_m87C978FF82C478033857D5F18114F35924B3CBAA(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8(L_15, L_18, /*hidden argument*/TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8_RuntimeMethod_var);
	}

IL_005f:
	{
		// return tcs.Task.GetAwaiter();
		U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * L_20 = V_0;
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_21 = L_20->get_tcs_0();
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_22;
		L_22 = TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_inline(L_21, /*hidden argument*/TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_RuntimeMethod_var);
		TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_23;
		L_23 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_22, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		return L_23;
	}
}
// System.Void AwaitExtensions::WrapErrors(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitExtensions_WrapErrors_m08FED61427B07CED24D06E58E591701C6215DF73 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_mB8F82A43CE1AB8FDFEF1505359954DA0CD3C5BD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___task0;
		(&V_0)->set_task_2(L_0);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_1;
		L_1 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E  L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_mB8F82A43CE1AB8FDFEF1505359954DA0CD3C5BD4((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_mB8F82A43CE1AB8FDFEF1505359954DA0CD3C5BD4_RuntimeMethod_var);
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
// WaitForUpdate Awaiters::get_NextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * Awaiters_get_NextFrame_m964337DE0EADE18C357A1453559FAE38C8A50CA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _waitForUpdate; }
		IL2CPP_RUNTIME_CLASS_INIT(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var);
		WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * L_0 = ((Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var))->get__waitForUpdate_0();
		return L_0;
	}
}
// UnityEngine.WaitForFixedUpdate Awaiters::get_FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * Awaiters_get_FixedUpdate_mEDEE9276D8297264E94DC5DD383B8199EB10A11F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _waitForFixedUpdate; }
		IL2CPP_RUNTIME_CLASS_INIT(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var);
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_0 = ((Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var))->get__waitForFixedUpdate_1();
		return L_0;
	}
}
// UnityEngine.WaitForEndOfFrame Awaiters::get_EndOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * Awaiters_get_EndOfFrame_m4F8D2F75257B278B9E21F264618B3E7B6A260526 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _waitForEndOfFrame; }
		IL2CPP_RUNTIME_CLASS_INIT(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_0 = ((Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var))->get__waitForEndOfFrame_2();
		return L_0;
	}
}
// UnityEngine.WaitForSeconds Awaiters::Seconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * Awaiters_Seconds_m727B0283640426878EE456017B7ACE4AF9992085 (float ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WaitForSeconds(seconds);
		float L_0 = ___seconds0;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_1 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.WaitForSecondsRealtime Awaiters::SecondsRealtime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * Awaiters_SecondsRealtime_m783AFD298F8C345A5098F212DE614CD3D3D085D4 (float ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WaitForSecondsRealtime(seconds);
		float L_0 = ___seconds0;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_1 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.WaitUntil Awaiters::Until(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * Awaiters_Until_m2E781F152FA63AA4CD7EA6D63D88E91A2265547C (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WaitUntil(predicate);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ___predicate0;
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_1 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.WaitWhile Awaiters::While(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * Awaiters_While_mEEDE01B7ADF7E8507976E3DB58E967BBCEB7B1EA (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WaitWhile(predicate);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ___predicate0;
		WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * L_1 = (WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 *)il2cpp_codegen_object_new(WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61_il2cpp_TypeInfo_var);
		WaitWhile__ctor_m5DA00ED9A37FBDE983CC8895B36AA8702F965375(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Awaiters::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiters__cctor_m604CE3CF1127B1BC46A57E98CE72EAF757740D35 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly static WaitForUpdate _waitForUpdate = new WaitForUpdate();
		WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * L_0 = (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE *)il2cpp_codegen_object_new(WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE_il2cpp_TypeInfo_var);
		WaitForUpdate__ctor_mB0E8597403591912547D7DA55C2AF73D614E2306(L_0, /*hidden argument*/NULL);
		((Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var))->set__waitForUpdate_0(L_0);
		// readonly static WaitForFixedUpdate _waitForFixedUpdate = new WaitForFixedUpdate();
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_1 = (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 *)il2cpp_codegen_object_new(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5_il2cpp_TypeInfo_var);
		WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C(L_1, /*hidden argument*/NULL);
		((Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var))->set__waitForFixedUpdate_1(L_1);
		// readonly static WaitForEndOfFrame _waitForEndOfFrame = new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_2 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_2, /*hidden argument*/NULL);
		((Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t81C1982044391BCD51641D1E59670D7AB602838C_il2cpp_TypeInfo_var))->set__waitForEndOfFrame_2(L_2);
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
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.WaitForSeconds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_mCF15394B4340D38A6E1868DFEA2BE686CD3E69DA (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___instruction0, const RuntimeMethod* method)
{
	{
		// return GetAwaiterReturnVoid(instruction);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(WaitForUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_m98C098A1420810A23EDF583BDC17D54C3EB5F387 (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * ___instruction0, const RuntimeMethod* method)
{
	{
		// return GetAwaiterReturnVoid(instruction);
		WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.WaitForEndOfFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_m79AA1114AE0EB95C860FED45406DD0392CFDBB7A (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * ___instruction0, const RuntimeMethod* method)
{
	{
		// return GetAwaiterReturnVoid(instruction);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.WaitForFixedUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_m100EF085C5AE4514E9FC057E47DD589C22C98F01 (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___instruction0, const RuntimeMethod* method)
{
	{
		// return GetAwaiterReturnVoid(instruction);
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.WaitForSecondsRealtime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_mB0E277028D88415A1F4C09F9D242E07085BD9025 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___instruction0, const RuntimeMethod* method)
{
	{
		// return GetAwaiterReturnVoid(instruction);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_mEBA6926C2E1BCCB7956383F80B596E4670DD8C1D (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method)
{
	{
		// return GetAwaiterReturnVoid(instruction);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.WaitWhile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_mD0A56621AC0471BC16D2DB83E0F6541EBA574F04 (WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * ___instruction0, const RuntimeMethod* method)
{
	{
		// return GetAwaiterReturnVoid(instruction);
		WaitWhile_t502CE06A4AD1B741F775EDBCF61691E6566F7C61 * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation> IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7 * IEnumeratorAwaitExtensions_GetAwaiter_m403C9B199EBB3A0E4FBDC6D55497C962F7A9E6FF (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___instruction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_m71ACB803362FE91CEE18EC9808007D7CF0300C43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAwaiterReturnSelf(instruction);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_1_t556A1C209EC69A7B6AC13770B5566B5BE88BB5E7 * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_m71ACB803362FE91CEE18EC9808007D7CF0300C43(L_0, /*hidden argument*/IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisAsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_m71ACB803362FE91CEE18EC9808007D7CF0300C43_RuntimeMethod_var);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * IEnumeratorAwaitExtensions_GetAwaiter_m780B03E44858B6045C513786F86715FECFBDED61 (ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___instruction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGetAwaiterU3Eb__0_mA006D7B2E5AF16E4FE8E73BE433BC34222471A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F * L_0 = (U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m768A886334591EA0AC57A3535580C617EE523F45(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F * L_1 = L_0;
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_2 = ___instruction0;
		L_1->set_instruction_1(L_2);
		// var awaiter = new SimpleCoroutineAwaiter<UnityEngine.Object>();
		U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F * L_3 = L_1;
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_4 = (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 *)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889(L_4, /*hidden argument*/SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889_RuntimeMethod_var);
		L_3->set_awaiter_0(L_4);
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.ResourceRequest(awaiter, instruction)));
		U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F * L_5 = L_3;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CGetAwaiterU3Eb__0_mA006D7B2E5AF16E4FE8E73BE433BC34222471A0E_RuntimeMethod_var), /*hidden argument*/NULL);
		IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B(L_6, /*hidden argument*/NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_7 = L_5->get_awaiter_0();
		return L_7;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Networking.UnityWebRequest> IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB * IEnumeratorAwaitExtensions_GetAwaiter_mB88E43140B232F40566E34AACEA0FA5E38BCB911 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___instruction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisUnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_m62287B0FF5C7B3CE71C51EF3FCF915F9215D887C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAwaiterReturnSelf(instruction);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___instruction0;
		SimpleCoroutineAwaiter_1_tAA13194A8A55AEE1AE1C41E4EA6F8F51958F1EAB * L_1;
		L_1 = IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisUnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_m62287B0FF5C7B3CE71C51EF3FCF915F9215D887C(L_0, /*hidden argument*/IEnumeratorAwaitExtensions_GetAwaiterReturnSelf_TisUnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_m62287B0FF5C7B3CE71C51EF3FCF915F9215D887C_RuntimeMethod_var);
		return L_1;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * IEnumeratorAwaitExtensions_GetAwaiter_m0E048A9966A3F9E45456E6AD78F0900C57565863 (AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * ___instruction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mC042A076850D69CA0FC23AB69B3448960FD06C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CGetAwaiterU3Eb__0_m1749E7D7189C2E78D9A9DAF2C4D14B40D302CB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA * L_0 = (U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_mC5FA167F4E632E52D15D77903F26A65DE8CADEFD(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA * L_1 = L_0;
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_2 = ___instruction0;
		L_1->set_instruction_1(L_2);
		// var awaiter = new SimpleCoroutineAwaiter<AssetBundle>();
		U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA * L_3 = L_1;
		SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * L_4 = (SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 *)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_1__ctor_mC042A076850D69CA0FC23AB69B3448960FD06C8A(L_4, /*hidden argument*/SimpleCoroutineAwaiter_1__ctor_mC042A076850D69CA0FC23AB69B3448960FD06C8A_RuntimeMethod_var);
		L_3->set_awaiter_0(L_4);
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.AssetBundleCreateRequest(awaiter, instruction)));
		U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA * L_5 = L_3;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CGetAwaiterU3Eb__0_m1749E7D7189C2E78D9A9DAF2C4D14B40D302CB6F_RuntimeMethod_var), /*hidden argument*/NULL);
		IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B(L_6, /*hidden argument*/NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * L_7 = L_5->get_awaiter_0();
		return L_7;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object> IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * IEnumeratorAwaitExtensions_GetAwaiter_m7FD8D68B1157D613842A516881F8C183B1C7B434 (AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___instruction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CGetAwaiterU3Eb__0_mAFE0213E4534A564D938CA5A4E2BC502F0DAA930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 * L_0 = (U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m4A7EDCF8DD5F6044DA29CB13C699B0C9E0578E9C(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 * L_1 = L_0;
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_2 = ___instruction0;
		L_1->set_instruction_1(L_2);
		// var awaiter = new SimpleCoroutineAwaiter<UnityEngine.Object>();
		U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 * L_3 = L_1;
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_4 = (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 *)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889(L_4, /*hidden argument*/SimpleCoroutineAwaiter_1__ctor_mE4E95AC71C30DFD080DB22353901CDAFBBD11889_RuntimeMethod_var);
		L_3->set_awaiter_0(L_4);
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.AssetBundleRequest(awaiter, instruction)));
		U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 * L_5 = L_3;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CGetAwaiterU3Eb__0_mAFE0213E4534A564D938CA5A4E2BC502F0DAA930_RuntimeMethod_var), /*hidden argument*/NULL);
		IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B(L_6, /*hidden argument*/NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_7 = L_5->get_awaiter_0();
		return L_7;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<System.Object> IEnumeratorAwaitExtensions::GetAwaiter(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * IEnumeratorAwaitExtensions_GetAwaiter_mB4CC66DD5BEDB765BF195A77DC229B3DAD152337 (RuntimeObject* ___coroutine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_mB00DFC642646431D34955F6AD2E2B8A2992B6320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 * L_0 = (U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m9127AFA5111270F951D0723EC3E81221C682DC39(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 * L_1 = L_0;
		RuntimeObject* L_2 = ___coroutine0;
		L_1->set_coroutine_0(L_2);
		// var awaiter = new SimpleCoroutineAwaiter<object>();
		U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 * L_3 = L_1;
		SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * L_4 = (SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 *)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D(L_4, /*hidden argument*/SimpleCoroutineAwaiter_1__ctor_mE052F4CD8470CD9B74697D632421283105058B6D_RuntimeMethod_var);
		L_3->set_awaiter_1(L_4);
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     new CoroutineWrapper<object>(coroutine, awaiter).Run()));
		U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 * L_5 = L_3;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_mB00DFC642646431D34955F6AD2E2B8A2992B6320_RuntimeMethod_var), /*hidden argument*/NULL);
		IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B(L_6, /*hidden argument*/NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * L_7 = L_5->get_awaiter_1();
		return L_7;
	}
}
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiterReturnVoid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiterReturnVoid_mFB1C7273CA95BCB0D2D06539FB43E3DCB9464EB9 (RuntimeObject * ___instruction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CGetAwaiterReturnVoidU3Eb__0_mEF52FE7D9BB64F360CA8ADCAFC67C89B452D34C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C * L_0 = (U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_mD4DACA65CFDD1C2D2028CD7B48E7EBF946748DDE(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C * L_1 = L_0;
		RuntimeObject * L_2 = ___instruction0;
		L_1->set_instruction_1(L_2);
		// var awaiter = new SimpleCoroutineAwaiter();
		U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C * L_3 = L_1;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_4 = (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 *)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter__ctor_mD90E448AC1B12D30E051A1FBF659BC4AC0ABAD77(L_4, /*hidden argument*/NULL);
		L_3->set_awaiter_0(L_4);
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.ReturnVoid(awaiter, instruction)));
		U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C * L_5 = L_3;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3CGetAwaiterReturnVoidU3Eb__0_mEF52FE7D9BB64F360CA8ADCAFC67C89B452D34C9_RuntimeMethod_var), /*hidden argument*/NULL);
		IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B(L_6, /*hidden argument*/NULL);
		// return awaiter;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_7 = L_5->get_awaiter_0();
		return L_7;
	}
}
// System.Void IEnumeratorAwaitExtensions::RunOnUnityScheduler(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CRunOnUnitySchedulerU3Eb__0_m0231F20C8B3A274B6FF41ABD11134601D62858CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * L_0 = (U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_mC6E0C0D6BDC4E7D4593EE910F06604CEE2E9315C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * L_1 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___action0;
		L_1->set_action_0(L_2);
		// if (SynchronizationContext.Current == SyncContextUtil.UnitySynchronizationContext)
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3;
		L_3 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_4;
		L_4 = SyncContextUtil_get_UnitySynchronizationContext_mDE536A1037BCD8DFD1F8F1EEDDD8A4A1DC39C495_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)L_3) == ((RuntimeObject*)(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		// action();
		U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5->get_action_0();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0025:
	{
		// SyncContextUtil.UnitySynchronizationContext.Post(_ => action(), null);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_7;
		L_7 = SyncContextUtil_get_UnitySynchronizationContext_mDE536A1037BCD8DFD1F8F1EEDDD8A4A1DC39C495_inline(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * L_8 = V_0;
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_9 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CRunOnUnitySchedulerU3Eb__0_m0231F20C8B3A274B6FF41ABD11134601D62858CD_RuntimeMethod_var), /*hidden argument*/NULL);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1 (bool ___condition0, const RuntimeMethod* method)
{
	{
		// if (!condition)
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new Exception("Assert hit in UnityAsyncUtil package!");
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88A11CF656D1C830877B6FE74FB6AD1CDAD939D8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1_RuntimeMethod_var)));
	}

IL_000e:
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
// System.Void UnityAsyncAwaitUtil.SyncContextUtil::Install()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtil_Install_m6D0D952DF32EA6CBBFE06A2D97541CBF676E31C6 (const RuntimeMethod* method)
{
	{
		// UnitySynchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0;
		L_0 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		SyncContextUtil_set_UnitySynchronizationContext_mDD2358552FA4654DE736F3350D0D1A60299AD44C_inline(L_0, /*hidden argument*/NULL);
		// UnityThreadId = Thread.CurrentThread.ManagedThreadId;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		SyncContextUtil_set_UnityThreadId_m2CA851BE1A90DBFA3375EE5C2EA4E8B53E2108D3_inline(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityAsyncAwaitUtil.SyncContextUtil::get_UnityThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncContextUtil_get_UnityThreadId_m978694DA1314CE023342E62FD759689613E14F1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; private set;
		int32_t L_0 = ((SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var))->get_U3CUnityThreadIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityAsyncAwaitUtil.SyncContextUtil::set_UnityThreadId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtil_set_UnityThreadId_m2CA851BE1A90DBFA3375EE5C2EA4E8B53E2108D3 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; private set;
		int32_t L_0 = ___value0;
		((SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var))->set_U3CUnityThreadIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Threading.SynchronizationContext UnityAsyncAwaitUtil.SyncContextUtil::get_UnitySynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SyncContextUtil_get_UnitySynchronizationContext_mDE536A1037BCD8DFD1F8F1EEDDD8A4A1DC39C495 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; private set;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var))->get_U3CUnitySynchronizationContextU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityAsyncAwaitUtil.SyncContextUtil::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtil_set_UnitySynchronizationContext_mDD2358552FA4654DE736F3350D0D1A60299AD44C (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; private set;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var))->set_U3CUnitySynchronizationContextU3Ek__BackingField_1(L_0);
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
// System.Collections.IEnumerator TaskExtensions::AsIEnumerator(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskExtensions_AsIEnumerator_m520D5A6F5D6EF6AEA12229305DEE72675642654E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * L_0 = (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 *)il2cpp_codegen_object_new(U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432_il2cpp_TypeInfo_var);
		U3CAsIEnumeratorU3Ed__0__ctor_mE0065F096C070074F7A099DE999787E19ED35914(L_0, 0, /*hidden argument*/NULL);
		U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * L_1 = L_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___task0;
		L_1->set_task_2(L_2);
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  WaitForBackgroundThread_GetAwaiter_m3EBE7FF54387B8CB65DE2F159A824D59473318A9 (WaitForBackgroundThread_t8D30A5FA4AAD1E2198EF7CE29009329F92D12F52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m7BCFF4B80FF08DE716F7F4B0512FF5D67DE006F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// return Task.Run(() => {}).ConfigureAwait(false).GetAwaiter();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * L_2 = ((U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m7BCFF4B80FF08DE716F7F4B0512FF5D67DE006F8_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		((U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(G_B2_0, /*hidden argument*/NULL);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_6;
		L_6 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_0), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_mFAB857E3439578E0A54D3EA742738ECFBE5972F6 (WaitForBackgroundThread_t8D30A5FA4AAD1E2198EF7CE29009329F92D12F52 * __this, const RuntimeMethod* method)
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
// System.Boolean WaitForUpdate::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForUpdate_get_keepWaiting_m7BAB00B5A06B2D32CDCC008759DAD77028E7A5C3 (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_mB0E8597403591912547D7DA55C2AF73D614E2306 (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * __this, const RuntimeMethod* method)
{
	{
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
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
// System.Void AwaitExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m73FEB81911DB12C79B2C4B78322E13D1A2476D27 (U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AwaitExtensions/<>c__DisplayClass0_0::<GetAwaiter>b__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAwaiterU3Eb__0_m94CE9A3B6E3238317976DC93249643436262D2B1 (U3CU3Ec__DisplayClass0_0_tDAF0B968D683DCAF630FE3265FAF10994FBA4543 * __this, RuntimeObject * ___s0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// process.Exited += (s, e) => tcs.TrySetResult(process.ExitCode);
		TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * L_0 = __this->get_tcs_0();
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_1 = __this->get_process_1();
		int32_t L_2;
		L_2 = Process_get_ExitCode_m87C978FF82C478033857D5F18114F35924B3CBAA(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8(L_0, L_2, /*hidden argument*/TaskCompletionSource_1_TrySetResult_mA6A8116ABF4287A26D494F98BCA7E59FCD400FF8_RuntimeMethod_var);
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
// System.Void AwaitExtensions/<WrapErrors>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapErrorsU3Ed__1_MoveNext_m7DD78890B1D4A9AA48F27A9A029780A317C95A37 (U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_m46390A4279C9DE9DC94F4C13DE07842A874A6670_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
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
				goto IL_003f;
			}
		}

IL_000a:
		{
			// await task;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = __this->get_task_2();
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_005b;
			}
		}

IL_001f:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_1;
			__this->set_U3CU3Eu__1_3(L_6);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_m46390A4279C9DE9DC94F4C13DE07842A874A6670((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E_m46390A4279C9DE9DC94F4C13DE07842A874A6670_RuntimeMethod_var);
			goto IL_008e;
		}

IL_003f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_3();
			V_1 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_005b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_007b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0064;
		}
		throw e;
	}

CATCH_0064:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_12 = V_2;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, L_12, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_007b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, /*hidden argument*/NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWrapErrorsU3Ed__1_MoveNext_m7DD78890B1D4A9AA48F27A9A029780A317C95A37_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * _thisAdjusted = reinterpret_cast<U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E *>(__this + _offset);
	U3CWrapErrorsU3Ed__1_MoveNext_m7DD78890B1D4A9AA48F27A9A029780A317C95A37(_thisAdjusted, method);
}
// System.Void AwaitExtensions/<WrapErrors>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapErrorsU3Ed__1_SetStateMachine_m087C15A12E1471AFC104005D29B88CA872F60417 (U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWrapErrorsU3Ed__1_SetStateMachine_m087C15A12E1471AFC104005D29B88CA872F60417_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E * _thisAdjusted = reinterpret_cast<U3CWrapErrorsU3Ed__1_t0EB72D22B2DECB768C7DFFAC8B69FAADCE9CFA5E *>(__this + _offset);
	U3CWrapErrorsU3Ed__1_SetStateMachine_m087C15A12E1471AFC104005D29B88CA872F60417(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC5FA167F4E632E52D15D77903F26A65DE8CADEFD (U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass10_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CGetAwaiterU3Eb__0_m1749E7D7189C2E78D9A9DAF2C4D14B40D302CB6F (U3CU3Ec__DisplayClass10_0_t31E3A78672EFD5135BB9918307F1EAA60ED231AA * __this, const RuntimeMethod* method)
{
	{
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.AssetBundleCreateRequest(awaiter, instruction)));
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_0;
		L_0 = AsyncCoroutineRunner_get_Instance_m02F77F2C407BE0EFEF9129F388FEC63EAAE97C3A(/*hidden argument*/NULL);
		SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * L_1 = __this->get_awaiter_0();
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_2 = __this->get_instruction_1();
		RuntimeObject* L_3;
		L_3 = InstructionWrappers_AssetBundleCreateRequest_m8718C127366948283DFB6EEDE2D13FD26B380C5F(L_1, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_3, /*hidden argument*/NULL);
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
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m4A7EDCF8DD5F6044DA29CB13C699B0C9E0578E9C (U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass11_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CGetAwaiterU3Eb__0_mAFE0213E4534A564D938CA5A4E2BC502F0DAA930 (U3CU3Ec__DisplayClass11_0_tD0FCE77F77069C6515D4062DA0C8BDE690A443C3 * __this, const RuntimeMethod* method)
{
	{
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.AssetBundleRequest(awaiter, instruction)));
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_0;
		L_0 = AsyncCoroutineRunner_get_Instance_m02F77F2C407BE0EFEF9129F388FEC63EAAE97C3A(/*hidden argument*/NULL);
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_1 = __this->get_awaiter_0();
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_2 = __this->get_instruction_1();
		RuntimeObject* L_3;
		L_3 = InstructionWrappers_AssetBundleRequest_m0734DD82967A1B28505B47C7DE147E35626F93E9(L_1, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_3, /*hidden argument*/NULL);
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
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9127AFA5111270F951D0723EC3E81221C682DC39 (U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass13_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CGetAwaiterU3Eb__0_mB00DFC642646431D34955F6AD2E2B8A2992B6320 (U3CU3Ec__DisplayClass13_0_t7950A1F994873D8A0FEF373CD02740C816423450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1_Run_m7582B4143579D6E377414C2C751E7B6FD5A88A32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1__ctor_mE80A64A3CF178A0616D42D3B748B64DDC742AA46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     new CoroutineWrapper<object>(coroutine, awaiter).Run()));
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_0;
		L_0 = AsyncCoroutineRunner_get_Instance_m02F77F2C407BE0EFEF9129F388FEC63EAAE97C3A(/*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_coroutine_0();
		SimpleCoroutineAwaiter_1_t0A510E1F8B6D72742813D85FDB6B9BBD8E594935 * L_2 = __this->get_awaiter_1();
		CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 * L_3 = (CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014 *)il2cpp_codegen_object_new(CoroutineWrapper_1_tED58CF8184279181F4B7A5BBEC5082C98A000014_il2cpp_TypeInfo_var);
		CoroutineWrapper_1__ctor_mE80A64A3CF178A0616D42D3B748B64DDC742AA46(L_3, L_1, L_2, /*hidden argument*/CoroutineWrapper_1__ctor_mE80A64A3CF178A0616D42D3B748B64DDC742AA46_RuntimeMethod_var);
		RuntimeObject* L_4;
		L_4 = CoroutineWrapper_1_Run_m7582B4143579D6E377414C2C751E7B6FD5A88A32(L_3, /*hidden argument*/CoroutineWrapper_1_Run_m7582B4143579D6E377414C2C751E7B6FD5A88A32_RuntimeMethod_var);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_4, /*hidden argument*/NULL);
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
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mD4DACA65CFDD1C2D2028CD7B48E7EBF946748DDE (U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass14_0::<GetAwaiterReturnVoid>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CGetAwaiterReturnVoidU3Eb__0_mEF52FE7D9BB64F360CA8ADCAFC67C89B452D34C9 (U3CU3Ec__DisplayClass14_0_t4D8D08EAB5B6B5CC3F40C7F957F66BA86857CE2C * __this, const RuntimeMethod* method)
{
	{
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.ReturnVoid(awaiter, instruction)));
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_0;
		L_0 = AsyncCoroutineRunner_get_Instance_m02F77F2C407BE0EFEF9129F388FEC63EAAE97C3A(/*hidden argument*/NULL);
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_1 = __this->get_awaiter_0();
		RuntimeObject * L_2 = __this->get_instruction_1();
		RuntimeObject* L_3;
		L_3 = InstructionWrappers_ReturnVoid_mF9586F9932000D82EADA9ADB3CA4F2CFA4D83E71(L_1, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_3, /*hidden argument*/NULL);
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
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mC6E0C0D6BDC4E7D4593EE910F06604CEE2E9315C (U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass16_0::<RunOnUnityScheduler>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CRunOnUnitySchedulerU3Eb__0_m0231F20C8B3A274B6FF41ABD11134601D62858CD (U3CU3Ec__DisplayClass16_0_t142893EF1C66F8F20C60ABD6FB1F4A99C09DCE91 * __this, RuntimeObject * ____0, const RuntimeMethod* method)
{
	{
		// SyncContextUtil.UnitySynchronizationContext.Post(_ => action(), null);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_action_0();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
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
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m768A886334591EA0AC57A3535580C617EE523F45 (U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/<>c__DisplayClass8_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CGetAwaiterU3Eb__0_mA006D7B2E5AF16E4FE8E73BE433BC34222471A0E (U3CU3Ec__DisplayClass8_0_tB06536F7E47BB8B65F1A59BA0551C4BEE42F498F * __this, const RuntimeMethod* method)
{
	{
		// RunOnUnityScheduler(() => AsyncCoroutineRunner.Instance.StartCoroutine(
		//     InstructionWrappers.ResourceRequest(awaiter, instruction)));
		AsyncCoroutineRunner_tFA55FEBE4A3C57706FB659675DAD96EF29D1DFEE * L_0;
		L_0 = AsyncCoroutineRunner_get_Instance_m02F77F2C407BE0EFEF9129F388FEC63EAAE97C3A(/*hidden argument*/NULL);
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_1 = __this->get_awaiter_0();
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_2 = __this->get_instruction_1();
		RuntimeObject* L_3;
		L_3 = InstructionWrappers_ResourceRequest_mDC3A15CEB68ED49F7CE4345E6353C530E57C3A51(L_1, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_3, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::ReturnVoid(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ReturnVoid_mF9586F9932000D82EADA9ADB3CA4F2CFA4D83E71 (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * ___awaiter0, RuntimeObject * ___instruction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * L_0 = (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 *)il2cpp_codegen_object_new(U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65_il2cpp_TypeInfo_var);
		U3CReturnVoidU3Ed__0__ctor_mE808618058FB1CC7D3AD53D011397812D0EB231D(L_0, 0, /*hidden argument*/NULL);
		U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * L_1 = L_0;
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_2 = ___awaiter0;
		L_1->set_awaiter_3(L_2);
		U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * L_3 = L_1;
		RuntimeObject * L_4 = ___instruction1;
		L_3->set_instruction_2(L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::AssetBundleCreateRequest(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>,UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleCreateRequest_m8718C127366948283DFB6EEDE2D13FD26B380C5F (SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * ___awaiter0, AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * ___instruction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * L_0 = (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A *)il2cpp_codegen_object_new(U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A_il2cpp_TypeInfo_var);
		U3CAssetBundleCreateRequestU3Ed__1__ctor_m5AA41A9BF15EC7DDD80B1E39E195B53171D0260D(L_0, 0, /*hidden argument*/NULL);
		U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * L_1 = L_0;
		SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * L_2 = ___awaiter0;
		L_1->set_awaiter_3(L_2);
		U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * L_3 = L_1;
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_4 = ___instruction1;
		L_3->set_instruction_2(L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::AssetBundleRequest(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_AssetBundleRequest_m0734DD82967A1B28505B47C7DE147E35626F93E9 (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter0, AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * ___instruction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * L_0 = (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 *)il2cpp_codegen_object_new(U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597_il2cpp_TypeInfo_var);
		U3CAssetBundleRequestU3Ed__3__ctor_m241E620498832DA2088786E6AD1FD9836BB21BD7(L_0, 0, /*hidden argument*/NULL);
		U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * L_1 = L_0;
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_2 = ___awaiter0;
		L_1->set_awaiter_3(L_2);
		U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * L_3 = L_1;
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_4 = ___instruction1;
		L_3->set_instruction_2(L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::ResourceRequest(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ResourceRequest_mDC3A15CEB68ED49F7CE4345E6353C530E57C3A51 (SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * ___awaiter0, ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___instruction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * L_0 = (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 *)il2cpp_codegen_object_new(U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0_il2cpp_TypeInfo_var);
		U3CResourceRequestU3Ed__4__ctor_m22D276EA00D326BD4C9C566C720BC51548F97DFB(L_0, 0, /*hidden argument*/NULL);
		U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * L_1 = L_0;
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_2 = ___awaiter0;
		L_1->set_awaiter_3(L_2);
		U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * L_3 = L_1;
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_4 = ___instruction1;
		L_3->set_instruction_2(L_4);
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
// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mDA7B7280FCDDED248719D8DC7F5C6167B8624A5A (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, const RuntimeMethod* method)
{
	{
		// get { return _isDone; }
		bool L_0 = __this->get__isDone_0();
		return L_0;
	}
}
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mD72737AB448D1C1A8B51E1037389CBE22E0861FA (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, const RuntimeMethod* method)
{
	{
		// Assert(_isDone);
		bool L_0 = __this->get__isDone_0();
		IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1(L_0, /*hidden argument*/NULL);
		// if (_exception != null)
		Exception_t * L_1 = __this->get__exception_1();
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// ExceptionDispatchInfo.Capture(_exception).Throw();
		Exception_t * L_2 = __this->get__exception_1();
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_3;
		L_3 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(L_2, /*hidden argument*/NULL);
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_Complete_m3409136AA392113215E69747B271CC7BEA5D491C (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		// Assert(!_isDone);
		bool L_0 = __this->get__isDone_0();
		IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// _isDone = true;
		__this->set__isDone_0((bool)1);
		// _exception = e;
		Exception_t * L_1 = ___e0;
		__this->set__exception_1(L_1);
		// if (_continuation != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get__continuation_2();
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// RunOnUnityScheduler(_continuation);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get__continuation_2();
		IEnumeratorAwaitExtensions_RunOnUnityScheduler_m8704C88E8119D62053C40ED3D7759302FB1DDC9B(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m5D6C1F505CCD38B49609EF9B8334274116EDF5F2 (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		// Assert(_continuation == null);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get__continuation_2();
		IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1((bool)((((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0), /*hidden argument*/NULL);
		// Assert(!_isDone);
		bool L_1 = __this->get__isDone_0();
		IEnumeratorAwaitExtensions_Assert_m9C6679404C67CB6910423DC8A793B4A3A54FCBB1((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// _continuation = continuation;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___continuation0;
		__this->set__continuation_2(L_2);
		// }
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter__ctor_mD90E448AC1B12D30E051A1FBF659BC4AC0ABAD77 (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, const RuntimeMethod* method)
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
// System.Void TaskExtensions/<AsIEnumerator>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsIEnumeratorU3Ed__0__ctor_mE0065F096C070074F7A099DE999787E19ED35914 (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TaskExtensions/<AsIEnumerator>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsIEnumeratorU3Ed__0_System_IDisposable_Dispose_mFAA2F9A330A18DE84D7C3194E56F2DD677D35371 (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TaskExtensions/<AsIEnumerator>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAsIEnumeratorU3Ed__0_MoveNext_mE7ED49CF8DD1ED8E5A43793B38F68090023C28AC (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * __this, const RuntimeMethod* method)
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
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0030;
	}

IL_0019:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0030:
	{
		// while (!task.IsCompleted)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = __this->get_task_2();
		bool L_4;
		L_4 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// if (task.IsFaulted)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5 = __this->get_task_2();
		bool L_6;
		L_6 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// ExceptionDispatchInfo.Capture(task.Exception).Throw();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7 = __this->get_task_2();
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_8;
		L_8 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_7, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_9;
		L_9 = ExceptionDispatchInfo_Capture_m972BB7AC3DEF807C66DD794FA29D48829252F40B(L_8, /*hidden argument*/NULL);
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_9, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return (bool)0;
	}
}
// System.Object TaskExtensions/<AsIEnumerator>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsIEnumeratorU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A2DAB8AF067A4A3404E92B983CE929DE9262865 (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TaskExtensions/<AsIEnumerator>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m222C3A33EEF0C1B77D7920634E735AE57285E949 (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m222C3A33EEF0C1B77D7920634E735AE57285E949_RuntimeMethod_var)));
	}
}
// System.Object TaskExtensions/<AsIEnumerator>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_get_Current_m8E54EC5B3A1CCD65016628433625826861A92F0D (U3CAsIEnumeratorU3Ed__0_t29C76EF5DD9357F1F32C1017819CC4875DFD3432 * __this, const RuntimeMethod* method)
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
// System.Void WaitForBackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF1B8BFF1BD5AE59CEA03A1A76F5A7CBA0BB38DF0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * L_0 = (U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 *)il2cpp_codegen_object_new(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB687C5F1C8A5A4F3F2413141592C0F59D48EE697(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB687C5F1C8A5A4F3F2413141592C0F59D48EE697 (U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WaitForBackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m7BCFF4B80FF08DE716F7F4B0512FF5D67DE006F8 (U3CU3Ec_tDDA6B52CF1C7AE9EE4282447DB8B53A08B32DC14 * __this, const RuntimeMethod* method)
{
	{
		// return Task.Run(() => {}).ConfigureAwait(false).GetAwaiter();
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
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__1__ctor_m5AA41A9BF15EC7DDD80B1E39E195B53171D0260D (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__1_System_IDisposable_Dispose_mF16ABDF7272DDF7D29D7417511AB8DDF06DE841C (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAssetBundleCreateRequestU3Ed__1_MoveNext_m17A58AF852CBB44A5B1853D8CC05BC84BE18CDB9 (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_mEB02E4978E5018FDB43FD8F90706E51F240FF9A3_RuntimeMethod_var);
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
		// yield return instruction;
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_3 = __this->get_instruction_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// awaiter.Complete(instruction.assetBundle, null);
		SimpleCoroutineAwaiter_1_tB5B56304063C6D28BFCB56FCF46BDA15CBB48671 * L_4 = __this->get_awaiter_3();
		AssetBundleCreateRequest_t6AB0C8676D1DAA5F624663445F46FAB7D63EAA3A * L_5 = __this->get_instruction_2();
		AssetBundle_t4D34D7FDF0F230DC641DC1FCFA2C0E7E9E628FA4 * L_6;
		L_6 = AssetBundleCreateRequest_get_assetBundle_m608C1516A7DC8E4B1F9D63EDCF6EE8D6C2CFF013(L_5, /*hidden argument*/NULL);
		SimpleCoroutineAwaiter_1_Complete_mEB02E4978E5018FDB43FD8F90706E51F240FF9A3(L_4, L_6, (Exception_t *)NULL, /*hidden argument*/SimpleCoroutineAwaiter_1_Complete_mEB02E4978E5018FDB43FD8F90706E51F240FF9A3_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAssetBundleCreateRequestU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m60B4CAADE8A3EA577896BDDEBAAF2923050F523D (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__1_System_Collections_IEnumerator_Reset_mA855587648EAB674A560BB4092565FBB7FFA75E2 (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAssetBundleCreateRequestU3Ed__1_System_Collections_IEnumerator_Reset_mA855587648EAB674A560BB4092565FBB7FFA75E2_RuntimeMethod_var)));
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleCreateRequest>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAssetBundleCreateRequestU3Ed__1_System_Collections_IEnumerator_get_Current_mE641D2AB5B5E786900E368ACF1945906B776CD4C (U3CAssetBundleCreateRequestU3Ed__1_tFCE742CC8596A31AE96E95ADD1C57371E5A2A73A * __this, const RuntimeMethod* method)
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
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__3__ctor_m241E620498832DA2088786E6AD1FD9836BB21BD7 (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__3_System_IDisposable_Dispose_m55362C3EFA8B375D5644C131F06DFF697A5E24DB (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAssetBundleRequestU3Ed__3_MoveNext_m5DE45C75D9859078AF70AD7D9C22C62E762C9687 (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B_RuntimeMethod_var);
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
		// yield return instruction;
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_3 = __this->get_instruction_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// awaiter.Complete(instruction.asset, null);
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_4 = __this->get_awaiter_3();
		AssetBundleRequest_tBCF59D1FD408125E4C2C937EC23AB0ABB7E4051A * L_5 = __this->get_instruction_2();
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
		L_6 = AssetBundleRequest_get_asset_mB0A96FBC026D143638E467DEB37228ACD55F1813(L_5, /*hidden argument*/NULL);
		SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B(L_4, L_6, (Exception_t *)NULL, /*hidden argument*/SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAssetBundleRequestU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0E1CC25C587A2EE5745852D96FDD724EC3484DE5 (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__3_System_Collections_IEnumerator_Reset_m56C742FBE645F087DE96A101018301502278C3EF (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAssetBundleRequestU3Ed__3_System_Collections_IEnumerator_Reset_m56C742FBE645F087DE96A101018301502278C3EF_RuntimeMethod_var)));
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<AssetBundleRequest>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAssetBundleRequestU3Ed__3_System_Collections_IEnumerator_get_Current_m31A320CE924E60746A2A3E4F34250A09ABD401CD (U3CAssetBundleRequestU3Ed__3_t4618AAFFA3B2F3AF9BF162B6FBE6C299A95C4597 * __this, const RuntimeMethod* method)
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
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__4__ctor_m22D276EA00D326BD4C9C566C720BC51548F97DFB (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__4_System_IDisposable_Dispose_m849C5815557F80A5A1E5955B0D4E4260166DE58B (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResourceRequestU3Ed__4_MoveNext_mC6912097EE29959FD6378E355A39089228E394F9 (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B_RuntimeMethod_var);
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
		// yield return instruction;
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_3 = __this->get_instruction_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// awaiter.Complete(instruction.asset, null);
		SimpleCoroutineAwaiter_1_t1BD6522D4C67B17925B605778E142EEA0295E8D9 * L_4 = __this->get_awaiter_3();
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_5 = __this->get_instruction_2();
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
		L_6 = ResourceRequest_get_asset_m2930BE33A19198B82461486BF40A9E00963A1CD0(L_5, /*hidden argument*/NULL);
		SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B(L_4, L_6, (Exception_t *)NULL, /*hidden argument*/SimpleCoroutineAwaiter_1_Complete_m484C0293242E8C7A15E169C6E3C7FF85F9E0555B_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResourceRequestU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3ED3E781383DDCF6C1543F8C4940BDBDDADB0150 (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__4_System_Collections_IEnumerator_Reset_mA7679790EEECE93F0CA0DEA067F35407CB9076C6 (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResourceRequestU3Ed__4_System_Collections_IEnumerator_Reset_mA7679790EEECE93F0CA0DEA067F35407CB9076C6_RuntimeMethod_var)));
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ResourceRequest>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResourceRequestU3Ed__4_System_Collections_IEnumerator_get_Current_m441AB5CA55E955C270B59CC3151EF831E388C541 (U3CResourceRequestU3Ed__4_t5FC47098AC4A1F496A0F03C73A52B538267D80B0 * __this, const RuntimeMethod* method)
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
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0__ctor_mE808618058FB1CC7D3AD53D011397812D0EB231D (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0_System_IDisposable_Dispose_mFC670B71C2A0DAAECF1CDC417A0EF7F98A64A454 (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReturnVoidU3Ed__0_MoveNext_m007946E918E46F2108E040690D34FCA5C17B0FD9 (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * __this, const RuntimeMethod* method)
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
		// yield return instruction;
		RuntimeObject * L_3 = __this->get_instruction_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// awaiter.Complete(null);
		SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_4 = __this->get_awaiter_3();
		SimpleCoroutineAwaiter_Complete_m3409136AA392113215E69747B271CC7BEA5D491C(L_4, (Exception_t *)NULL, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReturnVoidU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB395334DBE08E5E77ABEC006DC1FA42548755642 (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_Reset_mCDC5763AF93C059E8040867D7226C05ED80EA41D (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_Reset_mCDC5763AF93C059E8040867D7226C05ED80EA41D_RuntimeMethod_var)));
	}
}
// System.Object IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnVoid>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReturnVoidU3Ed__0_System_Collections_IEnumerator_get_Current_mEBEFF2068ADFE8A5334E20186E717CE3AD938891 (U3CReturnVoidU3Ed__0_t23F528939019AA4F0286BF879F1F776A0FBF5C65 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SyncContextUtil_get_UnitySynchronizationContext_mDE536A1037BCD8DFD1F8F1EEDDD8A4A1DC39C495_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; private set;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var))->get_U3CUnitySynchronizationContextU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtil_set_UnitySynchronizationContext_mDD2358552FA4654DE736F3350D0D1A60299AD44C_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; private set;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var))->set_U3CUnitySynchronizationContextU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtil_set_UnityThreadId_m2CA851BE1A90DBFA3375EE5C2EA4E8B53E2108D3_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get; private set;
		int32_t L_0 = ___value0;
		((SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtil_t56A10B44F8849905458ECCF364BC68B5CCD87B6F_il2cpp_TypeInfo_var))->set_U3CUnityThreadIdU3Ek__BackingField_0(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * TaskCompletionSource_1_get_Task_m01B9F1A675D920B291C8775DC35A7C5F6026CD6E_gshared_inline (TaskCompletionSource_1_t7E9984C895A4447C7DC77C2A9B77573F39E5FE78 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		return (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_0;
	}
}
