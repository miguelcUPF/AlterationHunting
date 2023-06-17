#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<Unity.WebRTC.RTCStatsReport>
struct Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C;
// System.Action`2<Unity.WebRTC.RTCErrorType,System.String>
struct Action_2_t7EF488960820B12EED4789F882AE94B43F35042F;
// System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String>
struct Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// Unity.WebRTC.CreateSessionDescriptionObserver
struct CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38;
// System.Delegate
struct Delegate_t;
// Unity.WebRTC.DelegateAudioReceive
struct DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6;
// Unity.WebRTC.DelegateCollectStats
struct DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.WebRTC.DelegateDebugLog
struct DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7;
// Unity.WebRTC.DelegateNativeCreateSessionDesc
struct DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC;
// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack
struct DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D;
// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack
struct DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61;
// Unity.WebRTC.DelegateNativeOnClose
struct DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6;
// Unity.WebRTC.DelegateNativeOnConnectionStateChange
struct DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899;
// Unity.WebRTC.DelegateNativeOnDataChannel
struct DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F;
// Unity.WebRTC.DelegateNativeOnIceCandidate
struct DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740;
// Unity.WebRTC.DelegateNativeOnIceConnectionChange
struct DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3;
// Unity.WebRTC.DelegateNativeOnIceGatheringChange
struct DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699;
// Unity.WebRTC.DelegateNativeOnMessage
struct DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7;
// Unity.WebRTC.DelegateNativeOnNegotiationNeeded
struct DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B;
// Unity.WebRTC.DelegateNativeOnOpen
struct DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64;
// Unity.WebRTC.DelegateNativeOnRemoveTrack
struct DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945;
// Unity.WebRTC.DelegateNativeOnTrack
struct DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE;
// Unity.WebRTC.DelegateNativeSetSessionDesc
struct DelegateNativeSetSessionDesc_t98C5F1641E973588ECF23685AE75D88D494C8262;
// Unity.WebRTC.DelegateVideoFrameResize
struct DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF;
// Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B;
// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04;
// Unity.WebRTC.RTCStatsCollectorCallback
struct RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF;
// Unity.WebRTC.SetSessionDescriptionObserver
struct SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5;;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF;;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke;;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B;;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke;;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04;;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Unity.WebRTC.NativeMethods
struct NativeMethods_tA36545FA30A0BAFE4574DE60BF7A1E37DD49078B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.WebRTC.VideoDecoderMethods
struct VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F  : public RuntimeObject
{
};

struct VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields
{
	// UnityEngine.Rendering.CommandBuffer Unity.WebRTC.VideoDecoderMethods::_command
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____command_0;
};

// Unity.WebRTC.VideoEncoderMethods
struct VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC  : public RuntimeObject
{
};

struct VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields
{
	// UnityEngine.Rendering.CommandBuffer Unity.WebRTC.VideoEncoderMethods::_command
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____command_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 
{
	// System.String Unity.WebRTC.CandidateInternal::candidate
	String_t* ___candidate_0;
	// Unity.WebRTC.RTCIceComponent Unity.WebRTC.CandidateInternal::component
	int32_t ___component_1;
	// System.String Unity.WebRTC.CandidateInternal::foundation
	String_t* ___foundation_2;
	// System.String Unity.WebRTC.CandidateInternal::ip
	String_t* ___ip_3;
	// System.UInt16 Unity.WebRTC.CandidateInternal::port
	uint16_t ___port_4;
	// System.UInt32 Unity.WebRTC.CandidateInternal::priority
	uint32_t ___priority_5;
	// System.String Unity.WebRTC.CandidateInternal::address
	String_t* ___address_6;
	// System.String Unity.WebRTC.CandidateInternal::protocol
	String_t* ___protocol_7;
	// System.String Unity.WebRTC.CandidateInternal::relatedAddress
	String_t* ___relatedAddress_8;
	// System.UInt16 Unity.WebRTC.CandidateInternal::relatedPort
	uint16_t ___relatedPort_9;
	// System.String Unity.WebRTC.CandidateInternal::tcpType
	String_t* ___tcpType_10;
	// System.String Unity.WebRTC.CandidateInternal::type
	String_t* ___type_11;
	// System.String Unity.WebRTC.CandidateInternal::usernameFragment
	String_t* ___usernameFragment_12;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};
// Native definition for COM marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_com
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.WebRTC.OptionalBool
struct OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 
{
	// System.Boolean Unity.WebRTC.OptionalBool::hasValue
	bool ___hasValue_0;
	// System.Boolean Unity.WebRTC.OptionalBool::value
	bool ___value_1;
};

// Unity.WebRTC.OptionalInt
struct OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 
{
	// System.Boolean Unity.WebRTC.OptionalInt::hasValue
	bool ___hasValue_0;
	// System.Int32 Unity.WebRTC.OptionalInt::value
	int32_t ___value_1;
};

// Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B 
{
	// System.String Unity.WebRTC.RTCIceCandidateInitInternal::candidate
	String_t* ___candidate_0;
	// System.String Unity.WebRTC.RTCIceCandidateInitInternal::sdpMid
	String_t* ___sdpMid_1;
	// System.Int32 Unity.WebRTC.RTCIceCandidateInitInternal::sdpMLineIndex
	int32_t ___sdpMLineIndex_2;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke
{
	char* ___candidate_0;
	char* ___sdpMid_1;
	int32_t ___sdpMLineIndex_2;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_com
{
	char* ___candidate_0;
	char* ___sdpMid_1;
	int32_t ___sdpMLineIndex_2;
};

// Unity.WebRTC.RTCOfferAnswerOptions
struct RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F 
{
	// System.Boolean Unity.WebRTC.RTCOfferAnswerOptions::iceRestart
	bool ___iceRestart_1;
	// System.Boolean Unity.WebRTC.RTCOfferAnswerOptions::voiceActivityDetection
	bool ___voiceActivityDetection_2;
};

struct RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_StaticFields
{
	// Unity.WebRTC.RTCOfferAnswerOptions Unity.WebRTC.RTCOfferAnswerOptions::Default
	RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F ___Default_0;
};

// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 
{
	// Unity.WebRTC.RTCSdpType Unity.WebRTC.RTCSessionDescription::type
	int32_t ___type_0;
	// System.String Unity.WebRTC.RTCSessionDescription::sdp
	String_t* ___sdp_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___sdp_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com
{
	int32_t ___type_0;
	char* ___sdp_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
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

// Unity.WebRTC.MarshallingArray`1<System.IntPtr>
struct MarshallingArray_1_t201C4D66026887C428830F15CDC5D30E0168F857 
{
	// System.Int32 Unity.WebRTC.MarshallingArray`1::length
	int32_t ___length_0;
	// System.IntPtr Unity.WebRTC.MarshallingArray`1::ptr
	intptr_t ___ptr_1;
};

// Unity.WebRTC.MarshallingArray`1<Unity.WebRTC.RTCRtpEncodingParametersInternal>
struct MarshallingArray_1_t376555BAE71EEC27AAA84D82B4B195A45F1A96E6 
{
	// System.Int32 Unity.WebRTC.MarshallingArray`1::length
	int32_t ___length_0;
	// System.IntPtr Unity.WebRTC.MarshallingArray`1::ptr
	intptr_t ___ptr_1;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF 
{
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCDataChannelInitInternal::ordered
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::maxRetransmitTime
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::maxRetransmits
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	// System.String Unity.WebRTC.RTCDataChannelInitInternal::protocol
	String_t* ___protocol_3;
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCDataChannelInitInternal::negotiated
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::id
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke
{
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	char* ___protocol_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_com
{
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	char* ___protocol_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Unity.WebRTC.CreateSessionDescriptionObserver
struct CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String> Unity.WebRTC.CreateSessionDescriptionObserver::onCreateSessionDescription
	Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928* ___onCreateSessionDescription_6;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.WebRTC.RTCRtpTransceiverInitInternal
struct RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558 
{
	// Unity.WebRTC.RTCRtpTransceiverDirection Unity.WebRTC.RTCRtpTransceiverInitInternal::direction
	int32_t ___direction_0;
	// Unity.WebRTC.MarshallingArray`1<Unity.WebRTC.RTCRtpEncodingParametersInternal> Unity.WebRTC.RTCRtpTransceiverInitInternal::sendEncodings
	MarshallingArray_1_t376555BAE71EEC27AAA84D82B4B195A45F1A96E6 ___sendEncodings_1;
	// Unity.WebRTC.MarshallingArray`1<System.IntPtr> Unity.WebRTC.RTCRtpTransceiverInitInternal::streams
	MarshallingArray_1_t201C4D66026887C428830F15CDC5D30E0168F857 ___streams_2;
};

// Unity.WebRTC.RTCStatsCollectorCallback
struct RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Action`1<Unity.WebRTC.RTCStatsReport> Unity.WebRTC.RTCStatsCollectorCallback::onStatsDelivered
	Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C* ___onStatsDelivered_6;
};

// Unity.WebRTC.SetSessionDescriptionObserver
struct SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Action`2<Unity.WebRTC.RTCErrorType,System.String> Unity.WebRTC.SetSessionDescriptionObserver::onSetSessionDescription
	Action_2_t7EF488960820B12EED4789F882AE94B43F35042F* ___onSetSessionDescription_6;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateAudioReceive
struct DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateCollectStats
struct DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateDebugLog
struct DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeCreateSessionDesc
struct DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack
struct DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack
struct DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnClose
struct DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnConnectionStateChange
struct DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnDataChannel
struct DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceCandidate
struct DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceConnectionChange
struct DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceGatheringChange
struct DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnMessage
struct DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnNegotiationNeeded
struct DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnOpen
struct DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnRemoveTrack
struct DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnTrack
struct DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeSetSessionDesc
struct DelegateNativeSetSessionDesc_t98C5F1641E973588ECF23685AE75D88D494C8262  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateVideoFrameResize
struct DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke(const RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF& unmarshaled, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_back(const RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF& unmarshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_cleanup(RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke(const RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B& unmarshaled, RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_back(const RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled, RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B& unmarshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_cleanup(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke(const CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5& unmarshaled, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_back(const CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5& unmarshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_cleanup(CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled);


// System.Void Unity.WebRTC.CreateSessionDescriptionObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionDescriptionObserver__ctor_m2D56A3A957F1C8445D20B0EA9F999F526DF78C3E (CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.SetSessionDescriptionObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9 (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCStatsCollectorCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132 (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventAndData(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, intptr_t ___callback0, int32_t ___eventID1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___buffer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginCustomTextureUpdateV2(System.IntPtr,UnityEngine.Texture,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_IssuePluginCustomTextureUpdateV2_m2F0FCB75B743412D3AD504F7A95DE4D854A8D601 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, intptr_t ___callback0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___targetTexture1, uint32_t ___userData2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RegisterDebugLog(Il2CppMethodPointer, uint8_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreate(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDestroy(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreatePeerConnection(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreatePeerConnectionWithConfig(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeletePeerConnection(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionClose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRestartIce(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSetConfiguration(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateDataChannel(intptr_t, intptr_t, char*, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteDataChannel(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrackSource(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateVideoTrackSource(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateVideoTrack(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrack(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextStopMediaStreamTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextGetStatsList(intptr_t, intptr_t, uint64_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteStatsReport(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextAddRefPtr(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteRefPtr(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetConfiguration(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionCreateOffer(intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionCreateAnswer(intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL StatsCollectorRegisterCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL CreateSessionDescriptionObserverRegisterCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetSessionDescriptionObserverRegisterCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterIceConnectionChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterConnectionStateChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterIceGatheringChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnIceCandidate(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSetLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSetLocalDescriptionWithoutDescription(intptr_t, int32_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSetRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionGetStats(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSenderGetStats(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextGetSenderCapabilities(intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextGetReceiverCapabilities(intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionReceiverGetStats(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetPendingLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetPendingRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetCurrentLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetCurrentRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionAddTrack(intptr_t, intptr_t, char*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithType(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithInit(intptr_t, intptr_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithTypeAndInit(intptr_t, int32_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionRemoveTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionAddIceCandidate(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CreateIceCandidate(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DeleteIceCandidate(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL IceCandidateGetCandidate(intptr_t, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IceCandidateGetSdpLineIndex(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL IceCandidateGetSdp(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL IceCandidateGetSdpMid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetReceivers(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetSenders(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetTransceivers(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionIceConditionState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSignalingState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionIceGatheringState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnDataChannel(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnRenegotiationNeeded(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnTrack(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnRemoveTrack(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL TransceiverGetCurrentDirection(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverStop(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetMid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverGetDirection(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverSetDirection(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverSetCodecPreferences(intptr_t, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetReceiver(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetSender(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL SenderGetTrack(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SenderGetParameters(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SenderSetParameters(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL SenderReplaceTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ReceiverGetTrack(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ReceiverGetStreams(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DataChannelGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL DataChannelGetLabel(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL DataChannelGetProtocol(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint16_t DEFAULT_CALL DataChannelGetMaxRetransmits(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint16_t DEFAULT_CALL DataChannelGetMaxRetransmitTime(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL DataChannelGetOrdered(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL DataChannelGetBufferedAmount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL DataChannelGetNegotiated(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DataChannelGetReadyState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelSend(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelSendBinary(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelClose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnMessage(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnOpen(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnClose(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateMediaStream(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextRegisterMediaStreamObserver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextUnRegisterMediaStreamObserver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrackSink(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteAudioTrackSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackAddSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackRemoveSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackSinkProcessAudio(intptr_t, float*, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamAddTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamRemoveTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetVideoTracks(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetAudioTracks(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamRegisterOnAddTrack(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamRegisterOnRemoveTrack(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MediaStreamTrackGetKind(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MediaStreamTrackGetReadyState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamTrackGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamTrackGetEnabled(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamTrackSetEnabled(intptr_t, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL CreateVideoRenderer(intptr_t, Il2CppMethodPointer, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL GetVideoRendererId(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DeleteVideoRenderer(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL VideoTrackAddOrUpdateSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL VideoTrackRemoveSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetCurrentContext(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetRenderEventFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetReleaseBuffersFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetUpdateTextureFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioSourceProcessLocalAudio(intptr_t, intptr_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetJson(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetId(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsGetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL StatsGetTimestamp(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetMembers(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetName(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsMemberGetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL StatsMemberIsDefined(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL StatsMemberGetBool(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsMemberGetInt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL StatsMemberGetUnsignedInt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL StatsMemberGetLong(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL StatsMemberGetUnsignedLong(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C double DEFAULT_CALL StatsMemberGetDouble(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetString(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetBoolArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetIntArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetUnsignedIntArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetLongArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetUnsignedLongArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetDoubleArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetStringArray(intptr_t, uint64_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Multicast(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* currentDelegate = reinterpret_cast<DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___transceiver1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenInst(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___transceiver1, method);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStatic(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___transceiver1, method);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStaticInvoker(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___transceiver1);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_ClosedStaticInvoker(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___transceiver1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___transceiver1);

}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack__ctor_m47056A97B0871B742ACD347F208DC32B36E126CA (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216 (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___transceiver1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnTrack_BeginInvoke_m03FFFA749E53FE4B0AC7C2ABDD04D7710EB7E70E (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___ptr0, intptr_t ___transceiver1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___transceiver1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack_EndInvoke_m3DBD36F1B6129EA3A909B67BA1A5376411C02917 (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Multicast(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* currentDelegate = reinterpret_cast<DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___receiver1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenInst(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___receiver1, method);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStatic(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___receiver1, method);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStaticInvoker(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___receiver1);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_ClosedStaticInvoker(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___receiver1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___receiver1);

}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack__ctor_mB9FB6CB542C1021447637E9E67746D887A409BD4 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___receiver1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnRemoveTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnRemoveTrack_BeginInvoke_m86C23C0AF07E5D014D0560848892B6029EE2CBBE (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___ptr0, intptr_t ___receiver1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___receiver1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack_EndInvoke_m3ECC8E1A88E0920B7601029D7BC76B2E52122E37 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Multicast(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* currentDelegate = reinterpret_cast<DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___ptrChannel1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenInst(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___ptrChannel1, method);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStatic(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___ptrChannel1, method);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStaticInvoker(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___ptrChannel1);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_ClosedStaticInvoker(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___ptrChannel1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___ptrChannel1);

}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel__ctor_mD85099C816FD19FB8DA33753EABF229DBCA51810 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___ptrChannel1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnDataChannel::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnDataChannel_BeginInvoke_m5B4DC70AF82BB0D344DCBF7DEFEAA091CFBE6A44 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___ptr0, intptr_t ___ptrChannel1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptrChannel1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel_EndInvoke_m9181E12C8F9CB50F830187DBC3F9B291986B51F1 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Multicast(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* currentDelegate = reinterpret_cast<DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, ___bytes1, ___size2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenInst(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___bytes1, ___size2, method);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStatic(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, ___bytes1, ___size2, method);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStaticInvoker(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0, ___bytes1, ___size2);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_ClosedStaticInvoker(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0, ___bytes1, ___size2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7 (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, uint8_t*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ____bytes1_marshaled, ___size2);

}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage__ctor_mDC0BA1638683D1CA50A9FAD1C9916A19D5F0A7AC (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::Invoke(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, ___bytes1, ___size2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnMessage::BeginInvoke(System.IntPtr,System.Byte[],System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnMessage_BeginInvoke_mE6487A51993B6513FDE655B3930FF8C3BF85F153 (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = ___bytes1;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___size2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage_EndInvoke_mBD5677736D5EA005695111DD753E2FF44D3C383D (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Multicast(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* currentDelegate = reinterpret_cast<DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenInst(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStatic(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStaticInvoker(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_ClosedStaticInvoker(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen__ctor_m7FDEC8A2FE403BE1133D2D773EE76EAD28C57A4C (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnOpen::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnOpen_BeginInvoke_mF41873E277FE3E588DB41597233E6CEA5F6F20A2 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen_EndInvoke_m197CE104CFAF0D1692FAC0F461C578BEC03F4422 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Multicast(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* currentDelegate = reinterpret_cast<DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenInst(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStatic(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStaticInvoker(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_ClosedStaticInvoker(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateNativeOnClose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose__ctor_mE1825C6D5DE868080605690C54D134109DD1444A (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnClose::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnClose::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnClose_BeginInvoke_mA2CB1C2949154940B0F12721494E65C4F67DA865 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateNativeOnClose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose_EndInvoke_m479500EAB9405B5ACC05B13151B10350EF17DB99 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Multicast(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* currentDelegate = reinterpret_cast<DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenInst(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___stream0, ___track1, method);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStatic(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___stream0, ___track1, method);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStaticInvoker(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___stream0, ___track1);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_ClosedStaticInvoker(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___stream0, ___track1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___stream0, ___track1);

}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack__ctor_m00F884CE57B600F498C40417477A328CFE9EF823 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeMediaStreamOnAddTrack_BeginInvoke_mFFF7F04A85D0DB24AAB60347C103C1CEF6094CFA (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___stream0, intptr_t ___track1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___stream0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___track1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack_EndInvoke_m9BE48AC29DA2456202C740C38BBE3CFD633180C3 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Multicast(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* currentDelegate = reinterpret_cast<DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenInst(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___stream0, ___track1, method);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStatic(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___stream0, ___track1, method);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStaticInvoker(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___stream0, ___track1);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_ClosedStaticInvoker(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___stream0, ___track1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61 (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___stream0, ___track1);

}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack__ctor_mF8A24BB890D3035452460B7C7A9DEFF090708E80 (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___stream0, ___track1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeMediaStreamOnRemoveTrack_BeginInvoke_m99D80682B8C44FA29B087FD5D7C68A6692F17AAA (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___stream0, intptr_t ___track1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___stream0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___track1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack_EndInvoke_m660A6B6D063DF8F15E96A09DD59A59B3ADBA6F6A (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Multicast(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* currentDelegate = reinterpret_cast<DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenInst(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStatic(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___ptr0, method);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStaticInvoker(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___ptr0);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_ClosedStaticInvoker(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ptr0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.WebRTC.DelegateAudioReceive::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive__ctor_m64A6738AB0AB1FB2588DC669D88055FA40E39D57 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Multicast;
}
// System.Void Unity.WebRTC.DelegateAudioReceive::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ptr0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateAudioReceive::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateAudioReceive_BeginInvoke_mE61859B36B68B0D0D7013F79F483A51BCB004797 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___ptr0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.WebRTC.DelegateAudioReceive::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive_EndInvoke_mEF1DAA7DB38057E46D0EC0944458E35422223C7D (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Multicast(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* currentDelegate = reinterpret_cast<DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___renderer0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenInst(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___renderer0, ___width1, ___height2, method);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStatic(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___renderer0, ___width1, ___height2, method);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStaticInvoker(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___renderer0, ___width1, ___height2);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_ClosedStaticInvoker(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___renderer0, ___width1, ___height2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___renderer0, ___width1, ___height2);

}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize__ctor_m181F101B051F0F0A2EB76857BC48127BC2ED7727 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Multicast;
}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___renderer0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateVideoFrameResize::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateVideoFrameResize_BeginInvoke_m5AD454D0DFC4E713BF32E49A944D82CD6B39CAA0 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___renderer0, int32_t ___width1, int32_t ___height2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___renderer0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize_EndInvoke_m54B644ED4C97A7C02EEA2D8F98F5154437F34013 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Unity.WebRTC.NativeMethods::RegisterDebugLog(Unity.WebRTC.DelegateDebugLog,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_RegisterDebugLog_mAC3EE524F35A6FF139BDA4026585263BADAEA384 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* ___func0, bool ___enableNativeLog1, int32_t ___nativeLoggingSeverity2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, uint8_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 1 + 3 + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "RegisterDebugLog", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func0' to native representation
	Il2CppMethodPointer ____func0_marshaled = NULL;
	____func0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(RegisterDebugLog)(____func0_marshaled, static_cast<uint8_t>(___enableNativeLog1), ___nativeLoggingSeverity2);
	#else
	il2cppPInvokeFunc(____func0_marshaled, static_cast<uint8_t>(___enableNativeLog1), ___nativeLoggingSeverity2);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreate_m43EC05686D4D097EB1B9F30BE87BB567D91A99AA (int32_t ___uid0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreate)(___uid0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___uid0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDestroy_m1E20BE6FF25C0E1D4135B1623B3F7528913EE547 (int32_t ___uid0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDestroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDestroy)(___uid0);
	#else
	il2cppPInvokeFunc(___uid0);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreatePeerConnection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreatePeerConnection_m02B2D45EED6BB843160D9FD8931F711CD79D8873 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreatePeerConnection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreatePeerConnection)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreatePeerConnectionWithConfig(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreatePeerConnectionWithConfig_mBE578395E5FC8438DB916BB6EA88BCB155B42C72 (intptr_t ___ptr0, String_t* ___conf1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreatePeerConnectionWithConfig", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___conf1' to native representation
	char* ____conf1_marshaled = NULL;
	____conf1_marshaled = il2cpp_codegen_marshal_string(___conf1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreatePeerConnectionWithConfig)(___ptr0, ____conf1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ____conf1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___conf1' native representation
	il2cpp_codegen_marshal_free(____conf1_marshaled);
	____conf1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeletePeerConnection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeletePeerConnection_m69C478FC3103E730662FF476D4BB9AAD5A608E15 (intptr_t ___ptr0, intptr_t ___ptrPeerConnection1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeletePeerConnection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeletePeerConnection)(___ptr0, ___ptrPeerConnection1);
	#else
	il2cppPInvokeFunc(___ptr0, ___ptrPeerConnection1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionClose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionClose_m78914E177101FD92422DBC9A80B92C846F6BE84B (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionClose)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRestartIce(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRestartIce_mC77CF51F5B9D6666018EF95981C301D869106C3C (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRestartIce", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRestartIce)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionSetConfiguration(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSetConfiguration_mFE7378424F98801B76938DBE0A3C3E18D8BA03F2 (intptr_t ___ptr0, String_t* ___conf1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetConfiguration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___conf1' to native representation
	char* ____conf1_marshaled = NULL;
	____conf1_marshaled = il2cpp_codegen_marshal_string(___conf1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetConfiguration)(___ptr0, ____conf1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0, ____conf1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___conf1' native representation
	il2cpp_codegen_marshal_free(____conf1_marshaled);
	____conf1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateDataChannel(System.IntPtr,System.IntPtr,System.String,Unity.WebRTC.RTCDataChannelInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateDataChannel_m89D8AEEE72C4F7A8C7E3C0974209F8B38A55E7A6 (intptr_t ___ptr0, intptr_t ___ptrPeer1, String_t* ___label2, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF* ___options3, const RuntimeMethod* method) 
{


	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*) + sizeof(RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label2' to native representation
	char* ____label2_marshaled = NULL;
	____label2_marshaled = il2cpp_codegen_marshal_string(___label2);

	// Marshaling of parameter '___options3' to native representation
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke* ____options3_marshaled = NULL;
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke ____options3_marshaled_dereferenced = {};
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke(*___options3, ____options3_marshaled_dereferenced);
	____options3_marshaled = &____options3_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateDataChannel)(___ptr0, ___ptrPeer1, ____label2_marshaled, ____options3_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ___ptrPeer1, ____label2_marshaled, ____options3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___label2' native representation
	il2cpp_codegen_marshal_free(____label2_marshaled);
	____label2_marshaled = NULL;

	// Marshaling of parameter '___options3' back from native representation
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF _____options3_marshaled_unmarshaled_dereferenced;
	memset((&_____options3_marshaled_unmarshaled_dereferenced), 0, sizeof(_____options3_marshaled_unmarshaled_dereferenced));
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_back(*____options3_marshaled, _____options3_marshaled_unmarshaled_dereferenced);
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_cleanup(*____options3_marshaled);
	*___options3 = _____options3_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___options3)->___protocol_3), (void*)NULL);

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteDataChannel(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteDataChannel_m9ADDDAA4A85A68ADB0C4517417F9B8C40BB68EEB (intptr_t ___ptr0, intptr_t ___ptrChannel1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteDataChannel)(___ptr0, ___ptrChannel1);
	#else
	il2cppPInvokeFunc(___ptr0, ___ptrChannel1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrackSource(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrackSource_m65CA9D5F88C864931D55F14876FB89EF8EDBFBA6 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrackSource", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrackSource)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateVideoTrackSource(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateVideoTrackSource_m038E8887EFF042BEFB4CB566C9641A450537B387 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateVideoTrackSource", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateVideoTrackSource)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateVideoTrack(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateVideoTrack_mCDED3DA8595F20B561D99976625C6973CC3B26A8 (intptr_t ___ptr0, String_t* ___label1, intptr_t ___trackSource2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateVideoTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label1' to native representation
	char* ____label1_marshaled = NULL;
	____label1_marshaled = il2cpp_codegen_marshal_string(___label1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateVideoTrack)(___ptr0, ____label1_marshaled, ___trackSource2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ____label1_marshaled, ___trackSource2);
	#endif

	// Marshaling cleanup of parameter '___label1' native representation
	il2cpp_codegen_marshal_free(____label1_marshaled);
	____label1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrack(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrack_m1962D11B3D942495900C04E4C9975304DBFA1225 (intptr_t ___ptr0, String_t* ___label1, intptr_t ___trackSource2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label1' to native representation
	char* ____label1_marshaled = NULL;
	____label1_marshaled = il2cpp_codegen_marshal_string(___label1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrack)(___ptr0, ____label1_marshaled, ___trackSource2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0, ____label1_marshaled, ___trackSource2);
	#endif

	// Marshaling cleanup of parameter '___label1' native representation
	il2cpp_codegen_marshal_free(____label1_marshaled);
	____label1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextStopMediaStreamTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextStopMediaStreamTrack_mD7354DC1334629C85C6C4D7C562FE185FAA5AB85 (intptr_t ___context0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextStopMediaStreamTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextStopMediaStreamTrack)(___context0, ___track1);
	#else
	il2cppPInvokeFunc(___context0, ___track1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextGetStatsList(System.IntPtr,System.IntPtr,System.UInt64&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextGetStatsList_m8E12F94E0BAAC12A9811616EC098BA18EF8AD923 (intptr_t ___context0, intptr_t ___report1, uint64_t* ___length2, intptr_t* ___types3, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetStatsList", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextGetStatsList)(___context0, ___report1, ___length2, ___types3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___report1, ___length2, ___types3);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteStatsReport(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteStatsReport_m2057236FE2435BDD3BDF429000B5E3ABABF25817 (intptr_t ___context0, intptr_t ___report1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteStatsReport", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteStatsReport)(___context0, ___report1);
	#else
	il2cppPInvokeFunc(___context0, ___report1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextAddRefPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextAddRefPtr_mD8A6BE76C08C600B9CF61D28876A384E013C618A (intptr_t ___context0, intptr_t ___ptr1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextAddRefPtr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextAddRefPtr)(___context0, ___ptr1);
	#else
	il2cppPInvokeFunc(___context0, ___ptr1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteRefPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteRefPtr_m8587C1B3C47B459A2B61CEC564F95E5664C5ACDC (intptr_t ___context0, intptr_t ___ptr1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteRefPtr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteRefPtr)(___context0, ___ptr1);
	#else
	il2cppPInvokeFunc(___context0, ___ptr1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetConfiguration(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetConfiguration_m513CBBE423434469D553170506828375906B2D6D (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetConfiguration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetConfiguration)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// Unity.WebRTC.CreateSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionCreateOffer(System.IntPtr,Unity.WebRTC.RTCOfferAnswerOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* NativeMethods_PeerConnectionCreateOffer_m93BB90D860BEA756EB4983977415F37669F74503 (intptr_t ___ptr0, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionCreateOffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionCreateOffer)(___ptr0, ___options1);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0, ___options1);
	#endif

	// Marshaling of return value back from native representation
	CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* _returnValue_unmarshaled = (CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38*)il2cpp_codegen_object_new(CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
	CreateSessionDescriptionObserver__ctor_m2D56A3A957F1C8445D20B0EA9F999F526DF78C3E(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.CreateSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionCreateAnswer(System.IntPtr,Unity.WebRTC.RTCOfferAnswerOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* NativeMethods_PeerConnectionCreateAnswer_m5275B26FC8FFFEB1CFF72487AD7739D14403ED8B (intptr_t ___ptr0, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionCreateAnswer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionCreateAnswer)(___ptr0, ___options1);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0, ___options1);
	#endif

	// Marshaling of return value back from native representation
	CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* _returnValue_unmarshaled = (CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38*)il2cpp_codegen_object_new(CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
	CreateSessionDescriptionObserver__ctor_m2D56A3A957F1C8445D20B0EA9F999F526DF78C3E(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void Unity.WebRTC.NativeMethods::StatsCollectorRegisterCallback(Unity.WebRTC.DelegateCollectStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_StatsCollectorRegisterCallback_mFFF3F5DFC72D2DCEF04E2728219A2F6D8944B215 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* ___onCollectStats0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsCollectorRegisterCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___onCollectStats0' to native representation
	Il2CppMethodPointer ____onCollectStats0_marshaled = NULL;
	____onCollectStats0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___onCollectStats0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(StatsCollectorRegisterCallback)(____onCollectStats0_marshaled);
	#else
	il2cppPInvokeFunc(____onCollectStats0_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::CreateSessionDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateNativeCreateSessionDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_CreateSessionDescriptionObserverRegisterCallback_mC3EA88EF0E85D0838BC8AC1FEB957C5A9AAFEACA (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateSessionDescriptionObserverRegisterCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(CreateSessionDescriptionObserverRegisterCallback)(____callback0_marshaled);
	#else
	il2cppPInvokeFunc(____callback0_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::SetSessionDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateNativeSetSessionDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetSessionDescriptionObserverRegisterCallback_m8AB79F55634A1FF36096526D403862F52816CED8 (DelegateNativeSetSessionDesc_t98C5F1641E973588ECF23685AE75D88D494C8262* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SetSessionDescriptionObserverRegisterCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetSessionDescriptionObserverRegisterCallback)(____callback0_marshaled);
	#else
	il2cppPInvokeFunc(____callback0_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterIceConnectionChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceConnectionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterIceConnectionChange_m6602E8CAA6CF7DC5A5D20CF4070C3F98AEFD978D (intptr_t ___ptr0, DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterIceConnectionChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterIceConnectionChange)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterConnectionStateChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnConnectionStateChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterConnectionStateChange_m52886344B7386E0682840EE15FFD1ED78BDB460A (intptr_t ___ptr0, DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterConnectionStateChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterConnectionStateChange)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterIceGatheringChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceGatheringChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterIceGatheringChange_m42AE07ED6204316F64431D7D2B1D300B1D251307 (intptr_t ___ptr0, DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterIceGatheringChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterIceGatheringChange)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnIceCandidate(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnIceCandidate_m7055974889204970E17B873CD70C47E3F2AF697B (intptr_t ___ptr0, DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnIceCandidate)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// Unity.WebRTC.SetSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionSetLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&,Unity.WebRTC.RTCErrorType&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* NativeMethods_PeerConnectionSetLocalDescription_m7D0269F4B3D8104A3CB66AE148C28723821E7528 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, int32_t* ___errorType2, intptr_t* ___error3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}


	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*) + sizeof(int32_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetLocalDescription)(___ptr0, ____desc1_marshaled, ___errorType2, ___error3);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled, ___errorType2, ___error3);
	#endif

	// Marshaling of return value back from native representation
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* _returnValue_unmarshaled = (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)il2cpp_codegen_object_new(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
	SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.SetSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionSetLocalDescriptionWithoutDescription(System.IntPtr,Unity.WebRTC.RTCErrorType&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* NativeMethods_PeerConnectionSetLocalDescriptionWithoutDescription_mE38499511B7D2CF08777F6173C8141DBF408AD96 (intptr_t ___ptr0, int32_t* ___errorType1, intptr_t* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetLocalDescriptionWithoutDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetLocalDescriptionWithoutDescription)(___ptr0, ___errorType1, ___error2);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0, ___errorType1, ___error2);
	#endif

	// Marshaling of return value back from native representation
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* _returnValue_unmarshaled = (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)il2cpp_codegen_object_new(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
	SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.SetSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionSetRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&,Unity.WebRTC.RTCErrorType&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* NativeMethods_PeerConnectionSetRemoteDescription_m9A5D4D2E66C36985EA1202E50CFC5F0153B8CB2E (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, int32_t* ___errorType2, intptr_t* ___error3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}


	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*) + sizeof(int32_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetRemoteDescription)(___ptr0, ____desc1_marshaled, ___errorType2, ___error3);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled, ___errorType2, ___error3);
	#endif

	// Marshaling of return value back from native representation
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* _returnValue_unmarshaled = (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)il2cpp_codegen_object_new(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
	SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionGetStats(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionGetStats_m6A2A11636E686D7D2BC80A3C2E99C04956C73C6C (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetStats)(___ptr0);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionSenderGetStats(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionSenderGetStats_m6FB4DB2CF82C904B86CB7B776C1220BDC5D9987B (intptr_t ___ptr0, intptr_t ___sender1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSenderGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSenderGetStats)(___ptr0, ___sender1);
	#else
	void* returnValue = il2cppPInvokeFunc(___ptr0, ___sender1);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void Unity.WebRTC.NativeMethods::ContextGetSenderCapabilities(System.IntPtr,Unity.WebRTC.TrackKind,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextGetSenderCapabilities_m6A5F26422226C5D99A08CDF60342195A96ADB01D (intptr_t ___context0, int32_t ___kind1, intptr_t* ___capabilities2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetSenderCapabilities", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextGetSenderCapabilities)(___context0, ___kind1, ___capabilities2);
	#else
	il2cppPInvokeFunc(___context0, ___kind1, ___capabilities2);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextGetReceiverCapabilities(System.IntPtr,Unity.WebRTC.TrackKind,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextGetReceiverCapabilities_mAC14291B6418EFE71B641CBA1B667789559C0E69 (intptr_t ___context0, int32_t ___kind1, intptr_t* ___capabilities2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetReceiverCapabilities", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextGetReceiverCapabilities)(___context0, ___kind1, ___capabilities2);
	#else
	il2cppPInvokeFunc(___context0, ___kind1, ___capabilities2);
	#endif

}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionReceiverGetStats(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionReceiverGetStats_m867C7248F4233F003331236B95D5C0FAFE745C42 (intptr_t ___sender0, intptr_t ___receiver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionReceiverGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionReceiverGetStats)(___sender0, ___receiver1);
	#else
	void* returnValue = il2cppPInvokeFunc(___sender0, ___receiver1);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetLocalDescription_m7B08BC29A5EE46970F68496A330D031092776755 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetLocalDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetRemoteDescription_m68B03F2E1C7EEB6DFE210B274BEE200E04E0EE48 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetRemoteDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetPendingLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetPendingLocalDescription_m501327F21E80C0E3D80C98F323A415DC913CBEED (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetPendingLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetPendingLocalDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetPendingRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetPendingRemoteDescription_mB075248E835F775683C04C1756ED5482BFA4996D (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetPendingRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetPendingRemoteDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetCurrentLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetCurrentLocalDescription_mFE0643E709857AF5B3516D4C18D8C3DEF8587C36 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetCurrentLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetCurrentLocalDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetCurrentRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetCurrentRemoteDescription_m92DFE83F8566820CA76BB1A42C24EE1948C981E9 (intptr_t ___ptr0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___desc1, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetCurrentRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___desc1' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____desc1_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____desc1_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___desc1, ____desc1_marshaled_dereferenced);
	____desc1_marshaled = &____desc1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetCurrentRemoteDescription)(___ptr0, ____desc1_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ____desc1_marshaled);
	#endif

	// Marshaling of parameter '___desc1' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____desc1_marshaled_unmarshaled_dereferenced;
	memset((&_____desc1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____desc1_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____desc1_marshaled, _____desc1_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____desc1_marshaled);
	*___desc1 = _____desc1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___desc1)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionAddTrack(System.IntPtr,System.IntPtr,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionAddTrack_m967223A6B82F47A6B5DAE7DDE469D36966CB0861 (intptr_t ___pc0, intptr_t ___track1, String_t* ___streamId2, intptr_t* ___sender3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___streamId2' to native representation
	char* ____streamId2_marshaled = NULL;
	____streamId2_marshaled = il2cpp_codegen_marshal_string(___streamId2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTrack)(___pc0, ___track1, ____streamId2_marshaled, ___sender3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pc0, ___track1, ____streamId2_marshaled, ___sender3);
	#endif

	// Marshaling cleanup of parameter '___streamId2' native representation
	il2cpp_codegen_marshal_free(____streamId2_marshaled);
	____streamId2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiver_mA21D4B4AFDEF1483517F742120ED35B3268D38C3 (intptr_t ___pc0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiver)(___pc0, ___track1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___track1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithType(System.IntPtr,Unity.WebRTC.TrackKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithType_m85F8C0550D5BDC65741B35A91D125180A5407DB6 (intptr_t ___pc0, int32_t ___kind1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithType)(___pc0, ___kind1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___kind1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithInit(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCRtpTransceiverInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithInit_m7138FB2780FC09C9BFFB2131D12077CEE00A3979 (intptr_t ___pc0, intptr_t ___track1, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558* ___init2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithInit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithInit)(___pc0, ___track1, ___init2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___track1, ___init2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithTypeAndInit(System.IntPtr,Unity.WebRTC.TrackKind,Unity.WebRTC.RTCRtpTransceiverInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithTypeAndInit_mFB9BD784B28C725B9389A38E198BE50C59AB97DB (intptr_t ___pc0, int32_t ___kind1, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558* ___init2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithTypeAndInit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithTypeAndInit)(___pc0, ___kind1, ___init2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pc0, ___kind1, ___init2);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionRemoveTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionRemoveTrack_m7716A1C77FE6B7E9650E61501FAD68FA9385168E (intptr_t ___pc0, intptr_t ___sender1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionRemoveTrack)(___pc0, ___sender1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pc0, ___sender1);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionAddIceCandidate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionAddIceCandidate_m326A21F79299B4ED8080540EAAA8C97C06C9EBFE (intptr_t ___ptr0, intptr_t ___candidate1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddIceCandidate)(___ptr0, ___candidate1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0, ___candidate1);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::CreateIceCandidate(Unity.WebRTC.RTCIceCandidateInitInternal&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_CreateIceCandidate_mEE2989C1D10BC0DBDD3CDF6923FDA57E5F17E08E (RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B* ___options0, intptr_t* ___candidate1, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___options0' to native representation
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke* ____options0_marshaled = NULL;
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke ____options0_marshaled_dereferenced = {};
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke(*___options0, ____options0_marshaled_dereferenced);
	____options0_marshaled = &____options0_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CreateIceCandidate)(____options0_marshaled, ___candidate1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____options0_marshaled, ___candidate1);
	#endif

	// Marshaling of parameter '___options0' back from native representation
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B _____options0_marshaled_unmarshaled_dereferenced;
	memset((&_____options0_marshaled_unmarshaled_dereferenced), 0, sizeof(_____options0_marshaled_unmarshaled_dereferenced));
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_back(*____options0_marshaled, _____options0_marshaled_unmarshaled_dereferenced);
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_cleanup(*____options0_marshaled);
	*___options0 = _____options0_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___options0)->___candidate_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___options0)->___sdpMid_1), (void*)NULL);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::DeleteIceCandidate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DeleteIceCandidate_m32A97F310CBEC09782C438A52462483E606ADE21 (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DeleteIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DeleteIceCandidate)(___candidate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::IceCandidateGetCandidate(System.IntPtr,Unity.WebRTC.CandidateInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_IceCandidateGetCandidate_m0FFAD4EFB39F04C9EFCFA98DDB6A92E935EBD5E7 (intptr_t ___candidate0, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5* ___dst1, const RuntimeMethod* method) 
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___dst1' to native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke ____dst1_empty = {};
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke* ____dst1_marshaled = &____dst1_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(IceCandidateGetCandidate)(___candidate0, ____dst1_marshaled);
	#else
	il2cppPInvokeFunc(___candidate0, ____dst1_marshaled);
	#endif

	// Marshaling of parameter '___dst1' back from native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 _____dst1_marshaled_unmarshaled_dereferenced;
	memset((&_____dst1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____dst1_marshaled_unmarshaled_dereferenced));
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_back(*____dst1_marshaled, _____dst1_marshaled_unmarshaled_dereferenced);
	*___dst1 = _____dst1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___candidate_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___foundation_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___ip_3), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___address_6), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___protocol_7), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___relatedAddress_8), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___tcpType_10), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___type_11), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___dst1)->___usernameFragment_12), (void*)NULL);
	#endif

	// Marshaling cleanup of parameter '___dst1' native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_cleanup(*____dst1_marshaled);

}
// System.Int32 Unity.WebRTC.NativeMethods::IceCandidateGetSdpLineIndex(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_IceCandidateGetSdpLineIndex_mD6257E3CB8E354D0009E2C083D2CC3D6B0D79F3E (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdpLineIndex", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdpLineIndex)(___candidate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	return returnValue;
}
// System.String Unity.WebRTC.NativeMethods::IceCandidateGetSdp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeMethods_IceCandidateGetSdp_m2ACB2739E4B7866FD73FC5D3CDA2434B723BB176 (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdp)(___candidate0);
	#else
	char* returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Unity.WebRTC.NativeMethods::IceCandidateGetSdpMid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeMethods_IceCandidateGetSdpMid_m3C4F0C3EA6FD797552E42CA647C29257AAD3B07A (intptr_t ___candidate0, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdpMid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdpMid)(___candidate0);
	#else
	char* returnValue = il2cppPInvokeFunc(___candidate0);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCPeerConnectionState Unity.WebRTC.NativeMethods::PeerConnectionState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionState_mE80AFA51863EE6E5E0BAD7BCA78DBB6D5D8BF0F1 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetReceivers(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetReceivers_m84400CFAB152A1CD74143F25F71140C82358D184 (intptr_t ___context0, intptr_t ___ptr1, uint64_t* ___length2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetReceivers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetReceivers)(___context0, ___ptr1, ___length2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ___length2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetSenders(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetSenders_m9E5853ADE40F7FE636DE636D1200D6BF807FBF20 (intptr_t ___context0, intptr_t ___ptr1, uint64_t* ___length2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetSenders", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetSenders)(___context0, ___ptr1, ___length2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ___length2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetTransceivers(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetTransceivers_mF251634A39A0705D3A2450B03D618C8B746A2F5F (intptr_t ___context0, intptr_t ___ptr1, uint64_t* ___length2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetTransceivers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetTransceivers)(___context0, ___ptr1, ___length2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___ptr1, ___length2);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCIceConnectionState Unity.WebRTC.NativeMethods::PeerConnectionIceConditionState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionIceConditionState_m598168925C0C6753EF78AD1CBB03CB7A32C0AE38 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionIceConditionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionIceConditionState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCSignalingState Unity.WebRTC.NativeMethods::PeerConnectionSignalingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSignalingState_mC6330548D4824863FEA8F717FE7E359859033FFB (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSignalingState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSignalingState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCIceGatheringState Unity.WebRTC.NativeMethods::PeerConnectionIceGatheringState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionIceGatheringState_mB422172DA1BB1A2E02693E367DACC94FA4BD1055 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionIceGatheringState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionIceGatheringState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnDataChannel(System.IntPtr,Unity.WebRTC.DelegateNativeOnDataChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnDataChannel_mA8BCB18A4F61619C0C70319323A2615B03239893 (intptr_t ___ptr0, DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnDataChannel)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnRenegotiationNeeded(System.IntPtr,Unity.WebRTC.DelegateNativeOnNegotiationNeeded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnRenegotiationNeeded_mD139047B9B23BEE9BDC94DD4CDDA7128E1080FC1 (intptr_t ___ptr0, DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnRenegotiationNeeded", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnRenegotiationNeeded)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnTrack(System.IntPtr,Unity.WebRTC.DelegateNativeOnTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnTrack_mFE003B5D4A0ED9684E9E86DAD7FD48647DF60BBB (intptr_t ___ptr0, DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnTrack)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnRemoveTrack(System.IntPtr,Unity.WebRTC.DelegateNativeOnRemoveTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnRemoveTrack_mAF52D16ABBA36FA7D2EE85245853BBAD5E49F025 (intptr_t ___ptr0, DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnRemoveTrack)(___ptr0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____callback1_marshaled);
	#endif

}
// System.Boolean Unity.WebRTC.NativeMethods::TransceiverGetCurrentDirection(System.IntPtr,Unity.WebRTC.RTCRtpTransceiverDirection&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_TransceiverGetCurrentDirection_m96474A957106C40D55EBD2EB6E0D79F3C9198E21 (intptr_t ___transceiver0, int32_t* ___direction1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetCurrentDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetCurrentDirection)(___transceiver0, ___direction1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___transceiver0, ___direction1);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverStop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverStop_m14F1601EC59CB8063E6213FAEFCCB475BEB022B2 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverStop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverStop)(___transceiver0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetMid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetMid_m8F10BFEDC30E21A7820B70DD7CADD529509F8420 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetMid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetMid)(___transceiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCRtpTransceiverDirection Unity.WebRTC.NativeMethods::TransceiverGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverGetDirection_m6D1DCB09008D39389F47880726418500D39980B2 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetDirection)(___transceiver0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverSetDirection(System.IntPtr,Unity.WebRTC.RTCRtpTransceiverDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverSetDirection_mDF5D42E478A84BEACB948AF67406F8050E6AC191 (intptr_t ___transceiver0, int32_t ___direction1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverSetDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverSetDirection)(___transceiver0, ___direction1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0, ___direction1);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverSetCodecPreferences(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverSetCodecPreferences_mB7BAE94C73575409171BFCCBB8B8853F2D6B7633 (intptr_t ___transceiver0, intptr_t ___capabilities1, int64_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverSetCodecPreferences", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverSetCodecPreferences)(___transceiver0, ___capabilities1, ___length2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___transceiver0, ___capabilities1, ___length2);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetReceiver(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetReceiver_m75D8742DE9B47436FAB34898C5EC98C2E010B3DE (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetReceiver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetReceiver)(___transceiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetSender(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetSender_m21A8B83F993621B8A589B9768F470B82A96F2DE6 (intptr_t ___transceiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetSender", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetSender)(___transceiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___transceiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::SenderGetTrack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_SenderGetTrack_mDD98206F3BEC016D13565256D05141B596215BA8 (intptr_t ___sender0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderGetTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(SenderGetTrack)(___sender0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___sender0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::SenderGetParameters(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SenderGetParameters_mA3DB744CA5B41687500A2F8AAFF37357653229BD (intptr_t ___sender0, intptr_t* ___parameters1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderGetParameters", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SenderGetParameters)(___sender0, ___parameters1);
	#else
	il2cppPInvokeFunc(___sender0, ___parameters1);
	#endif

}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::SenderSetParameters(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SenderSetParameters_m41DE86D22CAEEB6658433C3B859FEACB891F5A70 (intptr_t ___sender0, intptr_t ___parameters1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderSetParameters", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SenderSetParameters)(___sender0, ___parameters1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___sender0, ___parameters1);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::SenderReplaceTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SenderReplaceTrack_mDE49C00352500E3FE95391A1075EF841A9D08322 (intptr_t ___sender0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderReplaceTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(SenderReplaceTrack)(___sender0, ___track1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___sender0, ___track1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Unity.WebRTC.NativeMethods::ReceiverGetTrack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ReceiverGetTrack_mA40194AD17F4BF97F04FD971E2BB410FBAD13E1B (intptr_t ___receiver0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ReceiverGetTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ReceiverGetTrack)(___receiver0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___receiver0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ReceiverGetStreams(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ReceiverGetStreams_mB5AE86F865EC659DD5EADF6857D9C32EFC4C6C21 (intptr_t ___receiver0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ReceiverGetStreams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ReceiverGetStreams)(___receiver0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___receiver0, ___length1);
	#endif

	return returnValue;
}
// System.Int32 Unity.WebRTC.NativeMethods::DataChannelGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DataChannelGetID_m72B7912117FB3F389111DE092D9671FA546751BE (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetID)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::DataChannelGetLabel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_DataChannelGetLabel_m1C020C667F068A94DBA4A9A4470779FBF7DA269B (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetLabel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetLabel)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::DataChannelGetProtocol(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_DataChannelGetProtocol_mE31B74B9A7C1437CEAF09FAAD80DE39E6B92A322 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetProtocol", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetProtocol)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.UInt16 Unity.WebRTC.NativeMethods::DataChannelGetMaxRetransmits(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeMethods_DataChannelGetMaxRetransmits_mE94290BCAD2DB29AAE79C5C75EF954C3C2336DE6 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint16_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetMaxRetransmits", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint16_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetMaxRetransmits)(___ptr0);
	#else
	uint16_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.UInt16 Unity.WebRTC.NativeMethods::DataChannelGetMaxRetransmitTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeMethods_DataChannelGetMaxRetransmitTime_m46DD860FA53A305E5B6C2B34FC26743770F4E963 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint16_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetMaxRetransmitTime", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint16_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetMaxRetransmitTime)(___ptr0);
	#else
	uint16_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::DataChannelGetOrdered(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_DataChannelGetOrdered_mA5D7B9A927A3A531A429EC1365FDF02839AAF751 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetOrdered", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetOrdered)(___ptr0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.UInt64 Unity.WebRTC.NativeMethods::DataChannelGetBufferedAmount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeMethods_DataChannelGetBufferedAmount_m40F8EAA2E9AAD12D41C5C503AA037FBD22FDE0D4 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetBufferedAmount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetBufferedAmount)(___ptr0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::DataChannelGetNegotiated(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_DataChannelGetNegotiated_mE410A8E115863B707F7E6BB3B35CA985843D46EA (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetNegotiated", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetNegotiated)(___ptr0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCDataChannelState Unity.WebRTC.NativeMethods::DataChannelGetReadyState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DataChannelGetReadyState_m10E96CF2AD1F63F5B95ECB9B395F9C92DAA9AE2B (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetReadyState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetReadyState)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSend(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSend_m2A0620BFE9309416DF1269C350AC6F74A2D71570 (intptr_t ___ptr0, String_t* ___msg1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSend", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___msg1' to native representation
	char* ____msg1_marshaled = NULL;
	____msg1_marshaled = il2cpp_codegen_marshal_string(___msg1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSend)(___ptr0, ____msg1_marshaled);
	#else
	il2cppPInvokeFunc(___ptr0, ____msg1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___msg1' native representation
	il2cpp_codegen_marshal_free(____msg1_marshaled);
	____msg1_marshaled = NULL;

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSendPtr(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSendPtr_mF45A381BFD0AD6E50D35697E2F2989774149E4A7 (intptr_t ___ptr0, intptr_t ___dataPtr1, int32_t ___size2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSendBinary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSendBinary)(___ptr0, ___dataPtr1, ___size2);
	#else
	il2cppPInvokeFunc(___ptr0, ___dataPtr1, ___size2);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSendBinary(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSendBinary_m13F9FD9B3BD879C03941BF3365B69E3C0E2F3FB8 (intptr_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___size2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSendBinary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSendBinary)(___ptr0, ____bytes1_marshaled, ___size2);
	#else
	il2cppPInvokeFunc(___ptr0, ____bytes1_marshaled, ___size2);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelClose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelClose_m9B2B1F950D1CD3DB17DF51A85F8561C5A71FE228 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelClose)(___ptr0);
	#else
	il2cppPInvokeFunc(___ptr0);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnMessage(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnMessage_mE8DA0743D65FC94A3EE9E6EB9913D150E9F0A805 (intptr_t ___ctx0, intptr_t ___ptr1, DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnMessage)(___ctx0, ___ptr1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___ctx0, ___ptr1, ____callback2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnOpen(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnOpen)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnOpen_mAEA18EE883C8EFAF583A67217A60F3C168871533 (intptr_t ___ctx0, intptr_t ___ptr1, DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnOpen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnOpen)(___ctx0, ___ptr1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___ctx0, ___ptr1, ____callback2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnClose(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnClose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnClose_mE0472DCC8403D8B9D6C2722C7251C1F553B466F3 (intptr_t ___ctx0, intptr_t ___ptr1, DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnClose)(___ctx0, ___ptr1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___ctx0, ___ptr1, ____callback2_marshaled);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateMediaStream(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateMediaStream_m9AD8A5925B209D92DDABDD305BD64BA4F36524CE (intptr_t ___ctx0, String_t* ___label1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateMediaStream", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___label1' to native representation
	char* ____label1_marshaled = NULL;
	____label1_marshaled = il2cpp_codegen_marshal_string(___label1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateMediaStream)(___ctx0, ____label1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ctx0, ____label1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___label1' native representation
	il2cpp_codegen_marshal_free(____label1_marshaled);
	____label1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextRegisterMediaStreamObserver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextRegisterMediaStreamObserver_mF6AF50B970CDBCD6A0EAB527633A866EA17F02DE (intptr_t ___ctx0, intptr_t ___stream1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextRegisterMediaStreamObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextRegisterMediaStreamObserver)(___ctx0, ___stream1);
	#else
	il2cppPInvokeFunc(___ctx0, ___stream1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextUnRegisterMediaStreamObserver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextUnRegisterMediaStreamObserver_m750D0B8795202551FA423B45A878C3F2CA4957F3 (intptr_t ___ctx0, intptr_t ___stream1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextUnRegisterMediaStreamObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextUnRegisterMediaStreamObserver)(___ctx0, ___stream1);
	#else
	il2cppPInvokeFunc(___ctx0, ___stream1);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrackSink(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrackSink_m1D0FF1A222183158EBCDE2980AD335A5B8F8D1A2 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrackSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrackSink)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteAudioTrackSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteAudioTrackSink_m40FBF67A19BE0ED93F18FF219B84CEC963AC294E (intptr_t ___context0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteAudioTrackSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteAudioTrackSink)(___context0, ___sink1);
	#else
	il2cppPInvokeFunc(___context0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackAddSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackAddSink_m9FE8EC67053B32A20EFF07BFA1FA578A1629274E (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackAddSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackAddSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackRemoveSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackRemoveSink_m23F52EC61B4577BF44E270E3F5A2547C102E83D5 (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackRemoveSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackRemoveSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackSinkProcessAudio(System.IntPtr,System.Single[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackSinkProcessAudio_m72F30615F068CFC19A1AC9BB584BB5A8C3CAEC7C (intptr_t ___sink0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data1, int32_t ___length2, int32_t ___channels3, int32_t ___sampleRate4, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackSinkProcessAudio", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___data1' to native representation
	float* ____data1_marshaled = NULL;
	if (___data1 != NULL)
	{
		____data1_marshaled = reinterpret_cast<float*>((___data1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackSinkProcessAudio)(___sink0, ____data1_marshaled, ___length2, ___channels3, ___sampleRate4);
	#else
	il2cppPInvokeFunc(___sink0, ____data1_marshaled, ___length2, ___channels3, ___sampleRate4);
	#endif

}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamAddTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamAddTrack_mB1E5DFFF94F21CE6DB68E67E09565FAB6E407300 (intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamAddTrack)(___stream0, ___track1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___stream0, ___track1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamRemoveTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamRemoveTrack_m262736CB430FBB2EF3606E906550E2DC3274A335 (intptr_t ___stream0, intptr_t ___track1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamRemoveTrack)(___stream0, ___track1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___stream0, ___track1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetVideoTracks(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetVideoTracks_m6EE2758577BE2E507C1AB7750FFCC50A47B7C217 (intptr_t ___stream0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetVideoTracks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetVideoTracks)(___stream0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stream0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetAudioTracks(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetAudioTracks_m4D0E1F871C18979A5A8DA00EE9D8DE090BAEE49B (intptr_t ___stream0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetAudioTracks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetAudioTracks)(___stream0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stream0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetID_m486F7F62D6C09D630D6D910993F6F892F1CCA78B (intptr_t ___stream0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetID)(___stream0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stream0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamRegisterOnAddTrack(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamRegisterOnAddTrack_mACAAF6280B17E09DF6547053B0AF72A12B47D608 (intptr_t ___context0, intptr_t ___stream1, DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRegisterOnAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamRegisterOnAddTrack)(___context0, ___stream1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___context0, ___stream1, ____callback2_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamRegisterOnRemoveTrack(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamRegisterOnRemoveTrack_m4DEB4A4784008216E9EAE2947B9FC3FDB7C65D24 (intptr_t ___context0, intptr_t ___stream1, DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* ___callback2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRegisterOnRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamRegisterOnRemoveTrack)(___context0, ___stream1, ____callback2_marshaled);
	#else
	il2cppPInvokeFunc(___context0, ___stream1, ____callback2_marshaled);
	#endif

}
// Unity.WebRTC.TrackKind Unity.WebRTC.NativeMethods::MediaStreamTrackGetKind(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_MediaStreamTrackGetKind_m9D61ADCAC19B5F0718D298ADCAED8F5B316423D2 (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetKind", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetKind)(___track0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return returnValue;
}
// Unity.WebRTC.TrackState Unity.WebRTC.NativeMethods::MediaStreamTrackGetReadyState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_MediaStreamTrackGetReadyState_m2489BE3DDFC8FCD65D42E61D4EE5739E6C4226E1 (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetReadyState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetReadyState)(___track0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamTrackGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamTrackGetID_mA2ABBA9CF8185CC0ACBA85914916B77C351750F4 (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetID)(___track0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamTrackGetEnabled(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamTrackGetEnabled_m4803B9043572EFE29FD24794591F116310FA0F4B (intptr_t ___track0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetEnabled)(___track0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___track0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamTrackSetEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamTrackSetEnabled_mE3239D74178E096E1800BB89EFA13082CC5803E5 (intptr_t ___track0, bool ___enabled1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 1 + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackSetEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamTrackSetEnabled)(___track0, static_cast<uint8_t>(___enabled1));
	#else
	il2cppPInvokeFunc(___track0, static_cast<uint8_t>(___enabled1));
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::CreateVideoRenderer(System.IntPtr,Unity.WebRTC.DelegateVideoFrameResize,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_CreateVideoRenderer_mA3E309064CA5DD595DB22B1DB5D7C5B3DBEB02B6 (intptr_t ___context0, DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* ___callback1, bool ___needFlip2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + 1 + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateVideoRenderer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(CreateVideoRenderer)(___context0, ____callback1_marshaled, static_cast<uint8_t>(___needFlip2));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ____callback1_marshaled, static_cast<uint8_t>(___needFlip2));
	#endif

	return returnValue;
}
// System.UInt32 Unity.WebRTC.NativeMethods::GetVideoRendererId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_GetVideoRendererId_mBFE54C3FEB4A2AD34B84C999C6ED9FF73B92FAB1 (intptr_t ___sink0, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetVideoRendererId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(GetVideoRendererId)(___sink0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___sink0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::DeleteVideoRenderer(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DeleteVideoRenderer_m0BA07A16FAED6D3EE98F8EF715062E6C268CB89B (intptr_t ___context0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DeleteVideoRenderer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DeleteVideoRenderer)(___context0, ___sink1);
	#else
	il2cppPInvokeFunc(___context0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::VideoTrackAddOrUpdateSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_VideoTrackAddOrUpdateSink_m19280CB5782A4C7B04C4B47C9390B4C89F97F9F5 (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "VideoTrackAddOrUpdateSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(VideoTrackAddOrUpdateSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::VideoTrackRemoveSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_VideoTrackRemoveSink_m3C0470727E2671CD4AD7B17ADFE935D7BB6269B7 (intptr_t ___track0, intptr_t ___sink1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "VideoTrackRemoveSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(VideoTrackRemoveSink)(___track0, ___sink1);
	#else
	il2cppPInvokeFunc(___track0, ___sink1);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::SetCurrentContext(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetCurrentContext_m292844D0DA496B574EC7CB2D426E1125C5B709F9 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SetCurrentContext", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetCurrentContext)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::GetRenderEventFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetRenderEventFunc_mCFC213D4205280FB611881F61FBF8FD118CB6025 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetRenderEventFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetRenderEventFunc)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::GetReleaseBuffersFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetReleaseBuffersFunc_m92CCC7FEA7696B119B3185CC1AB823CF65241A34 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetReleaseBuffersFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetReleaseBuffersFunc)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::GetUpdateTextureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetUpdateTextureFunc_m8BE3E043A7FAA0B7D4951A690A39F49E8F406D4F (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetUpdateTextureFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetUpdateTextureFunc)(___context0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::AudioSourceProcessLocalAudio(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioSourceProcessLocalAudio_mBD979CF36CCBD736D1BDD5F8273CCE67F8534C28 (intptr_t ___source0, intptr_t ___array1, int32_t ___sampleRate2, int32_t ___channels3, int32_t ___frames4, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioSourceProcessLocalAudio", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioSourceProcessLocalAudio)(___source0, ___array1, ___sampleRate2, ___channels3, ___frames4);
	#else
	il2cppPInvokeFunc(___source0, ___array1, ___sampleRate2, ___channels3, ___frames4);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetJson(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetJson_m53A16758F0E0752015CEDF61DC39FBD5B696A290 (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetJson", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetJson)(___stats0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetId_mA52C67A6AB0E7C7C4616342A1BB832B3E56479C7 (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetId)(___stats0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCStatsType Unity.WebRTC.NativeMethods::StatsGetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsGetType_mF4C00318B335E494553CE4CD7023C0E06EC27885 (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetType)(___stats0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// System.Int64 Unity.WebRTC.NativeMethods::StatsGetTimestamp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_StatsGetTimestamp_mD205EA656CEA03A39C9BE65D3DE209497D52AD0A (intptr_t ___stats0, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetTimestamp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetTimestamp)(___stats0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___stats0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetMembers(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetMembers_m422162C864E7AFCC085924F0DDA5CF47E1B6AE21 (intptr_t ___stats0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetMembers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetMembers)(___stats0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stats0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetName_m7AD1AFB46ED1C56B6FC1B6071A16858CE9BC0967 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetName)(___member0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// Unity.WebRTC.StatsMemberType Unity.WebRTC.NativeMethods::StatsMemberGetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsMemberGetType_mCCAC8329A039667F65E2BAC61F6F38694AB81EF8 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetType)(___member0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::StatsMemberIsDefined(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_StatsMemberIsDefined_m3BD298DEF974BF4897DD36C1A8BDC0DC963F889B (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberIsDefined", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberIsDefined)(___member0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::StatsMemberGetBool(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_StatsMemberGetBool_m579E4F08A7814DCF29D64787A2B5900F06468DA6 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetBool", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetBool)(___member0);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 Unity.WebRTC.NativeMethods::StatsMemberGetInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsMemberGetInt_mD1EB1F71D41B0FA802FF0BDA5B6E79B26ED62DDB (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetInt)(___member0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.UInt32 Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_StatsMemberGetUnsignedInt_m98D49F10346F64A578F759CBA01CAD225F010F5C (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedInt)(___member0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.Int64 Unity.WebRTC.NativeMethods::StatsMemberGetLong(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_StatsMemberGetLong_m95961DE38B9E6FB74979650DD0271002A55E9B61 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetLong", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetLong)(___member0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.UInt64 Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedLong(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeMethods_StatsMemberGetUnsignedLong_m7F235AD81C04498A113E72EFE27EC96F70266A8A (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedLong", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedLong)(___member0);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.Double Unity.WebRTC.NativeMethods::StatsMemberGetDouble(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeMethods_StatsMemberGetDouble_m16C7F83FBAC2272445B65DA0CACF5975410FF9D1 (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef double (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetDouble", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetDouble)(___member0);
	#else
	double returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetString_m5CC4910C0C51903A9547E6AE04D2A82E52936E8F (intptr_t ___member0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetString", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetString)(___member0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetBoolArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetBoolArray_m23757A1616E8FDC0BFA8EDB7C305B5222E94D8DF (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetBoolArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetBoolArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetIntArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetIntArray_mB31350875CE82836597F1A40494DD4E6A1EE2616 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetIntArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetIntArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedIntArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetUnsignedIntArray_mFEB37C69A11A3AF9830E4386D71184C89F760933 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedIntArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedIntArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetLongArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetLongArray_m93C016871F4CD82A3FDFC8467FFFB91EF74F97C1 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetLongArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetLongArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedLongArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetUnsignedLongArray_m0847907C32FD9C598C4C92D4187E646ED64F5217 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedLongArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedLongArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetDoubleArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetDoubleArray_mE54DA381AA8BB33954AEE204D4940B9394480664 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetDoubleArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetDoubleArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetStringArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetStringArray_m35DB4A2576A1C90A3B1893BBA553BC15874DEBB9 (intptr_t ___member0, uint64_t* ___length1, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetStringArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetStringArray)(___member0, ___length1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___member0, ___length1);
	#endif

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
// System.Void Unity.WebRTC.VideoEncoderMethods::Encode(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods_Encode_m244F3F4E60162761A04420FEBB8B5FF0DF58F7E5 (intptr_t ___callback0, intptr_t ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginEventAndData(callback, 0, data);
		il2cpp_codegen_runtime_class_init_inline(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___callback0;
		intptr_t L_2 = ___data1;
		NullCheck(L_0);
		CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C(L_0, L_1, 0, L_2, NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_3, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_4);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoEncoderMethods::ReleaseBuffers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods_ReleaseBuffers_m2F7E32F03F3A620116D0C5A2749A4FC1AD37FC6A (intptr_t ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginEventAndData(callback, 0, IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___callback0;
		NullCheck(L_0);
		CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C(L_0, L_1, 0, (0), NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_2 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_2, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_3);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoEncoderMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods__cctor_m3758E9F99FC41C8E662886221013CB4151E91558 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static CommandBuffer _command = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_0, NULL);
		((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0), (void*)L_0);
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
// System.Void Unity.WebRTC.VideoDecoderMethods::UpdateRendererTexture(System.IntPtr,UnityEngine.Texture,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDecoderMethods_UpdateRendererTexture_m3963BA138ADC17A022DBC4786E3825896DCBCB19 (intptr_t ___callback0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, uint32_t ___rendererId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginCustomTextureUpdateV2(callback, texture, rendererId);
		il2cpp_codegen_runtime_class_init_inline(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___callback0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture1;
		uint32_t L_3 = ___rendererId2;
		NullCheck(L_0);
		CommandBuffer_IssuePluginCustomTextureUpdateV2_m2F0FCB75B743412D3AD504F7A95DE4D854A8D601(L_0, L_1, L_2, L_3, NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_m6DF8B1F93BA2BD9BED8F911A05A64D56BC1FFBA1(L_4, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_5);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoDecoderMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDecoderMethods__cctor_m2CF1A35900CFF030E90EF697209B7CAFF2005855 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static UnityEngine.Rendering.CommandBuffer _command = new UnityEngine.Rendering.CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_0, NULL);
		((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
