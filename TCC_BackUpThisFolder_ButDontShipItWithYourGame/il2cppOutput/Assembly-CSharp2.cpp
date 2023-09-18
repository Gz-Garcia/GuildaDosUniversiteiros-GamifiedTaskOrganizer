﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
// System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// TMPro.FastAction`1<System.Boolean>
struct FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3;
// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005;
// TMPro.FastAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Material>
struct FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Object>
struct FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B;
// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs>
struct FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D;
// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>
struct FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// Google.FutureAPIImpl`1<Google.GoogleSignInUser>
struct FutureAPIImpl_1_t1DBB9AEFB8C58CA4AD9AFE5C32CA4C9CF3E58E8B;
// Google.FutureAPIImpl`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct FutureAPIImpl_1_tA98CB0CDA0FECE029CCA3DD5BB7D150B6FED4DBD;
// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B;
// Google.Future`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Future_1_t451E5DF749E4C997613A0E339B8D4F64E363275A;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// TMPro.FastAction
struct FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA;
// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8;
// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349;
// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Google.ISignInImpl
struct ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// TMPro.Examples.VertexShakeA
struct VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F;
// TMPro.Examples.VertexShakeB
struct VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8;
// TMPro.Examples.VertexZoom
struct VertexZoom_t51F05EB153497034D27896F07590D790A73981A6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E;
// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5;
// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E;
// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E;
// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7;
// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123;
// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD;
IL2CPP_EXTERN_C String_t* _stringLiteralD400EB487C20E145E8637C4026A2356D9E546258;
IL2CPP_EXTERN_C String_t* _stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;

struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<System.Action`1<A>> TMPro.FastAction`1::delegates
	LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C* ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> TMPro.FastAction`1::lookup
	Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E* ___lookup_1;
};

// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B  : public RuntimeObject
{
	// Google.FutureAPIImpl`1<T> Google.Future`1::apiImpl
	RuntimeObject* ___apiImpl_0;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA  : public RuntimeObject
{
	// Google.ISignInImpl Google.GoogleSignIn::impl
	RuntimeObject* ___impl_2;
};

struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields
{
	// Google.GoogleSignIn Google.GoogleSignIn::theInstance
	GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* ___theInstance_0;
	// Google.GoogleSignInConfiguration Google.GoogleSignIn::theConfiguration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___theConfiguration_1;
};

// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8  : public RuntimeObject
{
	// System.Boolean Google.GoogleSignInConfiguration::UseGameSignIn
	bool ___UseGameSignIn_0;
	// System.String Google.GoogleSignInConfiguration::WebClientId
	String_t* ___WebClientId_1;
	// System.Boolean Google.GoogleSignInConfiguration::RequestAuthCode
	bool ___RequestAuthCode_2;
	// System.Boolean Google.GoogleSignInConfiguration::ForceTokenRefresh
	bool ___ForceTokenRefresh_3;
	// System.Boolean Google.GoogleSignInConfiguration::RequestEmail
	bool ___RequestEmail_4;
	// System.Boolean Google.GoogleSignInConfiguration::RequestIdToken
	bool ___RequestIdToken_5;
	// System.Boolean Google.GoogleSignInConfiguration::RequestProfile
	bool ___RequestProfile_6;
	// System.Boolean Google.GoogleSignInConfiguration::HidePopups
	bool ___HidePopups_7;
	// System.String Google.GoogleSignInConfiguration::AccountName
	String_t* ___AccountName_8;
	// System.Collections.Generic.IEnumerable`1<System.String> Google.GoogleSignInConfiguration::AdditionalScopes
	RuntimeObject* ___AdditionalScopes_9;
};

// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA  : public RuntimeObject
{
	// System.String Google.GoogleSignInUser::<AuthCode>k__BackingField
	String_t* ___U3CAuthCodeU3Ek__BackingField_0;
	// System.String Google.GoogleSignInUser::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_1;
	// System.String Google.GoogleSignInUser::<IdToken>k__BackingField
	String_t* ___U3CIdTokenU3Ek__BackingField_2;
	// System.String Google.GoogleSignInUser::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Google.GoogleSignInUser::<GivenName>k__BackingField
	String_t* ___U3CGivenNameU3Ek__BackingField_4;
	// System.String Google.GoogleSignInUser::<FamilyName>k__BackingField
	String_t* ___U3CFamilyNameU3Ek__BackingField_5;
	// System.Uri Google.GoogleSignInUser::<ImageUrl>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CImageUrlU3Ek__BackingField_6;
	// System.String Google.GoogleSignInUser::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_7;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// TMPro.TMPro_EventManager
struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9  : public RuntimeObject
{
};

struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields
{
	// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs> TMPro.TMPro_EventManager::COMPUTE_DT_EVENT
	FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D* ___COMPUTE_DT_EVENT_0;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Material> TMPro.TMPro_EventManager::MATERIAL_PROPERTY_EVENT
	FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A* ___MATERIAL_PROPERTY_EVENT_1;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::FONT_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___FONT_PROPERTY_EVENT_2;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::SPRITE_ASSET_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___SPRITE_ASSET_PROPERTY_EVENT_3;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_PROPERTY_EVENT_4;
	// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material> TMPro.TMPro_EventManager::DRAG_AND_DROP_MATERIAL_EVENT
	FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77* ___DRAG_AND_DROP_MATERIAL_EVENT_5;
	// TMPro.FastAction`1<System.Boolean> TMPro.TMPro_EventManager::TEXT_STYLE_PROPERTY_EVENT
	FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3* ___TEXT_STYLE_PROPERTY_EVENT_6;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::COLOR_GRADIENT_PROPERTY_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___COLOR_GRADIENT_PROPERTY_EVENT_7;
	// TMPro.FastAction TMPro.TMPro_EventManager::TMP_SETTINGS_PROPERTY_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___TMP_SETTINGS_PROPERTY_EVENT_8;
	// TMPro.FastAction TMPro.TMPro_EventManager::RESOURCE_LOAD_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___RESOURCE_LOAD_EVENT_9;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_UGUI_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_UGUI_PROPERTY_EVENT_10;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::TEXT_CHANGED_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___TEXT_CHANGED_EVENT_11;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
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
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11
struct U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeA TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<>4__this
	VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<textInfo>5__2
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__2_3;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* ___U3CcopyOfVerticesU3E5__3_4;
};

// TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexShakeB TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<>4__this
	VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* ___U3CU3E4__this_2;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<textInfo>5__2
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__2_3;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::<copyOfVertices>5__3
	Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* ___U3CcopyOfVerticesU3E5__3_4;
};

// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Single> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::modifiedCharScale
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___modifiedCharScale_0;
	// System.Comparison`1<System.Int32> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<>9__0
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___U3CU3E9__0_1;
};

// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexZoom TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>4__this
	VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* ___U3CU3E4__this_2;
	// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>8__1
	U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* ___U3CU3E8__1_3;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<textInfo>5__2
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__2_4;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<cachedMeshInfoVertexData>5__3
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___U3CcachedMeshInfoVertexDataU3E5__3_5;
	// System.Collections.Generic.List`1<System.Int32> TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<scaleSortingOrder>5__4
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CscaleSortingOrderU3E5__4_6;
};

// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample/<WarpText>d__8::<>4__this
	WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_CurveScale>5__2
	float ___U3Cold_CurveScaleU3E5__2_3;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_curve>5__3
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___U3Cold_curveU3E5__3_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo_17;
};

struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative_1;
};

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};

struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A_StaticFields
{
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___k_Zero_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::selfHandleRef
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___selfHandleRef_0;
};

struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::nullSelf
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___nullSelf_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A  : public Exception_t
{
	// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_18;
};

// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.NativeFuture/<>c__DisplayClass5_0::userPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___userPtr_0;
};

// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A  : public MulticastDelegate_t
{
};

// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields
{
	// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::instance
	SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* ___instance_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TMPro.Examples.VertexShakeA
struct VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexShakeA::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeA::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeA::ScaleMultiplier
	float ___ScaleMultiplier_6;
	// System.Single TMPro.Examples.VertexShakeA::RotationMultiplier
	float ___RotationMultiplier_7;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeA::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_8;
	// System.Boolean TMPro.Examples.VertexShakeA::hasTextChanged
	bool ___hasTextChanged_9;
};

// TMPro.Examples.VertexShakeB
struct VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexShakeB::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeB::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexShakeB::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeB::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexShakeB::hasTextChanged
	bool ___hasTextChanged_8;
};

// TMPro.Examples.VertexZoom
struct VertexZoom_t51F05EB153497034D27896F07590D790A73981A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexZoom::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexZoom::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexZoom::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexZoom::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexZoom::hasTextChanged
	bool ___hasTextChanged_8;
};

// TMPro.Examples.WarpTextExample
struct WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_4;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___VertexCurve_5;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_6;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_7;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_8;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* m_Items[1];

	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B m_Items[1];

	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 m_Items[1];

	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 m_Items[1];

	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
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
// System.String[]
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Add_mC02AC544AAF7A9FADBC0FB90589DAD6F7781DC1C_gshared (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___rhs0, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Remove_m01C59262AAA66732DF720BEF8EF8AE89CC8CDFB8_gshared (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___rhs0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3B594919B20B90AF5727A416D5798BA4468358CC_gshared (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___comparison0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Future_1_WaitForResult_mA2EEBBB98511EF6FE2D69EB786A28B3DC6C554F0_gshared (Future_1_t451E5DF749E4C997613A0E339B8D4F64E363275A* __this, TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* ___tcs0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void Google.Future`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Google.FutureAPIImpl`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_1__ctor_m58C6F6448DFB27820CFA42CE42490F0644836F64_gshared (Future_1_t451E5DF749E4C997613A0E339B8D4F64E363275A* __this, RuntimeObject* ___impl0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action`1<UnityEngine.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m95478636F075134CA2998E22B214611472600983 (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Add(System.Action`1<A>)
inline void FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6 (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___rhs0, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, const RuntimeMethod*))FastAction_1_Add_mC02AC544AAF7A9FADBC0FB90589DAD6F7781DC1C_gshared)((FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*)__this, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)___rhs0, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Remove(System.Action`1<A>)
inline void FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___rhs0, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, const RuntimeMethod*))FastAction_1_Remove_m01C59262AAA66732DF720BEF8EF8AE89CC8CDFB8_gshared)((FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*)__this, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)___rhs0, method);
}
// System.Collections.IEnumerator TMPro.Examples.VertexShakeA::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TMPro.Examples.VertexShakeB::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator TMPro.Examples.VertexZoom::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, const RuntimeMethod* method) ;
// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::CopyMeshInfoVertexData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA (TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m3B594919B20B90AF5727A416D5798BA4468358CC_gshared)((Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*)__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*)___comparison0, method);
}
// System.Void TMPro.TMP_MeshInfo::SortGeometry(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_MeshInfo_SortGeometry_m74ED0FE2065414A659EE9A9C809E1B0B4A8A7734 (TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* __this, RuntimeObject* ___sortingOrder0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_havePropertiesChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_havePropertiesChanged_mA38D7BC9E260BF29450738B827F2220A05662B31 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_Text::get_havePropertiesChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds TMPro.TMP_Text::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method) ;
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline (const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___impl0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84 (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<Google.GoogleSignInUser>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
inline RuntimeObject* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* ___tcs0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Future_1_t451E5DF749E4C997613A0E339B8D4F64E363275A*, TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))Future_1_WaitForResult_mA2EEBBB98511EF6FE2D69EB786A28B3DC6C554F0_gshared)((Future_1_t451E5DF749E4C997613A0E339B8D4F64E363275A*)__this, (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)___tcs0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::get_Task()
inline Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*)il2cppRetVal;
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) ;
// System.Boolean System.UIntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021 (uintptr_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4 (const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF (intptr_t ___data0, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___intPtr0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)il2cppRetVal;
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___flag1, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void Google.Future`1<Google.GoogleSignInUser>::.ctor(Google.FutureAPIImpl`1<T>)
inline void Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6 (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, RuntimeObject* ___impl0, const RuntimeMethod* method)
{
	((  void (*) (Future_1_t451E5DF749E4C997613A0E339B8D4F64E363275A*, RuntimeObject*, const RuntimeMethod*))Future_1__ctor_m58C6F6448DFB27820CFA42CE42490F0644836F64_gshared)((Future_1_t451E5DF749E4C997613A0E339B8D4F64E363275A*)__this, (RuntimeObject*)___impl0, method);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___fieldName0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___outStringMethod0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.Impl.SignInHelperObject>()
inline SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Create(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_EnableDebugLogging(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Configure(void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignIn(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignInSilently(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Signout(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Disconnect(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_DisposeFuture(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Pending(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Result(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Status(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetServerAuthCode(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetDisplayName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetEmail(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetFamilyName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetGivenName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetIdToken(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetImageUrl(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetUserId(void*, uint8_t*, uintptr_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.VertexShakeA::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_Awake_m092957B0A67A153E7CD56A75A438087DE4806867 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_OnEnable_m52E2A036C9EB2C1D633BA7F43E31C36983972304 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_OnDisable_m52F58AF9438377D222543AA67CFF7B30FCCB0F23 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_Start_mDD8B5538BDFBC2BA242B997B879E7ED64ACAFC5E (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA_ON_TEXT_CHANGED_mE7A41CEFDB0008A1CD15F156EFEE1C895A92EE77 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj = m_TextComponent)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TextComponent_8;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = L_0;
		___obj0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_9 = (bool)1;
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexShakeA::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeA_AnimateVertexColors_m5FD933D6BF976B64FC0B80614DE5112377D1DC38 (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* L_0 = (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexShakeA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeA__ctor_m63ED483A292CA310B90144E0779C0472AAC22CBB (VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float ScaleMultiplier = 1.0f;
		__this->___ScaleMultiplier_6 = (1.0f);
		// public float RotationMultiplier = 1.0f;
		__this->___RotationMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11__ctor_m440985E6DF2F1B461E2964101EA242FFD472A25A (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_IDisposable_Dispose_m74112773E1FD645722BC221FA5256331C068EAE7 (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__11_MoveNext_mA6858F6CA14AAE3DFB7EA13748E10E063BBAB934 (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_14 = NULL;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0105;
			}
			case 2:
			{
				goto IL_04ce;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = L_3->___m_TextComponent_8;
		NullCheck(L_4);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = L_5->___m_TextComponent_8;
		NullCheck(L_6);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_7;
		L_7 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_6, NULL);
		__this->___U3CtextInfoU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__2_3), (void*)L_7);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_8 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___U3CcopyOfVerticesU3E5__3_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_4), (void*)L_8);
		// hasTextChanged = true;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_9 = V_1;
		NullCheck(L_9);
		L_9->___hasTextChanged_9 = (bool)1;
	}

IL_005a:
	{
		// if (hasTextChanged)
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->___hasTextChanged_9;
		if (!L_11)
		{
			goto IL_00df;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_12 = __this->___U3CcopyOfVerticesU3E5__3_4;
		NullCheck(L_12);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_13 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_14 = L_13->___meshInfo_16;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0091;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_15 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_15);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_16 = L_15->___meshInfo_16;
		NullCheck(L_16);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_17 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)));
		__this->___U3CcopyOfVerticesU3E5__3_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_4), (void*)L_17);
	}

IL_0091:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_4 = 0;
		goto IL_00c7;
	}

IL_0096:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_18 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_18);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_19 = L_18->___meshInfo_16;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___vertices_6;
		NullCheck(L_21);
		V_5 = ((int32_t)(((RuntimeArray*)L_21)->max_length));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_22 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_25);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c7:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = V_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_28 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_28);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_29 = L_28->___meshInfo_16;
		NullCheck(L_29);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0096;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_30 = V_1;
		NullCheck(L_30);
		L_30->___hasTextChanged_9 = (bool)0;
	}

IL_00df:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_31 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_31);
		int32_t L_32 = L_31->___characterCount_3;
		// if (characterCount == 0)
		if (L_32)
		{
			goto IL_0111;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_33 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_33, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_33);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_005a;
	}

IL_0111:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_34 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_34);
		int32_t L_35 = L_34->___lineCount_8;
		V_3 = L_35;
		// for (int i = 0; i < lineCount; i++)
		V_6 = 0;
		goto IL_0448;
	}

IL_0125:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_36 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_36);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_37 = L_36->___lineInfo_14;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___firstCharacterIndex_5;
		V_7 = L_39;
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_40 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_40);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_41 = L_40->___lineInfo_14;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___lastCharacterIndex_7;
		V_8 = L_43;
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_44 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_44);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_45 = L_44->___characterInfo_11;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___bottomLeft_20;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_48 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_48);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_49 = L_48->___characterInfo_11;
		int32_t L_50 = V_8;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___topRight_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_52, (2.0f), NULL);
		V_9 = L_53;
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f) * RotationMultiplier);
		float L_54;
		L_54 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.25f), (0.25f), NULL);
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_55 = V_1;
		NullCheck(L_55);
		float L_56 = L_55->___RotationMultiplier_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57;
		L_57 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_54, L_56)), NULL);
		V_10 = L_57;
		// for (int j = first; j <= last; j++)
		int32_t L_58 = V_7;
		V_11 = L_58;
		goto IL_0439;
	}

IL_01c6:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_59 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_59);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_60 = L_59->___characterInfo_11;
		int32_t L_61 = V_11;
		NullCheck(L_60);
		bool L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___isVisible_40;
		if (!L_62)
		{
			goto IL_0433;
		}
	}
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_63 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_63);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_64 = L_63->___characterInfo_11;
		int32_t L_65 = V_11;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___materialReferenceIndex_9;
		V_12 = L_66;
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_67 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_67);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_68 = L_67->___characterInfo_11;
		int32_t L_69 = V_11;
		NullCheck(L_68);
		int32_t L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___vertexIndex_14;
		V_13 = L_70;
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_71 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_71);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_72 = L_71->___meshInfo_16;
		int32_t L_73 = V_12;
		NullCheck(L_72);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___vertices_6;
		V_14 = L_74;
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_75 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_76 = V_12;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = V_14;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_83, L_84, NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_85);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_86 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_87 = V_12;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		int32_t L_90 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_91 = V_14;
		int32_t L_92 = V_13;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_94, L_95, NULL);
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_96);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_97 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_98 = V_12;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_102 = V_14;
		int32_t L_103 = V_13;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_add(L_103, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_105, L_106, NULL);
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_101, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_107);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_108 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_109 = V_12;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		int32_t L_112 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = V_14;
		int32_t L_114 = V_13;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_116, L_117, NULL);
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_112, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_118);
		// float randomScale = Random.Range(0.995f - 0.001f * ScaleMultiplier, 1.005f + 0.001f * ScaleMultiplier);
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_119 = V_1;
		NullCheck(L_119);
		float L_120 = L_119->___ScaleMultiplier_6;
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_121 = V_1;
		NullCheck(L_121);
		float L_122 = L_121->___ScaleMultiplier_6;
		float L_123;
		L_123 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_subtract((0.995000005f), ((float)il2cpp_codegen_multiply((0.00100000005f), L_120)))), ((float)il2cpp_codegen_add((1.005f), ((float)il2cpp_codegen_multiply((0.00100000005f), L_122)))), NULL);
		V_15 = L_123;
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one * randomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_125 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_127 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_126, L_127, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_129;
		L_129 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_124, L_125, L_128, NULL);
		V_2 = L_129;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_130 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_131 = V_12;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_135 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_136 = V_12;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = V_13;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_141, NULL);
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_142);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_143 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_144 = V_12;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_148 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_149 = V_12;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		int32_t L_152 = V_13;
		NullCheck(L_151);
		int32_t L_153 = ((int32_t)il2cpp_codegen_add(L_152, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_154, NULL);
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_147, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_155);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_156 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_157 = V_12;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		int32_t L_160 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_161 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_162 = V_12;
		NullCheck(L_161);
		int32_t L_163 = L_162;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		int32_t L_165 = V_13;
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(L_165, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_167, NULL);
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_160, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_168);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_169 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_170 = V_12;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		int32_t L_173 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_174 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_175 = V_12;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		int32_t L_178 = V_13;
		NullCheck(L_177);
		int32_t L_179 = ((int32_t)il2cpp_codegen_add(L_178, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181;
		L_181 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_180, NULL);
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_173, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_181);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_182 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_183 = V_12;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		int32_t L_186 = V_13;
		NullCheck(L_185);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_187 = ((L_185)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_186)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_187);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190;
		L_190 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_188, L_189, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_187 = L_190;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_191 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_192 = V_12;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = V_13;
		NullCheck(L_194);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_196 = ((L_194)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_195, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_196);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_197, L_198, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_196 = L_199;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_200 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_201 = V_12;
		NullCheck(L_200);
		int32_t L_202 = L_201;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		int32_t L_204 = V_13;
		NullCheck(L_203);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_205 = ((L_203)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_204, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_205);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_208;
		L_208 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_206, L_207, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_205 = L_208;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_209 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_210 = V_12;
		NullCheck(L_209);
		int32_t L_211 = L_210;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_212 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		int32_t L_213 = V_13;
		NullCheck(L_212);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_214 = ((L_212)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_213, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_215 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_214);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_216 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_217;
		L_217 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_215, L_216, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_214 = L_217;
	}

IL_0433:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_218 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_218, 1));
	}

IL_0439:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_219 = V_11;
		int32_t L_220 = V_8;
		if ((((int32_t)L_219) <= ((int32_t)L_220)))
		{
			goto IL_01c6;
		}
	}
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_221 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_221, 1));
	}

IL_0448:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_222 = V_6;
		int32_t L_223 = V_3;
		if ((((int32_t)L_222) < ((int32_t)L_223)))
		{
			goto IL_0125;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_16 = 0;
		goto IL_04a4;
	}

IL_0455:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_224 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_224);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_225 = L_224->___meshInfo_16;
		int32_t L_226 = V_16;
		NullCheck(L_225);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_227 = ((L_225)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_226)))->___mesh_4;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_228 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_229 = V_16;
		NullCheck(L_228);
		int32_t L_230 = L_229;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_231 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		NullCheck(L_227);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_227, L_231, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeA_t0915AA60878050D69BA28697506CF5CF6F789E8F* L_232 = V_1;
		NullCheck(L_232);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_233 = L_232->___m_TextComponent_8;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_234 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_234);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_235 = L_234->___meshInfo_16;
		int32_t L_236 = V_16;
		NullCheck(L_235);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_237 = ((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_236)))->___mesh_4;
		int32_t L_238 = V_16;
		NullCheck(L_233);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_233, L_237, L_238);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_239 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_239, 1));
	}

IL_04a4:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_240 = V_16;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_241 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_241);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_242 = L_241->___meshInfo_16;
		NullCheck(L_242);
		if ((((int32_t)L_240) < ((int32_t)((int32_t)(((RuntimeArray*)L_242)->max_length)))))
		{
			goto IL_0455;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_243 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_243);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_243, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_243;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_243);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_04ce:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_005a;
	}
}
// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8DD4F3768C9025EFAC0BFDBB942FEF7953FB20BE (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90 (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_Reset_m2F84864A089CBA0B878B7AC1EA39A49B82682A90_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__11_System_Collections_IEnumerator_get_Current_m3106DAC17EF56701CBC9812DD031932B04BB730B (U3CAnimateVertexColorsU3Ed__11_t2E62EF65D8AE7185E18D8711E582A76E45AC843E* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.VertexShakeB::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_Awake_mFA9A180BD1769CC79E6325314B5652D605ABE58E (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_OnEnable_m4999DF4598174EDA2A47F4F667B5CE061DF97C21 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_OnDisable_m2FB32CBD277A271400BF8AF2A35294C09FE9B8E5 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_Start_m58786A0944340EF16E024ADB596C9AB5686C2AF1 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB_ON_TEXT_CHANGED_mF8641640C828A9664AE03AF01CB4832E14EF436D (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj = m_TextComponent)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TextComponent_7;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = L_0;
		___obj0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_8 = (bool)1;
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexShakeB::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexShakeB_AnimateVertexColors_m06D25FE7F9F3EFF693DDC889BF725F01D0CF2A6F (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* L_0 = (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexShakeB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexShakeB__ctor_m9D068774503CF8642CC0BAC0E909ECE91E4E2198 (VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_mBE5C0E4A0F65F07A7510D171683AD319F76E6C6D (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m4DD41FA568ABBC327FA38C0E345EFB6F1A71C2C8 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_mDD84A4116FCAAF920F86BA72F890CE0BE76AF348 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_14 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0105;
			}
			case 2:
			{
				goto IL_06ab;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_TextComponent.ForceMeshUpdate();
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = L_3->___m_TextComponent_7;
		NullCheck(L_4);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_4, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = L_5->___m_TextComponent_7;
		NullCheck(L_6);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_7;
		L_7 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_6, NULL);
		__this->___U3CtextInfoU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__2_3), (void*)L_7);
		// Vector3[][] copyOfVertices = new Vector3[0][];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_8 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___U3CcopyOfVerticesU3E5__3_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_4), (void*)L_8);
		// hasTextChanged = true;
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_9 = V_1;
		NullCheck(L_9);
		L_9->___hasTextChanged_8 = (bool)1;
	}

IL_005a:
	{
		// if (hasTextChanged)
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->___hasTextChanged_8;
		if (!L_11)
		{
			goto IL_00df;
		}
	}
	{
		// if (copyOfVertices.Length < textInfo.meshInfo.Length)
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_12 = __this->___U3CcopyOfVerticesU3E5__3_4;
		NullCheck(L_12);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_13 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_13);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_14 = L_13->___meshInfo_16;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0091;
		}
	}
	{
		// copyOfVertices = new Vector3[textInfo.meshInfo.Length][];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_15 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_15);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_16 = L_15->___meshInfo_16;
		NullCheck(L_16);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_17 = (Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D*)SZArrayNew(Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)));
		__this->___U3CcopyOfVerticesU3E5__3_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcopyOfVerticesU3E5__3_4), (void*)L_17);
	}

IL_0091:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_4 = 0;
		goto IL_00c7;
	}

IL_0096:
	{
		// int length = textInfo.meshInfo[i].vertices.Length;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_18 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_18);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_19 = L_18->___meshInfo_16;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___vertices_6;
		NullCheck(L_21);
		V_5 = ((int32_t)(((RuntimeArray*)L_21)->max_length));
		// copyOfVertices[i] = new Vector3[length];
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_22 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_25);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c7:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_27 = V_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_28 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_28);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_29 = L_28->___meshInfo_16;
		NullCheck(L_29);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0096;
		}
	}
	{
		// hasTextChanged = false;
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_30 = V_1;
		NullCheck(L_30);
		L_30->___hasTextChanged_8 = (bool)0;
	}

IL_00df:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_31 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_31);
		int32_t L_32 = L_31->___characterCount_3;
		// if (characterCount == 0)
		if (L_32)
		{
			goto IL_0111;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_33 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_33, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_33);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_005a;
	}

IL_0111:
	{
		// int lineCount = textInfo.lineCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_34 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_34);
		int32_t L_35 = L_34->___lineCount_8;
		V_3 = L_35;
		// for (int i = 0; i < lineCount; i++)
		V_6 = 0;
		goto IL_0625;
	}

IL_0125:
	{
		// int first = textInfo.lineInfo[i].firstCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_36 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_36);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_37 = L_36->___lineInfo_14;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___firstCharacterIndex_5;
		V_7 = L_39;
		// int last = textInfo.lineInfo[i].lastCharacterIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_40 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_40);
		TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* L_41 = L_40->___lineInfo_14;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___lastCharacterIndex_7;
		V_8 = L_43;
		// Vector3 centerOfLine = (textInfo.characterInfo[first].bottomLeft + textInfo.characterInfo[last].topRight) / 2;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_44 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_44);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_45 = L_44->___characterInfo_11;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___bottomLeft_20;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_48 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_48);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_49 = L_48->___characterInfo_11;
		int32_t L_50 = V_8;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___topRight_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_52, (2.0f), NULL);
		V_9 = L_53;
		// Quaternion rotation = Quaternion.Euler(0, 0, Random.Range(-0.25f, 0.25f));
		float L_54;
		L_54 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.25f), (0.25f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_54, NULL);
		V_10 = L_55;
		// for (int j = first; j <= last; j++)
		int32_t L_56 = V_7;
		V_11 = L_56;
		goto IL_0616;
	}

IL_01bf:
	{
		// if (!textInfo.characterInfo[j].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_57 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_57);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_58 = L_57->___characterInfo_11;
		int32_t L_59 = V_11;
		NullCheck(L_58);
		bool L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___isVisible_40;
		if (!L_60)
		{
			goto IL_0610;
		}
	}
	{
		// int materialIndex = textInfo.characterInfo[j].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_61 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_61);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_62 = L_61->___characterInfo_11;
		int32_t L_63 = V_11;
		NullCheck(L_62);
		int32_t L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___materialReferenceIndex_9;
		V_12 = L_64;
		// int vertexIndex = textInfo.characterInfo[j].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_65 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_65);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_66 = L_65->___characterInfo_11;
		int32_t L_67 = V_11;
		NullCheck(L_66);
		int32_t L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___vertexIndex_14;
		V_13 = L_68;
		// Vector3[] sourceVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_69 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_69);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_70 = L_69->___meshInfo_16;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___vertices_6;
		V_14 = L_72;
		// Vector3 charCenter = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_73 = V_14;
		int32_t L_74 = V_13;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = V_14;
		int32_t L_78 = V_13;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_76, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_81, (2.0f), NULL);
		V_15 = L_82;
		// copyOfVertices[materialIndex][vertexIndex + 0] = sourceVertices[vertexIndex + 0] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_83 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_84 = V_12;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_88 = V_14;
		int32_t L_89 = V_13;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_91, L_92, NULL);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_93);
		// copyOfVertices[materialIndex][vertexIndex + 1] = sourceVertices[vertexIndex + 1] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_94 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_95 = V_12;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_99 = V_14;
		int32_t L_100 = V_13;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_102, L_103, NULL);
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_98, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_104);
		// copyOfVertices[materialIndex][vertexIndex + 2] = sourceVertices[vertexIndex + 2] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_105 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_106 = V_12;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_110 = V_14;
		int32_t L_111 = V_13;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_113, L_114, NULL);
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_115);
		// copyOfVertices[materialIndex][vertexIndex + 3] = sourceVertices[vertexIndex + 3] - charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_116 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_117 = V_12;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_121 = V_14;
		int32_t L_122 = V_13;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_124, L_125, NULL);
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_120, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_126);
		// float randomScale = Random.Range(0.95f, 1.05f);
		float L_127;
		L_127 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.949999988f), (1.04999995f), NULL);
		V_16 = L_127;
		// matrix = Matrix4x4.TRS(Vector3.one, Quaternion.identity, Vector3.one * randomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_129;
		L_129 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_131 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_130, L_131, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_133;
		L_133 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_128, L_129, L_132, NULL);
		V_2 = L_133;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_134 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_135 = V_12;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		int32_t L_138 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_139 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_140 = V_12;
		NullCheck(L_139);
		int32_t L_141 = L_140;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = V_13;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_145, NULL);
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(L_138), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_146);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_147 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_148 = V_12;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_152 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_153 = V_12;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		int32_t L_156 = V_13;
		NullCheck(L_155);
		int32_t L_157 = ((int32_t)il2cpp_codegen_add(L_156, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_158, NULL);
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_151, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_159);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_160 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_161 = V_12;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		int32_t L_164 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_165 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_166 = V_12;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		int32_t L_169 = V_13;
		NullCheck(L_168);
		int32_t L_170 = ((int32_t)il2cpp_codegen_add(L_169, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_171, NULL);
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_164, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_172);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_173 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_174 = V_12;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		int32_t L_177 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_178 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_179 = V_12;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		int32_t L_182 = V_13;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185;
		L_185 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_184, NULL);
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_177, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_185);
		// copyOfVertices[materialIndex][vertexIndex + 0] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_186 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_187 = V_12;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		int32_t L_190 = V_13;
		NullCheck(L_189);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_191 = ((L_189)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_190)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_191);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_192, L_193, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_191 = L_194;
		// copyOfVertices[materialIndex][vertexIndex + 1] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_195 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_196 = V_12;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = V_13;
		NullCheck(L_198);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_200 = ((L_198)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_199, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_200);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203;
		L_203 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_201, L_202, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_200 = L_203;
		// copyOfVertices[materialIndex][vertexIndex + 2] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_204 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_205 = V_12;
		NullCheck(L_204);
		int32_t L_206 = L_205;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_207 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		int32_t L_208 = V_13;
		NullCheck(L_207);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_209 = ((L_207)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_208, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_210 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_209);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_211 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212;
		L_212 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_210, L_211, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_209 = L_212;
		// copyOfVertices[materialIndex][vertexIndex + 3] += charCenter;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_213 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_214 = V_12;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_13;
		NullCheck(L_216);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_218 = ((L_216)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_217, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_218);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_221;
		L_221 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_219, L_220, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_218 = L_221;
		// copyOfVertices[materialIndex][vertexIndex + 0] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_222 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_223 = V_12;
		NullCheck(L_222);
		int32_t L_224 = L_223;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_225 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		int32_t L_226 = V_13;
		NullCheck(L_225);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_227 = ((L_225)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_226)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_228 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_227);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_229 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_230;
		L_230 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_228, L_229, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_227 = L_230;
		// copyOfVertices[materialIndex][vertexIndex + 1] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_231 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_232 = V_12;
		NullCheck(L_231);
		int32_t L_233 = L_232;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_234 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = V_13;
		NullCheck(L_234);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_236 = ((L_234)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_235, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_237 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_236);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_238 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_239;
		L_239 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_237, L_238, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_236 = L_239;
		// copyOfVertices[materialIndex][vertexIndex + 2] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_240 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_241 = V_12;
		NullCheck(L_240);
		int32_t L_242 = L_241;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_243 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		int32_t L_244 = V_13;
		NullCheck(L_243);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_245 = ((L_243)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_244, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_246 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_245);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_247 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248;
		L_248 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_246, L_247, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_245 = L_248;
		// copyOfVertices[materialIndex][vertexIndex + 3] -= centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_249 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_250 = V_12;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		int32_t L_253 = V_13;
		NullCheck(L_252);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_254 = ((L_252)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_253, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_255 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_254);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_256 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_257;
		L_257 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_255, L_256, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_254 = L_257;
		// matrix = Matrix4x4.TRS(Vector3.one, rotation, Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_258;
		L_258 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_259 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_260;
		L_260 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_261;
		L_261 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_258, L_259, L_260, NULL);
		V_2 = L_261;
		// copyOfVertices[materialIndex][vertexIndex + 0] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 0]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_262 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_263 = V_12;
		NullCheck(L_262);
		int32_t L_264 = L_263;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		int32_t L_266 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_267 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_268 = V_12;
		NullCheck(L_267);
		int32_t L_269 = L_268;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_270 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = V_13;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_274;
		L_274 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_273, NULL);
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(L_266), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_274);
		// copyOfVertices[materialIndex][vertexIndex + 1] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 1]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_275 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_276 = V_12;
		NullCheck(L_275);
		int32_t L_277 = L_276;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_278 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_280 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_281 = V_12;
		NullCheck(L_280);
		int32_t L_282 = L_281;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_283 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		int32_t L_284 = V_13;
		NullCheck(L_283);
		int32_t L_285 = ((int32_t)il2cpp_codegen_add(L_284, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_286 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_287;
		L_287 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_286, NULL);
		NullCheck(L_278);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_279, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_287);
		// copyOfVertices[materialIndex][vertexIndex + 2] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 2]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_288 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_289 = V_12;
		NullCheck(L_288);
		int32_t L_290 = L_289;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		int32_t L_292 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_293 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_294 = V_12;
		NullCheck(L_293);
		int32_t L_295 = L_294;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_296 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		int32_t L_297 = V_13;
		NullCheck(L_296);
		int32_t L_298 = ((int32_t)il2cpp_codegen_add(L_297, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_300;
		L_300 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_299, NULL);
		NullCheck(L_291);
		(L_291)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_292, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_300);
		// copyOfVertices[materialIndex][vertexIndex + 3] = matrix.MultiplyPoint3x4(copyOfVertices[materialIndex][vertexIndex + 3]);
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_301 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_302 = V_12;
		NullCheck(L_301);
		int32_t L_303 = L_302;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_304 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_303));
		int32_t L_305 = V_13;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_306 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_307 = V_12;
		NullCheck(L_306);
		int32_t L_308 = L_307;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_309 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		int32_t L_310 = V_13;
		NullCheck(L_309);
		int32_t L_311 = ((int32_t)il2cpp_codegen_add(L_310, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_312 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_311));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_313;
		L_313 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_312, NULL);
		NullCheck(L_304);
		(L_304)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_305, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_313);
		// copyOfVertices[materialIndex][vertexIndex + 0] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_314 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_315 = V_12;
		NullCheck(L_314);
		int32_t L_316 = L_315;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_317 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		int32_t L_318 = V_13;
		NullCheck(L_317);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_319 = ((L_317)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_318)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_320 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_319);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_321 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_322;
		L_322 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_320, L_321, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_319 = L_322;
		// copyOfVertices[materialIndex][vertexIndex + 1] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_323 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_324 = V_12;
		NullCheck(L_323);
		int32_t L_325 = L_324;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_13;
		NullCheck(L_326);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_328 = ((L_326)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_327, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_329 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_328);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_330 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_331;
		L_331 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_329, L_330, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_328 = L_331;
		// copyOfVertices[materialIndex][vertexIndex + 2] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_332 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_333 = V_12;
		NullCheck(L_332);
		int32_t L_334 = L_333;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_335 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		int32_t L_336 = V_13;
		NullCheck(L_335);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_337 = ((L_335)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_336, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_338 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_337);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_339 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_340;
		L_340 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_338, L_339, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_337 = L_340;
		// copyOfVertices[materialIndex][vertexIndex + 3] += centerOfLine;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_341 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_342 = V_12;
		NullCheck(L_341);
		int32_t L_343 = L_342;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		int32_t L_345 = V_13;
		NullCheck(L_344);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_346 = ((L_344)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_345, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_347 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_346);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_348 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_349;
		L_349 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_347, L_348, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_346 = L_349;
	}

IL_0610:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_350 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_350, 1));
	}

IL_0616:
	{
		// for (int j = first; j <= last; j++)
		int32_t L_351 = V_11;
		int32_t L_352 = V_8;
		if ((((int32_t)L_351) <= ((int32_t)L_352)))
		{
			goto IL_01bf;
		}
	}
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_353 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_353, 1));
	}

IL_0625:
	{
		// for (int i = 0; i < lineCount; i++)
		int32_t L_354 = V_6;
		int32_t L_355 = V_3;
		if ((((int32_t)L_354) < ((int32_t)L_355)))
		{
			goto IL_0125;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_17 = 0;
		goto IL_0681;
	}

IL_0632:
	{
		// textInfo.meshInfo[i].mesh.vertices = copyOfVertices[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_356 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_356);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_357 = L_356->___meshInfo_16;
		int32_t L_358 = V_17;
		NullCheck(L_357);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_359 = ((L_357)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_358)))->___mesh_4;
		Vector3U5BU5DU5BU5D_t9E2E40AB6AB9079C8F16A0B6410FF6CF2EE8B53D* L_360 = __this->___U3CcopyOfVerticesU3E5__3_4;
		int32_t L_361 = V_17;
		NullCheck(L_360);
		int32_t L_362 = L_361;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_363 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		NullCheck(L_359);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_359, L_363, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexShakeB_tA3849618A1BE8DCE150A615F38CE2E247FC6F6C8* L_364 = V_1;
		NullCheck(L_364);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_365 = L_364->___m_TextComponent_7;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_366 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_366);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_367 = L_366->___meshInfo_16;
		int32_t L_368 = V_17;
		NullCheck(L_367);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_369 = ((L_367)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_368)))->___mesh_4;
		int32_t L_370 = V_17;
		NullCheck(L_365);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_365, L_369, L_370);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_371 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_371, 1));
	}

IL_0681:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_372 = V_17;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_373 = __this->___U3CtextInfoU3E5__2_3;
		NullCheck(L_373);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_374 = L_373->___meshInfo_16;
		NullCheck(L_374);
		if ((((int32_t)L_372) < ((int32_t)((int32_t)(((RuntimeArray*)L_374)->max_length)))))
		{
			goto IL_0632;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_375 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_375);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_375, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_375;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_375);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_06ab:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_005a;
	}
}
// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m250CC96EC17E74D79536FDA4EB6F5B5F985C0845 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_m5A5869FEFA67D5E9659F1145B83581D954550C1A_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m496F1BFEADA21FFB684F8C1996EAB707CFA1C5F0 (U3CAnimateVertexColorsU3Ed__10_tD6C6C3147726423C8C82952A638432E12AA2C91E* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.VertexZoom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_Awake_m29C1DE789B968D726EDD69F605321A223D47C1A0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_OnEnable_mE3719F01B6A8590066988F425F8A63103B5A7B47 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_OnDisable_mBB91C9EFA049395743D27358A427BB2B05850B47 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_Start_mB03D03148C98EBC9117D69510D24F21978546FCB (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == m_TextComponent)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___obj0;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TextComponent_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_8 = (bool)1;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexZoom::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* L_0 = (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom__ctor_m454AF80ACB5C555BCB4B5E658A22B5A4FCC39422 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<AnimateVertexColors>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___modifiedCharScale_0;
		int32_t L_1 = ___a0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = __this->___modifiedCharScale_0;
		int32_t L_4 = ___b1;
		NullCheck(L_3);
		float L_5;
		L_5 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_3, L_4, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_5, NULL);
		return L_6;
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
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m974E92A444C6343E94C76BB6CC6508F7AE4FD36E (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_m6DBC52A95A92A54A1801DC4CEE548FA568251D5E (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_7 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_9 = NULL;
	float V_10 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_11 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_12 = NULL;
	int32_t V_13 = 0;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* V_14 = NULL;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* G_B16_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B16_1 = NULL;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* G_B15_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B15_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_05b2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_3 = (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A(L_3, NULL);
		__this->___U3CU3E8__1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_3);
		// m_TextComponent.ForceMeshUpdate();
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_4 = V_1;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = L_4->___m_TextComponent_7;
		NullCheck(L_5);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_5, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_6 = V_1;
		NullCheck(L_6);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = L_6->___m_TextComponent_7;
		NullCheck(L_7);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_8;
		L_8 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_7, NULL);
		__this->___U3CtextInfoU3E5__2_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__2_4), (void*)L_8);
		// TMP_MeshInfo[] cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_9 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_9);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_10;
		L_10 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_9, NULL);
		__this->___U3CcachedMeshInfoVertexDataU3E5__3_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoVertexDataU3E5__3_5), (void*)L_10);
		// List<float> modifiedCharScale = new List<float>();
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_11 = __this->___U3CU3E8__1_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_12 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_12, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___modifiedCharScale_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___modifiedCharScale_0), (void*)L_12);
		// List<int> scaleSortingOrder = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_13, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___U3CscaleSortingOrderU3E5__4_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CscaleSortingOrderU3E5__4_6), (void*)L_13);
		// hasTextChanged = true;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_14 = V_1;
		NullCheck(L_14);
		L_14->___hasTextChanged_8 = (bool)1;
	}

IL_0085:
	{
		// if (hasTextChanged)
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = L_15->___hasTextChanged_8;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_17 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_17);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_18;
		L_18 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_17, NULL);
		__this->___U3CcachedMeshInfoVertexDataU3E5__3_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoVertexDataU3E5__3_5), (void*)L_18);
		// hasTextChanged = false;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_19 = V_1;
		NullCheck(L_19);
		L_19->___hasTextChanged_8 = (bool)0;
	}

IL_00a5:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_20 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___characterCount_3;
		V_3 = L_21;
		// if (characterCount == 0)
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_00d6;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00cd:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_0085;
	}

IL_00d6:
	{
		// modifiedCharScale.Clear();
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_24 = __this->___U3CU3E8__1_3;
		NullCheck(L_24);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_25 = L_24->___modifiedCharScale_0;
		NullCheck(L_25);
		List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline(L_25, List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		// scaleSortingOrder.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = __this->___U3CscaleSortingOrderU3E5__4_6;
		NullCheck(L_26);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_26, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// for (int i = 0; i < characterCount; i++)
		V_4 = 0;
		goto IL_045a;
	}

IL_00f9:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_27 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_27);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_28 = L_27->___characterInfo_11;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		// if (!charInfo.isVisible)
		bool L_32 = L_31.___isVisible_40;
		if (!L_32)
		{
			goto IL_0454;
		}
	}
	{
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_33 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_33);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_34 = L_33->___characterInfo_11;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___materialReferenceIndex_9;
		V_5 = L_36;
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_37 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_37);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_38 = L_37->___characterInfo_11;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___vertexIndex_14;
		V_6 = L_40;
		// Vector3[] sourceVertices = cachedMeshInfoVertexData[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_41 = __this->___U3CcachedMeshInfoVertexDataU3E5__3_5;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___vertices_6;
		V_7 = L_43;
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = V_7;
		int32_t L_45 = V_6;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = V_7;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_52, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_53, NULL);
		// Vector3 offset = charMidBasline;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_54, NULL);
		V_8 = L_55;
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_56 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_56);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_57 = L_56->___meshInfo_16;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___vertices_6;
		V_9 = L_59;
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = V_9;
		int32_t L_61 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = V_7;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_65, L_66, NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_67);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_9;
		int32_t L_69 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_73, L_74, NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_75);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = V_9;
		int32_t L_77 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = V_7;
		int32_t L_79 = V_6;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_81, L_82, NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_83);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = V_9;
		int32_t L_85 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = V_7;
		int32_t L_87 = V_6;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_89, L_90, NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_85, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_91);
		// float randomScale = Random.Range(1f, 1.5f);
		float L_92;
		L_92 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (1.5f), NULL);
		V_10 = L_92;
		// modifiedCharScale.Add(randomScale);
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_93 = __this->___U3CU3E8__1_3;
		NullCheck(L_93);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_94 = L_93->___modifiedCharScale_0;
		float L_95 = V_10;
		NullCheck(L_94);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_94, L_95, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// scaleSortingOrder.Add(modifiedCharScale.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_96 = __this->___U3CscaleSortingOrderU3E5__4_6;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_97 = __this->___U3CU3E8__1_3;
		NullCheck(L_97);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_98 = L_97->___modifiedCharScale_0;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_98, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		NullCheck(L_96);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_96, ((int32_t)il2cpp_codegen_subtract(L_99, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, Vector3.one * randomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_100), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_101;
		L_101 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_103 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_102, L_103, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_105;
		L_105 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_100, L_101, L_104, NULL);
		V_2 = L_105;
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = V_9;
		int32_t L_107 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_108 = V_9;
		int32_t L_109 = V_6;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_111, NULL);
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(L_107), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_112);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = V_9;
		int32_t L_114 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_115 = V_9;
		int32_t L_116 = V_6;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_118, NULL);
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_114, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_119);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_120 = V_9;
		int32_t L_121 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_122 = V_9;
		int32_t L_123 = V_6;
		NullCheck(L_122);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add(L_123, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_125, NULL);
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_121, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_126);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_127 = V_9;
		int32_t L_128 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = V_9;
		int32_t L_130 = V_6;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_132, NULL);
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_128, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_133);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_134 = V_9;
		int32_t L_135 = V_6;
		NullCheck(L_134);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_136 = ((L_134)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_135)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_136);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_137, L_138, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_136 = L_139;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_140 = V_9;
		int32_t L_141 = V_6;
		NullCheck(L_140);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_142 = ((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_141, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_142);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_143, L_144, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_142 = L_145;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_146 = V_9;
		int32_t L_147 = V_6;
		NullCheck(L_146);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_148 = ((L_146)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_147, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_149, L_150, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_148 = L_151;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_152 = V_9;
		int32_t L_153 = V_6;
		NullCheck(L_152);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_154 = ((L_152)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_153, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_154);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_155, L_156, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_154 = L_157;
		// Vector2[] sourceUVs0 = cachedMeshInfoVertexData[materialIndex].uvs0;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_158 = __this->___U3CcachedMeshInfoVertexDataU3E5__3_5;
		int32_t L_159 = V_5;
		NullCheck(L_158);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_160 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_159)))->___uvs0_9;
		V_11 = L_160;
		// Vector2[] destinationUVs0 = textInfo.meshInfo[materialIndex].uvs0;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_161 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_161);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_162 = L_161->___meshInfo_16;
		int32_t L_163 = V_5;
		NullCheck(L_162);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_164 = ((L_162)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_163)))->___uvs0_9;
		// destinationUVs0[vertexIndex + 0] = sourceUVs0[vertexIndex + 0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_165 = L_164;
		int32_t L_166 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_167 = V_11;
		int32_t L_168 = V_6;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_170);
		// destinationUVs0[vertexIndex + 1] = sourceUVs0[vertexIndex + 1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_171 = L_165;
		int32_t L_172 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_173 = V_11;
		int32_t L_174 = V_6;
		NullCheck(L_173);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_172, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_176);
		// destinationUVs0[vertexIndex + 2] = sourceUVs0[vertexIndex + 2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_177 = L_171;
		int32_t L_178 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_179 = V_11;
		int32_t L_180 = V_6;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_178, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_182);
		// destinationUVs0[vertexIndex + 3] = sourceUVs0[vertexIndex + 3];
		int32_t L_183 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_184 = V_11;
		int32_t L_185 = V_6;
		NullCheck(L_184);
		int32_t L_186 = ((int32_t)il2cpp_codegen_add(L_185, 3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_183, 3))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_187);
		// Color32[] sourceColors32 = cachedMeshInfoVertexData[materialIndex].colors32;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_188 = __this->___U3CcachedMeshInfoVertexDataU3E5__3_5;
		int32_t L_189 = V_5;
		NullCheck(L_188);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_190 = ((L_188)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_189)))->___colors32_11;
		V_12 = L_190;
		// Color32[] destinationColors32 = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_191 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_191);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_192 = L_191->___meshInfo_16;
		int32_t L_193 = V_5;
		NullCheck(L_192);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_194 = ((L_192)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_193)))->___colors32_11;
		// destinationColors32[vertexIndex + 0] = sourceColors32[vertexIndex + 0];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_195 = L_194;
		int32_t L_196 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_197 = V_12;
		int32_t L_198 = V_6;
		NullCheck(L_197);
		int32_t L_199 = L_198;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(L_196), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_200);
		// destinationColors32[vertexIndex + 1] = sourceColors32[vertexIndex + 1];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_201 = L_195;
		int32_t L_202 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_203 = V_12;
		int32_t L_204 = V_6;
		NullCheck(L_203);
		int32_t L_205 = ((int32_t)il2cpp_codegen_add(L_204, 1));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_202, 1))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_206);
		// destinationColors32[vertexIndex + 2] = sourceColors32[vertexIndex + 2];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_207 = L_201;
		int32_t L_208 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_209 = V_12;
		int32_t L_210 = V_6;
		NullCheck(L_209);
		int32_t L_211 = ((int32_t)il2cpp_codegen_add(L_210, 2));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_212 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_208, 2))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_212);
		// destinationColors32[vertexIndex + 3] = sourceColors32[vertexIndex + 3];
		int32_t L_213 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_214 = V_12;
		int32_t L_215 = V_6;
		NullCheck(L_214);
		int32_t L_216 = ((int32_t)il2cpp_codegen_add(L_215, 3));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_213, 3))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_217);
	}

IL_0454:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_218 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_218, 1));
	}

IL_045a:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_219 = V_4;
		int32_t L_220 = V_3;
		if ((((int32_t)L_219) < ((int32_t)L_220)))
		{
			goto IL_00f9;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_13 = 0;
		goto IL_0585;
	}

IL_046a:
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_221 = __this->___U3CscaleSortingOrderU3E5__4_6;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_222 = __this->___U3CU3E8__1_3;
		NullCheck(L_222);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_223 = L_222->___U3CU3E9__0_1;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_224 = L_223;
		G_B15_0 = L_224;
		G_B15_1 = L_221;
		if (L_224)
		{
			G_B16_0 = L_224;
			G_B16_1 = L_221;
			goto IL_04a0;
		}
	}
	{
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_225 = __this->___U3CU3E8__1_3;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_226 = __this->___U3CU3E8__1_3;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_227 = (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*)il2cpp_codegen_object_new(Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		NullCheck(L_227);
		Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C(L_227, L_226, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var), NULL);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_228 = L_227;
		V_14 = L_228;
		NullCheck(L_225);
		L_225->___U3CU3E9__0_1 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&L_225->___U3CU3E9__0_1), (void*)L_228);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_229 = V_14;
		G_B16_0 = L_229;
		G_B16_1 = G_B15_1;
	}

IL_04a0:
	{
		NullCheck(G_B16_1);
		List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4(G_B16_1, G_B16_0, List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var);
		// textInfo.meshInfo[i].SortGeometry(scaleSortingOrder);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_230 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_230);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_231 = L_230->___meshInfo_16;
		int32_t L_232 = V_13;
		NullCheck(L_231);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_233 = __this->___U3CscaleSortingOrderU3E5__4_6;
		TMP_MeshInfo_SortGeometry_m74ED0FE2065414A659EE9A9C809E1B0B4A8A7734(((L_231)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_232))), L_233, NULL);
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_234 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_234);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_235 = L_234->___meshInfo_16;
		int32_t L_236 = V_13;
		NullCheck(L_235);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_237 = ((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_236)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_238 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_238);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_239 = L_238->___meshInfo_16;
		int32_t L_240 = V_13;
		NullCheck(L_239);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_241 = ((L_239)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_240)))->___vertices_6;
		NullCheck(L_237);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_237, L_241, NULL);
		// textInfo.meshInfo[i].mesh.uv = textInfo.meshInfo[i].uvs0;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_242 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_242);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_243 = L_242->___meshInfo_16;
		int32_t L_244 = V_13;
		NullCheck(L_243);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_245 = ((L_243)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_244)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_246 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_246);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_247 = L_246->___meshInfo_16;
		int32_t L_248 = V_13;
		NullCheck(L_247);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_249 = ((L_247)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_248)))->___uvs0_9;
		NullCheck(L_245);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_245, L_249, NULL);
		// textInfo.meshInfo[i].mesh.colors32 = textInfo.meshInfo[i].colors32;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_250 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_250);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_251 = L_250->___meshInfo_16;
		int32_t L_252 = V_13;
		NullCheck(L_251);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_253 = ((L_251)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_252)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_254 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_254);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_255 = L_254->___meshInfo_16;
		int32_t L_256 = V_13;
		NullCheck(L_255);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_257 = ((L_255)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_256)))->___colors32_11;
		NullCheck(L_253);
		Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F(L_253, L_257, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_258 = V_1;
		NullCheck(L_258);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_259 = L_258->___m_TextComponent_7;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_260 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_260);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_261 = L_260->___meshInfo_16;
		int32_t L_262 = V_13;
		NullCheck(L_261);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_263 = ((L_261)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_262)))->___mesh_4;
		int32_t L_264 = V_13;
		NullCheck(L_259);
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_259, L_263, L_264);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_265 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_0585:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_266 = V_13;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_267 = __this->___U3CtextInfoU3E5__2_4;
		NullCheck(L_267);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_268 = L_267->___meshInfo_16;
		NullCheck(L_268);
		if ((((int32_t)L_266) < ((int32_t)((int32_t)(((RuntimeArray*)L_268)->max_length)))))
		{
			goto IL_046a;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_269 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_269);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_269, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_269;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_269);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_05b2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0085;
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m110CD16E89E725B1484D24FFB1753768F78A988B (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m14B89756695EE73AEBB6F3A613F65E1343A8CC2C (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.WarpTextExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Awake_m92842E51B4DBB2E4341ACB179468049FAB23949F (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = gameObject.GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_0, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___m_TextComponent_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Start_m3339EDC03B6FC498916520CBCCDB5F9FA090F809 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WarpText());
		RuntimeObject* L_0;
		L_0 = WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimationCurve newCurve = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		// newCurve.keys = curve.keys;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = L_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = ___curve0;
		NullCheck(L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3;
		L_3 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_2, NULL);
		NullCheck(L_1);
		AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C(L_1, L_3, NULL);
		// return newCurve;
		return L_1;
	}
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* L_0 = (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E*)il2cpp_codegen_object_new(U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB(L_0, 0, NULL);
		U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.WarpTextExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample__ctor_mBD48A5403123F25C45B5E60C19E1EA397FBA1795 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve VertexCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.25f, 2.0f), new Keyframe(0.5f, 0), new Keyframe(0.75f, 2.0f), new Keyframe(1, 0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.25f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_8), (0.75f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_8);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_10), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_10);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_11, L_9, NULL);
		__this->___VertexCurve_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VertexCurve_5), (void*)L_11);
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_6 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_7 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_8 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m145D2DA1026419984AD79D5D62FBC38C9441AB53 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.WarpTextExample/<WarpText>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWarpTextU3Ed__8_MoveNext_mCE7A826C5E4854C2C509C77BD18F5A9B6D691B02 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* V_1 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float G_B14_0 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_0473;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// VertexCurve.preWrapMode = WrapMode.Clamp;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_3 = V_1;
		NullCheck(L_3);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = L_3->___VertexCurve_5;
		NullCheck(L_4);
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_4, 1, NULL);
		// VertexCurve.postWrapMode = WrapMode.Clamp;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_5 = V_1;
		NullCheck(L_5);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = L_5->___VertexCurve_5;
		NullCheck(L_6);
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_6, 1, NULL);
		// m_TextComponent.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_7 = V_1;
		NullCheck(L_7);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = L_7->___m_TextComponent_4;
		NullCheck(L_8);
		TMP_Text_set_havePropertiesChanged_mA38D7BC9E260BF29450738B827F2220A05662B31(L_8, (bool)1, NULL);
		// CurveScale *= 10;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_9 = V_1;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___CurveScale_8;
		NullCheck(L_9);
		L_9->___CurveScale_8 = ((float)il2cpp_codegen_multiply(L_11, (10.0f)));
		// float old_CurveScale = CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___CurveScale_8;
		__this->___U3Cold_CurveScaleU3E5__2_3 = L_13;
		// AnimationCurve old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_14 = V_1;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_15 = V_1;
		NullCheck(L_15);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = L_15->___VertexCurve_5;
		NullCheck(L_14);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17;
		L_17 = WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF(L_14, L_16, NULL);
		__this->___U3Cold_curveU3E5__3_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cold_curveU3E5__3_4), (void*)L_17);
	}

IL_007d:
	{
		// if (!m_TextComponent.havePropertiesChanged && old_CurveScale == CurveScale && old_curve.keys[1].value == VertexCurve.keys[1].value)
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_18 = V_1;
		NullCheck(L_18);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = L_18->___m_TextComponent_4;
		NullCheck(L_19);
		bool L_20;
		L_20 = TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF_inline(L_19, NULL);
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		float L_21 = __this->___U3Cold_CurveScaleU3E5__2_3;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___CurveScale_8;
		if ((!(((float)L_21) == ((float)L_23))))
		{
			goto IL_00df;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = __this->___U3Cold_curveU3E5__3_4;
		NullCheck(L_24);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_25;
		L_25 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_24, NULL);
		NullCheck(L_25);
		float L_26;
		L_26 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_27 = V_1;
		NullCheck(L_27);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27->___VertexCurve_5;
		NullCheck(L_28);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_29;
		L_29 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_28, NULL);
		NullCheck(L_29);
		float L_30;
		L_30 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C(((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		if ((!(((float)L_26) == ((float)L_30))))
		{
			goto IL_00df;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_007d;
	}

IL_00df:
	{
		// old_CurveScale = CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->___CurveScale_8;
		__this->___U3Cold_CurveScaleU3E5__2_3 = L_32;
		// old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_33 = V_1;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_34 = V_1;
		NullCheck(L_34);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = L_34->___VertexCurve_5;
		NullCheck(L_33);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF(L_33, L_35, NULL);
		__this->___U3Cold_curveU3E5__3_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cold_curveU3E5__3_4), (void*)L_36);
		// m_TextComponent.ForceMeshUpdate(); // Generate the mesh and populate the textInfo with data we can use and manipulate.
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_37 = V_1;
		NullCheck(L_37);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_38 = L_37->___m_TextComponent_4;
		NullCheck(L_38);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_38, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_39 = V_1;
		NullCheck(L_39);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40 = L_39->___m_TextComponent_4;
		NullCheck(L_40);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_41;
		L_41 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_40, NULL);
		V_4 = L_41;
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = L_42->___characterCount_3;
		V_5 = L_43;
		// if (characterCount == 0) continue;
		int32_t L_44 = V_5;
		if (!L_44)
		{
			goto IL_007d;
		}
	}
	{
		// float boundsMinX = m_TextComponent.bounds.min.x;  //textInfo.meshInfo[0].mesh.bounds.min.x;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_45 = V_1;
		NullCheck(L_45);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_46 = L_45->___m_TextComponent_4;
		NullCheck(L_46);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_47;
		L_47 = TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189(L_46, NULL);
		V_8 = L_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_8), NULL);
		float L_49 = L_48.___x_2;
		V_6 = L_49;
		// float boundsMaxX = m_TextComponent.bounds.max.x;  //textInfo.meshInfo[0].mesh.bounds.max.x;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_50 = V_1;
		NullCheck(L_50);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_51 = L_50->___m_TextComponent_4;
		NullCheck(L_51);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_52;
		L_52 = TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189(L_51, NULL);
		V_8 = L_52;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_8), NULL);
		float L_54 = L_53.___x_2;
		V_7 = L_54;
		// for (int i = 0; i < characterCount; i++)
		V_9 = 0;
		goto IL_0446;
	}

IL_0165:
	{
		// if (!textInfo.characterInfo[i].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_55 = V_4;
		NullCheck(L_55);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_56 = L_55->___characterInfo_11;
		int32_t L_57 = V_9;
		NullCheck(L_56);
		bool L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___isVisible_40;
		if (!L_58)
		{
			goto IL_0440;
		}
	}
	{
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_59 = V_4;
		NullCheck(L_59);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_60 = L_59->___characterInfo_11;
		int32_t L_61 = V_9;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___vertexIndex_14;
		V_10 = L_62;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_63 = V_4;
		NullCheck(L_63);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_64 = L_63->___characterInfo_11;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___materialReferenceIndex_9;
		V_11 = L_66;
		// vertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_67 = V_4;
		NullCheck(L_67);
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_68 = L_67->___meshInfo_16;
		int32_t L_69 = V_11;
		NullCheck(L_68);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___vertices_6;
		V_2 = L_70;
		// Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = V_2;
		int32_t L_72 = V_10;
		NullCheck(L_71);
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = V_2;
		int32_t L_75 = V_10;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 2)))))->___x_2;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_77 = V_4;
		NullCheck(L_77);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_78 = L_77->___characterInfo_11;
		int32_t L_79 = V_9;
		NullCheck(L_78);
		float L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___baseLine_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_81), ((float)(((float)il2cpp_codegen_add(L_73, L_76))/(2.0f))), L_80, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_81, NULL);
		V_12 = L_82;
		// vertices[vertexIndex + 0] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = V_2;
		int32_t L_84 = V_10;
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_85 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_86, L_88, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_85 = L_89;
		// vertices[vertexIndex + 1] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = V_2;
		int32_t L_91 = V_10;
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_95, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_92 = L_96;
		// vertices[vertexIndex + 2] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_97 = V_2;
		int32_t L_98 = V_10;
		NullCheck(L_97);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_98, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_99);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_100, L_102, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_99 = L_103;
		// vertices[vertexIndex + 3] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_104 = V_2;
		int32_t L_105 = V_10;
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_105, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_108, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_107, L_109, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_106 = L_110;
		// float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_12;
		float L_112 = L_111.___x_2;
		float L_113 = V_6;
		float L_114 = V_7;
		float L_115 = V_6;
		V_13 = ((float)(((float)il2cpp_codegen_subtract(L_112, L_113))/((float)il2cpp_codegen_subtract(L_114, L_115))));
		// float x1 = x0 + 0.0001f;
		float L_116 = V_13;
		V_14 = ((float)il2cpp_codegen_add(L_116, (9.99999975E-05f)));
		// float y0 = VertexCurve.Evaluate(x0) * CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_117 = V_1;
		NullCheck(L_117);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_118 = L_117->___VertexCurve_5;
		float L_119 = V_13;
		NullCheck(L_118);
		float L_120;
		L_120 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_118, L_119, NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_121 = V_1;
		NullCheck(L_121);
		float L_122 = L_121->___CurveScale_8;
		V_15 = ((float)il2cpp_codegen_multiply(L_120, L_122));
		// float y1 = VertexCurve.Evaluate(x1) * CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_123 = V_1;
		NullCheck(L_123);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_124 = L_123->___VertexCurve_5;
		float L_125 = V_14;
		NullCheck(L_124);
		float L_126;
		L_126 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_124, L_125, NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_127 = V_1;
		NullCheck(L_127);
		float L_128 = L_127->___CurveScale_8;
		V_16 = ((float)il2cpp_codegen_multiply(L_126, L_128));
		// Vector3 horizontal = new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_129), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);
		float L_130 = V_14;
		float L_131 = V_7;
		float L_132 = V_6;
		float L_133 = V_6;
		float L_134 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_135), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_130, ((float)il2cpp_codegen_subtract(L_131, L_132)))), L_133)), L_134, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_12;
		float L_137 = L_136.___x_2;
		float L_138 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_139), L_137, L_138, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_135, L_139, NULL);
		V_17 = L_140;
		// float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = L_129;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_17), NULL);
		float L_143;
		L_143 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_141, L_142, NULL);
		float L_144;
		L_144 = acosf(L_143);
		V_18 = ((float)il2cpp_codegen_multiply(L_144, (57.2957802f)));
		// Vector3 cross = Vector3.Cross(horizontal, tangent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_141, L_145, NULL);
		// float angle = cross.z > 0 ? dot : 360 - dot;
		float L_147 = L_146.___z_4;
		if ((((float)L_147) > ((float)(0.0f))))
		{
			goto IL_0339;
		}
	}
	{
		float L_148 = V_18;
		G_B14_0 = ((float)il2cpp_codegen_subtract((360.0f), L_148));
		goto IL_033b;
	}

IL_0339:
	{
		float L_149 = V_18;
		G_B14_0 = L_149;
	}

IL_033b:
	{
		V_19 = G_B14_0;
		// matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
		float L_150 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_151), (0.0f), L_150, (0.0f), /*hidden argument*/NULL);
		float L_152 = V_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_153;
		L_153 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_152, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_155;
		L_155 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_151, L_153, L_154, NULL);
		V_3 = L_155;
		// vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_156 = V_2;
		int32_t L_157 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_158 = V_2;
		int32_t L_159 = V_10;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_161, NULL);
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(L_157), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_162);
		// vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_163 = V_2;
		int32_t L_164 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_165 = V_2;
		int32_t L_166 = V_10;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_168, NULL);
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_164, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_169);
		// vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_170 = V_2;
		int32_t L_171 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_172 = V_2;
		int32_t L_173 = V_10;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add(L_173, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		L_176 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_175, NULL);
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_171, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_176);
		// vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = V_2;
		int32_t L_178 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_179 = V_2;
		int32_t L_180 = V_10;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_182, NULL);
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_178, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_183);
		// vertices[vertexIndex + 0] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_184 = V_2;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_186 = ((L_184)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_185)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_186);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		L_189 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_187, L_188, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_186 = L_189;
		// vertices[vertexIndex + 1] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_190 = V_2;
		int32_t L_191 = V_10;
		NullCheck(L_190);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_192 = ((L_190)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_191, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_192);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195;
		L_195 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_193, L_194, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_192 = L_195;
		// vertices[vertexIndex + 2] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_196 = V_2;
		int32_t L_197 = V_10;
		NullCheck(L_196);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_198 = ((L_196)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_197, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_198);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		L_201 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_199, L_200, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_198 = L_201;
		// vertices[vertexIndex + 3] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_202 = V_2;
		int32_t L_203 = V_10;
		NullCheck(L_202);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_204 = ((L_202)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_203, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_204);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207;
		L_207 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_205, L_206, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_204 = L_207;
	}

IL_0440:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_208 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_208, 1));
	}

IL_0446:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_209 = V_9;
		int32_t L_210 = V_5;
		if ((((int32_t)L_209) < ((int32_t)L_210)))
		{
			goto IL_0165;
		}
	}
	{
		// m_TextComponent.UpdateVertexData();
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_211 = V_1;
		NullCheck(L_211);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_212 = L_211->___m_TextComponent_4;
		NullCheck(L_212);
		VirtualActionInvoker0::Invoke(109 /* System.Void TMPro.TMP_Text::UpdateVertexData() */, L_212);
		// yield return new WaitForSeconds(0.025f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_213 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_213);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_213, (0.0250000004f), NULL);
		__this->___U3CU3E2__current_1 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_213);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0473:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_007d;
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD80368E9B7E259311C03E406B75161ED6F7618E3 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m71D7F84D9DEF63BEC6B44866515DDCF35B142A19 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
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
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null || theConfiguration == value || theConfiguration == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___value0;
		if ((((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_1) == ((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		// theConfiguration = value;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___value0;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)L_4);
		return;
	}

IL_001d:
	{
		// throw new SignInException(GoogleSignInStatusCode.DeveloperError,
		//     "DefaultInstance already created. " +
		//     " Cannot change configuration after creation.");
		SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_5 = (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B(L_5, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD400EB487C20E145E8637C4026A2356D9E546258)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85_RuntimeMethod_var)));
	}
}
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// theInstance = new GoogleSignIn(new GoogleSignInImpl(Configuration));
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_2 = (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349*)il2cpp_codegen_object_new(GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A(L_2, L_1, NULL);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_3 = (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA*)il2cpp_codegen_object_new(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52(L_3, L_2, NULL);
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0), (void*)L_3);
	}

IL_001b:
	{
		// return theInstance;
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_4 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		return L_4;
	}
}
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___impl0, const RuntimeMethod* method) 
{
	{
		// internal GoogleSignIn(GoogleSignInImpl impl) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.impl = impl;
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_0 = ___impl0;
		__this->___impl_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_EnableDebugLogging_m14A29DE697ECC64D8A0A5CBA47278ECAE9D26F29 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.EnableDebugLogging(flag);
		RuntimeObject* L_0 = __this->___impl_2;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Google.ISignInImpl::EnableDebugLogging(System.Boolean) */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//   impl.SignIn().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(0 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignIn() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignInSilently_mA667E9AAF7FA438217844D0BACC7DF68364DF7AD (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//     impl.SignInSilently().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(1 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignInSilently() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theConfiguration = null;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL);
		// impl.SignOut();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Google.ISignInImpl::SignOut() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_mD97724F96462EC3BB49B29CFDC92888EB5D11D00 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.Disconnect();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Google.ISignInImpl::Disconnect() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
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
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_mF0A5634485EAF28ED443E3FB31248C2C1B1BE942 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SignInException(GoogleSignInStatusCode status) {
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// Status = status;
		int32_t L_0 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(message) {
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// Status = status;
		int32_t L_1 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m84BD804BE5ECAFDF85A48095572AA861C1E9D931 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Exception innerException) : base(message, innerException) {
		String_t* L_0 = ___message1;
		Exception_t* L_1 = ___innerException2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m97D47EE86A6870059BDA9F858818670FBAFA3812 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(info, context) {
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info1;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
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
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) 
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
// System.String Google.GoogleSignInUser::get_AuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_AuthCode_m086556E7DADF3850F2A70EC022F5BF9870DAAE34 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CAuthCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CEmailU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_GivenName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_GivenName_m1955EAFF719827C4118F9B7D2DF30E490F6A6797 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CGivenNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_FamilyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_FamilyName_mB8E944CF7D941E7F823C079410D45071ECE203A7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CFamilyNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CImageUrlU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_UserId_mCBF326EFC373DEF983AB1E87082AF49D81D1082E (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
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
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___intPtr0, const RuntimeMethod* method) 
{
	{
		// public BaseObject(IntPtr intPtr) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// selfHandleRef = new HandleRef(this, intPtr);
		intptr_t L_0 = ___intPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_1), __this, L_0, /*hidden argument*/NULL);
		__this->___selfHandleRef_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selfHandleRef.Equals(nullSelf)) {
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___selfHandleRef_0);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1;
		RuntimeObject* L_3 = Box(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F> L_4(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// throw new InvalidOperationException(
		//   "Attempted to use object after it was cleaned up");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var)));
	}

IL_0028:
	{
		// return selfHandleRef;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___selfHandleRef_0;
		return L_7;
	}
}
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selfHandleRef = nullSelf;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		__this->___selfHandleRef_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___outStringMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Exception_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// UIntPtr requiredSize = outStringMethod(null, UIntPtr.Zero);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_0 = ___outStringMethod0;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_1 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		NullCheck(L_0);
		uintptr_t L_2;
		L_2 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_1, NULL);
		V_0 = L_2;
		// if (requiredSize.Equals(UIntPtr.Zero)) {
		uintptr_t L_3 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		uintptr_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UIntPtr_t_il2cpp_TypeInfo_var, &L_4);
		bool L_6;
		L_6 = UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021((&V_0), L_5, NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0022:
	{
		// string str = null;
		V_1 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		// byte[] array = new byte[requiredSize.ToUInt32()];
		uint32_t L_7;
		L_7 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		// outStringMethod(array, requiredSize);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_9 = ___outStringMethod0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		uintptr_t L_11 = V_0;
		NullCheck(L_9);
		uintptr_t L_12;
		L_12 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_9, L_10, L_11, NULL);
		// str = Encoding.UTF8.GetString(array, 0,
		//         (int)requiredSize.ToUInt32() - 1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		uint32_t L_15;
		L_15 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1)));
		V_1 = L_16;
		// } catch (Exception e) {
		goto IL_0077;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Exception creating string from char array: " + e);
			Exception_t* L_17 = V_3;
			Exception_t* L_18 = L_17;
			G_B5_0 = L_18;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
			if (L_18)
			{
				G_B6_0 = L_18;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
				goto IL_0060;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0065;
		}

IL_0060:
		{
			NullCheck(G_B6_0);
			String_t* L_19;
			L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_19;
			G_B7_1 = G_B6_1;
		}

IL_0065:
		{
			String_t* L_20;
			L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
			// str = string.Empty;
			String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
			V_1 = L_21;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0077;
		}
	}// end catch (depth: 1)

IL_0077:
	{
		// return str;
		String_t* L_22 = V_1;
		return L_22;
	}
}
// System.Void Google.Impl.BaseObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__cctor_m37F36BB0C1EEF39D0197935D9E0A90BAC16FF1FB (const RuntimeMethod* method) 
{
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
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* currentDelegate = reinterpret_cast<OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	NullCheck(___out_bytes0);
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___out_bytes0, ___out_size1, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___out_bytes0, ___out_size1, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uintptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___out_bytes0, ___out_size1);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< uintptr_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___out_bytes0, ___out_size1);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___out_bytes0' to native representation
	uint8_t* ____out_bytes0_marshaled = NULL;
	if (___out_bytes0 != NULL)
	{
		____out_bytes0_marshaled = reinterpret_cast<uint8_t*>((___out_bytes0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(____out_bytes0_marshaled, ___out_size1);

	return returnValue;
}
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast;
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Google.Impl.BaseObject/OutStringMethod::BeginInvoke(System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutStringMethod_BeginInvoke_m608A23F502DE02D618CCA39D6D865C7D18CDFDF7 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___out_bytes0;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___out_size1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_EndInvoke_m1559888E67A55BCBDCFA90C6873D68C33E8AFE2A (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// : base(GoogleSignIn_Create(GetPlayerActivity())) {
		intptr_t L_0;
		L_0 = GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4(NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_1, NULL);
		// if (configuration != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___configuration0;
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		// List<string> scopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// if (configuration.AdditionalScopes != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___configuration0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___AdditionalScopes_9;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// scopes.AddRange(configuration.AdditionalScopes);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = V_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_7 = ___configuration0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___AdditionalScopes_9;
		NullCheck(L_6);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_6, L_8, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
	}

IL_002d:
	{
		// GoogleSignIn_Configure(SelfPtr(), configuration.UseGameSignIn,
		//              configuration.WebClientId,
		//              configuration.RequestAuthCode,
		//              configuration.ForceTokenRefresh,
		//              configuration.RequestEmail,
		//              configuration.RequestIdToken,
		//              configuration.HidePopups,
		//              scopes.ToArray(),
		//              scopes.Count,
		//              configuration.AccountName);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
		L_9 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_10 = ___configuration0;
		NullCheck(L_10);
		bool L_11 = L_10->___UseGameSignIn_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_12 = ___configuration0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___WebClientId_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_14 = ___configuration0;
		NullCheck(L_14);
		bool L_15 = L_14->___RequestAuthCode_2;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_16 = ___configuration0;
		NullCheck(L_16);
		bool L_17 = L_16->___ForceTokenRefresh_3;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_18 = ___configuration0;
		NullCheck(L_18);
		bool L_19 = L_18->___RequestEmail_4;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_20 = ___configuration0;
		NullCheck(L_20);
		bool L_21 = L_20->___RequestIdToken_5;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_22 = ___configuration0;
		NullCheck(L_22);
		bool L_23 = L_22->___HidePopups_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_0;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25;
		L_25 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_24, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_26, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_28 = ___configuration0;
		NullCheck(L_28);
		String_t* L_29 = L_28->___AccountName_8;
		bool L_30;
		L_30 = GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E(L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_EnableDebugLogging_m527A8F7AAE6B947A8EC6DC25E23E661D2B6E117F (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_EnableDebugLogging(SelfPtr(), flag);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1 = ___flag0;
		GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC(L_0, L_1, NULL);
		// }
		return;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignIn_m859A15256A86DF1873867F49B79B69163EAB9BE8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignIn(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignInSilently_mE92B6CCBDA838381A21703691FB9C5F461A477F8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignInSilently(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_SignOut_m88FED0CCBAA20F403B838BAA20FBD5FC5CC2416B (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Signout(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_Disconnect_m136F2268A549DA9A13D7BBB198BE4B286380ECA1 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Disconnect(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB(L_0, NULL);
		// }
		return;
	}
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF (intptr_t ___data0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Create)(___data0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___data0);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___flag1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_EnableDebugLogging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_EnableDebugLogging)(____self0_marshaled, static_cast<int32_t>(___flag1));
	#else
	il2cppPInvokeFunc(____self0_marshaled, static_cast<int32_t>(___flag1));
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4 + sizeof(char*) + 4 + 4 + 4 + 4 + 4 + sizeof(void*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Configure", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___webClientId2' to native representation
	char* ____webClientId2_marshaled = NULL;
	____webClientId2_marshaled = il2cpp_codegen_marshal_string(___webClientId2);

	// Marshaling of parameter '___additionalScopes8' to native representation
	char** ____additionalScopes8_marshaled = NULL;
	if (___additionalScopes8 != NULL)
	{
		il2cpp_array_size_t ____additionalScopes8_Length = (___additionalScopes8)->max_length;
		____additionalScopes8_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____additionalScopes8_Length + 1);
		(____additionalScopes8_marshaled)[____additionalScopes8_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_Length); i++)
		{
			(____additionalScopes8_marshaled)[i] = il2cpp_codegen_marshal_string((___additionalScopes8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling of parameter '___accountName10' to native representation
	char* ____accountName10_marshaled = NULL;
	____accountName10_marshaled = il2cpp_codegen_marshal_string(___accountName10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Configure)(____self0_marshaled, static_cast<int32_t>(___useGameSignIn1), ____webClientId2_marshaled, static_cast<int32_t>(___requestAuthCode3), static_cast<int32_t>(___forceTokenRefresh4), static_cast<int32_t>(___requestEmail5), static_cast<int32_t>(___requestIdToken6), static_cast<int32_t>(___hidePopups7), ____additionalScopes8_marshaled, ___scopeCount9, ____accountName10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled, static_cast<int32_t>(___useGameSignIn1), ____webClientId2_marshaled, static_cast<int32_t>(___requestAuthCode3), static_cast<int32_t>(___forceTokenRefresh4), static_cast<int32_t>(___requestEmail5), static_cast<int32_t>(___requestIdToken6), static_cast<int32_t>(___hidePopups7), ____additionalScopes8_marshaled, ___scopeCount9, ____accountName10_marshaled);
	#endif

	// Marshaling cleanup of parameter '___webClientId2' native representation
	il2cpp_codegen_marshal_free(____webClientId2_marshaled);
	____webClientId2_marshaled = NULL;

	// Marshaling cleanup of parameter '___additionalScopes8' native representation
	if (____additionalScopes8_marshaled != NULL)
	{
		const il2cpp_array_size_t ____additionalScopes8_marshaled_CleanupLoopCount = (___additionalScopes8 != NULL) ? (___additionalScopes8)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____additionalScopes8_marshaled)[i]);
			(____additionalScopes8_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____additionalScopes8_marshaled);
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___accountName10' native representation
	il2cpp_codegen_marshal_free(____accountName10_marshaled);
	____accountName10_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignIn", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignIn)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignInSilently", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignInSilently)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Signout", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Signout)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Disconnect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Disconnect)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_DisposeFuture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_DisposeFuture)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Pending", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Pending)(____self0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Result", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Result)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Status", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Status)(____self0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetServerAuthCode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetServerAuthCode)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetDisplayName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetDisplayName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetEmail", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetEmail)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetFamilyName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetFamilyName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetGivenName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetGivenName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetIdToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetIdToken)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetImageUrl", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetImageUrl)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetUserId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetUserId)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4 (const RuntimeMethod* method) 
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
		// UnityEngine.AndroidJavaClass jc = new UnityEngine.AndroidJavaClass(
		//   "com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// return jc.GetStatic<UnityEngine.AndroidJavaObject>("currentActivity")
		//          .GetRawObject();
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_1, NULL);
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
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal NativeFuture(IntPtr ptr) : base(ptr) {
		intptr_t L_0 = ___ptr0;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.NativeFuture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture_Dispose_m86BBFC01575F8083B39FAEFDD779267FE212C669 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_DisposeFuture(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9(L_0, NULL);
		// base.Dispose();
		BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Google.Impl.NativeFuture::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFuture_get_Pending_mF70898B348D8019990176CA0B7D46936E7EDA741 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return GoogleSignInImpl.GoogleSignIn_Pending(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435(L_0, NULL);
		return L_1;
	}
}
// Google.GoogleSignInUser Google.Impl.NativeFuture::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* NativeFuture_get_Result_m9A5DF2B826B14BC6D847C0CB12ACC2F5549B1A2A (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* V_1 = NULL;
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// IntPtr ptr = GoogleSignInImpl.GoogleSignIn_Result(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB(L_0, NULL);
		V_0 = L_1;
		// if (ptr != IntPtr.Zero) {
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_00ff;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_5 = (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A(L_5, NULL);
		V_1 = L_5;
		// GoogleSignInUser user = new GoogleSignInUser();
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_6 = (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)il2cpp_codegen_object_new(GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91(L_6, NULL);
		V_2 = L_6;
		// HandleRef userPtr = new HandleRef(user, ptr);
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_7 = V_1;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_8 = V_2;
		intptr_t L_9 = V_0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
		memset((&L_10), 0, sizeof(L_10));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___userPtr_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_7->___userPtr_0))->____wrapper_0), (void*)NULL);
		// user.DisplayName = OutParamsToString((out_string, out_size) =>
		//         GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                                      out_string,
		//                                                      out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_11 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_12 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_13 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_13, NULL);
		NullCheck(L_11);
		GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline(L_11, L_14, NULL);
		// user.Email = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                            out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_15 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_16 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_17 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var), NULL);
		String_t* L_18;
		L_18 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_17, NULL);
		NullCheck(L_15);
		GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline(L_15, L_18, NULL);
		// user.FamilyName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                                 out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_19 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_20 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_21 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var), NULL);
		String_t* L_22;
		L_22 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_21, NULL);
		NullCheck(L_19);
		GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline(L_19, L_22, NULL);
		// user.GivenName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                                out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_23 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_24 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_25 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var), NULL);
		String_t* L_26;
		L_26 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_25, NULL);
		NullCheck(L_23);
		GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline(L_23, L_26, NULL);
		// user.IdToken = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                              out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_27 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_28 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_29 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var), NULL);
		String_t* L_30;
		L_30 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_29, NULL);
		NullCheck(L_27);
		GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline(L_27, L_30, NULL);
		// user.AuthCode = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                     out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_31 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_32 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_33 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var), NULL);
		String_t* L_34;
		L_34 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_33, NULL);
		NullCheck(L_31);
		GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline(L_31, L_34, NULL);
		// string url = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                               out_size));
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_35 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_36 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_36, L_35, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var), NULL);
		String_t* L_37;
		L_37 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_36, NULL);
		V_3 = L_37;
		// if (url.Length > 0) {
		String_t* L_38 = V_3;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		// user.ImageUrl = new System.Uri(url);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_40 = V_2;
		String_t* L_41 = V_3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_42 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_42, L_41, NULL);
		NullCheck(L_40);
		GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline(L_40, L_42, NULL);
	}

IL_00e6:
	{
		// user.UserId = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                             out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_43 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_44 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_45 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_45, NULL);
		NullCheck(L_43);
		GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline(L_43, L_46, NULL);
		// return user;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_47 = V_2;
		return L_47;
	}

IL_00ff:
	{
		// return null;
		return (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)NULL;
	}
}
// Google.GoogleSignInStatusCode Google.Impl.NativeFuture::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFuture_get_Status_mC727AD36BDCDD64E381FA4991E58694ABA9561F4 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return (GoogleSignInStatusCode)GoogleSignInImpl.GoogleSignIn_Status(
		//   SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		int32_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C(L_0, NULL);
		return (int32_t)(L_1);
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
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                              out_string,
		//                                              out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__1(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                        out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__2(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                             out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__3(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                            out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__4(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                          out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__5(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                 out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__6(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                           out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__7(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                         out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43(L_0, L_1, L_2, NULL);
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
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// GameObject obj = new GameObject("GoogleSignInHelperObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91, NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// instance = obj.AddComponent<SignInHelperObject>();
		NullCheck(L_2);
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_3;
		L_3 = GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF(L_2, GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		goto IL_002d;
	}

IL_0023:
	{
		// instance = new SignInHelperObject();
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_4 = (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B*)il2cpp_codegen_object_new(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3(L_4, NULL);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
	}

IL_002d:
	{
		// return instance;
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_5 = ((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4;
		return L_5;
	}
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_textInfo; }
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_0 = __this->___m_textInfo_152;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_havePropertiesChanged; }
		bool L_0 = __this->___m_havePropertiesChanged_153;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
