#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef ZLIBEXCEPTION_T3917295290_H
#define ZLIBEXCEPTION_T3917295290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Decompression.Zlib.ZlibException
struct  ZlibException_t3917295290  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBEXCEPTION_T3917295290_H



extern "C" void Context_t1744531130_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Context_t1744531130_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Context_t1744531130_0_0_0;
extern "C" void Escape_t3294788190_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Escape_t3294788190_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Escape_t3294788190_0_0_0;
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PreviousInfo_t2148130204_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PreviousInfo_t2148130204_0_0_0;
extern "C" void DelegatePInvokeWrapper_AppDomainInitializer_t682969308();
extern const RuntimeType AppDomainInitializer_t682969308_0_0_0;
extern "C" void DelegatePInvokeWrapper_Swapper_t2822380397();
extern const RuntimeType Swapper_t2822380397_0_0_0;
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DictionaryEntry_t3123975638_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DictionaryEntry_t3123975638_0_0_0;
extern "C" void Slot_t3975888750_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t3975888750_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t3975888750_0_0_0;
extern "C" void Slot_t384495010_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t384495010_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t384495010_0_0_0;
extern "C" void Enum_t4135868527_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enum_t4135868527_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enum_t4135868527_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t714865915();
extern const RuntimeType ReadDelegate_t714865915_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t4270993571();
extern const RuntimeType WriteDelegate_t4270993571_0_0_0;
extern "C" void MonoIOStat_t592533987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoIOStat_t592533987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoIOStat_t592533987_0_0_0;
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEnumInfo_t3694469084_0_0_0;
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeNamedArgument_t287865710_0_0_0;
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeTypedArgument_t2723150157_0_0_0;
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ILTokenInfo_t2325775114_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ILTokenInfo_t2325775114_0_0_0;
extern "C" void MonoResource_t4103430009_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoResource_t4103430009_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoResource_t4103430009_0_0_0;
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RefEmitPermissionSet_t484390987_0_0_0;
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEventInfo_t346866618_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEventInfo_t346866618_0_0_0;
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodInfo_t1248819020_0_0_0;
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoPropertyInfo_t3087356066_0_0_0;
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterModifier_t1461694466_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterModifier_t1461694466_0_0_0;
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceCacheItem_t51292791_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceCacheItem_t51292791_0_0_0;
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceInfo_t2872965302_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceInfo_t2872965302_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossContextDelegate_t387175271();
extern const RuntimeType CrossContextDelegate_t387175271_0_0_0;
extern "C" void DelegatePInvokeWrapper_CallbackHandler_t3280319253();
extern const RuntimeType CallbackHandler_t3280319253_0_0_0;
extern "C" void SerializationEntry_t648286436_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SerializationEntry_t648286436_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SerializationEntry_t648286436_0_0_0;
extern "C" void StreamingContext_t3711869237_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StreamingContext_t3711869237_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StreamingContext_t3711869237_0_0_0;
extern "C" void DSAParameters_t1885824122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DSAParameters_t1885824122_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DSAParameters_t1885824122_0_0_0;
extern "C" void RSAParameters_t1728406613_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RSAParameters_t1728406613_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RSAParameters_t1728406613_0_0_0;
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SecurityFrame_t1422462475_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SecurityFrame_t1422462475_0_0_0;
extern "C" void DelegatePInvokeWrapper_ThreadStart_t1006689297();
extern const RuntimeType ThreadStart_t1006689297_0_0_0;
extern "C" void ValueType_t3640485471_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueType_t3640485471_0_0_0;
extern "C" void DelegatePInvokeWrapper_SocketAsyncCall_t1521370843();
extern const RuntimeType SocketAsyncCall_t1521370843_0_0_0;
extern "C" void SocketAsyncResult_t2080034863_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SocketAsyncResult_t2080034863_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SocketAsyncResult_t2080034863_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SocketAsyncResult_t2080034863_0_0_0;
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void X509ChainStatus_t133602714_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType X509ChainStatus_t133602714_0_0_0;
extern "C" void IntStack_t2189327687_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntStack_t2189327687_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntStack_t2189327687_0_0_0;
extern "C" void Interval_t1802865632_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Interval_t1802865632_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Interval_t1802865632_0_0_0;
extern "C" void DelegatePInvokeWrapper_CostDelegate_t1722821004();
extern const RuntimeType CostDelegate_t1722821004_0_0_0;
extern "C" void UriScheme_t722425697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_t722425697_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_t722425697_0_0_0;
extern "C" void DelegatePInvokeWrapper_Action_t1264377477();
extern const RuntimeType Action_t1264377477_0_0_0;
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationCurve_t3046754366_0_0_0;
extern "C" void DelegatePInvokeWrapper_LogCallback_t3588208630();
extern const RuntimeType LogCallback_t3588208630_0_0_0;
extern "C" void DelegatePInvokeWrapper_LowMemoryCallback_t4104246196();
extern const RuntimeType LowMemoryCallback_t4104246196_0_0_0;
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleCreateRequest_t3119663542_0_0_0;
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleRequest_t699759206_0_0_0;
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncOperation_t1445031843_0_0_0;
extern "C" void OrderBlock_t1585977831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OrderBlock_t1585977831_0_0_0;
extern "C" void Coroutine_t3829159415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Coroutine_t3829159415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Coroutine_t3829159415_0_0_0;
extern "C" void DelegatePInvokeWrapper_CSSMeasureFunc_t1554030124();
extern const RuntimeType CSSMeasureFunc_t1554030124_0_0_0;
extern "C" void CullingGroup_t2096318768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CullingGroup_t2096318768_0_0_0;
extern "C" void DelegatePInvokeWrapper_StateChanged_t2136737110();
extern const RuntimeType StateChanged_t2136737110_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044();
extern const RuntimeType DisplaysUpdatedDelegate_t51287044_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnityAction_t3245792599();
extern const RuntimeType UnityAction_t3245792599_0_0_0;
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FailedToLoadScriptObject_t547604379_0_0_0;
extern "C" void Gradient_t3067099924_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Gradient_t3067099924_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Gradient_t3067099924_0_0_0;
extern "C" void Object_t631007953_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Object_t631007953_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Object_t631007953_0_0_0;
extern "C" void PlayableBinding_t354260709_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayableBinding_t354260709_0_0_0;
extern "C" void RectOffset_t1369453676_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RectOffset_t1369453676_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RectOffset_t1369453676_0_0_0;
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceRequest_t3109103591_0_0_0;
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ScriptableObject_t2528358522_0_0_0;
extern "C" void HitInfo_t3229609740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HitInfo_t3229609740_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HitInfo_t3229609740_0_0_0;
extern "C" void TrackedReference_t1199777556_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedReference_t1199777556_0_0_0;
extern "C" void DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279();
extern const RuntimeType RequestAtlasCallback_t3100554279_0_0_0;
extern "C" void WorkRequest_t1354518612_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WorkRequest_t1354518612_0_0_0;
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitForSeconds_t1699091251_0_0_0;
extern "C" void YieldInstruction_t403091072_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType YieldInstruction_t403091072_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMReaderCallback_t1677636661();
extern const RuntimeType PCMReaderCallback_t1677636661_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452();
extern const RuntimeType PCMSetPositionCallback_t1059417452_0_0_0;
extern "C" void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874();
extern const RuntimeType AudioConfigurationChangeHandler_t2089929874_0_0_0;
extern "C" void DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454();
extern const RuntimeType FontTextureRebuildCallback_t2467502454_0_0_0;
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerationSettings_t1351628751_0_0_0;
extern "C" void TextGenerator_t3211863866_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerator_t3211863866_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerator_t3211863866_0_0_0;
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationEvent_t1536042487_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationEvent_t1536042487_0_0_0;
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorTransitionInfo_t2534804151_0_0_0;
extern "C" void HumanBone_t2465339518_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HumanBone_t2465339518_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HumanBone_t2465339518_0_0_0;
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SkeletonBone_t4134054672_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SkeletonBone_t4134054672_0_0_0;
extern "C" void GcAchievementData_t675222246_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementData_t675222246_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementData_t675222246_0_0_0;
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementDescriptionData_t643925653_0_0_0;
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcLeaderboard_t4132273028_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcLeaderboard_t4132273028_0_0_0;
extern "C" void GcScoreData_t2125309831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcScoreData_t2125309831_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcScoreData_t2125309831_0_0_0;
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcUserProfileData_t2719720026_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcUserProfileData_t2719720026_0_0_0;
extern "C" void Event_t2956885303_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Event_t2956885303_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Event_t2956885303_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowFunction_t3146511083();
extern const RuntimeType WindowFunction_t3146511083_0_0_0;
extern "C" void GUIContent_t3050628031_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIContent_t3050628031_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIContent_t3050628031_0_0_0;
extern "C" void DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295();
extern const RuntimeType SkinChangedDelegate_t1143955295_0_0_0;
extern "C" void GUIStyle_t3956901511_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyle_t3956901511_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyle_t3956901511_0_0_0;
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyleState_t1397964415_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyleState_t1397964415_0_0_0;
extern "C" void SliderHandler_t1154919399_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SliderHandler_t1154919399_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SliderHandler_t1154919399_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SliderHandler_t1154919399_0_0_0;
extern "C" void MainModule_t2320046318_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MainModule_t2320046318_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MainModule_t2320046318_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MainModule_t2320046318_0_0_0;
extern "C" void Collision2D_t2842956331_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision2D_t2842956331_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision2D_t2842956331_0_0_0;
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ContactFilter2D_t3805203441_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ContactFilter2D_t3805203441_0_0_0;
extern "C" void RaycastHit2D_t2279581989_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastHit2D_t2279581989_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastHit2D_t2279581989_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastHit2D_t2279581989_0_0_0;
extern "C" void Collision_t4262080450_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision_t4262080450_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision_t4262080450_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision_t4262080450_0_0_0;
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControllerColliderHit_t240592346_0_0_0;
extern "C" void RaycastHit_t1056001966_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastHit_t1056001966_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastHit_t1056001966_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastHit_t1056001966_0_0_0;
extern "C" void DelegatePInvokeWrapper_WillRenderCanvases_t3309123499();
extern const RuntimeType WillRenderCanvases_t3309123499_0_0_0;
extern "C" void DelegatePInvokeWrapper_SessionStateChanged_t3163629820();
extern const RuntimeType SessionStateChanged_t3163629820_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393();
extern const RuntimeType UpdatedEventHandler_t1027848393_0_0_0;
extern "C" void RaycastResult_t3360306849_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastResult_t3360306849_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastResult_t3360306849_0_0_0;
extern "C" void ColorTween_t809614380_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t809614380_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t809614380_0_0_0;
extern "C" void FloatTween_t1274330004_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_t1274330004_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_t1274330004_0_0_0;
extern "C" void Resources_t1597885468_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Resources_t1597885468_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Resources_t1597885468_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Resources_t1597885468_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t2355412304();
extern const RuntimeType OnValidateInput_t2355412304_0_0_0;
extern "C" void Navigation_t3049316579_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Navigation_t3049316579_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Navigation_t3049316579_0_0_0;
extern "C" void SpriteState_t1362986479_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteState_t1362986479_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteState_t1362986479_0_0_0;
extern "C" void ColorTween_t378116136_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t378116136_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t378116136_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t378116136_0_0_0;
extern "C" void FloatTween_t3783157226_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_t3783157226_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_t3783157226_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_t3783157226_0_0_0;
extern "C" void FontCreationSetting_t628772060_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FontCreationSetting_t628772060_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FontCreationSetting_t628772060_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FontCreationSetting_t628772060_0_0_0;
extern "C" void MaterialReference_t1952344632_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MaterialReference_t1952344632_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MaterialReference_t1952344632_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MaterialReference_t1952344632_0_0_0;
extern "C" void SpriteData_t3048397587_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteData_t3048397587_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteData_t3048397587_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteData_t3048397587_0_0_0;
extern "C" void TMP_CharacterInfo_t3185626797_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_CharacterInfo_t3185626797_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_CharacterInfo_t3185626797_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_CharacterInfo_t3185626797_0_0_0;
extern "C" void Resources_t2155109485_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Resources_t2155109485_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Resources_t2155109485_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Resources_t2155109485_0_0_0;
extern "C" void TMP_FontWeights_t916301067_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_FontWeights_t916301067_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_FontWeights_t916301067_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_FontWeights_t916301067_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t373909109();
extern const RuntimeType OnValidateInput_t373909109_0_0_0;
extern "C" void TMP_LinkInfo_t1092083476_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_LinkInfo_t1092083476_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_LinkInfo_t1092083476_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_LinkInfo_t1092083476_0_0_0;
extern "C" void TMP_MeshInfo_t2771747634_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_MeshInfo_t2771747634_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_MeshInfo_t2771747634_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_MeshInfo_t2771747634_0_0_0;
extern "C" void TMP_WordInfo_t3331066303_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TMP_WordInfo_t3331066303_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TMP_WordInfo_t3331066303_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TMP_WordInfo_t3331066303_0_0_0;
extern "C" void WordWrapState_t341939652_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WordWrapState_t341939652_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WordWrapState_t341939652_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WordWrapState_t341939652_0_0_0;
extern "C" void WeightInfo_t1982677921_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WeightInfo_t1982677921_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WeightInfo_t1982677921_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WeightInfo_t1982677921_0_0_0;
extern "C" void DelegatePInvokeWrapper_CompressFunc_t1132115256();
extern const RuntimeType CompressFunc_t1132115256_0_0_0;
extern "C" void ClientMessage_t670879289_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ClientMessage_t670879289_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ClientMessage_t670879289_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ClientMessage_t670879289_0_0_0;
extern "C" void AxisState_t478218302_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AxisState_t478218302_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AxisState_t478218302_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AxisState_t478218302_0_0_0;
extern "C" void CameraState_t560734301_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CameraState_t560734301_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CameraState_t560734301_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CameraState_t560734301_0_0_0;
extern "C" void CustomBlendable_t3531329220_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomBlendable_t3531329220_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomBlendable_t3531329220_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomBlendable_t3531329220_0_0_0;
extern "C" void CustomBlend_t84561686_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomBlend_t84561686_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomBlend_t84561686_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomBlend_t84561686_0_0_0;
extern "C" void Instruction_t438122268_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Instruction_t438122268_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Instruction_t438122268_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Instruction_t438122268_0_0_0;
extern "C" void DelegatePInvokeWrapper_AxisInputDelegate_t365085504();
extern const RuntimeType AxisInputDelegate_t365085504_0_0_0;
extern "C" void Recentering_t980373847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Recentering_t980373847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Recentering_t980373847_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Recentering_t980373847_0_0_0;
extern "C" void Instruction_t2121420310_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Instruction_t2121420310_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Instruction_t2121420310_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Instruction_t2121420310_0_0_0;
extern "C" void Target_t116854977_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Target_t116854977_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Target_t116854977_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Target_t116854977_0_0_0;
extern "C" void AutoDolly_t722089724_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AutoDolly_t722089724_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AutoDolly_t722089724_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AutoDolly_t722089724_0_0_0;
extern "C" void LensSettings_t822254920_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LensSettings_t822254920_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LensSettings_t822254920_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LensSettings_t822254920_0_0_0;
extern "C" void Log_t3789968391_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Log_t3789968391_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Log_t3789968391_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Log_t3789968391_0_0_0;
extern "C" void Enumerator_t1513288951_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enumerator_t1513288951_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enumerator_t1513288951_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enumerator_t1513288951_0_0_0;
extern "C" void KeyEnumerator_t488138053_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void KeyEnumerator_t488138053_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void KeyEnumerator_t488138053_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType KeyEnumerator_t488138053_0_0_0;
extern "C" void ValueEnumerator_t3808401860_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueEnumerator_t3808401860_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueEnumerator_t3808401860_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueEnumerator_t3808401860_0_0_0;
extern const RuntimeType ZlibException_t3917295290_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[139] = 
{
	{ NULL, Context_t1744531130_marshal_pinvoke, Context_t1744531130_marshal_pinvoke_back, Context_t1744531130_marshal_pinvoke_cleanup, NULL, NULL, &Context_t1744531130_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Context */,
	{ NULL, Escape_t3294788190_marshal_pinvoke, Escape_t3294788190_marshal_pinvoke_back, Escape_t3294788190_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t3294788190_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, PreviousInfo_t2148130204_marshal_pinvoke, PreviousInfo_t2148130204_marshal_pinvoke_back, PreviousInfo_t2148130204_marshal_pinvoke_cleanup, NULL, NULL, &PreviousInfo_t2148130204_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_t682969308, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_t682969308_0_0_0 } /* System.AppDomainInitializer */,
	{ DelegatePInvokeWrapper_Swapper_t2822380397, NULL, NULL, NULL, NULL, NULL, &Swapper_t2822380397_0_0_0 } /* System.Array/Swapper */,
	{ NULL, DictionaryEntry_t3123975638_marshal_pinvoke, DictionaryEntry_t3123975638_marshal_pinvoke_back, DictionaryEntry_t3123975638_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t3123975638_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, Slot_t3975888750_marshal_pinvoke, Slot_t3975888750_marshal_pinvoke_back, Slot_t3975888750_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t3975888750_0_0_0 } /* System.Collections.Hashtable/Slot */,
	{ NULL, Slot_t384495010_marshal_pinvoke, Slot_t384495010_marshal_pinvoke_back, Slot_t384495010_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t384495010_0_0_0 } /* System.Collections.SortedList/Slot */,
	{ NULL, Enum_t4135868527_marshal_pinvoke, Enum_t4135868527_marshal_pinvoke_back, Enum_t4135868527_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t4135868527_0_0_0 } /* System.Enum */,
	{ DelegatePInvokeWrapper_ReadDelegate_t714865915, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t714865915_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t4270993571, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t4270993571_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, MonoIOStat_t592533987_marshal_pinvoke, MonoIOStat_t592533987_marshal_pinvoke_back, MonoIOStat_t592533987_marshal_pinvoke_cleanup, NULL, NULL, &MonoIOStat_t592533987_0_0_0 } /* System.IO.MonoIOStat */,
	{ NULL, MonoEnumInfo_t3694469084_marshal_pinvoke, MonoEnumInfo_t3694469084_marshal_pinvoke_back, MonoEnumInfo_t3694469084_marshal_pinvoke_cleanup, NULL, NULL, &MonoEnumInfo_t3694469084_0_0_0 } /* System.MonoEnumInfo */,
	{ NULL, CustomAttributeNamedArgument_t287865710_marshal_pinvoke, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_back, CustomAttributeNamedArgument_t287865710_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t287865710_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_back, CustomAttributeTypedArgument_t2723150157_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t2723150157_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, ILTokenInfo_t2325775114_marshal_pinvoke, ILTokenInfo_t2325775114_marshal_pinvoke_back, ILTokenInfo_t2325775114_marshal_pinvoke_cleanup, NULL, NULL, &ILTokenInfo_t2325775114_0_0_0 } /* System.Reflection.Emit.ILTokenInfo */,
	{ NULL, MonoResource_t4103430009_marshal_pinvoke, MonoResource_t4103430009_marshal_pinvoke_back, MonoResource_t4103430009_marshal_pinvoke_cleanup, NULL, NULL, &MonoResource_t4103430009_0_0_0 } /* System.Reflection.Emit.MonoResource */,
	{ NULL, RefEmitPermissionSet_t484390987_marshal_pinvoke, RefEmitPermissionSet_t484390987_marshal_pinvoke_back, RefEmitPermissionSet_t484390987_marshal_pinvoke_cleanup, NULL, NULL, &RefEmitPermissionSet_t484390987_0_0_0 } /* System.Reflection.Emit.RefEmitPermissionSet */,
	{ NULL, MonoEventInfo_t346866618_marshal_pinvoke, MonoEventInfo_t346866618_marshal_pinvoke_back, MonoEventInfo_t346866618_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t346866618_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t1248819020_marshal_pinvoke, MonoMethodInfo_t1248819020_marshal_pinvoke_back, MonoMethodInfo_t1248819020_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1248819020_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_t3087356066_marshal_pinvoke, MonoPropertyInfo_t3087356066_marshal_pinvoke_back, MonoPropertyInfo_t3087356066_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t3087356066_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterModifier_t1461694466_marshal_pinvoke, ParameterModifier_t1461694466_marshal_pinvoke_back, ParameterModifier_t1461694466_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t1461694466_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceCacheItem_t51292791_marshal_pinvoke, ResourceCacheItem_t51292791_marshal_pinvoke_back, ResourceCacheItem_t51292791_marshal_pinvoke_cleanup, NULL, NULL, &ResourceCacheItem_t51292791_0_0_0 } /* System.Resources.ResourceReader/ResourceCacheItem */,
	{ NULL, ResourceInfo_t2872965302_marshal_pinvoke, ResourceInfo_t2872965302_marshal_pinvoke_back, ResourceInfo_t2872965302_marshal_pinvoke_cleanup, NULL, NULL, &ResourceInfo_t2872965302_0_0_0 } /* System.Resources.ResourceReader/ResourceInfo */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t387175271, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t387175271_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ DelegatePInvokeWrapper_CallbackHandler_t3280319253, NULL, NULL, NULL, NULL, NULL, &CallbackHandler_t3280319253_0_0_0 } /* System.Runtime.Serialization.SerializationCallbacks/CallbackHandler */,
	{ NULL, SerializationEntry_t648286436_marshal_pinvoke, SerializationEntry_t648286436_marshal_pinvoke_back, SerializationEntry_t648286436_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t648286436_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ NULL, StreamingContext_t3711869237_marshal_pinvoke, StreamingContext_t3711869237_marshal_pinvoke_back, StreamingContext_t3711869237_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t3711869237_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, DSAParameters_t1885824122_marshal_pinvoke, DSAParameters_t1885824122_marshal_pinvoke_back, DSAParameters_t1885824122_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t1885824122_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, RSAParameters_t1728406613_marshal_pinvoke, RSAParameters_t1728406613_marshal_pinvoke_back, RSAParameters_t1728406613_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t1728406613_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, SecurityFrame_t1422462475_marshal_pinvoke, SecurityFrame_t1422462475_marshal_pinvoke_back, SecurityFrame_t1422462475_marshal_pinvoke_cleanup, NULL, NULL, &SecurityFrame_t1422462475_0_0_0 } /* System.Security.SecurityFrame */,
	{ DelegatePInvokeWrapper_ThreadStart_t1006689297, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t1006689297_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ValueType_t3640485471_marshal_pinvoke, ValueType_t3640485471_marshal_pinvoke_back, ValueType_t3640485471_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t3640485471_0_0_0 } /* System.ValueType */,
	{ DelegatePInvokeWrapper_SocketAsyncCall_t1521370843, NULL, NULL, NULL, NULL, NULL, &SocketAsyncCall_t1521370843_0_0_0 } /* System.Net.Sockets.Socket/SocketAsyncCall */,
	{ NULL, SocketAsyncResult_t2080034863_marshal_pinvoke, SocketAsyncResult_t2080034863_marshal_pinvoke_back, SocketAsyncResult_t2080034863_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_t2080034863_0_0_0 } /* System.Net.Sockets.Socket/SocketAsyncResult */,
	{ NULL, X509ChainStatus_t133602714_marshal_pinvoke, X509ChainStatus_t133602714_marshal_pinvoke_back, X509ChainStatus_t133602714_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t133602714_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, IntStack_t2189327687_marshal_pinvoke, IntStack_t2189327687_marshal_pinvoke_back, IntStack_t2189327687_marshal_pinvoke_cleanup, NULL, NULL, &IntStack_t2189327687_0_0_0 } /* System.Text.RegularExpressions.Interpreter/IntStack */,
	{ NULL, Interval_t1802865632_marshal_pinvoke, Interval_t1802865632_marshal_pinvoke_back, Interval_t1802865632_marshal_pinvoke_cleanup, NULL, NULL, &Interval_t1802865632_0_0_0 } /* System.Text.RegularExpressions.Interval */,
	{ DelegatePInvokeWrapper_CostDelegate_t1722821004, NULL, NULL, NULL, NULL, NULL, &CostDelegate_t1722821004_0_0_0 } /* System.Text.RegularExpressions.IntervalCollection/CostDelegate */,
	{ NULL, UriScheme_t722425697_marshal_pinvoke, UriScheme_t722425697_marshal_pinvoke_back, UriScheme_t722425697_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t722425697_0_0_0 } /* System.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_Action_t1264377477, NULL, NULL, NULL, NULL, NULL, &Action_t1264377477_0_0_0 } /* System.Action */,
	{ NULL, AnimationCurve_t3046754366_marshal_pinvoke, AnimationCurve_t3046754366_marshal_pinvoke_back, AnimationCurve_t3046754366_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_t3046754366_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_LogCallback_t3588208630, NULL, NULL, NULL, NULL, NULL, &LogCallback_t3588208630_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t4104246196, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t4104246196_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AssetBundleCreateRequest_t3119663542_marshal_pinvoke, AssetBundleCreateRequest_t3119663542_marshal_pinvoke_back, AssetBundleCreateRequest_t3119663542_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t3119663542_0_0_0 } /* UnityEngine.AssetBundleCreateRequest */,
	{ NULL, AssetBundleRequest_t699759206_marshal_pinvoke, AssetBundleRequest_t699759206_marshal_pinvoke_back, AssetBundleRequest_t699759206_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_t699759206_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ NULL, AsyncOperation_t1445031843_marshal_pinvoke, AsyncOperation_t1445031843_marshal_pinvoke_back, AsyncOperation_t1445031843_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t1445031843_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t1585977831_marshal_pinvoke, OrderBlock_t1585977831_marshal_pinvoke_back, OrderBlock_t1585977831_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t1585977831_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Coroutine_t3829159415_marshal_pinvoke, Coroutine_t3829159415_marshal_pinvoke_back, Coroutine_t3829159415_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t3829159415_0_0_0 } /* UnityEngine.Coroutine */,
	{ DelegatePInvokeWrapper_CSSMeasureFunc_t1554030124, NULL, NULL, NULL, NULL, NULL, &CSSMeasureFunc_t1554030124_0_0_0 } /* UnityEngine.CSSLayout.CSSMeasureFunc */,
	{ NULL, CullingGroup_t2096318768_marshal_pinvoke, CullingGroup_t2096318768_marshal_pinvoke_back, CullingGroup_t2096318768_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t2096318768_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t2136737110, NULL, NULL, NULL, NULL, NULL, &StateChanged_t2136737110_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t51287044_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_t3245792599, NULL, NULL, NULL, NULL, NULL, &UnityAction_t3245792599_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, FailedToLoadScriptObject_t547604379_marshal_pinvoke, FailedToLoadScriptObject_t547604379_marshal_pinvoke_back, FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t547604379_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t3067099924_marshal_pinvoke, Gradient_t3067099924_marshal_pinvoke_back, Gradient_t3067099924_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t3067099924_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, Object_t631007953_marshal_pinvoke, Object_t631007953_marshal_pinvoke_back, Object_t631007953_marshal_pinvoke_cleanup, NULL, NULL, &Object_t631007953_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t354260709_marshal_pinvoke, PlayableBinding_t354260709_marshal_pinvoke_back, PlayableBinding_t354260709_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t354260709_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, RectOffset_t1369453676_marshal_pinvoke, RectOffset_t1369453676_marshal_pinvoke_back, RectOffset_t1369453676_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t1369453676_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, ResourceRequest_t3109103591_marshal_pinvoke, ResourceRequest_t3109103591_marshal_pinvoke_back, ResourceRequest_t3109103591_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t3109103591_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_t2528358522_marshal_pinvoke, ScriptableObject_t2528358522_marshal_pinvoke_back, ScriptableObject_t2528358522_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_t2528358522_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, HitInfo_t3229609740_marshal_pinvoke, HitInfo_t3229609740_marshal_pinvoke_back, HitInfo_t3229609740_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t3229609740_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, TrackedReference_t1199777556_marshal_pinvoke, TrackedReference_t1199777556_marshal_pinvoke_back, TrackedReference_t1199777556_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_t1199777556_0_0_0 } /* UnityEngine.TrackedReference */,
	{ DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279, NULL, NULL, NULL, NULL, NULL, &RequestAtlasCallback_t3100554279_0_0_0 } /* UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback */,
	{ NULL, WorkRequest_t1354518612_marshal_pinvoke, WorkRequest_t1354518612_marshal_pinvoke_back, WorkRequest_t1354518612_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t1354518612_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t1699091251_marshal_pinvoke, WaitForSeconds_t1699091251_marshal_pinvoke_back, WaitForSeconds_t1699091251_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t1699091251_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t403091072_marshal_pinvoke, YieldInstruction_t403091072_marshal_pinvoke_back, YieldInstruction_t403091072_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t403091072_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t1677636661, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t1677636661_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t1059417452, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t1059417452_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2089929874, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t2089929874_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t2467502454, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t2467502454_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, TextGenerationSettings_t1351628751_marshal_pinvoke, TextGenerationSettings_t1351628751_marshal_pinvoke_back, TextGenerationSettings_t1351628751_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t1351628751_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t3211863866_marshal_pinvoke, TextGenerator_t3211863866_marshal_pinvoke_back, TextGenerator_t3211863866_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t3211863866_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, AnimationEvent_t1536042487_marshal_pinvoke, AnimationEvent_t1536042487_marshal_pinvoke_back, AnimationEvent_t1536042487_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t1536042487_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorTransitionInfo_t2534804151_marshal_pinvoke, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_back, AnimatorTransitionInfo_t2534804151_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t2534804151_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2465339518_marshal_pinvoke, HumanBone_t2465339518_marshal_pinvoke_back, HumanBone_t2465339518_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2465339518_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_t4134054672_marshal_pinvoke, SkeletonBone_t4134054672_marshal_pinvoke_back, SkeletonBone_t4134054672_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_t4134054672_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, GcAchievementData_t675222246_marshal_pinvoke, GcAchievementData_t675222246_marshal_pinvoke_back, GcAchievementData_t675222246_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t675222246_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_t643925653_marshal_pinvoke, GcAchievementDescriptionData_t643925653_marshal_pinvoke_back, GcAchievementDescriptionData_t643925653_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_t643925653_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t4132273028_marshal_pinvoke, GcLeaderboard_t4132273028_marshal_pinvoke_back, GcLeaderboard_t4132273028_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t4132273028_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_t2125309831_marshal_pinvoke, GcScoreData_t2125309831_marshal_pinvoke_back, GcScoreData_t2125309831_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_t2125309831_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_t2719720026_marshal_pinvoke, GcUserProfileData_t2719720026_marshal_pinvoke_back, GcUserProfileData_t2719720026_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_t2719720026_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ NULL, Event_t2956885303_marshal_pinvoke, Event_t2956885303_marshal_pinvoke_back, Event_t2956885303_marshal_pinvoke_cleanup, NULL, NULL, &Event_t2956885303_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t3146511083, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t3146511083_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t3050628031_marshal_pinvoke, GUIContent_t3050628031_marshal_pinvoke_back, GUIContent_t3050628031_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t3050628031_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_t1143955295, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_t1143955295_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t3956901511_marshal_pinvoke, GUIStyle_t3956901511_marshal_pinvoke_back, GUIStyle_t3956901511_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t3956901511_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t1397964415_marshal_pinvoke, GUIStyleState_t1397964415_marshal_pinvoke_back, GUIStyleState_t1397964415_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t1397964415_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, SliderHandler_t1154919399_marshal_pinvoke, SliderHandler_t1154919399_marshal_pinvoke_back, SliderHandler_t1154919399_marshal_pinvoke_cleanup, NULL, NULL, &SliderHandler_t1154919399_0_0_0 } /* UnityEngine.SliderHandler */,
	{ NULL, MainModule_t2320046318_marshal_pinvoke, MainModule_t2320046318_marshal_pinvoke_back, MainModule_t2320046318_marshal_pinvoke_cleanup, NULL, NULL, &MainModule_t2320046318_0_0_0 } /* UnityEngine.ParticleSystem/MainModule */,
	{ NULL, Collision2D_t2842956331_marshal_pinvoke, Collision2D_t2842956331_marshal_pinvoke_back, Collision2D_t2842956331_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t2842956331_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t3805203441_marshal_pinvoke, ContactFilter2D_t3805203441_marshal_pinvoke_back, ContactFilter2D_t3805203441_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t3805203441_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, RaycastHit2D_t2279581989_marshal_pinvoke, RaycastHit2D_t2279581989_marshal_pinvoke_back, RaycastHit2D_t2279581989_marshal_pinvoke_cleanup, NULL, NULL, &RaycastHit2D_t2279581989_0_0_0 } /* UnityEngine.RaycastHit2D */,
	{ NULL, Collision_t4262080450_marshal_pinvoke, Collision_t4262080450_marshal_pinvoke_back, Collision_t4262080450_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t4262080450_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, ControllerColliderHit_t240592346_marshal_pinvoke, ControllerColliderHit_t240592346_marshal_pinvoke_back, ControllerColliderHit_t240592346_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_t240592346_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, RaycastHit_t1056001966_marshal_pinvoke, RaycastHit_t1056001966_marshal_pinvoke_back, RaycastHit_t1056001966_marshal_pinvoke_cleanup, NULL, NULL, &RaycastHit_t1056001966_0_0_0 } /* UnityEngine.RaycastHit */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_t3309123499, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_t3309123499_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t3163629820, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t3163629820_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_t1027848393, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_t1027848393_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, RaycastResult_t3360306849_marshal_pinvoke, RaycastResult_t3360306849_marshal_pinvoke_back, RaycastResult_t3360306849_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t3360306849_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t809614380_marshal_pinvoke, ColorTween_t809614380_marshal_pinvoke_back, ColorTween_t809614380_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t809614380_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_t1274330004_marshal_pinvoke, FloatTween_t1274330004_marshal_pinvoke_back, FloatTween_t1274330004_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t1274330004_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, Resources_t1597885468_marshal_pinvoke, Resources_t1597885468_marshal_pinvoke_back, Resources_t1597885468_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t1597885468_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t2355412304, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t2355412304_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t3049316579_marshal_pinvoke, Navigation_t3049316579_marshal_pinvoke_back, Navigation_t3049316579_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t3049316579_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, SpriteState_t1362986479_marshal_pinvoke, SpriteState_t1362986479_marshal_pinvoke_back, SpriteState_t1362986479_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t1362986479_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, ColorTween_t378116136_marshal_pinvoke, ColorTween_t378116136_marshal_pinvoke_back, ColorTween_t378116136_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t378116136_0_0_0 } /* TMPro.ColorTween */,
	{ NULL, FloatTween_t3783157226_marshal_pinvoke, FloatTween_t3783157226_marshal_pinvoke_back, FloatTween_t3783157226_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t3783157226_0_0_0 } /* TMPro.FloatTween */,
	{ NULL, FontCreationSetting_t628772060_marshal_pinvoke, FontCreationSetting_t628772060_marshal_pinvoke_back, FontCreationSetting_t628772060_marshal_pinvoke_cleanup, NULL, NULL, &FontCreationSetting_t628772060_0_0_0 } /* TMPro.FontCreationSetting */,
	{ NULL, MaterialReference_t1952344632_marshal_pinvoke, MaterialReference_t1952344632_marshal_pinvoke_back, MaterialReference_t1952344632_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_t1952344632_0_0_0 } /* TMPro.MaterialReference */,
	{ NULL, SpriteData_t3048397587_marshal_pinvoke, SpriteData_t3048397587_marshal_pinvoke_back, SpriteData_t3048397587_marshal_pinvoke_cleanup, NULL, NULL, &SpriteData_t3048397587_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker/SpriteData */,
	{ NULL, TMP_CharacterInfo_t3185626797_marshal_pinvoke, TMP_CharacterInfo_t3185626797_marshal_pinvoke_back, TMP_CharacterInfo_t3185626797_marshal_pinvoke_cleanup, NULL, NULL, &TMP_CharacterInfo_t3185626797_0_0_0 } /* TMPro.TMP_CharacterInfo */,
	{ NULL, Resources_t2155109485_marshal_pinvoke, Resources_t2155109485_marshal_pinvoke_back, Resources_t2155109485_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t2155109485_0_0_0 } /* TMPro.TMP_DefaultControls/Resources */,
	{ NULL, TMP_FontWeights_t916301067_marshal_pinvoke, TMP_FontWeights_t916301067_marshal_pinvoke_back, TMP_FontWeights_t916301067_marshal_pinvoke_cleanup, NULL, NULL, &TMP_FontWeights_t916301067_0_0_0 } /* TMPro.TMP_FontWeights */,
	{ DelegatePInvokeWrapper_OnValidateInput_t373909109, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t373909109_0_0_0 } /* TMPro.TMP_InputField/OnValidateInput */,
	{ NULL, TMP_LinkInfo_t1092083476_marshal_pinvoke, TMP_LinkInfo_t1092083476_marshal_pinvoke_back, TMP_LinkInfo_t1092083476_marshal_pinvoke_cleanup, NULL, NULL, &TMP_LinkInfo_t1092083476_0_0_0 } /* TMPro.TMP_LinkInfo */,
	{ NULL, TMP_MeshInfo_t2771747634_marshal_pinvoke, TMP_MeshInfo_t2771747634_marshal_pinvoke_back, TMP_MeshInfo_t2771747634_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MeshInfo_t2771747634_0_0_0 } /* TMPro.TMP_MeshInfo */,
	{ NULL, TMP_WordInfo_t3331066303_marshal_pinvoke, TMP_WordInfo_t3331066303_marshal_pinvoke_back, TMP_WordInfo_t3331066303_marshal_pinvoke_cleanup, NULL, NULL, &TMP_WordInfo_t3331066303_0_0_0 } /* TMPro.TMP_WordInfo */,
	{ NULL, WordWrapState_t341939652_marshal_pinvoke, WordWrapState_t341939652_marshal_pinvoke_back, WordWrapState_t341939652_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_t341939652_0_0_0 } /* TMPro.WordWrapState */,
	{ NULL, WeightInfo_t1982677921_marshal_pinvoke, WeightInfo_t1982677921_marshal_pinvoke_back, WeightInfo_t1982677921_marshal_pinvoke_cleanup, NULL, NULL, &WeightInfo_t1982677921_0_0_0 } /* UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo */,
	{ DelegatePInvokeWrapper_CompressFunc_t1132115256, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t1132115256_0_0_0 } /* BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc */,
	{ NULL, ClientMessage_t670879289_marshal_pinvoke, ClientMessage_t670879289_marshal_pinvoke_back, ClientMessage_t670879289_marshal_pinvoke_cleanup, NULL, NULL, &ClientMessage_t670879289_0_0_0 } /* BestHTTP.SignalR.Messages.ClientMessage */,
	{ NULL, AxisState_t478218302_marshal_pinvoke, AxisState_t478218302_marshal_pinvoke_back, AxisState_t478218302_marshal_pinvoke_cleanup, NULL, NULL, &AxisState_t478218302_0_0_0 } /* Cinemachine.AxisState */,
	{ NULL, CameraState_t560734301_marshal_pinvoke, CameraState_t560734301_marshal_pinvoke_back, CameraState_t560734301_marshal_pinvoke_cleanup, NULL, NULL, &CameraState_t560734301_0_0_0 } /* Cinemachine.CameraState */,
	{ NULL, CustomBlendable_t3531329220_marshal_pinvoke, CustomBlendable_t3531329220_marshal_pinvoke_back, CustomBlendable_t3531329220_marshal_pinvoke_cleanup, NULL, NULL, &CustomBlendable_t3531329220_0_0_0 } /* Cinemachine.CameraState/CustomBlendable */,
	{ NULL, CustomBlend_t84561686_marshal_pinvoke, CustomBlend_t84561686_marshal_pinvoke_back, CustomBlend_t84561686_marshal_pinvoke_cleanup, NULL, NULL, &CustomBlend_t84561686_0_0_0 } /* Cinemachine.CinemachineBlenderSettings/CustomBlend */,
	{ NULL, Instruction_t438122268_marshal_pinvoke, Instruction_t438122268_marshal_pinvoke_back, Instruction_t438122268_marshal_pinvoke_cleanup, NULL, NULL, &Instruction_t438122268_0_0_0 } /* Cinemachine.CinemachineBlendListCamera/Instruction */,
	{ DelegatePInvokeWrapper_AxisInputDelegate_t365085504, NULL, NULL, NULL, NULL, NULL, &AxisInputDelegate_t365085504_0_0_0 } /* Cinemachine.CinemachineCore/AxisInputDelegate */,
	{ NULL, Recentering_t980373847_marshal_pinvoke, Recentering_t980373847_marshal_pinvoke_back, Recentering_t980373847_marshal_pinvoke_cleanup, NULL, NULL, &Recentering_t980373847_0_0_0 } /* Cinemachine.CinemachineOrbitalTransposer/Recentering */,
	{ NULL, Instruction_t2121420310_marshal_pinvoke, Instruction_t2121420310_marshal_pinvoke_back, Instruction_t2121420310_marshal_pinvoke_cleanup, NULL, NULL, &Instruction_t2121420310_0_0_0 } /* Cinemachine.CinemachineStateDrivenCamera/Instruction */,
	{ NULL, Target_t116854977_marshal_pinvoke, Target_t116854977_marshal_pinvoke_back, Target_t116854977_marshal_pinvoke_cleanup, NULL, NULL, &Target_t116854977_0_0_0 } /* Cinemachine.CinemachineTargetGroup/Target */,
	{ NULL, AutoDolly_t722089724_marshal_pinvoke, AutoDolly_t722089724_marshal_pinvoke_back, AutoDolly_t722089724_marshal_pinvoke_cleanup, NULL, NULL, &AutoDolly_t722089724_0_0_0 } /* Cinemachine.CinemachineTrackedDolly/AutoDolly */,
	{ NULL, LensSettings_t822254920_marshal_pinvoke, LensSettings_t822254920_marshal_pinvoke_back, LensSettings_t822254920_marshal_pinvoke_cleanup, NULL, NULL, &LensSettings_t822254920_0_0_0 } /* Cinemachine.LensSettings */,
	{ NULL, Log_t3789968391_marshal_pinvoke, Log_t3789968391_marshal_pinvoke_back, Log_t3789968391_marshal_pinvoke_cleanup, NULL, NULL, &Log_t3789968391_0_0_0 } /* Consolation.Console/Log */,
	{ NULL, Enumerator_t1513288951_marshal_pinvoke, Enumerator_t1513288951_marshal_pinvoke_back, Enumerator_t1513288951_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_t1513288951_0_0_0 } /* SimpleJSON.JSONNode/Enumerator */,
	{ NULL, KeyEnumerator_t488138053_marshal_pinvoke, KeyEnumerator_t488138053_marshal_pinvoke_back, KeyEnumerator_t488138053_marshal_pinvoke_cleanup, NULL, NULL, &KeyEnumerator_t488138053_0_0_0 } /* SimpleJSON.JSONNode/KeyEnumerator */,
	{ NULL, ValueEnumerator_t3808401860_marshal_pinvoke, ValueEnumerator_t3808401860_marshal_pinvoke_back, ValueEnumerator_t3808401860_marshal_pinvoke_cleanup, NULL, NULL, &ValueEnumerator_t3808401860_0_0_0 } /* SimpleJSON.JSONNode/ValueEnumerator */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t3917295290::CLSID, &ZlibException_t3917295290_0_0_0 } /* BestHTTP.Decompression.Zlib.ZlibException */,
	NULL,
};
