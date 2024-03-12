#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB;
struct AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
struct TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7;
struct TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9;
struct TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620;
struct Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211;
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39;
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534;
struct Exception_t;
struct IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B;
struct IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD;
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3;
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D;
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3;
IL2CPP_EXTERN_C String_t* _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral459292A042EFC7E72ED9D5A3569A8543A339FB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral77FC6A45AA037417CBD14210CD02B3B9F4A3A680;
IL2CPP_EXTERN_C String_t* _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m6FFC52A7DAC6B0B54212A18D43BE2878D6F4448A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t;
struct IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper;
struct IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t894B2B5A3362895139D0DBC8AC91F6CF31FBD3BA 
{
};
struct NOVTABLE IAgileObject_t9A5FB61122CF23D29526EB1324D5EA655374D48B : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
struct NOVTABLE IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m0E81E3334963F4FCCEA16CF79F1BB12229F2476E(IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_m5827DB95142ABF764B16B370D2E7D4F757522830(IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mB7401D9975EB9B981781DEFDC4FDF586F4DFCC8E() = 0;
};
struct NOVTABLE IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___0_value) = 0;
};
struct TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7  : public RuntimeObject
{
	Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* ____task;
};
struct TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9  : public RuntimeObject
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource;
	uint32_t ____id;
	Exception_t* ____error;
	int32_t ____state;
	RuntimeObject* ____dataContainer;
	AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* ____completedHandler;
	VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D* ____progressHandler;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext;
};
struct TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620  : public RuntimeObject
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource;
	uint32_t ____id;
	Exception_t* ____error;
	int32_t ____state;
	RuntimeObject* ____dataContainer;
	RuntimeObject* ____completedHandler;
	RuntimeObject* ____progressHandler;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext;
};
struct AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96  : public RuntimeObject
{
};
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent;
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists;
	int32_t ____state;
	int32_t ____threadIDExecutingCallbacks;
	bool ____disposed;
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback;
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	int32_t ___m_taskSchedulerId;
};
struct TokenizerHelper_t1A1FDF4DB0F4C8B0A4727721AFD64637A876433B  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D  : public RuntimeObject
{
};
struct WindowsRuntimeBufferExtensions_t78395D60B6AF8C2363502142AD0B763E5A78D3DB  : public RuntimeObject
{
};
struct WindowsRuntimeSystemExtensions_tEDF4DAA53DC87A4A33D83BFDDDB6C404612648A6  : public RuntimeObject
{
};
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2  : public RuntimeObject
{
};
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source;
	int32_t ____index;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	float ____x;
	float ____y;
};
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	float ____x;
	float ____y;
	float ____width;
	float ____height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	float ____width;
	float ____height;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3  : public TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9
{
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C 
{
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C__padding[1];
	};
};
struct Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C ___m_result;
};
struct AsyncStatus_t114EA3046F41C449FF4F9D471EB7027D47705E72 
{
	int32_t ___value__;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct NOVTABLE IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87(intptr_t* comReturnValue) = 0;
};
struct NOVTABLE IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61(Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlFlags, Guid_t* ___5_pCid) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C(Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlflags, uint32_t* ___5_pSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA(intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t ___2_pv, uint32_t ___3_dwDestContext, intptr_t ___4_pvDestContext, uint32_t ___5_mshlflags) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE(intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t* ___2_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66(intptr_t ___0_pStm) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C(uint32_t ___0_dwReserved) = 0;
};
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	int32_t ___value__;
};
struct AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D  : public TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____ct;
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ____ctr;
	bool ____completing;
};
struct NOVTABLE IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() = 0;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data;
	int32_t ____dataStartOffs;
	int32_t ____usefulDataLength;
	int32_t ____maxDataCapacity;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle;
	intptr_t ____dataPtr;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39  : public MulticastDelegate_t
{
};
struct IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};

struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ___ClassName;
	String_t* ___AssemblyName;
	String_t* ___MessageArg;
	int32_t ___ResourceId;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};
struct AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_idGenerator;
};
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource;
	int32_t ___s_nLists;
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler;
	int32_t ___s_taskSchedulerIdCounter;
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException;
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject;
};
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields
{
	U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* ___U3CU3E9;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__0_0;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___U3CU3E9__0_1;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields
{
	RuntimeObject* ___s_winRtMarshalProxy;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1863F9217967EF4150D95DEB6880752380BE2E1A_gshared (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskToAsyncInfoAdapter_4_get_Task_m484FEB8B96FAC6ED1918E2AAC89057F33C30BA60_gshared (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m8D55A6E3369CE9C20D10F59C66B835338DF0D25E_gshared_inline (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_gshared (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_gshared (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, RuntimeObject* ___0_asyncInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_gshared_inline (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C TaskToAsyncInfoAdapter_4_GetResultsInternal_mF6554FE3C1DEB51E2C3C446243EFC2537BE639A7_gshared (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86 (RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, RuntimeObject* ___4_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m33D33491E850D700F297C2B13B4F1343299603B5 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___0_point1, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___1_point2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3549FFF5B7DC54E7376C0F93F2951D97466ECF34 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___0_rect1, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___1_rect2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m66FBC9547822C931D7BD48CDE633BD8E1A939C42 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___0_size1, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___1_size2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
inline void Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9 (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___0_continuationAction, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mB8E6965E9E677F434F657CA710C845F1F1CF1871 (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71 (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1 (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1863F9217967EF4150D95DEB6880752380BE2E1A_gshared)(__this, method);
}
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9 (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Task_m484FEB8B96FAC6ED1918E2AAC89057F33C30BA60_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
inline CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_inline (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m8D55A6E3369CE9C20D10F59C66B835338DF0D25E_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m3133AB9959425B6E90C6C15E896B41053ACD051E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_source, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___1_sink, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___2_concatenationLifetime, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mDDF5CD061CF17571ADA590A19F8C391BCDB24271 (Exception_t* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, bool ___0_canceled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
inline void AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17 (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_gshared)(__this, ___0_cancellationToken, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler__ctor_mF61474211F61B3BF75C11C5E012E1717D87BCFE4 (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline void AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, RuntimeObject* ___0_asyncInfo, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D*, RuntimeObject*, const RuntimeMethod*))AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_gshared)(__this, ___0_asyncInfo, method);
}
inline Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_inline (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* (*) (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m932AB52C3010D5CA99C5A71D842D95D1902381B2 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___0_Seed, const RuntimeMethod* method) ;
inline VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_GetResultsInternal_mF6554FE3C1DEB51E2C3C446243EFC2537BE639A7_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_mC17CE275AEA1DD37BD4F15849A18C43C11BB880C_inline (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_mCA6584CE743CE14250AE58C76F5465C5A4867019 (RuntimeObject** ___0_bufferMarshalerPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25 (Exception_t* __this, int32_t ___0_hr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m7D5EA9EB4644D419A13488168B8695B3630B9683 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interlocked_CompareExchange_m7AC708A0F5F20CADA50F64E6E2F34262D3BC45C6 (intptr_t* ___0_location1, intptr_t ___1_value, intptr_t ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mC044FE299E97DB7BFB74BBD4804BF8BA00BADF38 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WinTypes_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL RoGetBufferMarshaler(IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD**);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____x;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____y;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_format;
		RuntimeObject* L_1 = ___1_provider;
		String_t* L_2;
		L_2 = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___1_provider;
		Il2CppChar L_1;
		L_1 = TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___1_provider;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_format;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___0_format;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_13);
		double L_15;
		L_15 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(__this, NULL);
		double L_16 = L_15;
		RuntimeObject* L_17 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_16);
		double L_18;
		L_18 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(__this, NULL);
		double L_19 = L_18;
		RuntimeObject* L_20 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_2, L_11, L_14, L_17, L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m33D33491E850D700F297C2B13B4F1343299603B5 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___0_point1, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___1_point2, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516((&___0_point1), NULL);
		double L_1;
		L_1 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516((&___1_point2), NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2;
		L_2 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F((&___0_point1), NULL);
		double L_3;
		L_3 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F((&___1_point2), NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 L_1 = (*(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)__this);
		RuntimeObject* L_2 = ___0_o;
		bool L_3;
		L_3 = Point_op_Equality_m33D33491E850D700F297C2B13B4F1343299603B5(L_1, ((*(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)((Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)UnBox(L_2, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	bool _returnValue;
	_returnValue = Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_2;
		L_2 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(L_1^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____x;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____y;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____height;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width;
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_format;
		RuntimeObject* L_1 = ___1_provider;
		String_t* L_2;
		L_2 = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___1_provider;
		Il2CppChar L_2;
		L_2 = TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86(L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___1_provider;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = ___0_format;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___0_format;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = ___0_format;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = ___0_format;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject* L_23 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		float L_25 = __this->____x;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		float L_29 = __this->____y;
		float L_30 = L_29;
		RuntimeObject* L_31 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_28;
		float L_33 = __this->____width;
		float L_34 = L_33;
		RuntimeObject* L_35 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
		float L_37 = __this->____height;
		float L_38 = L_37;
		RuntimeObject* L_39 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_39);
		String_t* L_40;
		L_40 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_3, L_18, L_36, NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3549FFF5B7DC54E7376C0F93F2951D97466ECF34 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___0_rect1, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___1_rect2, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606((&___0_rect1), NULL);
		double L_1;
		L_1 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606((&___1_rect2), NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2;
		L_2 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E((&___0_rect1), NULL);
		double L_3;
		L_3 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E((&___1_rect2), NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4;
		L_4 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2((&___0_rect1), NULL);
		double L_5;
		L_5 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2((&___1_rect2), NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6;
		L_6 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E((&___0_rect1), NULL);
		double L_7;
		L_7 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E((&___1_rect2), NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 L_1 = (*(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)__this);
		RuntimeObject* L_2 = ___0_o;
		bool L_3;
		L_3 = Rect_op_Equality_m3549FFF5B7DC54E7376C0F93F2951D97466ECF34(L_1, ((*(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)((Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)UnBox(L_2, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_2;
		L_2 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_4;
		L_4 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2(__this, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_6;
		L_6 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^L_3))^L_5))^L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____height;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(__this, NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 L_1 = (*(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)__this);
		RuntimeObject* L_2 = ___0_o;
		bool L_3;
		L_3 = Size_Equals_m66FBC9547822C931D7BD48CDE633BD8E1A939C42(L_1, ((*(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)((Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)UnBox(L_2, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1;
		L_1 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(__this, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_3;
		L_3 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438(__this, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(L_2^L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m66FBC9547822C931D7BD48CDE633BD8E1A939C42 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___0_size1, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___1_size2, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD((&___0_size1), NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD((&___1_size2), NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2;
		L_2 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE((&___0_size1), NULL);
		V_0 = L_2;
		double L_3;
		L_3 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE((&___1_size2), NULL);
		bool L_4;
		L_4 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_0), L_3, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5;
		L_5 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438((&___0_size1), NULL);
		V_0 = L_5;
		double L_6;
		L_6 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438((&___1_size2), NULL);
		bool L_7;
		L_7 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_0), L_6, NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
	}

IL_000e:
	{
		float L_1 = __this->____width;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->____height;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_3, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86 (RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___0_provider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1;
		L_1 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_0, NULL);
		V_1 = L_1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_6, NULL);
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, 0, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m3133AB9959425B6E90C6C15E896B41053ACD051E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_source, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___1_sink, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___2_concatenationLifetime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B2_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* G_B2_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B1_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* G_B1_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B4_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B4_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B3_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___0_source);
			goto IL_0021;
		}
		G_B1_0 = L_1;
		G_B1_1 = (&___0_source);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_2 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = L_3;
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_5 = ___1_sink;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859(G_B2_1, G_B2_0, L_5, NULL);
		V_0 = L_6;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = ___2_concatenationLifetime;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_8 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_9 = L_8;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
		G_B3_0 = L_9;
		G_B3_1 = L_7;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_10 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_11 = (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*)il2cpp_codegen_object_new(Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var), NULL);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_12 = L_11;
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13 = V_0;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_14 = L_13;
		RuntimeObject* L_15 = Box(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var, &L_14);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16;
		L_16 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17;
		L_17 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		NullCheck(G_B4_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
		L_18 = Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 WindowsRuntimeSystemExtensions_GetAwaiter_m3A5E0B4F350C1081B7AC6C317A6C7A4BB48568DA (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = WindowsRuntimeSystemExtensions_AsTask_mB8E6965E9E677F434F657CA710C845F1F1CF1871(L_0, NULL);
		NullCheck(L_1);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_2;
		L_2 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mB8E6965E9E677F434F657CA710C845F1F1CF1871 (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71 (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m6FFC52A7DAC6B0B54212A18D43BE2878D6F4448A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* V_0 = NULL;
	AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* V_1 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_source;
		V_0 = ((TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3*)IsInstClass((RuntimeObject*)L_2, TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3_il2cpp_TypeInfo_var));
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1(L_4, TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_6 = V_0;
		NullCheck(L_6);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9(L_6, TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9_RuntimeMethod_var);
		V_2 = L_7;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8 = V_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_8, NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken), NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_11 = V_0;
		NullCheck(L_11);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_12;
		L_12 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_inline(L_11, TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = ___1_cancellationToken;
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_14 = V_0;
		NullCheck(L_14);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_15;
		L_15 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_inline(L_14, TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_16 = V_2;
		WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m3133AB9959425B6E90C6C15E896B41053ACD051E(L_13, L_15, L_16, NULL);
	}

IL_004d:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17 = V_2;
		return L_17;
	}

IL_004f:
	{
		RuntimeObject* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 1)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_21;
		L_21 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_21;
	}

IL_0072:
	{
		RuntimeObject* L_22 = ___0_source;
		NullCheck(L_22);
		Exception_t* L_23;
		L_23 = InterfaceFuncInvoker0< Exception_t* >::Invoke(2, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_22);
		Exception_t* L_24;
		L_24 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mDDF5CD061CF17571ADA590A19F8C391BCDB24271(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_25;
		L_25 = Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195(L_24, NULL);
		return L_25;
	}

IL_0083:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___1_cancellationToken), NULL);
		if (L_26)
		{
			goto IL_0094;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27;
		memset((&L_27), 0, sizeof(L_27));
		CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6((&L_27), (bool)1, NULL);
		G_B16_0 = L_27;
		goto IL_0095;
	}

IL_0094:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28 = ___1_cancellationToken;
		G_B16_0 = L_28;
	}

IL_0095:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_29;
		L_29 = Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E(G_B16_0, NULL);
		return L_29;
	}

IL_009b:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_30 = ___1_cancellationToken;
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_31 = (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D*)il2cpp_codegen_object_new(AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D_il2cpp_TypeInfo_var);
		AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17(L_31, L_30, AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_RuntimeMethod_var);
		V_1 = L_31;
	}
	try
	{
		RuntimeObject* L_32 = ___0_source;
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_33 = V_1;
		AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* L_34 = (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39*)il2cpp_codegen_object_new(AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_il2cpp_TypeInfo_var);
		AsyncActionCompletedHandler__ctor_mF61474211F61B3BF75C11C5E012E1717D87BCFE4(L_34, L_33, (intptr_t)((void*)AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m6FFC52A7DAC6B0B54212A18D43BE2878D6F4448A_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* >::Invoke(0, IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B_il2cpp_TypeInfo_var, L_32, L_34);
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_35 = V_1;
		RuntimeObject* L_36 = ___0_source;
		NullCheck(L_35);
		AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E(L_35, L_36, AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_RuntimeMethod_var);
		goto IL_00c0;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bd;
		}
		throw e;
	}

CATCH_00bd:
	{
		RuntimeObject* L_37 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00c0;
	}

IL_00c0:
	{
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_38 = V_1;
		NullCheck(L_38);
		Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* L_39;
		L_39 = TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_inline(L_38, TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_RuntimeMethod_var);
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mDDF5CD061CF17571ADA590A19F8C391BCDB24271 (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___0_e;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE7C28A8364615B91DCD10682EE08D04CE42B6D7B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_0 = (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2*)il2cpp_codegen_object_new(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163(L_0, NULL);
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_state;
		NullCheck(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0__, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___1_state;
		V_0 = ((*(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)UnBox(L_0, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_0), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m932AB52C3010D5CA99C5A71D842D95D1902381B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002c:
				{
					return;
				}
			}
		});
		try
		{
			Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
			Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = ((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_4, 1, ((int32_t)2147483647LL));
			V_2 = L_5;
			goto IL_002d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_mD7C04937516F372D5DDC54B259539C3254D6FBF0 (uint32_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___0_id;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___0_id;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = AsyncInfoIdGenerator_CreateNext_m932AB52C3010D5CA99C5A71D842D95D1902381B2(NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___0_id;
		V_1 = L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((uintptr_t)L_6), L_7, ((int32_t)2147483647LL), NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_m7A5173768509360D2682E78A0560FAD32C4A8E15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_0, ((int32_t)19830118), NULL);
		((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_GetResults_m9456D63999ED740A43B8846086AB1BE31ABF470A (TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C L_0;
		L_0 = TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F(__this, TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_OnCompleted_m0067EF959D36B54683564BF74F3A49E66053DF8E (TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* __this, AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* ___0_userCompletionHandler, int32_t ___1_asyncStatus, const RuntimeMethod* method) 
{
	{
		AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* L_0 = ___0_userCompletionHandler;
		int32_t L_1 = ___1_asyncStatus;
		NullCheck(L_0);
		AsyncActionCompletedHandler_Invoke_mC17CE275AEA1DD37BD4F15849A18C43C11BB880C_inline(L_0, __this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_Windows_Foundation_IAsyncAction_put_Completed_m7DAA14EE0B71FCE0254A5CF69CAB864E72C8CBC9 (TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* __this, AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* ___0_handler, const RuntimeMethod* method) 
{
	{
		AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* L_0 = ___0_handler;
		VirtualActionInvoker1< AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* >::Invoke(11, __this, L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61 (RuntimeObject* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlFlags, Guid_t* ___5_pCid, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61(___0_riid, ___1_pv, ___2_dwDestContext, ___3_pvDestContext, ___4_mshlFlags, ___5_pCid);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C (RuntimeObject* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlflags, uint32_t* ___5_pSize, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C(___0_riid, ___1_pv, ___2_dwDestContext, ___3_pvDestContext, ___4_mshlflags, ___5_pSize);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA (RuntimeObject* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t ___2_pv, uint32_t ___3_dwDestContext, intptr_t ___4_pvDestContext, uint32_t ___5_mshlflags, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA(___0_pStm, ___1_riid, ___2_pv, ___3_dwDestContext, ___4_pvDestContext, ___5_mshlflags);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE (RuntimeObject* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t* ___2_ppv, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE(___0_pStm, ___1_riid, ___2_ppv);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66 (RuntimeObject* __this, intptr_t ___0_pStm, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66(___0_pStm);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C (RuntimeObject* __this, uint32_t ___0_dwReserved, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C(___0_dwReserved);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87 (RuntimeObject* __this, const RuntimeMethod* method) 
{
	IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D* ____ibufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D = il2cpp_codegen_com_query_interface<IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D>(static_cast<Il2CppComObject*>(__this));

	intptr_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ibufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D->IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_mCA6584CE743CE14250AE58C76F5465C5A4867019 (RuntimeObject** ___0_bufferMarshalerPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (STDCALL *PInvokeFunc) (IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WinTypes_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WinTypes.dll"), "RoGetBufferMarshaler", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____0_bufferMarshalerPtr_empty = NULL;
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD** ____0_bufferMarshalerPtr_marshaled = &____0_bufferMarshalerPtr_empty;

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WinTypes_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetBufferMarshaler)(____0_bufferMarshalerPtr_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_bufferMarshalerPtr_marshaled);
	#endif

	RuntimeObject* _____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced = NULL;
	if (*____0_bufferMarshalerPtr_marshaled != NULL)
	{
		_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____0_bufferMarshalerPtr_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced), IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD::IID, *____0_bufferMarshalerPtr_marshaled);
		}
	}
	else
	{
		_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___0_bufferMarshalerPtr = _____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___0_bufferMarshalerPtr, (void*)____0_bufferMarshalerPtr_marshaled);

	if (*____0_bufferMarshalerPtr_marshaled != NULL)
	{
		(*____0_bufferMarshalerPtr_marshaled)->Release();
		*____0_bufferMarshalerPtr_marshaled = NULL;
	}

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
	}
	try
	{
		{
			int32_t L_1;
			L_1 = WindowsRuntimeBuffer_RoGetBufferMarshaler_mCA6584CE743CE14250AE58C76F5465C5A4867019((&V_0), NULL);
			V_1 = L_1;
			RuntimeObject* L_2 = V_0;
			((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy), (void*)L_2);
			int32_t L_3 = V_1;
			if (!L_3)
			{
				goto IL_002c_1;
			}
		}
		{
			Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459292A042EFC7E72ED9D5A3569A8543A339FB3A)), NULL);
			Exception_t* L_5 = L_4;
			int32_t L_6 = V_1;
			NullCheck(L_5);
			Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_5, L_6, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var)));
		}

IL_002c_1:
		{
			RuntimeObject* L_7 = V_0;
			if (L_7)
			{
				goto IL_003a_1;
			}
		}
		{
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_8 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
			NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral459292A042EFC7E72ED9D5A3569A8543A339FB3A)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var)));
		}

IL_003a_1:
		{
			goto IL_0049;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* L_9 = ((DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*)IL2CPP_GET_ACTIVE_EXCEPTION(DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*));;
		V_2 = L_9;
		DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* L_10 = V_2;
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_11 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m7D5EA9EB4644D419A13488168B8695B3630B9683(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77FC6A45AA037417CBD14210CD02B3B9F4A3A680)), L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var)));
	}

IL_0049:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) 
{
	{
		__this->____dataPtr = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_001f:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_4 = ___2_length;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_6 = ___3_capacity;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = ___1_offset;
		int32_t L_10 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = ___1_offset;
		int32_t L_14 = ___3_capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_0074:
	{
		int32_t L_16 = ___3_capacity;
		int32_t L_17 = ___2_length;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_0084:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_data;
		__this->____data = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data), (void*)L_19);
		int32_t L_20 = ___1_offset;
		__this->____dataStartOffs = L_20;
		int32_t L_21 = ___2_length;
		__this->____usefulDataLength = L_21;
		int32_t L_22 = ___3_capacity;
		__this->____maxDataCapacity = L_22;
		__this->____dataPtr = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mC044FE299E97DB7BFB74BBD4804BF8BA00BADF38 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_004b:
						{
							{
								bool L_0 = V_1;
								if (L_0)
								{
									goto IL_0057;
								}
							}
							{
								GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
								goto IL_0076;
							}

IL_0057:
							{
								GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->____pinHandle);
								bool L_2;
								L_2 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_1, NULL);
								if (!L_2)
								{
									goto IL_006f;
								}
							}
							{
								GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_3 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->____pinHandle);
								GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_3, NULL);
							}

IL_006f:
							{
								GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_0;
								__this->____pinHandle = L_4;
							}

IL_0076:
							{
								return;
							}
						}
					});
					try
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____data;
						GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6;
						L_6 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_5, 3, NULL);
						V_0 = L_6;
						intptr_t L_7;
						L_7 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
						int32_t L_8 = __this->____dataStartOffs;
						intptr_t L_9;
						L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_7, L_8, NULL);
						V_2 = L_9;
						intptr_t* L_10 = (intptr_t*)(&__this->____dataPtr);
						intptr_t L_11 = V_2;
						intptr_t L_12;
						L_12 = Interlocked_CompareExchange_m7AC708A0F5F20CADA50F64E6E2F34262D3BC45C6(L_10, L_11, 0, NULL);
						bool L_13;
						L_13 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_12, 0, NULL);
						V_1 = L_13;
						goto IL_0077;
					}
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0077:
				{
					return;
				}
			}
		});
		try
		{
			goto IL_0078;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		intptr_t L_14 = V_2;
		void* L_15;
		L_15 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_14, NULL);
		return (uint8_t*)(L_15);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Finalize_mCD002C27B2314F9CABF24CD89798DEBF9754B8FD (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			{
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->____pinHandle);
				bool L_1;
				L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_0, NULL);
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_2 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->____pinHandle);
				GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_2, NULL);
			}

IL_0018_1:
			{
				goto IL_0021;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m1534D40E81B7565971FCB7CB6866FE08AC408DC0 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____maxDataCapacity;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_m820798C41F1C8F32BD96669C46ECE5F360126178 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____usefulDataLength;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, __this);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_3, ((int32_t)-2147483637), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611_RuntimeMethod_var)));
	}

IL_0024:
	{
		uint32_t L_4 = ___0_value;
		__this->____usefulDataLength = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_m71A95405341FEEFF857CB8033C21ECC48F6B743B (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t* L_0 = (intptr_t*)(&__this->____dataPtr);
		intptr_t L_1;
		L_1 = VolatileRead(L_0);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_4 = V_0;
		return L_4;
	}

IL_001b:
	{
		uint8_t* L_5;
		L_5 = WindowsRuntimeBuffer_PinUnderlyingData_mC044FE299E97DB7BFB74BBD4804BF8BA00BADF38(__this, NULL);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), (void*)L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mC02755E756BD6C41D30DC186CAB9F1BE6A5DD192 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, uint32_t ___0_dwReserved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy;
		uint32_t L_1 = ___0_dwReserved;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(5, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m2F5EF22C9D0D973EF8E4BBE35657A52552956A09 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlflags, uint32_t* ___5_pSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy;
		Guid_t* L_1 = ___0_riid;
		intptr_t L_2 = ___1_pv;
		uint32_t L_3 = ___2_dwDestContext;
		intptr_t L_4 = ___3_pvDestContext;
		uint32_t L_5 = ___4_mshlflags;
		uint32_t* L_6 = ___5_pSize;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t*, intptr_t, uint32_t, intptr_t, uint32_t, uint32_t* >::Invoke(1, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mE52057C85D3CD24521AC28C94DEDDC67248762BF (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlFlags, Guid_t* ___5_pCid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy;
		Guid_t* L_1 = ___0_riid;
		intptr_t L_2 = ___1_pv;
		uint32_t L_3 = ___2_dwDestContext;
		intptr_t L_4 = ___3_pvDestContext;
		uint32_t L_5 = ___4_mshlFlags;
		Guid_t* L_6 = ___5_pCid;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t*, intptr_t, uint32_t, intptr_t, uint32_t, Guid_t* >::Invoke(0, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mA3B6B4B6B6DD24292ADEC21EA60A118AE8AAB8D2 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t ___2_pv, uint32_t ___3_dwDestContext, intptr_t ___4_pvDestContext, uint32_t ___5_mshlflags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy;
		intptr_t L_1 = ___0_pStm;
		Guid_t* L_2 = ___1_riid;
		intptr_t L_3 = ___2_pv;
		uint32_t L_4 = ___3_dwDestContext;
		intptr_t L_5 = ___4_pvDestContext;
		uint32_t L_6 = ___5_mshlflags;
		NullCheck(L_0);
		InterfaceActionInvoker6< intptr_t, Guid_t*, intptr_t, uint32_t, intptr_t, uint32_t >::Invoke(2, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m80B52A3FC8001B77804DC953C1AB3884D0D6D630 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___0_pStm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy;
		intptr_t L_1 = ___0_pStm;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(4, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mC087491C3040FA74493C25D95045201546EC5135 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t* ___2_ppv, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy;
		intptr_t L_1 = ___0_pStm;
		Guid_t* L_2 = ___1_riid;
		intptr_t* L_3 = ___2_ppv;
		NullCheck(L_0);
		InterfaceActionInvoker3< intptr_t, Guid_t*, intptr_t* >::Invoke(3, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m0921B386F1BEDDBBDC12B0E6D2504A3BC207371A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_source;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_source;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890(L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_length;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_6 = ___3_capacity;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_source;
		NullCheck(L_8);
		int32_t L_9 = ___1_offset;
		int32_t L_10 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_source;
		NullCheck(L_12);
		int32_t L_13 = ___1_offset;
		int32_t L_14 = ___3_capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_0061:
	{
		int32_t L_16 = ___3_capacity;
		int32_t L_17 = ___2_length;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_0070:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_source;
		int32_t L_20 = ___1_offset;
		int32_t L_21 = ___2_length;
		int32_t L_22 = ___3_capacity;
		WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* L_23 = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A(L_23, L_19, L_20, L_21, L_22, NULL);
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberDecimalSeparator;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_mC17CE275AEA1DD37BD4F15849A18C43C11BB880C_inline (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_asyncInfo, ___1_asyncStatus, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m8D55A6E3369CE9C20D10F59C66B835338DF0D25E_gshared_inline (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) 
{
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->____cancelTokenSource;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_gshared_inline (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* L_0 = __this->____task;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
