﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<YVR.Core.YVREventType>
struct Action_1_t38B221ED693ED9C38AF9564ED6F85AEDAF430627;
// System.Action`1<YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel>
struct Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C;
// System.Action`1<YVR.Core.YVRQualityManager/VSyncCount>
struct Action_1_t758956A0B34DB519E03A9C540833CD526A79C251;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// MonoBehaviorSingleton`1<System.Object>
struct MonoBehaviorSingleton_1_t9AD85D91BEF8D76AA2E89FB73B00460BFFF67AFD;
// MonoBehaviorSingleton`1<YVR.Core.YVRManager>
struct MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0;
// Singleton`1<System.Object>
struct Singleton_1_tFFC9424B38516E35D0B8E6C9C5463DB104612605;
// Singleton`1<YVR.Core.YVREventTracking>
struct Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75;
// YVR.Core.YVRCameraRenderer/EyeRenderDescription[]
struct EyeRenderDescriptionU5BU5D_t949E06A6AE187953E67B7ACB45E548E8CD23C618;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// YVR.Core.YVRBoundary
struct YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8;
// YVR.Core.YVRCameraRenderer
struct YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D;
// YVR.Core.YVRCameraRig
struct YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731;
// YVR.Core.YVRControllerRig
struct YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A;
// YVR.Core.YVREventTracking
struct YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C;
// YVR.Core.YVREventsManager
struct YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19;
// YVR.Core.YVRHMDManager
struct YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1;
// YVR.Core.YVRManager
struct YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F;
// YVR.Core.YVRPerformanceManager
struct YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4;
// YVR.Core.XR.YVRPlatformSetting
struct YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1;
// YVR.Core.YVRPlugin
struct YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90;
// YVR.Core.YVRQualityManager
struct YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0;
// YVR.Core.YVRTrackingStateManager
struct YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970;
// YVR.Core.XR.YVRXRLoader
struct YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43;
// YVR.Core.XR.YVRXRSettings
struct YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158;
// YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30
struct U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t758956A0B34DB519E03A9C540833CD526A79C251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedFoveatedRenderingLevel_t2570CE10293BC9B5276876564D990DCABD5B09EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VSyncCount_tAEB180A770921C401F028AA515430CCE866E0EC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRInput_t8B7533D19BCB8B71D2E7E393F32D043F9B73C554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BBA6CE4003870CF27417A37DA15698A74F039FB;
IL2CPP_EXTERN_C String_t* _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral41FA7AE749C66AC53DBE252C9C7C726D58E52BBD;
IL2CPP_EXTERN_C String_t* _stringLiteral46394594D22FA19E9D226C3C5A5DF59E50AB24F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4F638A381D742509E4F4D612C134517FDA5E0B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2CD37B7B1356523AEF247BE14BEA7838176F2A;
IL2CPP_EXTERN_C String_t* _stringLiteral61DCA854352C8194AE7D749EE4B5B6157A273460;
IL2CPP_EXTERN_C String_t* _stringLiteral82D9AE4C4FF623BBDB168A484349EE6AEF4BB1D2;
IL2CPP_EXTERN_C String_t* _stringLiteralB723B84C49BA43D55998B5F8B01EDC53B3D6432F;
IL2CPP_EXTERN_C String_t* _stringLiteralC35896225DE582DB22BE9F25389EB33C0F016831;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtension_AutoAddingGetComponent_TisYVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731_m7DF863EBA2E1B7BECD5C5029FA45AECF25BB0994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtension_AutoAddingGetComponent_TisYVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A_mA72AAE6CB3A242FD7E6C5FC0E32F3111DA6563F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviorSingleton_1_Init_mFBD41DA0ACB3D143F1257E0BF36FA03356EE77E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviorSingleton_1__ctor_mFEB5719C7EBFA713A198C8428277632FF495BD0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoBehaviorSingleton_1_get_instance_mE07B742F58837DD2E18B803D45BBBE67C07FD5A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisYVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_m4E5906549BA58BDC809A615856218B10C4CABDC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m0F90F3F3E8D93FC3970B027AC1B854447D91B42D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_instance_m63A68DA2B06D42C288DBA6A9ACFEFF84FBFF90AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWait2FramesBeforeInitializingU3Ed__30_System_Collections_IEnumerator_Reset_m0EC4E53938B26457368FC1985E719457B06421EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PackageVersion_tC27FBEEDD231C50763C8062780DAF30CEF7E618D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Singleton`1<YVR.Core.YVREventTracking>
struct Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// YVR.Core.YVRBoundary
struct YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8  : public RuntimeObject
{
};

// YVR.Core.YVRCameraRenderer
struct YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D  : public RuntimeObject
{
	// UnityEngine.Camera YVR.Core.YVRCameraRenderer::<centerEyeCamera>k__BackingField
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcenterEyeCameraU3Ek__BackingField_0;
	// UnityEngine.Camera YVR.Core.YVRCameraRenderer::<leftEyeCamera>k__BackingField
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CleftEyeCameraU3Ek__BackingField_1;
	// UnityEngine.Camera YVR.Core.YVRCameraRenderer::<rightEyeCamera>k__BackingField
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CrightEyeCameraU3Ek__BackingField_2;
	// YVR.Core.YVRCameraRenderer/EyeRenderDescription[] YVR.Core.YVRCameraRenderer::eyeRenderDescriptions
	EyeRenderDescriptionU5BU5D_t949E06A6AE187953E67B7ACB45E548E8CD23C618* ___eyeRenderDescriptions_3;
};

// YVR.Core.YVREventsManager
struct YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19  : public RuntimeObject
{
	// System.Action YVR.Core.YVREventsManager::onTrackingAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onTrackingAcquired_0;
	// System.Action YVR.Core.YVREventsManager::onTrackingLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onTrackingLost_1;
	// System.Action YVR.Core.YVREventsManager::onHMDMounted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onHMDMounted_2;
	// System.Action YVR.Core.YVREventsManager::onHMDUnMounted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onHMDUnMounted_3;
	// System.Action YVR.Core.YVREventsManager::onRecenterOccurred
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onRecenterOccurred_4;
	// System.Action YVR.Core.YVREventsManager::onFocusGained
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onFocusGained_5;
	// System.Action YVR.Core.YVREventsManager::onFocusLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onFocusLost_6;
	// System.Action YVR.Core.YVREventsManager::onVisibilityGained
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onVisibilityGained_7;
	// System.Action YVR.Core.YVREventsManager::onVisibilityLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onVisibilityLost_8;
	// System.Action YVR.Core.YVREventsManager::onUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onUpdate_9;
	// System.Action YVR.Core.YVREventsManager::onPreSubmitGfx
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onPreSubmitGfx_10;
	// System.Action YVR.Core.YVREventsManager::onPostSubmitGfx
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onPostSubmitGfx_11;
	// System.Boolean YVR.Core.YVREventsManager::m_WasHMDTracking
	bool ___m_WasHMDTracking_12;
	// System.Boolean YVR.Core.YVREventsManager::m_WasUserPresent
	bool ___m_WasUserPresent_13;
};

// YVR.Core.YVRHMDManager
struct YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1  : public RuntimeObject
{
};

// YVR.Core.YVRPerformanceManager
struct YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4  : public RuntimeObject
{
};

// YVR.Core.YVRPlugin
struct YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90  : public RuntimeObject
{
};

// YVR.Core.YVRQualityManager
struct YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0  : public RuntimeObject
{
	// YVR.Core.YVRQualityManager/VSyncCount YVR.Core.YVRQualityManager::_vSyncCount
	int32_t ____vSyncCount_0;
	// YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel YVR.Core.YVRQualityManager::_fixedFoveatedRenderingLevel
	int32_t ____fixedFoveatedRenderingLevel_1;
	// System.Boolean YVR.Core.YVRQualityManager::m_EnableASW
	bool ___m_EnableASW_2;
	// System.Action`1<YVR.Core.YVRQualityManager/VSyncCount> YVR.Core.YVRQualityManager::onVSyncCountChanged
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* ___onVSyncCountChanged_3;
	// System.Action`1<YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel> YVR.Core.YVRQualityManager::onFFRLevelChanged
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* ___onFFRLevelChanged_4;
	// System.Action`1<System.Boolean> YVR.Core.YVRQualityManager::onASWEnableChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onASWEnableChanged_5;
	// System.Boolean YVR.Core.YVRQualityManager::useRecommendedMSAALevel
	bool ___useRecommendedMSAALevel_6;
};

// YVR.Core.YVRTrackingStateManager
struct YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970  : public RuntimeObject
{
	// YVR.Core.YVRTrackingStateManager/TrackingSpace YVR.Core.YVRTrackingStateManager::_trackingSpace
	int32_t ____trackingSpace_0;
	// System.Action`1<System.Boolean> YVR.Core.YVRTrackingStateManager::onUseIPDInPositionTrackingChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onUseIPDInPositionTrackingChanged_1;
	// System.Boolean YVR.Core.YVRTrackingStateManager::_useIPDInPositionTracking
	bool ____useIPDInPositionTracking_2;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30
struct U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D  : public RuntimeObject
{
	// System.Int32 YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// YVR.Core.YVRQualityManager YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::<>4__this
	YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* ___U3CU3E4__this_2;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// YVR.Core.YVREventTracking
struct YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C  : public Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9
{
	// UnityEngine.AndroidJavaClass YVR.Core.YVREventTracking::m_UnityPlayerClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_UnityPlayerClass_2;
	// UnityEngine.AndroidJavaObject YVR.Core.YVREventTracking::m_CurrentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_CurrentActivity_3;
	// UnityEngine.AndroidJavaClass YVR.Core.YVREventTracking::m_NativeCoreSdkClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_NativeCoreSdkClass_4;
	// System.String YVR.Core.YVREventTracking::m_SdkVersion
	String_t* ___m_SdkVersion_5;
	// System.String YVR.Core.YVREventTracking::m_SdkType
	String_t* ___m_SdkType_6;
	// System.Int64 YVR.Core.YVREventTracking::m_AppId
	int64_t ___m_AppId_7;
};

// YVR.Core.XR.YVRXRUserDefinedSettings
struct YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8 
{
	// System.Boolean YVR.Core.XR.YVRXRUserDefinedSettings::use16BitDepthBuffer
	bool ___use16BitDepthBuffer_0;
	// System.Boolean YVR.Core.XR.YVRXRUserDefinedSettings::useMonoscopic
	bool ___useMonoscopic_1;
	// System.Boolean YVR.Core.XR.YVRXRUserDefinedSettings::useLinearColorSpace
	bool ___useLinearColorSpace_2;
	// System.UInt16 YVR.Core.XR.YVRXRUserDefinedSettings::stereoRenderingMode
	uint16_t ___stereoRenderingMode_3;
	// System.Single YVR.Core.XR.YVRXRUserDefinedSettings::eyeRenderScale
	float ___eyeRenderScale_4;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// YVR.Core.PoseData
struct PoseData_t2FA0E206D2905242D06865FCA7BA27BA4A6544C4 
{
	// UnityEngine.Quaternion YVR.Core.PoseData::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_0;
	// UnityEngine.Vector3 YVR.Core.PoseData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel>
struct Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C  : public MulticastDelegate_t
{
};

// System.Action`1<YVR.Core.YVRQualityManager/VSyncCount>
struct Action_1_t758956A0B34DB519E03A9C540833CD526A79C251  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// YVR.Core.XR.YVRPlatformSetting
struct YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String YVR.Core.XR.YVRPlatformSetting::appID
	String_t* ___appID_4;
};

// YVR.Core.XR.YVRXRSettings
struct YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean YVR.Core.XR.YVRXRSettings::use16BitDepthBuffer
	bool ___use16BitDepthBuffer_4;
	// System.Boolean YVR.Core.XR.YVRXRSettings::useMonoscopic
	bool ___useMonoscopic_5;
	// YVR.Core.XR.YVRXRSettings/StereoRenderingMode YVR.Core.XR.YVRXRSettings::stereoRenderingMode
	int32_t ___stereoRenderingMode_6;
	// System.Single YVR.Core.XR.YVRXRSettings::eyeResolutionScale
	float ___eyeResolutionScale_7;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// MonoBehaviorSingleton`1<YVR.Core.YVRManager>
struct MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MonoBehaviorSingleton`1::m_Initialized
	bool ___m_Initialized_4;
};

// YVR.Core.YVRBaseRig
struct YVRBaseRig_t2347FBD7BAE01381696025BF0E3452DFA94DDE38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform YVR.Core.YVRBaseRig::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_4;
	// YVR.Core.YVRManager YVR.Core.YVRBaseRig::yvrManager
	YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* ___yvrManager_5;
	// UnityEngine.Transform YVR.Core.YVRBaseRig::<trackingSpace>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField_6;
};

// YVR.Core.XR.YVRXRLoader
struct YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
};

// YVR.Core.YVRCameraRig
struct YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731  : public YVRBaseRig_t2347FBD7BAE01381696025BF0E3452DFA94DDE38
{
	// UnityEngine.Transform YVR.Core.YVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField_13;
	// UnityEngine.Transform YVR.Core.YVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField_14;
	// UnityEngine.Transform YVR.Core.YVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField_15;
	// System.Action YVR.Core.YVRCameraRig::afterRigBeforeRenderUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterRigBeforeRenderUpdated_16;
	// System.Action YVR.Core.YVRCameraRig::afterRigDynamicUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterRigDynamicUpdated_17;
};

// YVR.Core.YVRControllerRig
struct YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A  : public YVRBaseRig_t2347FBD7BAE01381696025BF0E3452DFA94DDE38
{
	// UnityEngine.XR.InputDevice YVR.Core.YVRControllerRig::_leftControllerDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____leftControllerDevice_13;
	// UnityEngine.XR.InputDevice YVR.Core.YVRControllerRig::_rightControllerDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____rightControllerDevice_14;
	// UnityEngine.Transform YVR.Core.YVRControllerRig::<leftControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField_15;
	// UnityEngine.Transform YVR.Core.YVRControllerRig::<rightControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField_16;
};

// YVR.Core.YVRManager
struct YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F  : public MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0
{
	// YVR.Core.YVRControllerRig YVR.Core.YVRManager::<controllerRig>k__BackingField
	YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* ___U3CcontrollerRigU3Ek__BackingField_7;
	// YVR.Core.YVRCameraRig YVR.Core.YVRManager::<cameraRig>k__BackingField
	YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* ___U3CcameraRigU3Ek__BackingField_8;
	// YVR.Core.YVRCameraRenderer YVR.Core.YVRManager::cameraRenderer
	YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D* ___cameraRenderer_9;
	// YVR.Core.YVRBoundary YVR.Core.YVRManager::boundary
	YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8* ___boundary_10;
	// YVR.Core.YVRQualityManager YVR.Core.YVRManager::qualityManager
	YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* ___qualityManager_11;
	// YVR.Core.YVRTrackingStateManager YVR.Core.YVRManager::trackingManager
	YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* ___trackingManager_12;
	// YVR.Core.YVRPerformanceManager YVR.Core.YVRManager::performanceManager
	YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* ___performanceManager_13;
	// YVR.Core.YVRHMDManager YVR.Core.YVRManager::hmdManager
	YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* ___hmdManager_14;
	// YVR.Core.YVREventsManager YVR.Core.YVRManager::eventsManager
	YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19* ___eventsManager_15;
	// UnityEngine.Vector3 YVR.Core.YVRManager::<headPoseRelativeOffsetTranslation>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CheadPoseRelativeOffsetTranslationU3Ek__BackingField_16;
	// UnityEngine.Vector3 YVR.Core.YVRManager::<headPoseRelativeOffsetRotation>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CheadPoseRelativeOffsetRotationU3Ek__BackingField_17;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>

// Singleton`1<YVR.Core.YVREventTracking>
struct Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9_StaticFields
{
	// System.Object Singleton`1::s_Locker
	RuntimeObject* ___s_Locker_0;
	// T Singleton`1::s_Instance
	YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* ___s_Instance_1;
};

// Singleton`1<YVR.Core.YVREventTracking>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// YVR.Core.YVRBoundary

// YVR.Core.YVRBoundary

// YVR.Core.YVRCameraRenderer

// YVR.Core.YVRCameraRenderer

// YVR.Core.YVREventsManager
struct YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19_StaticFields
{
	// System.Action`1<YVR.Core.YVREventType> YVR.Core.YVREventsManager::s_EventCallback
	Action_1_t38B221ED693ED9C38AF9564ED6F85AEDAF430627* ___s_EventCallback_14;
};

// YVR.Core.YVREventsManager

// YVR.Core.YVRHMDManager

// YVR.Core.YVRHMDManager

// YVR.Core.YVRPerformanceManager

// YVR.Core.YVRPerformanceManager

// YVR.Core.YVRPlugin
struct YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90_StaticFields
{
	// YVR.Core.YVRPlugin YVR.Core.YVRPlugin::instance
	YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* ___instance_0;
};

// YVR.Core.YVRPlugin

// YVR.Core.YVRQualityManager

// YVR.Core.YVRQualityManager

// YVR.Core.YVRTrackingStateManager

// YVR.Core.YVRTrackingStateManager

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30

// YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};

// UnityEngine.XR.InputDevice

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.WaitForSecondsRealtime

// YVR.Core.YVREventTracking

// YVR.Core.YVREventTracking

// YVR.Core.XR.YVRXRUserDefinedSettings

// YVR.Core.XR.YVRXRUserDefinedSettings

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// YVR.Core.PoseData

// YVR.Core.PoseData

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`1<YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel>

// System.Action`1<YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel>

// System.Action`1<YVR.Core.YVRQualityManager/VSyncCount>

// System.Action`1<YVR.Core.YVRQualityManager/VSyncCount>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// YVR.Core.XR.YVRPlatformSetting
struct YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_StaticFields
{
	// YVR.Core.XR.YVRPlatformSetting YVR.Core.XR.YVRPlatformSetting::instance
	YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* ___instance_5;
};

// YVR.Core.XR.YVRPlatformSetting

// YVR.Core.XR.YVRXRSettings
struct YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_StaticFields
{
	// YVR.Core.XR.YVRXRSettings YVR.Core.XR.YVRXRSettings::<xrSettings>k__BackingField
	YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* ___U3CxrSettingsU3Ek__BackingField_8;
};

// YVR.Core.XR.YVRXRSettings

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.Management.XRLoaderHelper

// UnityEngine.XR.Management.XRLoaderHelper

// MonoBehaviorSingleton`1<YVR.Core.YVRManager>
struct MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0_StaticFields
{
	// System.Object MonoBehaviorSingleton`1::s_Locker
	RuntimeObject* ___s_Locker_5;
	// T MonoBehaviorSingleton`1::s_Instance
	YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* ___s_Instance_6;
};

// MonoBehaviorSingleton`1<YVR.Core.YVRManager>

// YVR.Core.YVRBaseRig
struct YVRBaseRig_t2347FBD7BAE01381696025BF0E3452DFA94DDE38_StaticFields
{
	// YVR.Core.PoseData YVR.Core.YVRBaseRig::hmdPose
	PoseData_t2FA0E206D2905242D06865FCA7BA27BA4A6544C4 ___hmdPose_7;
	// YVR.Core.PoseData YVR.Core.YVRBaseRig::leftEyePose
	PoseData_t2FA0E206D2905242D06865FCA7BA27BA4A6544C4 ___leftEyePose_8;
	// YVR.Core.PoseData YVR.Core.YVRBaseRig::rightEyePose
	PoseData_t2FA0E206D2905242D06865FCA7BA27BA4A6544C4 ___rightEyePose_9;
	// YVR.Core.PoseData YVR.Core.YVRBaseRig::lControllerPose
	PoseData_t2FA0E206D2905242D06865FCA7BA27BA4A6544C4 ___lControllerPose_10;
	// YVR.Core.PoseData YVR.Core.YVRBaseRig::rControllerPose
	PoseData_t2FA0E206D2905242D06865FCA7BA27BA4A6544C4 ___rControllerPose_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> YVR.Core.YVRBaseRig::yvrXRDevices
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___yvrXRDevices_12;
};

// YVR.Core.YVRBaseRig

// YVR.Core.XR.YVRXRLoader
struct YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> YVR.Core.XR.YVRXRLoader::displaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___displaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> YVR.Core.XR.YVRXRLoader::inputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___inputSubsystemDescriptors_6;
};

// YVR.Core.XR.YVRXRLoader

// YVR.Core.YVRCameraRig

// YVR.Core.YVRCameraRig

// YVR.Core.YVRControllerRig

// YVR.Core.YVRControllerRig

// YVR.Core.YVRManager

// YVR.Core.YVRManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mCED296CFF431807EC5081FCC8A202F6D21D90E61_gshared (Singleton_1_tFFC9424B38516E35D0B8E6C9C5463DB104612605* __this, const RuntimeMethod* method) ;
// System.Void MonoBehaviorSingleton`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviorSingleton_1_Init_m051E45FB31CF7DCC7465C2583567A551ADBD5A61_gshared (MonoBehaviorSingleton_1_t9AD85D91BEF8D76AA2E89FB73B00460BFFF67AFD* __this, const RuntimeMethod* method) ;
// T ComponentExtension::AutoAddingGetComponent<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentExtension_AutoAddingGetComponent_TisRuntimeObject_mECEB8B79F493F5176F1BDDED1275DE53C857A4BE_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_target, const RuntimeMethod* method) ;
// System.Void MonoBehaviorSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviorSingleton_1__ctor_mF291887859965B8631BB82D2526BDE1D59B2136C_gshared (MonoBehaviorSingleton_1_t9AD85D91BEF8D76AA2E89FB73B00460BFFF67AFD* __this, const RuntimeMethod* method) ;
// T MonoBehaviorSingleton`1<System.Object>::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoBehaviorSingleton_1_get_instance_m8B5E27D0BD9CF79E8CD342370E72948C7CD003EB_gshared (const RuntimeMethod* method) ;
// T Singleton`1<System.Object>::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_instance_mFCB3AF745BEA4CADE810EACDA777DF5A788D4BB5_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// YVR.Core.XR.YVRPlatformSetting YVR.Core.XR.YVRPlatformSetting::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* YVRPlatformSetting_get_Instance_mDD4F5A4CF57ED8ACD90762DA57C80221CE54F848 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVREventTracking::SetSDKInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventTracking_SetSDKInfo_mA32E9A6EAFFA97EF6CDC9B597C1AD348680C2839 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, String_t* ___0_m_SdkType, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass YVR.Core.YVREventTracking::get_NativeCoreSdkClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* YVREventTracking_get_NativeCoreSdkClass_m6AA56E136B970C713B835CB9C98DF7B22955681C (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject YVR.Core.YVREventTracking::get_CurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* YVREventTracking_get_CurrentActivity_m070073656C31353B4327D143A82EBD3A8CA56401 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean PackageVersion::TryGetPackageVersion(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PackageVersion_TryGetPackageVersion_m61A509A23E10B7E6177B5CB692F5478D91EBA6B1 (String_t* ___0_targetPackageNameOrAssemblyName, String_t** ___1_version, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVREventTracking::InitSdk(System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventTracking_InitSdk_m64F8BA76E465B5E8A697C0D61B7473F3B2F58FC0 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, String_t* ___0_sdkType, String_t* ___1_sdkVersion, int64_t ___2_appId, const RuntimeMethod* method) ;
// System.Void Singleton`1<YVR.Core.YVREventTracking>::.ctor()
inline void Singleton_1__ctor_m0F90F3F3E8D93FC3970B027AC1B854447D91B42D (Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9*, const RuntimeMethod*))Singleton_1__ctor_mCED296CFF431807EC5081FCC8A202F6D21D90E61_gshared)(__this, method);
}
// YVR.Core.YVRPlugin YVR.Core.YVRPlugin::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 YVR.Core.YVRPerformanceManager::get_cpuLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRPerformanceManager_get_cpuLevel_m2FF632E3E3C44451EC13EAA898577E71CAA9EABF (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRPerformanceManager::set_cpuLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRPerformanceManager_set_cpuLevel_m95A1C4A1D71EE81E78C72D2A8D1C5836DB78E721 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 YVR.Core.YVRPerformanceManager::get_gpuLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRPerformanceManager_get_gpuLevel_m3C49E663510DB3AA154D555D79706D74DE57F4E1 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRPerformanceManager::set_gpuLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRPerformanceManager_set_gpuLevel_m754E003063E0B6C87F9F18960D2BE49C28DD0561 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// YVR.Core.YVRQualityManager/VSyncCount YVR.Core.YVRQualityManager::get_vSyncCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_vSyncCount_m73B6171EBF3B7018ED0FF276ED4C7273B547241B_inline (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager::set_vSyncCount(YVR.Core.YVRQualityManager/VSyncCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_set_vSyncCount_m1FEE034D3A4254E26F6B88DC774AA06F8F281472 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel YVR.Core.YVRQualityManager::get_fixedFoveatedRenderingLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_fixedFoveatedRenderingLevel_m4C4DEC8E5577B6D078D1AE5FA1225741ABC90909_inline (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager::set_fixedFoveatedRenderingLevel(YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_set_fixedFoveatedRenderingLevel_mBE133D0FF78CA6707956BE1BAA8C75784D3749E2 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel YVR.Core.YVRManager::get_fixedFoveatedRenderingLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRManager_get_fixedFoveatedRenderingLevel_mBD431B0F84E2A91877AF191FC384A63D4CD5C90E (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) ;
// System.Boolean YVR.Core.YVRTrackingStateManager::get_useIPDInPositionTracking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YVRTrackingStateManager_get_useIPDInPositionTracking_m3AE2069FF14907DABBAF00B9C11CFB91311F1D6E_inline (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRTrackingStateManager::set_useIPDInPositionTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_set_useIPDInPositionTracking_m690CB1322FC9C86BD1874840B7B8500EE32A01B1 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, bool ___0_value, const RuntimeMethod* method) ;
// YVR.Core.YVRTrackingStateManager/TrackingSpace YVR.Core.YVRTrackingStateManager::get_trackingSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YVRTrackingStateManager_get_trackingSpace_m76CBB1BE9E22491D43BDDDB7EAE04147737F67C5_inline (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRTrackingStateManager::set_trackingSpace(YVR.Core.YVRTrackingStateManager/TrackingSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_set_trackingSpace_m8C529F04F0840AE08A5CAE5D40C0D408129BC6B0 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single YVR.Core.YVRHMDManager::get_batteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRHMDManager_get_batteryLevel_mA78C4E60A4426193CCCE80467B0D88CAA5DFFEDA (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) ;
// System.Single YVR.Core.YVRHMDManager::get_batteryTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRHMDManager_get_batteryTemperature_m2A435CDE9714E561D80ED909F384123AE1A53095 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) ;
// System.Int32 YVR.Core.YVRHMDManager::get_batteryStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRHMDManager_get_batteryStatus_mB1D2A2FA73C50D51FC203D893DC5DB6C1A83D1BC (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) ;
// System.Single YVR.Core.YVRHMDManager::get_volumeLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRHMDManager_get_volumeLevel_mABE514674D05E6EF4DE74317D26D00F1A4EB1396 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) ;
// System.Boolean YVR.Core.YVRHMDManager::get_isPowerSavingActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRHMDManager_get_isPowerSavingActive_mE19CCD0CA1B0B64E9C5E3D8A2D2902F1D8760A10 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) ;
// System.Boolean YVR.Core.YVRHMDManager::get_isUserPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRHMDManager_get_isUserPresent_m242E0FE2B32731A88100B0EDD5AE813BA4DC0D35 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) ;
// System.Single YVR.Core.YVRPerformanceManager::get_gpuUtilLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRPerformanceManager_get_gpuUtilLevel_m2E22381C700AC3D3B5FF8DAC798445A7D77193A1 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) ;
// System.Single YVR.Core.YVRPerformanceManager::get_cpuUtilLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRPerformanceManager_get_cpuUtilLevel_mD108071FF56978054C4E8A8CE6C5911BBBFB781E (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) ;
// System.Void MonoBehaviorSingleton`1<YVR.Core.YVRManager>::Init()
inline void MonoBehaviorSingleton_1_Init_mFBD41DA0ACB3D143F1257E0BF36FA03356EE77E2 (MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0*, const RuntimeMethod*))MonoBehaviorSingleton_1_Init_m051E45FB31CF7DCC7465C2583567A551ADBD5A61_gshared)(__this, method);
}
// T ComponentExtension::AutoAddingGetComponent<YVR.Core.YVRCameraRig>(UnityEngine.Component)
inline YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* ComponentExtension_AutoAddingGetComponent_TisYVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731_m7DF863EBA2E1B7BECD5C5029FA45AECF25BB0994 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_target, const RuntimeMethod* method)
{
	return ((  YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))ComponentExtension_AutoAddingGetComponent_TisRuntimeObject_mECEB8B79F493F5176F1BDDED1275DE53C857A4BE_gshared)(___0_target, method);
}
// System.Void YVR.Core.YVRManager::set_cameraRig(YVR.Core.YVRCameraRig)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YVRManager_set_cameraRig_m03EB6E0ADBDA1B462C7A6A5EEB7F909ACF456FEA_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* ___0_value, const RuntimeMethod* method) ;
// T ComponentExtension::AutoAddingGetComponent<YVR.Core.YVRControllerRig>(UnityEngine.Component)
inline YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* ComponentExtension_AutoAddingGetComponent_TisYVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A_mA72AAE6CB3A242FD7E6C5FC0E32F3111DA6563F3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_target, const RuntimeMethod* method)
{
	return ((  YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))ComponentExtension_AutoAddingGetComponent_TisRuntimeObject_mECEB8B79F493F5176F1BDDED1275DE53C857A4BE_gshared)(___0_target, method);
}
// System.Void YVR.Core.YVRManager::set_controllerRig(YVR.Core.YVRControllerRig)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YVRManager_set_controllerRig_mFACEC7F869B04667C6450329B67B8632FE0AA510_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* ___0_value, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRTrackingStateManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_Initialize_m90C32765620C7ABDE6FDFE208FBD1607C4F64DBD (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_Initialize_m7ECEA15580805D83139CC40ABBEF7CB1838B666D (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) ;
// YVR.Core.YVRCameraRig YVR.Core.YVRManager::get_cameraRig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* YVRManager_get_cameraRig_m45D371A137B59F90D8FCE0D721F088EAB1C1F3CB_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) ;
// YVR.Core.YVRControllerRig YVR.Core.YVRManager::get_controllerRig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* YVRManager_get_controllerRig_mB05E5B8AF5A78C90E56723C4DF0535C5B8582906_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRCameraRenderer::Initialize(YVR.Core.YVRManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRCameraRenderer_Initialize_mBEC094B6A52D3F67AB32A9B4388BA92B5136AAED (YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D* __this, YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* ___0_yvrManager, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVREventsManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventsManager_Initialize_m52F45CCE03357BBC8F6550A9CC898F483626E878 (YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19* __this, const RuntimeMethod* method) ;
// System.Boolean YVR.Core.YVRManager::get_useRecommendedMSAALevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRManager_get_useRecommendedMSAALevel_m4DE74D6450454DC878B27606B0DBB1EB1B2E145E (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) ;
// System.Int32 YVR.Core.YVRQualityManager::get_recommendAntiAlisingLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_recommendAntiAlisingLevel_m59178A4F5C1F2481C952C73AFA64447BEA8352FA (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::set_antiAliasing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_antiAliasing_mBC4220AF5820137CFEBB38155D4CCD12822E2C7E (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean PackageVersion::PrintPackagesVersion(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PackageVersion_PrintPackagesVersion_m30C9732826E35FE7CB7C379E75227B4A4770EAB3 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRInput_Update_m5E47669B79FFF242A45CAB42E46457D7B1D03F0B (const RuntimeMethod* method) ;
// System.Void YVR.Core.YVREventsManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventsManager_Update_m0412938882446CD84AD5FD41A95DE723AC3B4FAD (YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRCameraRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRCameraRenderer__ctor_mB9AAC23FC64E4B26876853342F879147E7D2353F (YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRBoundary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRBoundary__ctor_mB171D9769437F81057DEFCDE8DE45FBE46722DC0 (YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager__ctor_m7C40B1CF110836F1EF8E688DF2A071B69BC432D6 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRTrackingStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager__ctor_m784E2FC4D2C4571ABDC11C80C5237FB0FD8B4625 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRPerformanceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRPerformanceManager__ctor_m73FC9D40C3539198715B3C1A1AF297CD914691C9 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRHMDManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRHMDManager__ctor_mBBA1C15B9F1B2496541CFFEA8EB93B850A59707B (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVREventsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventsManager__ctor_m53DAF9BFB1AE1DB04AB9D4B9F8738E7BB4D6A9F4 (YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19* __this, const RuntimeMethod* method) ;
// System.Void MonoBehaviorSingleton`1<YVR.Core.YVRManager>::.ctor()
inline void MonoBehaviorSingleton_1__ctor_mFEB5719C7EBFA713A198C8428277632FF495BD0F (MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0*, const RuntimeMethod*))MonoBehaviorSingleton_1__ctor_mF291887859965B8631BB82D2526BDE1D59B2136C_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager::ApplyVSyncCount(YVR.Core.YVRQualityManager/VSyncCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_ApplyVSyncCount_mCA4C826D3CBB11DCDD4FF23A7233E1246FC4BB4B (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager::ApplyFFR(YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_ApplyFFR_m529FF93E89CAB2013F873823C82DBA56FCB90CE6 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager::ApplyASW(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_ApplyASW_m89412EBD86451276DBD0A804FA9279608E3ADF0C (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, bool ___0_enable, const RuntimeMethod* method) ;
// T MonoBehaviorSingleton`1<YVR.Core.YVRManager>::get_instance()
inline YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* MonoBehaviorSingleton_1_get_instance_mE07B742F58837DD2E18B803D45BBBE67C07FD5A2 (const RuntimeMethod* method)
{
	return ((  YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* (*) (const RuntimeMethod*))MonoBehaviorSingleton_1_get_instance_m8B5E27D0BD9CF79E8CD342370E72948C7CD003EB_gshared)(method);
}
// System.Collections.IEnumerator YVR.Core.YVRQualityManager::Wait2FramesBeforeInitializing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YVRQualityManager_Wait2FramesBeforeInitializing_m72068FB385E3F32A06837949C6DD567109447A0E (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_m0F1D9979392C140D248C6C3736F882A5A5C860E4 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void SystemExtension::SafeInvoke(System.MulticastDelegate,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemExtension_SafeInvoke_m1D9CCDDB53AE1A82C5B6602DF8AAEE7B478F9014 (MulticastDelegate_t* ___0_action, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWait2FramesBeforeInitializingU3Ed__30__ctor_m37F81847BC3F2124818D0A0CE635A92A0D1306FD (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRTrackingStateManager::ApplyIPDSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_ApplyIPDSetting_mC1439ED9B8576F98FA4FB2595B3896E0297E2C58 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) ;
// System.Void YVR.Core.YVRTrackingStateManager::ApplyTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_ApplyTrackingSpace_m068AB1553674A05FDA140D9921DCB36DCFB0BBD8 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) ;
// YVR.Core.XR.YVRXRSettings YVR.Core.XR.YVRXRSettings::get_xrSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* YVRXRSettings_get_xrSettings_m4C244907C5D3C0AE0DEA4DFF21F5B971309BDACB_inline (const RuntimeMethod* method) ;
// T Singleton`1<YVR.Core.YVREventTracking>::get_instance()
inline YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* Singleton_1_get_instance_m63A68DA2B06D42C288DBA6A9ACFEFF84FBFF90AC (const RuntimeMethod* method)
{
	return ((  YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* (*) (const RuntimeMethod*))Singleton_1_get_instance_mFCB3AF745BEA4CADE810EACDA777DF5A788D4BB5_gshared)(method);
}
// System.Void YVR.Core.YVREventTracking::UploadSDKInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventTracking_UploadSDKInfo_m3128DDA36C37B57D1F48BE2E650033923AB55F11 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, const RuntimeMethod* method) ;
// System.UInt16 YVR.Core.XR.YVRXRSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t YVRXRSettings_GetStereoRenderingMode_m7FD8905F6F8CBD1324CA83D3CBEAECE2C83FD336 (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* __this, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// System.Void YVR.Core.XR.YVRXRLoader::YVRSetXRUserDefinedSettings(YVR.Core.XR.YVRXRUserDefinedSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRXRLoader_YVRSetXRUserDefinedSettings_m69F2EED266CE8DDF28351C0AD4B1251775613FA2 (YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8* ___0_userDefinedSettings, const RuntimeMethod* method) ;
// System.Int32 YVR.Core.XR.YVRXRLoader::YVRSetDevelopmentBuildMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRXRLoader_YVRSetDevelopmentBuildMode_m682F2001B144819EDDE750994BD54D241C7CCF5C (bool ___0_isDevelopmentBuild, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared)(__this, method);
}
// System.Boolean YVR.Core.XR.YVRXRLoader::CheckADB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRXRLoader_CheckADB_m751BF2EC08EB9A47E970D0E8844D5C390603386C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773 (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void YVR.Core.XR.YVRXRSettings::set_xrSettings(YVR.Core.XR.YVRXRSettings)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YVRXRSettings_set_xrSettings_m93FD19924C6A422E6F0B3E63A5554EEC57CA140A_inline (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<YVR.Core.XR.YVRPlatformSetting>(System.String)
inline YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* Resources_Load_TisYVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_m4E5906549BA58BDC809A615856218B10C4CABDC4 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yvrplugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL YVRSetXRUserDefinedSettings(YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yvrplugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CheckADB();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yvrplugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL YVRSetDevelopmentBuildMode(int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AndroidJavaObject YVR.Core.YVREventTracking::get_CurrentActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* YVREventTracking_get_CurrentActivity_m070073656C31353B4327D143A82EBD3A8CA56401 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_UnityPlayerClass == null)
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___m_UnityPlayerClass_2;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// m_UnityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		__this->___m_UnityPlayerClass_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityPlayerClass_2), (void*)L_1);
	}

IL_0018:
	{
		// if (m_CurrentActivity == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___m_CurrentActivity_3;
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_CurrentActivity = m_UnityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = __this->___m_UnityPlayerClass_2;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___m_CurrentActivity_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentActivity_3), (void*)L_4);
	}

IL_0036:
	{
		// return m_CurrentActivity;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = __this->___m_CurrentActivity_3;
		return L_5;
	}
}
// UnityEngine.AndroidJavaClass YVR.Core.YVREventTracking::get_NativeCoreSdkClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* YVREventTracking_get_NativeCoreSdkClass_m6AA56E136B970C713B835CB9C98DF7B22955681C (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41FA7AE749C66AC53DBE252C9C7C726D58E52BBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_NativeCoreSdkClass == null)
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___m_NativeCoreSdkClass_4;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// m_NativeCoreSdkClass = new AndroidJavaClass("com.yvr.nativecoresdk.SdkUtils");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral41FA7AE749C66AC53DBE252C9C7C726D58E52BBD, NULL);
		__this->___m_NativeCoreSdkClass_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NativeCoreSdkClass_4), (void*)L_1);
	}

IL_0018:
	{
		// return m_NativeCoreSdkClass;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = __this->___m_NativeCoreSdkClass_4;
		return L_2;
	}
}
// System.Void YVR.Core.YVREventTracking::UploadSDKInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventTracking_UploadSDKInfo_m3128DDA36C37B57D1F48BE2E650033923AB55F11 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F638A381D742509E4F4D612C134517FDA5E0B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DCA854352C8194AE7D749EE4B5B6157A273460);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D9AE4C4FF623BBDB168A484349EE6AEF4BB1D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (YVRPlatformSetting.Instance != null)
		YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* L_0;
		L_0 = YVRPlatformSetting_get_Instance_mDD4F5A4CF57ED8ACD90762DA57C80221CE54F848(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// long.TryParse(YVRPlatformSetting.Instance.appID, out m_AppId);
		YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* L_2;
		L_2 = YVRPlatformSetting_get_Instance_mDD4F5A4CF57ED8ACD90762DA57C80221CE54F848(NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___appID_4;
		int64_t* L_4 = (&__this->___m_AppId_7);
		bool L_5;
		L_5 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_3, L_4, NULL);
	}

IL_0023:
	{
		// SetSDKInfo("com.yvr.core");
		YVREventTracking_SetSDKInfo_mA32E9A6EAFFA97EF6CDC9B597C1AD348680C2839(__this, _stringLiteral61DCA854352C8194AE7D749EE4B5B6157A273460, NULL);
		// SetSDKInfo("com.yvr.utilities");
		YVREventTracking_SetSDKInfo_mA32E9A6EAFFA97EF6CDC9B597C1AD348680C2839(__this, _stringLiteral4F638A381D742509E4F4D612C134517FDA5E0B7D, NULL);
		// SetSDKInfo("com.yvr.platform");
		YVREventTracking_SetSDKInfo_mA32E9A6EAFFA97EF6CDC9B597C1AD348680C2839(__this, _stringLiteral82D9AE4C4FF623BBDB168A484349EE6AEF4BB1D2, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVREventTracking::InitSdk(System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventTracking_InitSdk_m64F8BA76E465B5E8A697C0D61B7473F3B2F58FC0 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, String_t* ___0_sdkType, String_t* ___1_sdkVersion, int64_t ___2_appId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC35896225DE582DB22BE9F25389EB33C0F016831);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string engine = "unity";
		V_0 = _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
		// NativeCoreSdkClass.CallStatic("initSdk", CurrentActivity, engine, sdkType, sdkVersion, appId);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = YVREventTracking_get_NativeCoreSdkClass_m6AA56E136B970C713B835CB9C98DF7B22955681C(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = YVREventTracking_get_CurrentActivity_m070073656C31353B4327D143A82EBD3A8CA56401(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___0_sdkType;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___1_sdkVersion;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		int64_t L_11 = ___2_appId;
		int64_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_13);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC35896225DE582DB22BE9F25389EB33C0F016831, L_10, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVREventTracking::SetSDKInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventTracking_SetSDKInfo_mA32E9A6EAFFA97EF6CDC9B597C1AD348680C2839 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, String_t* ___0_m_SdkType, const RuntimeMethod* method) 
{
	{
		// bool result = PackageVersion.TryGetPackageVersion(m_SdkType, out m_SdkVersion);
		String_t* L_0 = ___0_m_SdkType;
		String_t** L_1 = (&__this->___m_SdkVersion_5);
		bool L_2;
		L_2 = PackageVersion_TryGetPackageVersion_m61A509A23E10B7E6177B5CB692F5478D91EBA6B1(L_0, L_1, NULL);
		// if (result) InitSdk(m_SdkType, m_SdkVersion, m_AppId);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (result) InitSdk(m_SdkType, m_SdkVersion, m_AppId);
		String_t* L_3 = ___0_m_SdkType;
		String_t* L_4 = __this->___m_SdkVersion_5;
		int64_t L_5 = __this->___m_AppId_7;
		YVREventTracking_InitSdk_m64F8BA76E465B5E8A697C0D61B7473F3B2F58FC0(__this, L_3, L_4, L_5, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void YVR.Core.YVREventTracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVREventTracking__ctor_m7C700C359A41BE8F196C9AABDF2F7309144B1177 (YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m0F90F3F3E8D93FC3970B027AC1B854447D91B42D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m0F90F3F3E8D93FC3970B027AC1B854447D91B42D(__this, Singleton_1__ctor_m0F90F3F3E8D93FC3970B027AC1B854447D91B42D_RuntimeMethod_var);
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
// System.Single YVR.Core.YVRHMDManager::get_batteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRHMDManager_get_batteryLevel_mA78C4E60A4426193CCCE80467B0D88CAA5DFFEDA (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) 
{
	{
		// public float batteryLevel { get { return YVRPlugin.Instance.GetBatteryLevel(); } }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(15 /* System.Single YVR.Core.YVRPlugin::GetBatteryLevel() */, L_0);
		return L_1;
	}
}
// System.Single YVR.Core.YVRHMDManager::get_batteryTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRHMDManager_get_batteryTemperature_m2A435CDE9714E561D80ED909F384123AE1A53095 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) 
{
	{
		// public float batteryTemperature { get { return YVRPlugin.Instance.GetBatteryTemperature(); } }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single YVR.Core.YVRPlugin::GetBatteryTemperature() */, L_0);
		return L_1;
	}
}
// System.Int32 YVR.Core.YVRHMDManager::get_batteryStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRHMDManager_get_batteryStatus_mB1D2A2FA73C50D51FC203D893DC5DB6C1A83D1BC (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) 
{
	{
		// public int batteryStatus { get { return YVRPlugin.Instance.GetBatteryStatus(); } }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 YVR.Core.YVRPlugin::GetBatteryStatus() */, L_0);
		return L_1;
	}
}
// System.Single YVR.Core.YVRHMDManager::get_volumeLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRHMDManager_get_volumeLevel_mABE514674D05E6EF4DE74317D26D00F1A4EB1396 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) 
{
	{
		// public float volumeLevel { get { return YVRPlugin.Instance.GetVolumeLevel(); } }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single YVR.Core.YVRPlugin::GetVolumeLevel() */, L_0);
		return L_1;
	}
}
// System.Boolean YVR.Core.YVRHMDManager::get_isPowerSavingActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRHMDManager_get_isPowerSavingActive_mE19CCD0CA1B0B64E9C5E3D8A2D2902F1D8760A10 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) 
{
	{
		// public bool isPowerSavingActive { get { return YVRPlugin.Instance.IsPowerSavingActive(); } }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean YVR.Core.YVRPlugin::IsPowerSavingActive() */, L_0);
		return L_1;
	}
}
// System.Boolean YVR.Core.YVRHMDManager::get_isUserPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRHMDManager_get_isUserPresent_m242E0FE2B32731A88100B0EDD5AE813BA4DC0D35 (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) 
{
	{
		// public bool isUserPresent { get { return YVRPlugin.Instance.IsUserPresent(); } }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(25 /* System.Boolean YVR.Core.YVRPlugin::IsUserPresent() */, L_0);
		return L_1;
	}
}
// System.Void YVR.Core.YVRHMDManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRHMDManager__ctor_mBBA1C15B9F1B2496541CFFEA8EB93B850A59707B (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// YVR.Core.YVRControllerRig YVR.Core.YVRManager::get_controllerRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* YVRManager_get_controllerRig_mB05E5B8AF5A78C90E56723C4DF0535C5B8582906 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public YVRControllerRig controllerRig { get; private set; }
		YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* L_0 = __this->___U3CcontrollerRigU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void YVR.Core.YVRManager::set_controllerRig(YVR.Core.YVRControllerRig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_controllerRig_mFACEC7F869B04667C6450329B67B8632FE0AA510 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public YVRControllerRig controllerRig { get; private set; }
		YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* L_0 = ___0_value;
		__this->___U3CcontrollerRigU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontrollerRigU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// YVR.Core.YVRCameraRig YVR.Core.YVRManager::get_cameraRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* YVRManager_get_cameraRig_m45D371A137B59F90D8FCE0D721F088EAB1C1F3CB (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public YVRCameraRig cameraRig { get; private set; }
		YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* L_0 = __this->___U3CcameraRigU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void YVR.Core.YVRManager::set_cameraRig(YVR.Core.YVRCameraRig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_cameraRig_m03EB6E0ADBDA1B462C7A6A5EEB7F909ACF456FEA (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* ___0_value, const RuntimeMethod* method) 
{
	{
		// public YVRCameraRig cameraRig { get; private set; }
		YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* L_0 = ___0_value;
		__this->___U3CcameraRigU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcameraRigU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 YVR.Core.YVRManager::get_headPoseRelativeOffsetTranslation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 YVRManager_get_headPoseRelativeOffsetTranslation_m7D49451A011FFE8E7598873877D11AFB3128B852 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 headPoseRelativeOffsetTranslation { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CheadPoseRelativeOffsetTranslationU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void YVR.Core.YVRManager::set_headPoseRelativeOffsetTranslation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_headPoseRelativeOffsetTranslation_mD41D016EFB146FC8F6AA40F8C316CA6C60CD0E4B (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 headPoseRelativeOffsetTranslation { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CheadPoseRelativeOffsetTranslationU3Ek__BackingField_16 = L_0;
		return;
	}
}
// UnityEngine.Vector3 YVR.Core.YVRManager::get_headPoseRelativeOffsetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 YVRManager_get_headPoseRelativeOffsetRotation_mF4CBC036802329E1B80B558420B11A3BBB0F0F1C (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 headPoseRelativeOffsetRotation { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CheadPoseRelativeOffsetRotationU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void YVR.Core.YVRManager::set_headPoseRelativeOffsetRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_headPoseRelativeOffsetRotation_m09DDEBBA8163EC4F6FE413D7823ECC00B03AB2CE (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 headPoseRelativeOffsetRotation { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CheadPoseRelativeOffsetRotationU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Int32 YVR.Core.YVRManager::get_cpuLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRManager_get_cpuLevel_m0CF8985211EC4E64B1A06D22692E6CB664CF90BB (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// get { return performanceManager.cpuLevel; }
		YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* L_0 = __this->___performanceManager_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = YVRPerformanceManager_get_cpuLevel_m2FF632E3E3C44451EC13EAA898577E71CAA9EABF(L_0, NULL);
		return L_1;
	}
}
// System.Void YVR.Core.YVRManager::set_cpuLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_cpuLevel_m2B62D74F30C9C63D57E8A8DBBB125ED84216E70A (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { performanceManager.cpuLevel = value; }
		YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* L_0 = __this->___performanceManager_13;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		YVRPerformanceManager_set_cpuLevel_m95A1C4A1D71EE81E78C72D2A8D1C5836DB78E721(L_0, L_1, NULL);
		// set { performanceManager.cpuLevel = value; }
		return;
	}
}
// System.Int32 YVR.Core.YVRManager::get_gpuLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRManager_get_gpuLevel_mA6EA904AD06C289A3E58A15650A91E0E8043F136 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// get { return performanceManager.gpuLevel; }
		YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* L_0 = __this->___performanceManager_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = YVRPerformanceManager_get_gpuLevel_m3C49E663510DB3AA154D555D79706D74DE57F4E1(L_0, NULL);
		return L_1;
	}
}
// System.Void YVR.Core.YVRManager::set_gpuLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_gpuLevel_mF36FE742A73C885819D0D07FBF6BB5B46B743296 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { performanceManager.gpuLevel = value; }
		YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* L_0 = __this->___performanceManager_13;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		YVRPerformanceManager_set_gpuLevel_m754E003063E0B6C87F9F18960D2BE49C28DD0561(L_0, L_1, NULL);
		// set { performanceManager.gpuLevel = value; }
		return;
	}
}
// YVR.Core.YVRQualityManager/VSyncCount YVR.Core.YVRManager::get_vSyncCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRManager_get_vSyncCount_mB1538692AB676C1FAD45F3DCCA32AB11D1EC68D1 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// get { return qualityManager.vSyncCount; }
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_0 = __this->___qualityManager_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = YVRQualityManager_get_vSyncCount_m73B6171EBF3B7018ED0FF276ED4C7273B547241B_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void YVR.Core.YVRManager::set_vSyncCount(YVR.Core.YVRQualityManager/VSyncCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_vSyncCount_mDD9171F08F85BBEC5327AF93172A9F428728A32B (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { qualityManager.vSyncCount = value; }
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_0 = __this->___qualityManager_11;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		YVRQualityManager_set_vSyncCount_m1FEE034D3A4254E26F6B88DC774AA06F8F281472(L_0, L_1, NULL);
		// set { qualityManager.vSyncCount = value; }
		return;
	}
}
// YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel YVR.Core.YVRManager::get_fixedFoveatedRenderingLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRManager_get_fixedFoveatedRenderingLevel_mBD431B0F84E2A91877AF191FC384A63D4CD5C90E (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// get { return qualityManager.fixedFoveatedRenderingLevel; }
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_0 = __this->___qualityManager_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = YVRQualityManager_get_fixedFoveatedRenderingLevel_m4C4DEC8E5577B6D078D1AE5FA1225741ABC90909_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void YVR.Core.YVRManager::set_fixedFoveatedRenderingLevel(YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_fixedFoveatedRenderingLevel_mA4E507C5838044DF85CE29A8E677744A0324967C (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { qualityManager.fixedFoveatedRenderingLevel = value; }
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_0 = __this->___qualityManager_11;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		YVRQualityManager_set_fixedFoveatedRenderingLevel_mBE133D0FF78CA6707956BE1BAA8C75784D3749E2(L_0, L_1, NULL);
		// set { qualityManager.fixedFoveatedRenderingLevel = value; }
		return;
	}
}
// System.Boolean YVR.Core.YVRManager::get_FixedFoveationRenderingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRManager_get_FixedFoveationRenderingEnabled_m6118C1D111CD7CD31523E4ADBC867251BDECB75A (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public bool FixedFoveationRenderingEnabled => fixedFoveatedRenderingLevel != YVRQualityManager.FixedFoveatedRenderingLevel.Off;
		int32_t L_0;
		L_0 = YVRManager_get_fixedFoveatedRenderingLevel_mBD431B0F84E2A91877AF191FC384A63D4CD5C90E(__this, NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean YVR.Core.YVRManager::get_useRecommendedMSAALevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRManager_get_useRecommendedMSAALevel_m4DE74D6450454DC878B27606B0DBB1EB1B2E145E (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public bool useRecommendedMSAALevel => qualityManager.useRecommendedMSAALevel;
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_0 = __this->___qualityManager_11;
		NullCheck(L_0);
		bool L_1 = L_0->___useRecommendedMSAALevel_6;
		return L_1;
	}
}
// System.Boolean YVR.Core.YVRManager::get_useIPDInPositionTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRManager_get_useIPDInPositionTracking_mF2ABCA5B27CAA4B30297B6FDF0F13BA425195B6D (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// get { return trackingManager.useIPDInPositionTracking; }
		YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* L_0 = __this->___trackingManager_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = YVRTrackingStateManager_get_useIPDInPositionTracking_m3AE2069FF14907DABBAF00B9C11CFB91311F1D6E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void YVR.Core.YVRManager::set_useIPDInPositionTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_useIPDInPositionTracking_m6BD134C2D377DCD4FF08BEBE46807C3679DBC2AF (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { trackingManager.useIPDInPositionTracking = value; }
		YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* L_0 = __this->___trackingManager_12;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		YVRTrackingStateManager_set_useIPDInPositionTracking_m690CB1322FC9C86BD1874840B7B8500EE32A01B1(L_0, L_1, NULL);
		// set { trackingManager.useIPDInPositionTracking = value; }
		return;
	}
}
// YVR.Core.YVRTrackingStateManager/TrackingSpace YVR.Core.YVRManager::get_trackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRManager_get_trackingSpace_m1C1E1F4426614E7003591207D398D508097D5E23 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// get { return trackingManager.trackingSpace; }
		YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* L_0 = __this->___trackingManager_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = YVRTrackingStateManager_get_trackingSpace_m76CBB1BE9E22491D43BDDDB7EAE04147737F67C5_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void YVR.Core.YVRManager::set_trackingSpace(YVR.Core.YVRTrackingStateManager/TrackingSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_set_trackingSpace_mF9582CFF003FBF5E7E80381505ACC7A36D0812F6 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { trackingManager.trackingSpace = value; }
		YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* L_0 = __this->___trackingManager_12;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		YVRTrackingStateManager_set_trackingSpace_m8C529F04F0840AE08A5CAE5D40C0D408129BC6B0(L_0, L_1, NULL);
		// set { trackingManager.trackingSpace = value; }
		return;
	}
}
// System.Single YVR.Core.YVRManager::get_batteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRManager_get_batteryLevel_m35BD9433F12F9B91294F443073D912E6E329B684 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public float batteryLevel => hmdManager.batteryLevel;
		YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* L_0 = __this->___hmdManager_14;
		NullCheck(L_0);
		float L_1;
		L_1 = YVRHMDManager_get_batteryLevel_mA78C4E60A4426193CCCE80467B0D88CAA5DFFEDA(L_0, NULL);
		return L_1;
	}
}
// System.Single YVR.Core.YVRManager::get_batteryTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRManager_get_batteryTemperature_mED8F035617F3169F99DFBDEA3E70453CF1541AF7 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public float batteryTemperature => hmdManager.batteryTemperature;
		YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* L_0 = __this->___hmdManager_14;
		NullCheck(L_0);
		float L_1;
		L_1 = YVRHMDManager_get_batteryTemperature_m2A435CDE9714E561D80ED909F384123AE1A53095(L_0, NULL);
		return L_1;
	}
}
// System.Int32 YVR.Core.YVRManager::get_batteryStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRManager_get_batteryStatus_mF12DE5F45A0248F822065B62A19CD1A5A97B75EE (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public int batteryStatus => hmdManager.batteryStatus;
		YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* L_0 = __this->___hmdManager_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = YVRHMDManager_get_batteryStatus_mB1D2A2FA73C50D51FC203D893DC5DB6C1A83D1BC(L_0, NULL);
		return L_1;
	}
}
// System.Single YVR.Core.YVRManager::get_volumeLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRManager_get_volumeLevel_m044146BE6C1ADE37605D7A8CE333038F9ABA9238 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public float volumeLevel => hmdManager.volumeLevel;
		YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* L_0 = __this->___hmdManager_14;
		NullCheck(L_0);
		float L_1;
		L_1 = YVRHMDManager_get_volumeLevel_mABE514674D05E6EF4DE74317D26D00F1A4EB1396(L_0, NULL);
		return L_1;
	}
}
// System.Boolean YVR.Core.YVRManager::get_isPowerSavingActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRManager_get_isPowerSavingActive_m6F90AD22C661D35BD57A2EF2EE72EDAA78468220 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public bool isPowerSavingActive => hmdManager.isPowerSavingActive;
		YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* L_0 = __this->___hmdManager_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = YVRHMDManager_get_isPowerSavingActive_mE19CCD0CA1B0B64E9C5E3D8A2D2902F1D8760A10(L_0, NULL);
		return L_1;
	}
}
// System.Boolean YVR.Core.YVRManager::get_isUserPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRManager_get_isUserPresent_m3DE755D6A56270169C1C67E5B0B596736A2A0375 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public bool isUserPresent => hmdManager.isUserPresent;
		YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* L_0 = __this->___hmdManager_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = YVRHMDManager_get_isUserPresent_m242E0FE2B32731A88100B0EDD5AE813BA4DC0D35(L_0, NULL);
		return L_1;
	}
}
// System.Single YVR.Core.YVRManager::get_gpuUtilLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRManager_get_gpuUtilLevel_m5AAE35BCBE6FD8C9FE7AD39E5371F7A1224C507A (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public float gpuUtilLevel => performanceManager.gpuUtilLevel;
		YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* L_0 = __this->___performanceManager_13;
		NullCheck(L_0);
		float L_1;
		L_1 = YVRPerformanceManager_get_gpuUtilLevel_m2E22381C700AC3D3B5FF8DAC798445A7D77193A1(L_0, NULL);
		return L_1;
	}
}
// System.Single YVR.Core.YVRManager::get_cpuUtilLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRManager_get_cpuUtilLevel_m54119D7836C1C875B16D1E9AF02153D62584346F (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public float cpuUtilLevel => performanceManager.cpuUtilLevel;
		YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* L_0 = __this->___performanceManager_13;
		NullCheck(L_0);
		float L_1;
		L_1 = YVRPerformanceManager_get_cpuUtilLevel_mD108071FF56978054C4E8A8CE6C5911BBBFB781E(L_0, NULL);
		return L_1;
	}
}
// System.Void YVR.Core.YVRManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_Init_m3317329E7EF08FEF1DE90EB34112E6C521E4FE18 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtension_AutoAddingGetComponent_TisYVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731_m7DF863EBA2E1B7BECD5C5029FA45AECF25BB0994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtension_AutoAddingGetComponent_TisYVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A_mA72AAE6CB3A242FD7E6C5FC0E32F3111DA6563F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviorSingleton_1_Init_mFBD41DA0ACB3D143F1257E0BF36FA03356EE77E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackageVersion_tC27FBEEDD231C50763C8062780DAF30CEF7E618D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Init();
		MonoBehaviorSingleton_1_Init_mFBD41DA0ACB3D143F1257E0BF36FA03356EE77E2(__this, MonoBehaviorSingleton_1_Init_mFBD41DA0ACB3D143F1257E0BF36FA03356EE77E2_RuntimeMethod_var);
		// cameraRig = this.AutoAddingGetComponent<YVRCameraRig>();
		YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* L_0;
		L_0 = ComponentExtension_AutoAddingGetComponent_TisYVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731_m7DF863EBA2E1B7BECD5C5029FA45AECF25BB0994(__this, ComponentExtension_AutoAddingGetComponent_TisYVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731_m7DF863EBA2E1B7BECD5C5029FA45AECF25BB0994_RuntimeMethod_var);
		YVRManager_set_cameraRig_m03EB6E0ADBDA1B462C7A6A5EEB7F909ACF456FEA_inline(__this, L_0, NULL);
		// controllerRig = this.AutoAddingGetComponent<YVRControllerRig>();
		YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* L_1;
		L_1 = ComponentExtension_AutoAddingGetComponent_TisYVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A_mA72AAE6CB3A242FD7E6C5FC0E32F3111DA6563F3(__this, ComponentExtension_AutoAddingGetComponent_TisYVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A_mA72AAE6CB3A242FD7E6C5FC0E32F3111DA6563F3_RuntimeMethod_var);
		YVRManager_set_controllerRig_mFACEC7F869B04667C6450329B67B8632FE0AA510_inline(__this, L_1, NULL);
		// trackingManager.Initialize();
		YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* L_2 = __this->___trackingManager_12;
		NullCheck(L_2);
		YVRTrackingStateManager_Initialize_m90C32765620C7ABDE6FDFE208FBD1607C4F64DBD(L_2, NULL);
		// qualityManager.Initialize();
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_3 = __this->___qualityManager_11;
		NullCheck(L_3);
		YVRQualityManager_Initialize_m7ECEA15580805D83139CC40ABBEF7CB1838B666D(L_3, NULL);
		// cameraRig.Initialize(this);
		YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* L_4;
		L_4 = YVRManager_get_cameraRig_m45D371A137B59F90D8FCE0D721F088EAB1C1F3CB_inline(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* >::Invoke(4 /* System.Void YVR.Core.YVRBaseRig::Initialize(YVR.Core.YVRManager) */, L_4, __this);
		// controllerRig.Initialize(this);
		YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* L_5;
		L_5 = YVRManager_get_controllerRig_mB05E5B8AF5A78C90E56723C4DF0535C5B8582906_inline(__this, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* >::Invoke(4 /* System.Void YVR.Core.YVRBaseRig::Initialize(YVR.Core.YVRManager) */, L_5, __this);
		// cameraRenderer.Initialize(this);
		YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D* L_6 = __this->___cameraRenderer_9;
		NullCheck(L_6);
		YVRCameraRenderer_Initialize_mBEC094B6A52D3F67AB32A9B4388BA92B5136AAED(L_6, __this, NULL);
		// eventsManager.Initialize();
		YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19* L_7 = __this->___eventsManager_15;
		NullCheck(L_7);
		YVREventsManager_Initialize_m52F45CCE03357BBC8F6550A9CC898F483626E878(L_7, NULL);
		// if (useRecommendedMSAALevel) QualitySettings.antiAliasing = qualityManager.recommendAntiAlisingLevel;
		bool L_8;
		L_8 = YVRManager_get_useRecommendedMSAALevel_m4DE74D6450454DC878B27606B0DBB1EB1B2E145E(__this, NULL);
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		// if (useRecommendedMSAALevel) QualitySettings.antiAliasing = qualityManager.recommendAntiAlisingLevel;
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_9 = __this->___qualityManager_11;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = YVRQualityManager_get_recommendAntiAlisingLevel_m59178A4F5C1F2481C952C73AFA64447BEA8352FA(L_9, NULL);
		QualitySettings_set_antiAliasing_mBC4220AF5820137CFEBB38155D4CCD12822E2C7E(L_10, NULL);
	}

IL_007b:
	{
		// PackageVersion.PrintPackagesVersion(typeof(YVRManager));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = PackageVersion_PrintPackagesVersion_m30C9732826E35FE7CB7C379E75227B4A4770EAB3(L_12, NULL);
		// PackageVersion.PrintPackagesVersion(typeof(PackageVersion));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (PackageVersion_tC27FBEEDD231C50763C8062780DAF30CEF7E618D_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = PackageVersion_PrintPackagesVersion_m30C9732826E35FE7CB7C379E75227B4A4770EAB3(L_15, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager_Update_m689F55726F9EB42E937928A1D0ADF02BABDFA188 (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRInput_t8B7533D19BCB8B71D2E7E393F32D043F9B73C554_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YVRInput.Update();
		il2cpp_codegen_runtime_class_init_inline(YVRInput_t8B7533D19BCB8B71D2E7E393F32D043F9B73C554_il2cpp_TypeInfo_var);
		YVRInput_Update_m5E47669B79FFF242A45CAB42E46457D7B1D03F0B(NULL);
		// eventsManager.Update();
		YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19* L_0 = __this->___eventsManager_15;
		NullCheck(L_0);
		YVREventsManager_Update_m0412938882446CD84AD5FD41A95DE723AC3B4FAD(L_0, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRManager__ctor_m109BD1F7C6EA35CE5E063790FABBFAC279A3F8BB (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviorSingleton_1__ctor_mFEB5719C7EBFA713A198C8428277632FF495BD0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public YVRCameraRenderer cameraRenderer = new YVRCameraRenderer();
		YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D* L_0 = (YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D*)il2cpp_codegen_object_new(YVRCameraRenderer_t13B551DB806B3D8E135C3B198FF1735DF9AC405D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		YVRCameraRenderer__ctor_mB9AAC23FC64E4B26876853342F879147E7D2353F(L_0, NULL);
		__this->___cameraRenderer_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraRenderer_9), (void*)L_0);
		// public YVRBoundary boundary = new YVRBoundary();
		YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8* L_1 = (YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8*)il2cpp_codegen_object_new(YVRBoundary_t6AF0BB921044ABD0D03EE815D23B64FCC79260D8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		YVRBoundary__ctor_mB171D9769437F81057DEFCDE8DE45FBE46722DC0(L_1, NULL);
		__this->___boundary_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boundary_10), (void*)L_1);
		// public YVRQualityManager qualityManager = new YVRQualityManager();
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_2 = (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0*)il2cpp_codegen_object_new(YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		YVRQualityManager__ctor_m7C40B1CF110836F1EF8E688DF2A071B69BC432D6(L_2, NULL);
		__this->___qualityManager_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qualityManager_11), (void*)L_2);
		// public YVRTrackingStateManager trackingManager = new YVRTrackingStateManager();
		YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* L_3 = (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970*)il2cpp_codegen_object_new(YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		YVRTrackingStateManager__ctor_m784E2FC4D2C4571ABDC11C80C5237FB0FD8B4625(L_3, NULL);
		__this->___trackingManager_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackingManager_12), (void*)L_3);
		// public YVRPerformanceManager performanceManager = new YVRPerformanceManager();
		YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* L_4 = (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4*)il2cpp_codegen_object_new(YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		YVRPerformanceManager__ctor_m73FC9D40C3539198715B3C1A1AF297CD914691C9(L_4, NULL);
		__this->___performanceManager_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___performanceManager_13), (void*)L_4);
		// public YVRHMDManager hmdManager = new YVRHMDManager();
		YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1* L_5 = (YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1*)il2cpp_codegen_object_new(YVRHMDManager_t30881D6709D05C6B5B4D3874F4475BB533F220D1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		YVRHMDManager__ctor_mBBA1C15B9F1B2496541CFFEA8EB93B850A59707B(L_5, NULL);
		__this->___hmdManager_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmdManager_14), (void*)L_5);
		// public YVREventsManager eventsManager = new YVREventsManager();
		YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19* L_6 = (YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19*)il2cpp_codegen_object_new(YVREventsManager_t61EAC8DD0799ADAD506E84CC3E275A886DD5CC19_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		YVREventsManager__ctor_m53DAF9BFB1AE1DB04AB9D4B9F8738E7BB4D6A9F4(L_6, NULL);
		__this->___eventsManager_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventsManager_15), (void*)L_6);
		il2cpp_codegen_runtime_class_init_inline(MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0_il2cpp_TypeInfo_var);
		MonoBehaviorSingleton_1__ctor_mFEB5719C7EBFA713A198C8428277632FF495BD0F(__this, MonoBehaviorSingleton_1__ctor_mFEB5719C7EBFA713A198C8428277632FF495BD0F_RuntimeMethod_var);
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
// System.Int32 YVR.Core.YVRPerformanceManager::get_cpuLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRPerformanceManager_get_cpuLevel_m2FF632E3E3C44451EC13EAA898577E71CAA9EABF (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) 
{
	{
		// get { return YVRPlugin.Instance.GetCPULevel(); }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 YVR.Core.YVRPlugin::GetCPULevel() */, L_0);
		return L_1;
	}
}
// System.Void YVR.Core.YVRPerformanceManager::set_cpuLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRPerformanceManager_set_cpuLevel_m95A1C4A1D71EE81E78C72D2A8D1C5836DB78E721 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// YVRPlugin.Instance.SetPerformanceLevel(value, gpuLevel);
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		int32_t L_1 = ___0_value;
		int32_t L_2;
		L_2 = YVRPerformanceManager_get_gpuLevel_m3C49E663510DB3AA154D555D79706D74DE57F4E1(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(24 /* System.Void YVR.Core.YVRPlugin::SetPerformanceLevel(System.Int32,System.Int32) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Int32 YVR.Core.YVRPerformanceManager::get_gpuLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRPerformanceManager_get_gpuLevel_m3C49E663510DB3AA154D555D79706D74DE57F4E1 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) 
{
	{
		// get { return YVRPlugin.Instance.GetGPULevel(); }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 YVR.Core.YVRPlugin::GetGPULevel() */, L_0);
		return L_1;
	}
}
// System.Void YVR.Core.YVRPerformanceManager::set_gpuLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRPerformanceManager_set_gpuLevel_m754E003063E0B6C87F9F18960D2BE49C28DD0561 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// YVRPlugin.Instance.SetPerformanceLevel(cpuLevel, value);
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		int32_t L_1;
		L_1 = YVRPerformanceManager_get_cpuLevel_m2FF632E3E3C44451EC13EAA898577E71CAA9EABF(__this, NULL);
		int32_t L_2 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(24 /* System.Void YVR.Core.YVRPlugin::SetPerformanceLevel(System.Int32,System.Int32) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Single YVR.Core.YVRPerformanceManager::get_gpuUtilLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRPerformanceManager_get_gpuUtilLevel_m2E22381C700AC3D3B5FF8DAC798445A7D77193A1 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) 
{
	{
		// get { return YVRPlugin.Instance.GetGPUUtilLevel(); }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single YVR.Core.YVRPlugin::GetGPUUtilLevel() */, L_0);
		return L_1;
	}
}
// System.Single YVR.Core.YVRPerformanceManager::get_cpuUtilLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YVRPerformanceManager_get_cpuUtilLevel_mD108071FF56978054C4E8A8CE6C5911BBBFB781E (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) 
{
	{
		// get { return YVRPlugin.Instance.GetCPUUtilLevel(); }
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(21 /* System.Single YVR.Core.YVRPlugin::GetCPUUtilLevel() */, L_0);
		return L_1;
	}
}
// System.Void YVR.Core.YVRPerformanceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRPerformanceManager__ctor_m73FC9D40C3539198715B3C1A1AF297CD914691C9 (YVRPerformanceManager_t22ED73E5D82F45B730FE8CE0497F48ED076C14F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YVR.Core.YVRQualityManager::add_onVSyncCountChanged(System.Action`1<YVR.Core.YVRQualityManager/VSyncCount>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_add_onVSyncCountChanged_m785838AB7998E8BE10B282A68510E9B997AB7605 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t758956A0B34DB519E03A9C540833CD526A79C251_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* V_0 = NULL;
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* V_1 = NULL;
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* V_2 = NULL;
	{
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_0 = __this->___onVSyncCountChanged_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_1 = V_0;
		V_1 = L_1;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_2 = V_1;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*)Castclass((RuntimeObject*)L_4, Action_1_t758956A0B34DB519E03A9C540833CD526A79C251_il2cpp_TypeInfo_var));
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251** L_5 = (&__this->___onVSyncCountChanged_3);
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_6 = V_2;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_7 = V_1;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_9 = V_0;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*)L_9) == ((RuntimeObject*)(Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::remove_onVSyncCountChanged(System.Action`1<YVR.Core.YVRQualityManager/VSyncCount>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_remove_onVSyncCountChanged_mDCC796FE6D20EB491B0E8BE89FB8822BEA9DB8BE (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t758956A0B34DB519E03A9C540833CD526A79C251_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* V_0 = NULL;
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* V_1 = NULL;
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* V_2 = NULL;
	{
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_0 = __this->___onVSyncCountChanged_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_1 = V_0;
		V_1 = L_1;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_2 = V_1;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*)Castclass((RuntimeObject*)L_4, Action_1_t758956A0B34DB519E03A9C540833CD526A79C251_il2cpp_TypeInfo_var));
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251** L_5 = (&__this->___onVSyncCountChanged_3);
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_6 = V_2;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_7 = V_1;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_9 = V_0;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*)L_9) == ((RuntimeObject*)(Action_1_t758956A0B34DB519E03A9C540833CD526A79C251*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::add_onFFRLevelChanged(System.Action`1<YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_add_onFFRLevelChanged_m614A6A723DB8AC5FE74EF700E3F9471EE4FA2876 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* V_0 = NULL;
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* V_1 = NULL;
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* V_2 = NULL;
	{
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_0 = __this->___onFFRLevelChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_2 = V_1;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*)Castclass((RuntimeObject*)L_4, Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C_il2cpp_TypeInfo_var));
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C** L_5 = (&__this->___onFFRLevelChanged_4);
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_6 = V_2;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_7 = V_1;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_9 = V_0;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*)L_9) == ((RuntimeObject*)(Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::remove_onFFRLevelChanged(System.Action`1<YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_remove_onFFRLevelChanged_m79509ADB829847B2C0103016D53633836F6C99D7 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* V_0 = NULL;
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* V_1 = NULL;
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* V_2 = NULL;
	{
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_0 = __this->___onFFRLevelChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_2 = V_1;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*)Castclass((RuntimeObject*)L_4, Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C_il2cpp_TypeInfo_var));
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C** L_5 = (&__this->___onFFRLevelChanged_4);
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_6 = V_2;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_7 = V_1;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_9 = V_0;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*)L_9) == ((RuntimeObject*)(Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::add_onASWEnableChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_add_onASWEnableChanged_m9ABBBDCE4FD7FCDA35999FA4D22A21FB6CDF015B (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___onASWEnableChanged_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___onASWEnableChanged_5);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::remove_onASWEnableChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_remove_onASWEnableChanged_mE7102797AC72539B0D2C9E72431F7F0054AB26AA (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___onASWEnableChanged_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___onASWEnableChanged_5);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// YVR.Core.YVRQualityManager/VSyncCount YVR.Core.YVRQualityManager::get_vSyncCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_vSyncCount_m73B6171EBF3B7018ED0FF276ED4C7273B547241B (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _vSyncCount; }
		int32_t L_0 = __this->____vSyncCount_0;
		return L_0;
	}
}
// System.Void YVR.Core.YVRQualityManager::set_vSyncCount(YVR.Core.YVRQualityManager/VSyncCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_set_vSyncCount_m1FEE034D3A4254E26F6B88DC774AA06F8F281472 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_vSyncCount == value) return;
		int32_t L_0 = __this->____vSyncCount_0;
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (_vSyncCount == value) return;
		return;
	}

IL_000a:
	{
		// _vSyncCount = value;
		int32_t L_2 = ___0_value;
		__this->____vSyncCount_0 = L_2;
		// ApplyVSyncCount(value);
		int32_t L_3 = ___0_value;
		YVRQualityManager_ApplyVSyncCount_mCA4C826D3CBB11DCDD4FF23A7233E1246FC4BB4B(__this, L_3, NULL);
		// }
		return;
	}
}
// YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel YVR.Core.YVRQualityManager::get_fixedFoveatedRenderingLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_fixedFoveatedRenderingLevel_m4C4DEC8E5577B6D078D1AE5FA1225741ABC90909 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fixedFoveatedRenderingLevel; }
		int32_t L_0 = __this->____fixedFoveatedRenderingLevel_1;
		return L_0;
	}
}
// System.Void YVR.Core.YVRQualityManager::set_fixedFoveatedRenderingLevel(YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_set_fixedFoveatedRenderingLevel_mBE133D0FF78CA6707956BE1BAA8C75784D3749E2 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_fixedFoveatedRenderingLevel == value) return;
		int32_t L_0 = __this->____fixedFoveatedRenderingLevel_1;
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (_fixedFoveatedRenderingLevel == value) return;
		return;
	}

IL_000a:
	{
		// _fixedFoveatedRenderingLevel = value;
		int32_t L_2 = ___0_value;
		__this->____fixedFoveatedRenderingLevel_1 = L_2;
		// ApplyFFR(value);
		int32_t L_3 = ___0_value;
		YVRQualityManager_ApplyFFR_m529FF93E89CAB2013F873823C82DBA56FCB90CE6(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean YVR.Core.YVRQualityManager::get_aswEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRQualityManager_get_aswEnable_mA02B41C54997D379E93AE28306431B69E8410E46 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_EnableASW; }
		bool L_0 = __this->___m_EnableASW_2;
		return L_0;
	}
}
// System.Void YVR.Core.YVRQualityManager::set_aswEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_set_aswEnable_mABBB72DC724F967163AE6779988E850BC3DEFF44 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (m_EnableASW == value) return;
		bool L_0 = __this->___m_EnableASW_2;
		bool L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (m_EnableASW == value) return;
		return;
	}

IL_000a:
	{
		// m_EnableASW = value;
		bool L_2 = ___0_value;
		__this->___m_EnableASW_2 = L_2;
		// ApplyASW(value);
		bool L_3 = ___0_value;
		YVRQualityManager_ApplyASW_m89412EBD86451276DBD0A804FA9279608E3ADF0C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Int32 YVR.Core.YVRQualityManager::get_recommendAntiAlisingLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_recommendAntiAlisingLevel_m59178A4F5C1F2481C952C73AFA64447BEA8352FA (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	{
		// public int recommendAntiAlisingLevel => 4;
		return 4;
	}
}
// System.Void YVR.Core.YVRQualityManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_Initialize_m7ECEA15580805D83139CC40ABBEF7CB1838B666D (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviorSingleton_1_get_instance_mE07B742F58837DD2E18B803D45BBBE67C07FD5A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Initialize() { YVRManager.instance.StartCoroutine(Wait2FramesBeforeInitializing()); }
		il2cpp_codegen_runtime_class_init_inline(MonoBehaviorSingleton_1_t39F7413B5BEF08E5305B1EFCE1183FE4EDAA37C0_il2cpp_TypeInfo_var);
		YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* L_0;
		L_0 = MonoBehaviorSingleton_1_get_instance_mE07B742F58837DD2E18B803D45BBBE67C07FD5A2(MonoBehaviorSingleton_1_get_instance_mE07B742F58837DD2E18B803D45BBBE67C07FD5A2_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = YVRQualityManager_Wait2FramesBeforeInitializing_m72068FB385E3F32A06837949C6DD567109447A0E(__this, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		// public void Initialize() { YVRManager.instance.StartCoroutine(Wait2FramesBeforeInitializing()); }
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::ApplyVSyncCount(YVR.Core.YVRQualityManager/VSyncCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_ApplyVSyncCount_mCA4C826D3CBB11DCDD4FF23A7233E1246FC4BB4B (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VSyncCount_tAEB180A770921C401F028AA515430CCE866E0EC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* G_B2_0 = NULL;
	Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* G_B1_0 = NULL;
	{
		// YVRPlugin.Instance.SetVSyncCount(value);
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(5 /* System.Void YVR.Core.YVRPlugin::SetVSyncCount(YVR.Core.YVRQualityManager/VSyncCount) */, L_0, L_1);
		// QualitySettings.vSyncCount = (int) value;
		int32_t L_2 = ___0_value;
		QualitySettings_set_vSyncCount_m0F1D9979392C140D248C6C3736F882A5A5C860E4(L_2, NULL);
		// onVSyncCountChanged?.SafeInvoke(value);
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_3 = __this->___onVSyncCountChanged_3;
		Action_1_t758956A0B34DB519E03A9C540833CD526A79C251* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		int32_t L_7 = ___0_value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(VSyncCount_tAEB180A770921C401F028AA515430CCE866E0EC0_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		SystemExtension_SafeInvoke_m1D9CCDDB53AE1A82C5B6602DF8AAEE7B478F9014(G_B2_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::ApplyFFR(YVR.Core.YVRQualityManager/FixedFoveatedRenderingLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_ApplyFFR_m529FF93E89CAB2013F873823C82DBA56FCB90CE6 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedFoveatedRenderingLevel_t2570CE10293BC9B5276876564D990DCABD5B09EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* G_B2_0 = NULL;
	Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* G_B1_0 = NULL;
	{
		// YVRPlugin.Instance.SetFoveation((int) value);
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(42 /* System.Void YVR.Core.YVRPlugin::SetFoveation(System.Int32) */, L_0, L_1);
		// onFFRLevelChanged?.SafeInvoke(value);
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_2 = __this->___onFFRLevelChanged_4;
		Action_1_t3CD9175EAA409298BAA08B3CC39E5E3DB99A339C* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___0_value;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(FixedFoveatedRenderingLevel_t2570CE10293BC9B5276876564D990DCABD5B09EE_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		SystemExtension_SafeInvoke_m1D9CCDDB53AE1A82C5B6602DF8AAEE7B478F9014(G_B2_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager::ApplyASW(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager_ApplyASW_m89412EBD86451276DBD0A804FA9279608E3ADF0C (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// YVRPlugin.Instance.SetASWEnable(enable);
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		bool L_1 = ___0_enable;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(43 /* System.Void YVR.Core.YVRPlugin::SetASWEnable(System.Boolean) */, L_0, L_1);
		// onASWEnableChanged?.SafeInvoke(enable);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = __this->___onASWEnableChanged_5;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		bool L_6 = ___0_enable;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		SystemExtension_SafeInvoke_m1D9CCDDB53AE1A82C5B6602DF8AAEE7B478F9014(G_B2_0, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator YVR.Core.YVRQualityManager::Wait2FramesBeforeInitializing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YVRQualityManager_Wait2FramesBeforeInitializing_m72068FB385E3F32A06837949C6DD567109447A0E (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* L_0 = (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D*)il2cpp_codegen_object_new(U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWait2FramesBeforeInitializingU3Ed__30__ctor_m37F81847BC3F2124818D0A0CE635A92A0D1306FD(L_0, 0, NULL);
		U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void YVR.Core.YVRQualityManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRQualityManager__ctor_m7C40B1CF110836F1EF8E688DF2A071B69BC432D6 (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private VSyncCount _vSyncCount = VSyncCount.k1;
		__this->____vSyncCount_0 = 1;
		// public bool useRecommendedMSAALevel = true;
		__this->___useRecommendedMSAALevel_6 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWait2FramesBeforeInitializingU3Ed__30__ctor_m37F81847BC3F2124818D0A0CE635A92A0D1306FD (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWait2FramesBeforeInitializingU3Ed__30_System_IDisposable_Dispose_m932E92DE13594B323E546B0656B04F605B002FAA (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWait2FramesBeforeInitializingU3Ed__30_MoveNext_m0C49577C84232C62E6F2798D4DD131F6D5AAF951 (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ApplyVSyncCount(vSyncCount);
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_4 = V_1;
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = YVRQualityManager_get_vSyncCount_m73B6171EBF3B7018ED0FF276ED4C7273B547241B_inline(L_5, NULL);
		NullCheck(L_4);
		YVRQualityManager_ApplyVSyncCount_mCA4C826D3CBB11DCDD4FF23A7233E1246FC4BB4B(L_4, L_6, NULL);
		// yield return new WaitForSecondsRealtime(1.0f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_7 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_7, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ApplyFFR(fixedFoveatedRenderingLevel);
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_8 = V_1;
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = YVRQualityManager_get_fixedFoveatedRenderingLevel_m4C4DEC8E5577B6D078D1AE5FA1225741ABC90909_inline(L_9, NULL);
		NullCheck(L_8);
		YVRQualityManager_ApplyFFR_m529FF93E89CAB2013F873823C82DBA56FCB90CE6(L_8, L_10, NULL);
		// ApplyASW(m_EnableASW);
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_11 = V_1;
		YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = L_12->___m_EnableASW_2;
		NullCheck(L_11);
		YVRQualityManager_ApplyASW_m89412EBD86451276DBD0A804FA9279608E3ADF0C(L_11, L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWait2FramesBeforeInitializingU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mACACD216F9F539E5A241BAA8A8CBB392DE01149F (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWait2FramesBeforeInitializingU3Ed__30_System_Collections_IEnumerator_Reset_m0EC4E53938B26457368FC1985E719457B06421EF (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWait2FramesBeforeInitializingU3Ed__30_System_Collections_IEnumerator_Reset_m0EC4E53938B26457368FC1985E719457B06421EF_RuntimeMethod_var)));
	}
}
// System.Object YVR.Core.YVRQualityManager/<Wait2FramesBeforeInitializing>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWait2FramesBeforeInitializingU3Ed__30_System_Collections_IEnumerator_get_Current_m73BDC3AA93ECB4A7C777174C4C5394E633729003 (U3CWait2FramesBeforeInitializingU3Ed__30_tABFA2FF3FEB616F8F403609D8BBDEACA2BA8986D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void YVR.Core.YVRTrackingStateManager::add_onUseIPDInPositionTrackingChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_add_onUseIPDInPositionTrackingChanged_m2E1010851286CE8D3B225812ACB139B0FB28969E (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___onUseIPDInPositionTrackingChanged_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___onUseIPDInPositionTrackingChanged_1);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YVR.Core.YVRTrackingStateManager::remove_onUseIPDInPositionTrackingChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_remove_onUseIPDInPositionTrackingChanged_mBD5422AFFD4A6F422530D65ABDDDAECD52EF00CA (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___onUseIPDInPositionTrackingChanged_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___onUseIPDInPositionTrackingChanged_1);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean YVR.Core.YVRTrackingStateManager::get_useIPDInPositionTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRTrackingStateManager_get_useIPDInPositionTracking_m3AE2069FF14907DABBAF00B9C11CFB91311F1D6E (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	{
		// get { return _useIPDInPositionTracking; }
		bool L_0 = __this->____useIPDInPositionTracking_2;
		return L_0;
	}
}
// System.Void YVR.Core.YVRTrackingStateManager::set_useIPDInPositionTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_set_useIPDInPositionTracking_m690CB1322FC9C86BD1874840B7B8500EE32A01B1 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_useIPDInPositionTracking == value) return;
		bool L_0 = __this->____useIPDInPositionTracking_2;
		bool L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (_useIPDInPositionTracking == value) return;
		return;
	}

IL_000a:
	{
		// _useIPDInPositionTracking = value;
		bool L_2 = ___0_value;
		__this->____useIPDInPositionTracking_2 = L_2;
		// ApplyIPDSetting();
		YVRTrackingStateManager_ApplyIPDSetting_mC1439ED9B8576F98FA4FB2595B3896E0297E2C58(__this, NULL);
		// }
		return;
	}
}
// YVR.Core.YVRTrackingStateManager/TrackingSpace YVR.Core.YVRTrackingStateManager::get_trackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRTrackingStateManager_get_trackingSpace_m76CBB1BE9E22491D43BDDDB7EAE04147737F67C5 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	{
		// get { return _trackingSpace; }
		int32_t L_0 = __this->____trackingSpace_0;
		return L_0;
	}
}
// System.Void YVR.Core.YVRTrackingStateManager::set_trackingSpace(YVR.Core.YVRTrackingStateManager/TrackingSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_set_trackingSpace_m8C529F04F0840AE08A5CAE5D40C0D408129BC6B0 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_trackingSpace == value) return;
		int32_t L_0 = __this->____trackingSpace_0;
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (_trackingSpace == value) return;
		return;
	}

IL_000a:
	{
		// _trackingSpace = value;
		int32_t L_2 = ___0_value;
		__this->____trackingSpace_0 = L_2;
		// ApplyTrackingSpace();
		YVRTrackingStateManager_ApplyTrackingSpace_m068AB1553674A05FDA140D9921DCB36DCFB0BBD8(__this, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRTrackingStateManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_Initialize_m90C32765620C7ABDE6FDFE208FBD1607C4F64DBD (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	{
		// ApplyIPDSetting();
		YVRTrackingStateManager_ApplyIPDSetting_mC1439ED9B8576F98FA4FB2595B3896E0297E2C58(__this, NULL);
		// ApplyTrackingSpace();
		YVRTrackingStateManager_ApplyTrackingSpace_m068AB1553674A05FDA140D9921DCB36DCFB0BBD8(__this, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRTrackingStateManager::ApplyIPDSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_ApplyIPDSetting_mC1439ED9B8576F98FA4FB2595B3896E0297E2C58 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// YVRPlugin.Instance.SetUsingIPDInPositionTracking(useIPDInPositionTracking);
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		bool L_1;
		L_1 = YVRTrackingStateManager_get_useIPDInPositionTracking_m3AE2069FF14907DABBAF00B9C11CFB91311F1D6E_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(14 /* System.Void YVR.Core.YVRPlugin::SetUsingIPDInPositionTracking(System.Boolean) */, L_0, L_1);
		// onUseIPDInPositionTrackingChanged?.SafeInvoke(useIPDInPositionTracking);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = __this->___onUseIPDInPositionTrackingChanged_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		bool L_6;
		L_6 = YVRTrackingStateManager_get_useIPDInPositionTracking_m3AE2069FF14907DABBAF00B9C11CFB91311F1D6E_inline(__this, NULL);
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		SystemExtension_SafeInvoke_m1D9CCDDB53AE1A82C5B6602DF8AAEE7B478F9014(G_B2_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRTrackingStateManager::ApplyTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager_ApplyTrackingSpace_m068AB1553674A05FDA140D9921DCB36DCFB0BBD8 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	{
		// YVRPlugin.Instance.SetTrackingSpace(_trackingSpace);
		YVRPlugin_t46F7A0A1385A0FFDCB0A37996B9B2577A309AF90* L_0;
		L_0 = YVRPlugin_get_Instance_m49DE7DE688836DEE3A5F5C31A31AD02B029BF643(NULL);
		int32_t L_1 = __this->____trackingSpace_0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(4 /* System.Void YVR.Core.YVRPlugin::SetTrackingSpace(YVR.Core.YVRTrackingStateManager/TrackingSpace) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void YVR.Core.YVRTrackingStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRTrackingStateManager__ctor_m784E2FC4D2C4571ABDC11C80C5237FB0FD8B4625 (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	{
		// private bool _useIPDInPositionTracking = true;
		__this->____useIPDInPositionTracking_2 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YVR.Core.XR.YVRXRLoader::YVRSetXRUserDefinedSettings(YVR.Core.XR.YVRXRUserDefinedSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRXRLoader_YVRSetXRUserDefinedSettings_m69F2EED266CE8DDF28351C0AD4B1251775613FA2 (YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8* ___0_userDefinedSettings, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_yvrplugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("yvrplugin"), "YVRSetXRUserDefinedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yvrplugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(YVRSetXRUserDefinedSettings)(___0_userDefinedSettings);
	#else
	il2cppPInvokeFunc(___0_userDefinedSettings);
	#endif

}
// System.Boolean YVR.Core.XR.YVRXRLoader::CheckADB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRXRLoader_CheckADB_m751BF2EC08EB9A47E970D0E8844D5C390603386C (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_yvrplugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("yvrplugin"), "CheckADB", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yvrplugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CheckADB)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 YVR.Core.XR.YVRXRLoader::YVRSetDevelopmentBuildMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YVRXRLoader_YVRSetDevelopmentBuildMode_m682F2001B144819EDDE750994BD54D241C7CCF5C (bool ___0_isDevelopmentBuild, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_yvrplugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("yvrplugin"), "YVRSetDevelopmentBuildMode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yvrplugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(YVRSetDevelopmentBuildMode)(static_cast<int32_t>(___0_isDevelopmentBuild));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___0_isDevelopmentBuild));
	#endif

	return returnValue;
}
// System.Boolean YVR.Core.XR.YVRXRLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRXRLoader_Initialize_mF3689BBD51727BBEA799B6C58EF02AA3533E3741 (YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_instance_m63A68DA2B06D42C288DBA6A9ACFEFF84FBFF90AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BBA6CE4003870CF27417A37DA15698A74F039FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46394594D22FA19E9D226C3C5A5DF59E50AB24F8);
		s_Il2CppMethodInitialized = true;
	}
	YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* V_0 = NULL;
	YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// YVRXRSettings settings = null;
		V_0 = (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158*)NULL;
		// settings = YVRXRSettings.xrSettings;
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_0;
		L_0 = YVRXRSettings_get_xrSettings_m4C244907C5D3C0AE0DEA4DFF21F5B971309BDACB_inline(NULL);
		V_0 = L_0;
		// YVREventTracking.instance.UploadSDKInfo();
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tA7D4FC9EA3BFE1CA88717A3C75132BDE399137A9_il2cpp_TypeInfo_var);
		YVREventTracking_t59D904AC2E7C3EA1BB5B70244215C894A02EB26C* L_1;
		L_1 = Singleton_1_get_instance_m63A68DA2B06D42C288DBA6A9ACFEFF84FBFF90AC(Singleton_1_get_instance_m63A68DA2B06D42C288DBA6A9ACFEFF84FBFF90AC_RuntimeMethod_var);
		NullCheck(L_1);
		YVREventTracking_UploadSDKInfo_m3128DDA36C37B57D1F48BE2E650033923AB55F11(L_1, NULL);
		// YVRXRUserDefinedSettings userDefinedSettings = new YVRXRUserDefinedSettings();
		il2cpp_codegen_initobj((&V_1), sizeof(YVRXRUserDefinedSettings_t6A507F5066822DA5DD6399127CEA832CE83E48F8));
		// userDefinedSettings.stereoRenderingMode = settings.GetStereoRenderingMode();
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_2 = V_0;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = YVRXRSettings_GetStereoRenderingMode_m7FD8905F6F8CBD1324CA83D3CBEAECE2C83FD336(L_2, NULL);
		(&V_1)->___stereoRenderingMode_3 = L_3;
		// userDefinedSettings.eyeRenderScale = settings.eyeResolutionScale;
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->___eyeResolutionScale_7;
		(&V_1)->___eyeRenderScale_4 = L_5;
		// userDefinedSettings.use16BitDepthBuffer = settings.use16BitDepthBuffer;
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->___use16BitDepthBuffer_4;
		(&V_1)->___use16BitDepthBuffer_0 = L_7;
		// userDefinedSettings.useMonoscopic = settings.useMonoscopic;
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = L_8->___useMonoscopic_5;
		(&V_1)->___useMonoscopic_1 = L_9;
		// userDefinedSettings.useLinearColorSpace = QualitySettings.activeColorSpace == ColorSpace.Linear;
		int32_t L_10;
		L_10 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		(&V_1)->___useLinearColorSpace_2 = (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
		// YVRSetXRUserDefinedSettings(ref userDefinedSettings);
		il2cpp_codegen_runtime_class_init_inline(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var);
		YVRXRLoader_YVRSetXRUserDefinedSettings_m69F2EED266CE8DDF28351C0AD4B1251775613FA2((&V_1), NULL);
		// YVRSetDevelopmentBuildMode(false);
		int32_t L_11;
		L_11 = YVRXRLoader_YVRSetDevelopmentBuildMode_m682F2001B144819EDDE750994BD54D241C7CCF5C((bool)0, NULL);
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(displaySubsystemDescriptors, "Display");
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_12 = ((YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_5;
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A(__this, L_12, _stringLiteral0BBA6CE4003870CF27417A37DA15698A74F039FB, XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(inputSubsystemDescriptors, "Tracking");
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_13 = ((YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_6;
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C(__this, L_13, _stringLiteral46394594D22FA19E9D226C3C5A5DF59E50AB24F8, XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean YVR.Core.XR.YVRXRLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRXRLoader_Start_m95E5739D1FC14C3DE11C960AC55BAC91C10B9A27 (YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB723B84C49BA43D55998B5F8B01EDC53B3D6432F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962(__this, XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA(__this, XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var);
		// if (!CheckADB())
		il2cpp_codegen_runtime_class_init_inline(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = YVRXRLoader_CheckADB_m751BF2EC08EB9A47E970D0E8844D5C390603386C(NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogError("YVR PreviewTool: please configure the adb environment variable!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB723B84C49BA43D55998B5F8B01EDC53B3D6432F, NULL);
	}

IL_001d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean YVR.Core.XR.YVRXRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRXRLoader_Stop_m97D4D13EB7F2F717C9321322304236272B104DA3 (YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24(__this, XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750(__this, XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean YVR.Core.XR.YVRXRLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YVRXRLoader_Deinitialize_mA909B1414C97516DFA43FE3436ED7B9209AF087F (YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606(__this, XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F(__this, XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void YVR.Core.XR.YVRXRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRXRLoader__ctor_m73E2F266A39B0D87E26A435356F9B8196C8B1484 (YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43* __this, const RuntimeMethod* method) 
{
	{
		XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699(__this, NULL);
		return;
	}
}
// System.Void YVR.Core.XR.YVRXRLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRXRLoader__cctor_m19FA22FDB351686E76771B113E8FC17EEF158AA2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRDisplaySubsystemDescriptor> displaySubsystemDescriptors
		//     = new List<XRDisplaySubsystemDescriptor>();
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_0 = (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*)il2cpp_codegen_object_new(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773(L_0, List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		((YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_5), (void*)L_0);
		// private static List<XRInputSubsystemDescriptor> inputSubsystemDescriptors
		//     = new List<XRInputSubsystemDescriptor>();
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_1 = (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*)il2cpp_codegen_object_new(List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD(L_1, List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		((YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRLoader_tC38206214B5C23EEAB6A708FD13D05CD32454C43_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_6), (void*)L_1);
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
// YVR.Core.XR.YVRXRSettings YVR.Core.XR.YVRXRSettings::get_xrSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* YVRXRSettings_get_xrSettings_m4C244907C5D3C0AE0DEA4DFF21F5B971309BDACB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static YVRXRSettings xrSettings { get; private set; }
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_0 = ((YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var))->___U3CxrSettingsU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void YVR.Core.XR.YVRXRSettings::set_xrSettings(YVR.Core.XR.YVRXRSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRXRSettings_set_xrSettings_m93FD19924C6A422E6F0B3E63A5554EEC57CA140A (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static YVRXRSettings xrSettings { get; private set; }
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_0 = ___0_value;
		((YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var))->___U3CxrSettingsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var))->___U3CxrSettingsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.UInt16 YVR.Core.XR.YVRXRSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t YVRXRSettings_GetStereoRenderingMode_m7FD8905F6F8CBD1324CA83D3CBEAECE2C83FD336 (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* __this, const RuntimeMethod* method) 
{
	{
		// return (ushort) stereoRenderingMode;
		int32_t L_0 = __this->___stereoRenderingMode_6;
		return (uint16_t)((int32_t)(uint16_t)L_0);
	}
}
// System.Void YVR.Core.XR.YVRXRSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRXRSettings_Awake_m37819BF8F6A8AAF4295ADFBD5F8E9487F2FB71FC (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* __this, const RuntimeMethod* method) 
{
	{
		// xrSettings = this;
		YVRXRSettings_set_xrSettings_m93FD19924C6A422E6F0B3E63A5554EEC57CA140A_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void YVR.Core.XR.YVRXRSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRXRSettings__ctor_m66887582A1CE2AE1EC032762836EB7C6C4C9A19A (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* __this, const RuntimeMethod* method) 
{
	{
		// public StereoRenderingMode stereoRenderingMode = StereoRenderingMode.Multiview;
		__this->___stereoRenderingMode_6 = 2;
		// public float eyeResolutionScale = 1.0f;
		__this->___eyeResolutionScale_7 = (1.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// YVR.Core.XR.YVRPlatformSetting YVR.Core.XR.YVRPlatformSetting::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* YVRPlatformSetting_get_Instance_mDD4F5A4CF57ED8ACD90762DA57C80221CE54F848 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisYVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_m4E5906549BA58BDC809A615856218B10C4CABDC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2CD37B7B1356523AEF247BE14BEA7838176F2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* L_0 = ((YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_StaticFields*)il2cpp_codegen_static_fields_for(YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// instance = Resources.Load<YVRPlatformSetting>("YVRPlatformSetting");
		YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* L_2;
		L_2 = Resources_Load_TisYVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_m4E5906549BA58BDC809A615856218B10C4CABDC4(_stringLiteral5D2CD37B7B1356523AEF247BE14BEA7838176F2A, Resources_Load_TisYVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_m4E5906549BA58BDC809A615856218B10C4CABDC4_RuntimeMethod_var);
		((YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_StaticFields*)il2cpp_codegen_static_fields_for(YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_il2cpp_TypeInfo_var))->___instance_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_StaticFields*)il2cpp_codegen_static_fields_for(YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_il2cpp_TypeInfo_var))->___instance_5), (void*)L_2);
	}

IL_001c:
	{
		// return instance;
		YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* L_3 = ((YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_StaticFields*)il2cpp_codegen_static_fields_for(YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1_il2cpp_TypeInfo_var))->___instance_5;
		return L_3;
	}
}
// System.Void YVR.Core.XR.YVRPlatformSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YVRPlatformSetting__ctor_mDCF24A080439F0E96ECCBF1E0B9C27027FEFF50F (YVRPlatformSetting_tDB0E061E9596411AA89FF1374EB3A2F0B7FDE0D1* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_vSyncCount_m73B6171EBF3B7018ED0FF276ED4C7273B547241B_inline (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _vSyncCount; }
		int32_t L_0 = __this->____vSyncCount_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YVRQualityManager_get_fixedFoveatedRenderingLevel_m4C4DEC8E5577B6D078D1AE5FA1225741ABC90909_inline (YVRQualityManager_tBB3ED43F501F2FB6E1AD1905C535A105A61E2EA0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fixedFoveatedRenderingLevel; }
		int32_t L_0 = __this->____fixedFoveatedRenderingLevel_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YVRTrackingStateManager_get_useIPDInPositionTracking_m3AE2069FF14907DABBAF00B9C11CFB91311F1D6E_inline (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	{
		// get { return _useIPDInPositionTracking; }
		bool L_0 = __this->____useIPDInPositionTracking_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YVRTrackingStateManager_get_trackingSpace_m76CBB1BE9E22491D43BDDDB7EAE04147737F67C5_inline (YVRTrackingStateManager_t55EE9D65C4B3BDA2208789ACE2D4906106C6C970* __this, const RuntimeMethod* method) 
{
	{
		// get { return _trackingSpace; }
		int32_t L_0 = __this->____trackingSpace_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YVRManager_set_cameraRig_m03EB6E0ADBDA1B462C7A6A5EEB7F909ACF456FEA_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* ___0_value, const RuntimeMethod* method) 
{
	{
		// public YVRCameraRig cameraRig { get; private set; }
		YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* L_0 = ___0_value;
		__this->___U3CcameraRigU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcameraRigU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YVRManager_set_controllerRig_mFACEC7F869B04667C6450329B67B8632FE0AA510_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public YVRControllerRig controllerRig { get; private set; }
		YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* L_0 = ___0_value;
		__this->___U3CcontrollerRigU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontrollerRigU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* YVRManager_get_cameraRig_m45D371A137B59F90D8FCE0D721F088EAB1C1F3CB_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public YVRCameraRig cameraRig { get; private set; }
		YVRCameraRig_tFD331BEF20D9FBDE0956E841AADB5D269F30F731* L_0 = __this->___U3CcameraRigU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* YVRManager_get_controllerRig_mB05E5B8AF5A78C90E56723C4DF0535C5B8582906_inline (YVRManager_tD8DF63D49F582595E279976B94A19645C7FCA49F* __this, const RuntimeMethod* method) 
{
	{
		// public YVRControllerRig controllerRig { get; private set; }
		YVRControllerRig_tE1DE8921A6D88DCFF7CE066EE4CB12C48FB4712A* L_0 = __this->___U3CcontrollerRigU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* YVRXRSettings_get_xrSettings_m4C244907C5D3C0AE0DEA4DFF21F5B971309BDACB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static YVRXRSettings xrSettings { get; private set; }
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_0 = ((YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var))->___U3CxrSettingsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YVRXRSettings_set_xrSettings_m93FD19924C6A422E6F0B3E63A5554EEC57CA140A_inline (YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static YVRXRSettings xrSettings { get; private set; }
		YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158* L_0 = ___0_value;
		((YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var))->___U3CxrSettingsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_StaticFields*)il2cpp_codegen_static_fields_for(YVRXRSettings_t6102516F7F517B88B7A21AF61889A5D4B63AB158_il2cpp_TypeInfo_var))->___U3CxrSettingsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}