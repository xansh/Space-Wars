﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>
struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62;
// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>
struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>
struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem,System.String>
struct Func_2_t765DC2C04C049C22BF49AADA0025E9D23FB460DF;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct IEnumerable_1_t277854C86F968682A3F507F6BD01BBE84763F770;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_t0AB3195FFCEC794101AB7A254B71D522FAE2B007;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.UsageHint>
struct List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_tF74283A2A798B911F091451A3417BC2B7313FF9A;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045;
// UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo[]
struct OnScreenDeviceInfoU5BU5D_tAA013C12ACD7B16FEB72408E6098E2C38DE06127;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.InputSystem.LowLevel.IInputRuntime
struct IInputRuntime_t09A0B25ED98E14F02D9120A3A0AED398DA01045B;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTypeInfo
struct MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.InputSystem.OnScreen.OnScreenControl
struct OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB;
// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1ACE8E7C607BD39B482048B25FB890B2A76E8E8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCCB6162CAF7CD0B37D2A14E8482AA5AE8E97A415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputRuntime_t09A0B25ED98E14F02D9120A3A0AED398DA01045B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6A2A387BC9FF3611BBF99C11B1CC0549CD9C67A5;
IL2CPP_EXTERN_C String_t* _stringLiteral6D17034B21712EB7B5957FBBF819632D04221839;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OnScreenControl_SendValueToControl_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m58D2BBAD2EA81317CB370CDD5EA5A0B00F995612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OnScreenControl_SendValueToControl_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF3607B45C44D4F2A70E0BE6B157AF4EA50AE00A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringHelpers_MakeUniqueName_TisControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_m2C4625D6F13B01BE0F62F7444BF458B8513931C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringHelpers_MakeUniqueName_TisRuntimeObject_m76627A6F9E96DEE0D67AE0ED8ED357CC63B97B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>
struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>
struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>
struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____items_1)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____items_1)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.InputSystem.LowLevel.InputRuntime
struct InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6  : public RuntimeObject
{
public:

public:
};

struct InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_StaticFields
{
public:
	// UnityEngine.InputSystem.LowLevel.IInputRuntime UnityEngine.InputSystem.LowLevel.InputRuntime::s_Instance
	RuntimeObject* ___s_Instance_0;
	// System.Double UnityEngine.InputSystem.LowLevel.InputRuntime::s_CurrentTimeOffsetToRealtimeSinceStartup
	double ___s_CurrentTimeOffsetToRealtimeSinceStartup_1;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_StaticFields, ___s_Instance_0)); }
	inline RuntimeObject* get_s_Instance_0() const { return ___s_Instance_0; }
	inline RuntimeObject** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(RuntimeObject* value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CurrentTimeOffsetToRealtimeSinceStartup_1() { return static_cast<int32_t>(offsetof(InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_StaticFields, ___s_CurrentTimeOffsetToRealtimeSinceStartup_1)); }
	inline double get_s_CurrentTimeOffsetToRealtimeSinceStartup_1() const { return ___s_CurrentTimeOffsetToRealtimeSinceStartup_1; }
	inline double* get_address_of_s_CurrentTimeOffsetToRealtimeSinceStartup_1() { return &___s_CurrentTimeOffsetToRealtimeSinceStartup_1; }
	inline void set_s_CurrentTimeOffsetToRealtimeSinceStartup_1(double value)
	{
		___s_CurrentTimeOffsetToRealtimeSinceStartup_1 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct NativeArrayUnsafeUtility_tABFEC25CB8DB147F19348E853EE24669F9682C83  : public RuntimeObject
{
public:

public:
};


// UnityEngine.NoAllocHelpers
struct NoAllocHelpers_tDF63D8493CAD8DE137A5560CDAF336DA0A99D0D1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArrayExtensions
struct ReadOnlyArrayExtensions_t6E2CBE584AC4394D840AD2838513197C877924C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Resources
struct Resources_t90EC380141241F7E4B284EC353EF4F0386218419  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_tC052103DB62650080244B150AC8C2DDC5C0CD8AB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UI.SetPropertyUtility
struct SetPropertyUtility_tA0FD167699990D8AFDA1284FCCFEA03357AD73BB  : public RuntimeObject
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


// UnityEngine.InputSystem.Utilities.StringHelpers
struct StringHelpers_t1080693C6665DF24884FF7288365BE2714762739  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
struct SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6  : public RuntimeObject
{
public:

public:
};

struct SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_IntegratedDescriptors
	List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 * ___s_IntegratedDescriptors_0;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_StandaloneDescriptors
	List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E * ___s_StandaloneDescriptors_1;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_DeprecatedDescriptors
	List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B * ___s_DeprecatedDescriptors_2;

public:
	inline static int32_t get_offset_of_s_IntegratedDescriptors_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields, ___s_IntegratedDescriptors_0)); }
	inline List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 * get_s_IntegratedDescriptors_0() const { return ___s_IntegratedDescriptors_0; }
	inline List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 ** get_address_of_s_IntegratedDescriptors_0() { return &___s_IntegratedDescriptors_0; }
	inline void set_s_IntegratedDescriptors_0(List_1_t13B7F19BE124BF950C29583D073B7D2174DCA122 * value)
	{
		___s_IntegratedDescriptors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IntegratedDescriptors_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandaloneDescriptors_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields, ___s_StandaloneDescriptors_1)); }
	inline List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E * get_s_StandaloneDescriptors_1() const { return ___s_StandaloneDescriptors_1; }
	inline List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E ** get_address_of_s_StandaloneDescriptors_1() { return &___s_StandaloneDescriptors_1; }
	inline void set_s_StandaloneDescriptors_1(List_1_t4DCA5C48F3390AC8CD79C7AD8D0963D5DAE5CF2E * value)
	{
		___s_StandaloneDescriptors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandaloneDescriptors_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeprecatedDescriptors_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_StaticFields, ___s_DeprecatedDescriptors_2)); }
	inline List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B * get_s_DeprecatedDescriptors_2() const { return ___s_DeprecatedDescriptors_2; }
	inline List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B ** get_address_of_s_DeprecatedDescriptors_2() { return &___s_DeprecatedDescriptors_2; }
	inline void set_s_DeprecatedDescriptors_2(List_1_t32E50BD66297C6541AEA401E1C13D4EC530CC56B * value)
	{
		___s_DeprecatedDescriptors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeprecatedDescriptors_2), (void*)value);
	}
};


// System.ThrowHelper
struct ThrowHelper_t396052A7B504E698E9DF1B91F7A52F4D2EA47246  : public RuntimeObject
{
public:

public:
};


// System.Tuple
struct Tuple_t04ED51FC9876E74A8E2D69E20EC4D89DAF554A9F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.InputSystem.Utilities.TypeHelpers
struct TypeHelpers_t9F29E39C92189A7E92225561C1D1556C8E46CA85  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
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

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>
struct AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint64_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___data_1)); }
	inline uint64_t get_data_1() const { return ___data_1; }
	inline uint64_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint64_t value)
	{
		___data_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2, ___firstValue_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2, ___additionalValues_2)); }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD, ___firstValue_1)); }
	inline Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD, ___additionalValues_2)); }
	inline Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295, ___firstValue_1)); }
	inline InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t0AB3195FFCEC794101AB7A254B71D522FAE2B007 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tF74283A2A798B911F091451A3417BC2B7313FF9A* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5, ___firstValue_1)); }
	inline InputProcessor_1_t0AB3195FFCEC794101AB7A254B71D522FAE2B007 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t0AB3195FFCEC794101AB7A254B71D522FAE2B007 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t0AB3195FFCEC794101AB7A254B71D522FAE2B007 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tF74283A2A798B911F091451A3417BC2B7313FF9A* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tF74283A2A798B911F091451A3417BC2B7313FF9A** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tF74283A2A798B911F091451A3417BC2B7313FF9A* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Array_0)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_Array_0() const { return ___m_Array_0; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_Array_0)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get_m_Array_0() const { return ___m_Array_0; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_Array_0)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get_m_Array_0() const { return ___m_Array_0; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975, ___m_Array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_Array_0() const { return ___m_Array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A 
{
public:
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* ___m_DeviceRequirements_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_1() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_BindingGroup_1)); }
	inline String_t* get_m_BindingGroup_1() const { return ___m_BindingGroup_1; }
	inline String_t** get_address_of_m_BindingGroup_1() { return &___m_BindingGroup_1; }
	inline void set_m_BindingGroup_1(String_t* value)
	{
		___m_BindingGroup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroup_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_2() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_DeviceRequirements_2)); }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* get_m_DeviceRequirements_2() const { return ___m_DeviceRequirements_2; }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045** get_address_of_m_DeviceRequirements_2() { return &___m_DeviceRequirements_2; }
	inline void set_m_DeviceRequirements_2(DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* value)
	{
		___m_DeviceRequirements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRequirements_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com* ___m_DeviceRequirements_2;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D, ___m_EventPtr_0)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * value)
	{
		___m_EventPtr_0 = value;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA, ___table_0)); }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA_marshaled_pinvoke
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA_marshaled_com
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___table_0;
};

// UnityEngine.UILineInfo
struct UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
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


// UnityEngine.InputSystem.XR.UsageHint
struct UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB 
{
public:
	// System.String UnityEngine.InputSystem.XR.UsageHint::content
	String_t* ___content_0;

public:
	inline static int32_t get_offset_of_content_0() { return static_cast<int32_t>(offsetof(UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB, ___content_0)); }
	inline String_t* get_content_0() const { return ___content_0; }
	inline String_t** get_address_of_content_0() { return &___content_0; }
	inline void set_content_0(String_t* value)
	{
		___content_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.XR.UsageHint
struct UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB_marshaled_pinvoke
{
	char* ___content_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.XR.UsageHint
struct UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB_marshaled_com
{
	Il2CppChar* ___content_0;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 
{
public:
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndex
	int32_t ___m_BindingIndex_2;

public:
	inline static int32_t get_offset_of_m_ActionMap_0() { return static_cast<int32_t>(offsetof(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1, ___m_ActionMap_0)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_0() const { return ___m_ActionMap_0; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_0() { return &___m_ActionMap_0; }
	inline void set_m_ActionMap_0(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1, ___m_Action_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingIndex_2() { return static_cast<int32_t>(offsetof(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1, ___m_BindingIndex_2)); }
	inline int32_t get_m_BindingIndex_2() const { return ___m_BindingIndex_2; }
	inline int32_t* get_address_of_m_BindingIndex_2() { return &___m_BindingIndex_2; }
	inline void set_m_BindingIndex_2(int32_t value)
	{
		___m_BindingIndex_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1_marshaled_pinvoke
{
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	int32_t ___m_BindingIndex_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1_marshaled_com
{
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	int32_t ___m_BindingIndex_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * ___mapIndices_16;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionStates_7)); }
	inline TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___bindingStates_8)); }
	inline BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___interactionStates_9)); }
	inline InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_mapIndices_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___mapIndices_16)); }
	inline ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * get_mapIndices_16() const { return ___mapIndices_16; }
	inline ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 ** get_address_of_mapIndices_16() { return &___mapIndices_16; }
	inline void set_mapIndices_16(ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * value)
	{
		___mapIndices_16 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67, ___table_0)); }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_pinvoke
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_com
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutTypes_1)); }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutStrings_2)); }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutBuilders_3)); }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___baseLayoutTable_4)); }
	inline Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutOverrides_5)); }
	inline Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutOverrideNames_6)); }
	inline HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_7() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutMatchers_7)); }
	inline List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * get_layoutMatchers_7() const { return ___layoutMatchers_7; }
	inline List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 ** get_address_of_layoutMatchers_7() { return &___layoutMatchers_7; }
	inline void set_layoutMatchers_7(List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * value)
	{
		___layoutMatchers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B_marshaled_pinvoke
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B_marshaled_com
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;
};

// UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand/<nameBuffer>e__FixedBuffer
struct U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand/<nameBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290__padding[256];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer
struct U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58__padding[256];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer
struct U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4__padding[512];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer
struct U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8__padding[512];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB__padding[1024];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___data_1)); }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  get_data_1() const { return ___data_1; }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723, ___firstValue_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___firstValue_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___key_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_key_0() const { return ___key_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyValuePair_2_tB9AD9D8785EE40F111BF97556EB835143F4A81AF 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB9AD9D8785EE40F111BF97556EB835143F4A81AF, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB9AD9D8785EE40F111BF97556EB835143F4A81AF, ___value_1)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_value_1() const { return ___value_1; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___value_1), (void*)NULL);
		#endif
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.InputSystem.XR.Bone
struct Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 
{
public:
	// System.UInt32 UnityEngine.InputSystem.XR.Bone::<parentBoneIndex>k__BackingField
	uint32_t ___U3CparentBoneIndexU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Bone::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Bone::<rotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CparentBoneIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56, ___U3CparentBoneIndexU3Ek__BackingField_0)); }
	inline uint32_t get_U3CparentBoneIndexU3Ek__BackingField_0() const { return ___U3CparentBoneIndexU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CparentBoneIndexU3Ek__BackingField_0() { return &___U3CparentBoneIndexU3Ek__BackingField_0; }
	inline void set_U3CparentBoneIndexU3Ek__BackingField_0(uint32_t value)
	{
		___U3CparentBoneIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56, ___U3CpositionU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_1() const { return ___U3CpositionU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_1() { return &___U3CpositionU3Ek__BackingField_1; }
	inline void set_U3CpositionU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56, ___U3CrotationU3Ek__BackingField_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrotationU3Ek__BackingField_2() const { return ___U3CrotationU3Ek__BackingField_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrotationU3Ek__BackingField_2() { return &___U3CrotationU3Ek__BackingField_2; }
	inline void set_U3CrotationU3Ek__BackingField_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrotationU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.XR.Eyes
struct Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 
{
public:
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Eyes::<leftEyePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CleftEyePositionU3Ek__BackingField_0;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Eyes::<leftEyeRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CleftEyeRotationU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Eyes::<rightEyePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CrightEyePositionU3Ek__BackingField_2;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Eyes::<rightEyeRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrightEyeRotationU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Eyes::<fixationPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CfixationPointU3Ek__BackingField_4;
	// System.Single UnityEngine.InputSystem.XR.Eyes::<leftEyeOpenAmount>k__BackingField
	float ___U3CleftEyeOpenAmountU3Ek__BackingField_5;
	// System.Single UnityEngine.InputSystem.XR.Eyes::<rightEyeOpenAmount>k__BackingField
	float ___U3CrightEyeOpenAmountU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CleftEyePositionU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CleftEyePositionU3Ek__BackingField_0() const { return ___U3CleftEyePositionU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CleftEyePositionU3Ek__BackingField_0() { return &___U3CleftEyePositionU3Ek__BackingField_0; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CleftEyePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CleftEyeRotationU3Ek__BackingField_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CleftEyeRotationU3Ek__BackingField_1() const { return ___U3CleftEyeRotationU3Ek__BackingField_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CleftEyeRotationU3Ek__BackingField_1() { return &___U3CleftEyeRotationU3Ek__BackingField_1; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CrightEyePositionU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CrightEyePositionU3Ek__BackingField_2() const { return ___U3CrightEyePositionU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CrightEyePositionU3Ek__BackingField_2() { return &___U3CrightEyePositionU3Ek__BackingField_2; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CrightEyePositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CrightEyeRotationU3Ek__BackingField_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrightEyeRotationU3Ek__BackingField_3() const { return ___U3CrightEyeRotationU3Ek__BackingField_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrightEyeRotationU3Ek__BackingField_3() { return &___U3CrightEyeRotationU3Ek__BackingField_3; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CfixationPointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CfixationPointU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CfixationPointU3Ek__BackingField_4() const { return ___U3CfixationPointU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CfixationPointU3Ek__BackingField_4() { return &___U3CfixationPointU3Ek__BackingField_4; }
	inline void set_U3CfixationPointU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CfixationPointU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CleftEyeOpenAmountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CleftEyeOpenAmountU3Ek__BackingField_5)); }
	inline float get_U3CleftEyeOpenAmountU3Ek__BackingField_5() const { return ___U3CleftEyeOpenAmountU3Ek__BackingField_5; }
	inline float* get_address_of_U3CleftEyeOpenAmountU3Ek__BackingField_5() { return &___U3CleftEyeOpenAmountU3Ek__BackingField_5; }
	inline void set_U3CleftEyeOpenAmountU3Ek__BackingField_5(float value)
	{
		___U3CleftEyeOpenAmountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrightEyeOpenAmountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CrightEyeOpenAmountU3Ek__BackingField_6)); }
	inline float get_U3CrightEyeOpenAmountU3Ek__BackingField_6() const { return ___U3CrightEyeOpenAmountU3Ek__BackingField_6; }
	inline float* get_address_of_U3CrightEyeOpenAmountU3Ek__BackingField_6() { return &___U3CrightEyeOpenAmountU3Ek__BackingField_6; }
	inline void set_U3CrightEyeOpenAmountU3Ek__BackingField_6(float value)
	{
		___U3CrightEyeOpenAmountU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.XR.FeatureType
struct FeatureType_t97574B65C0A450C752C3AE6317A88D326AA6202C 
{
public:
	// System.Int32 UnityEngine.InputSystem.XR.FeatureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FeatureType_t97574B65C0A450C752C3AE6317A88D326AA6202C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t10B92A32A4518A0D9284B677640A971AB3C81BE4 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t10B92A32A4518A0D9284B677640A971AB3C81BE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputDeviceCommand
struct InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputDeviceCommand::type
					FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___type_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___type_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_5_OffsetPadding[4];
					// System.Int32 UnityEngine.InputSystem.LowLevel.InputDeviceCommand::sizeInBytes
					int32_t ___sizeInBytes_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___sizeInBytes_5_OffsetPadding_forAlignmentOnly[4];
					int32_t ___sizeInBytes_5_forAlignmentOnly;
				};
			};
		};
		uint8_t InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6__padding[8];
	};

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6, ___type_4)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_type_4() const { return ___type_4; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_sizeInBytes_5() { return static_cast<int32_t>(offsetof(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6, ___sizeInBytes_5)); }
	inline int32_t get_sizeInBytes_5() const { return ___sizeInBytes_5; }
	inline int32_t* get_address_of_sizeInBytes_5() { return &___sizeInBytes_5; }
	inline void set_sizeInBytes_5(int32_t value)
	{
		___sizeInBytes_5 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kProductKey_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kVersionKey_5)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_pinvoke
{
	KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5 * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_com
{
	KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5 * ___m_Patterns_0;
};

// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A  : public RuntimeObject
{
public:

public:
};

struct InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA  ___s_Processors_0;

public:
	inline static int32_t get_offset_of_s_Processors_0() { return static_cast<int32_t>(offsetof(InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields, ___s_Processors_0)); }
	inline TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA  get_s_Processors_0() const { return ___s_Processors_0; }
	inline TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA * get_address_of_s_Processors_0() { return &___s_Processors_0; }
	inline void set_s_Processors_0(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA  value)
	{
		___s_Processors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Processors_0))->___table_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_21;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_22;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_23;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CformatU3Ek__BackingField_21)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_21() const { return ___U3CformatU3Ek__BackingField_21; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_21() { return &___U3CformatU3Ek__BackingField_21; }
	inline void set_U3CformatU3Ek__BackingField_21(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbyteOffsetU3Ek__BackingField_22)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_22() const { return ___U3CbyteOffsetU3Ek__BackingField_22; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_22() { return &___U3CbyteOffsetU3Ek__BackingField_22; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_22(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbitOffsetU3Ek__BackingField_23)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_23() const { return ___U3CbitOffsetU3Ek__BackingField_23; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_23() { return &___U3CbitOffsetU3Ek__BackingField_23; }
	inline void set_U3CbitOffsetU3Ek__BackingField_23(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CsizeInBitsU3Ek__BackingField_24)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_24() const { return ___U3CsizeInBitsU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_24() { return &___U3CsizeInBitsU3Ek__BackingField_24; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_24(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_24 = value;
	}
};

struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSBit_3;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatInt_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUInt_5;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatShort_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUShort_7;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatByte_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSByte_9;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatLong_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatULong_11;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatFloat_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatDouble_13;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3_15;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatQuaternion_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Short_17;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Short_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Byte_19;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Byte_20;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatBit_2)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_3() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSBit_3)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSBit_3() const { return ___FormatSBit_3; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSBit_3() { return &___FormatSBit_3; }
	inline void set_FormatSBit_3(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSBit_3 = value;
	}

	inline static int32_t get_offset_of_FormatInt_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatInt_4)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatInt_4() const { return ___FormatInt_4; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatInt_4() { return &___FormatInt_4; }
	inline void set_FormatInt_4(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatInt_4 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_5() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUInt_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUInt_5() const { return ___FormatUInt_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUInt_5() { return &___FormatUInt_5; }
	inline void set_FormatUInt_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUInt_5 = value;
	}

	inline static int32_t get_offset_of_FormatShort_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatShort_6)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatShort_6() const { return ___FormatShort_6; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatShort_6() { return &___FormatShort_6; }
	inline void set_FormatShort_6(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatShort_6 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_7() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUShort_7)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUShort_7() const { return ___FormatUShort_7; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUShort_7() { return &___FormatUShort_7; }
	inline void set_FormatUShort_7(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUShort_7 = value;
	}

	inline static int32_t get_offset_of_FormatByte_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatByte_8)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatByte_8() const { return ___FormatByte_8; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatByte_8() { return &___FormatByte_8; }
	inline void set_FormatByte_8(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatByte_8 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_9() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSByte_9)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSByte_9() const { return ___FormatSByte_9; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSByte_9() { return &___FormatSByte_9; }
	inline void set_FormatSByte_9(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSByte_9 = value;
	}

	inline static int32_t get_offset_of_FormatLong_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatLong_10)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatLong_10() const { return ___FormatLong_10; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatLong_10() { return &___FormatLong_10; }
	inline void set_FormatLong_10(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatLong_10 = value;
	}

	inline static int32_t get_offset_of_FormatULong_11() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatULong_11)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatULong_11() const { return ___FormatULong_11; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatULong_11() { return &___FormatULong_11; }
	inline void set_FormatULong_11(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatULong_11 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatFloat_12)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatFloat_12() const { return ___FormatFloat_12; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatFloat_12() { return &___FormatFloat_12; }
	inline void set_FormatFloat_12(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatFloat_12 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_13() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatDouble_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatDouble_13() const { return ___FormatDouble_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatDouble_13() { return &___FormatDouble_13; }
	inline void set_FormatDouble_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatDouble_13 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2_14)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2_14() const { return ___FormatVector2_14; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2_14() { return &___FormatVector2_14; }
	inline void set_FormatVector2_14(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2_14 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_15() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3_15)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3_15() const { return ___FormatVector3_15; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3_15() { return &___FormatVector3_15; }
	inline void set_FormatVector3_15(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3_15 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatQuaternion_16)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatQuaternion_16() const { return ___FormatQuaternion_16; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatQuaternion_16() { return &___FormatQuaternion_16; }
	inline void set_FormatQuaternion_16(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatQuaternion_16 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_17() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Short_17)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Short_17() const { return ___FormatVector2Short_17; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Short_17() { return &___FormatVector2Short_17; }
	inline void set_FormatVector2Short_17(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Short_17 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Short_18)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Short_18() const { return ___FormatVector3Short_18; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Short_18() { return &___FormatVector3Short_18; }
	inline void set_FormatVector3Short_18(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Short_18 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_19() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Byte_19)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Byte_19() const { return ___FormatVector2Byte_19; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Byte_19() { return &___FormatVector2Byte_19; }
	inline void set_FormatVector2Byte_19(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Byte_19 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Byte_20)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Byte_20() const { return ___FormatVector3Byte_20; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Byte_20() { return &___FormatVector3Byte_20; }
	inline void set_FormatVector3Byte_20(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Byte_20 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.MeshUpdateFlags
struct MeshUpdateFlags_t6CC8A3E19F8A286528978810AB6FFAEEB6A125B5 
{
public:
	// System.Int32 UnityEngine.Rendering.MeshUpdateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshUpdateFlags_t6CC8A3E19F8A286528978810AB6FFAEEB6A125B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.NameAndParameters::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Utilities.NameAndParameters::<parameters>k__BackingField
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4, ___U3CparametersU3Ek__BackingField_1)); }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  get_U3CparametersU3Ek__BackingField_1() const { return ___U3CparametersU3Ek__BackingField_1; }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE * get_address_of_U3CparametersU3Ek__BackingField_1() { return &___U3CparametersU3Ek__BackingField_1; }
	inline void set_U3CparametersU3Ek__BackingField_1(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  value)
	{
		___U3CparametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_1;
};

// UnityEngineInternal.Input.NativeInputEventType
struct NativeInputEventType_tB3CDF49B057A87E6CBA3EB8C551A971D2B70C9E9 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputEventType_tB3CDF49B057A87E6CBA3EB8C551A971D2B70C9E9, ___value___2)); }
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

// System.Reflection.PInfo
struct PInfo_tA2A7DDE9FEBB5094D5B84BD73638EDAFC2689635 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInfo_tA2A7DDE9FEBB5094D5B84BD73638EDAFC2689635, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// System.Reflection.PropertyAttributes
struct PropertyAttributes_tD4697434E7DA092DDE18E7D5863B2BC2EA5CD3C1 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyAttributes_tD4697434E7DA092DDE18E7D5863B2BC2EA5CD3C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_tBFADAB74EBBB380C7FF1B5004FDD5A39447574B5  : public PropertyInfo_t
{
public:

public:
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


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.TouchState
struct TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.TouchState::touchId
					int32_t ___touchId_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___touchId_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_2_OffsetPadding[4];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::position
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_2_OffsetPadding_forAlignmentOnly[4];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___delta_3_OffsetPadding[12];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::delta
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___delta_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___delta_3_OffsetPadding_forAlignmentOnly[12];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___delta_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pressure_4_OffsetPadding[20];
					// System.Single UnityEngine.InputSystem.LowLevel.TouchState::pressure
					float ___pressure_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pressure_4_OffsetPadding_forAlignmentOnly[20];
					float ___pressure_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___radius_5_OffsetPadding[24];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::radius
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___radius_5_OffsetPadding_forAlignmentOnly[24];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___phaseId_6_OffsetPadding[32];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::phaseId
					uint8_t ___phaseId_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___phaseId_6_OffsetPadding_forAlignmentOnly[32];
					uint8_t ___phaseId_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___tapCount_7_OffsetPadding[33];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::tapCount
					uint8_t ___tapCount_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___tapCount_7_OffsetPadding_forAlignmentOnly[33];
					uint8_t ___tapCount_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___displayIndex_8_OffsetPadding[34];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::displayIndex
					uint8_t ___displayIndex_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___displayIndex_8_OffsetPadding_forAlignmentOnly[34];
					uint8_t ___displayIndex_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___flags_9_OffsetPadding[35];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::flags
					uint8_t ___flags_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___flags_9_OffsetPadding_forAlignmentOnly[35];
					uint8_t ___flags_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___padding_10_OffsetPadding[36];
					// System.Int32 UnityEngine.InputSystem.LowLevel.TouchState::padding
					int32_t ___padding_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___padding_10_OffsetPadding_forAlignmentOnly[36];
					int32_t ___padding_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startTime_11_OffsetPadding[40];
					// System.Double UnityEngine.InputSystem.LowLevel.TouchState::startTime
					double ___startTime_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startTime_11_OffsetPadding_forAlignmentOnly[40];
					double ___startTime_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startPosition_12_OffsetPadding[48];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::startPosition
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startPosition_12_OffsetPadding_forAlignmentOnly[48];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition_12_forAlignmentOnly;
				};
			};
		};
		uint8_t TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F__padding[56];
	};

public:
	inline static int32_t get_offset_of_touchId_1() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___touchId_1)); }
	inline int32_t get_touchId_1() const { return ___touchId_1; }
	inline int32_t* get_address_of_touchId_1() { return &___touchId_1; }
	inline void set_touchId_1(int32_t value)
	{
		___touchId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_position_2() const { return ___position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_delta_3() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___delta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_delta_3() const { return ___delta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_delta_3() { return &___delta_3; }
	inline void set_delta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___delta_3 = value;
	}

	inline static int32_t get_offset_of_pressure_4() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___pressure_4)); }
	inline float get_pressure_4() const { return ___pressure_4; }
	inline float* get_address_of_pressure_4() { return &___pressure_4; }
	inline void set_pressure_4(float value)
	{
		___pressure_4 = value;
	}

	inline static int32_t get_offset_of_radius_5() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___radius_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_radius_5() const { return ___radius_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_radius_5() { return &___radius_5; }
	inline void set_radius_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___radius_5 = value;
	}

	inline static int32_t get_offset_of_phaseId_6() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___phaseId_6)); }
	inline uint8_t get_phaseId_6() const { return ___phaseId_6; }
	inline uint8_t* get_address_of_phaseId_6() { return &___phaseId_6; }
	inline void set_phaseId_6(uint8_t value)
	{
		___phaseId_6 = value;
	}

	inline static int32_t get_offset_of_tapCount_7() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___tapCount_7)); }
	inline uint8_t get_tapCount_7() const { return ___tapCount_7; }
	inline uint8_t* get_address_of_tapCount_7() { return &___tapCount_7; }
	inline void set_tapCount_7(uint8_t value)
	{
		___tapCount_7 = value;
	}

	inline static int32_t get_offset_of_displayIndex_8() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___displayIndex_8)); }
	inline uint8_t get_displayIndex_8() const { return ___displayIndex_8; }
	inline uint8_t* get_address_of_displayIndex_8() { return &___displayIndex_8; }
	inline void set_displayIndex_8(uint8_t value)
	{
		___displayIndex_8 = value;
	}

	inline static int32_t get_offset_of_flags_9() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___flags_9)); }
	inline uint8_t get_flags_9() const { return ___flags_9; }
	inline uint8_t* get_address_of_flags_9() { return &___flags_9; }
	inline void set_flags_9(uint8_t value)
	{
		___flags_9 = value;
	}

	inline static int32_t get_offset_of_padding_10() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___padding_10)); }
	inline int32_t get_padding_10() const { return ___padding_10; }
	inline int32_t* get_address_of_padding_10() { return &___padding_10; }
	inline void set_padding_10(int32_t value)
	{
		___padding_10 = value;
	}

	inline static int32_t get_offset_of_startTime_11() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___startTime_11)); }
	inline double get_startTime_11() const { return ___startTime_11; }
	inline double* get_address_of_startTime_11() { return &___startTime_11; }
	inline void set_startTime_11(double value)
	{
		___startTime_11 = value;
	}

	inline static int32_t get_offset_of_startPosition_12() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___startPosition_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startPosition_12() const { return ___startPosition_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startPosition_12() { return &___startPosition_12; }
	inline void set_startPosition_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startPosition_12 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UICharInfo
struct UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___cursorPos_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Tilemaps.GridInformation/GridInformationKey
struct GridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941 
{
public:
	// UnityEngine.Vector3Int UnityEngine.Tilemaps.GridInformation/GridInformationKey::position
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position_0;
	// System.String UnityEngine.Tilemaps.GridInformation/GridInformationKey::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(GridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941, ___position_0)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_position_0() const { return ___position_0; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(GridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.GridInformation/GridInformationKey
struct GridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941_marshaled_pinvoke
{
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position_0;
	char* ___name_1;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.GridInformation/GridInformationKey
struct GridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941_marshaled_com
{
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position_0;
	Il2CppChar* ___name_1;
};

// UnityEngine.InputSystem.HID.HID/HIDCollectionType
struct HIDCollectionType_t4FB314AA63C1BEA7465AB78E897C9B1A035B86D6 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HIDCollectionType_t4FB314AA63C1BEA7465AB78E897C9B1A035B86D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/HIDElementFlags
struct HIDElementFlags_t4F1C163FAC6DA4246D60567DA2C886BE2B512669 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HIDElementFlags_t4F1C163FAC6DA4246D60567DA2C886BE2B512669, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/HIDReportType
struct HIDReportType_tBA3AF88D5F56C5A42F1D32709EB4FDE73A991E84 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HIDReportType_tBA3AF88D5F56C5A42F1D32709EB4FDE73A991E84, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/UsagePage
struct UsagePage_t32C4EBF697A38F5575DA5F31BACDCA10550B3509 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/UsagePage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UsagePage_t32C4EBF697A38F5575DA5F31BACDCA10550B3509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  ___m_ControlScheme_2;

public:
	inline static int32_t get_offset_of_m_Asset_0() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214, ___m_Asset_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_0() const { return ___m_Asset_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_0() { return &___m_Asset_0; }
	inline void set_m_Asset_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemeIndex_1() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214, ___m_ControlSchemeIndex_1)); }
	inline int32_t get_m_ControlSchemeIndex_1() const { return ___m_ControlSchemeIndex_1; }
	inline int32_t* get_address_of_m_ControlSchemeIndex_1() { return &___m_ControlSchemeIndex_1; }
	inline void set_m_ControlSchemeIndex_1(int32_t value)
	{
		___m_ControlSchemeIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_ControlScheme_2() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214, ___m_ControlScheme_2)); }
	inline InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  get_m_ControlScheme_2() const { return ___m_ControlScheme_2; }
	inline InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A * get_address_of_m_ControlScheme_2() { return &___m_ControlScheme_2; }
	inline void set_m_ControlScheme_2(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  value)
	{
		___m_ControlScheme_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_BindingGroup_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_DeviceRequirements_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214_marshaled_pinvoke
{
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214_marshaled_com
{
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t * ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<extendsLayout>k__BackingField
	String_t* ___U3CextendsLayoutU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___m_Controls_8;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CdisplayNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_1() const { return ___U3CdisplayNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_1() { return &___U3CdisplayNameU3Ek__BackingField_1; }
	inline void set_U3CdisplayNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CtypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CstateFormatU3Ek__BackingField_3)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CstateFormatU3Ek__BackingField_3() const { return ___U3CstateFormatU3Ek__BackingField_3; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CstateFormatU3Ek__BackingField_3() { return &___U3CstateFormatU3Ek__BackingField_3; }
	inline void set_U3CstateFormatU3Ek__BackingField_3(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CstateFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CstateSizeInBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CstateSizeInBytesU3Ek__BackingField_4() const { return ___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return &___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline void set_U3CstateSizeInBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CstateSizeInBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CextendsLayoutU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CextendsLayoutU3Ek__BackingField_5)); }
	inline String_t* get_U3CextendsLayoutU3Ek__BackingField_5() const { return ___U3CextendsLayoutU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CextendsLayoutU3Ek__BackingField_5() { return &___U3CextendsLayoutU3Ek__BackingField_5; }
	inline void set_U3CextendsLayoutU3Ek__BackingField_5(String_t* value)
	{
		___U3CextendsLayoutU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CextendsLayoutU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CupdateBeforeRenderU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CupdateBeforeRenderU3Ek__BackingField_6() const { return ___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return &___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline void set_U3CupdateBeforeRenderU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CupdateBeforeRenderU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_7() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___m_ControlCount_7)); }
	inline int32_t get_m_ControlCount_7() const { return ___m_ControlCount_7; }
	inline int32_t* get_address_of_m_ControlCount_7() { return &___m_ControlCount_7; }
	inline void set_m_ControlCount_7(int32_t value)
	{
		___m_ControlCount_7 = value;
	}

	inline static int32_t get_offset_of_m_Controls_8() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___m_Controls_8)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get_m_Controls_8() const { return ___m_Controls_8; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of_m_Controls_8() { return &___m_Controls_8; }
	inline void set_m_Controls_8(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		___m_Controls_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_8), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_tAEF279DC7A9D86C63534C8EB1562B90382307466 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tAEF279DC7A9D86C63534C8EB1562B90382307466, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE 
{
public:
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE, ___text_0)); }
	inline Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  get_text_0() const { return ___text_0; }
	inline Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB * get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_hasEscapes_1() { return static_cast<int32_t>(offsetof(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE, ___hasEscapes_1)); }
	inline bool get_hasEscapes_1() const { return ___hasEscapes_1; }
	inline bool* get_address_of_hasEscapes_1() { return &___hasEscapes_1; }
	inline void set_hasEscapes_1(bool value)
	{
		___hasEscapes_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_pinvoke
{
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_com
{
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType
struct JsonValueType_tF204C8AED80AF83025D4286F2AE7C2E74201C1A9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonValueType_tF204C8AED80AF83025D4286F2AE7C2E74201C1A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState
struct ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502 
{
public:
	// UnityEngine.Vector2 UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState::accumulatedDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___accumulatedDelta_0;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState::updateStepCount
	uint32_t ___updateStepCount_1;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState::uniqueId
	uint32_t ___uniqueId_2;

public:
	inline static int32_t get_offset_of_accumulatedDelta_0() { return static_cast<int32_t>(offsetof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502, ___accumulatedDelta_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_accumulatedDelta_0() const { return ___accumulatedDelta_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_accumulatedDelta_0() { return &___accumulatedDelta_0; }
	inline void set_accumulatedDelta_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___accumulatedDelta_0 = value;
	}

	inline static int32_t get_offset_of_updateStepCount_1() { return static_cast<int32_t>(offsetof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502, ___updateStepCount_1)); }
	inline uint32_t get_updateStepCount_1() const { return ___updateStepCount_1; }
	inline uint32_t* get_address_of_updateStepCount_1() { return &___updateStepCount_1; }
	inline void set_updateStepCount_1(uint32_t value)
	{
		___updateStepCount_1 = value;
	}

	inline static int32_t get_offset_of_uniqueId_2() { return static_cast<int32_t>(offsetof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502, ___uniqueId_2)); }
	inline uint32_t get_uniqueId_2() const { return ___uniqueId_2; }
	inline uint32_t* get_address_of_uniqueId_2() { return &___uniqueId_2; }
	inline void set_uniqueId_2(uint32_t value)
	{
		___uniqueId_2 = value;
	}
};


// UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
struct RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4 
{
public:
	// UnityEngine.UI.Graphic UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<graphic>k__BackingField
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___U3CgraphicU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<worldHitPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldHitPositionU3Ek__BackingField_1;
	// UnityEngine.Vector2 UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<screenPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscreenPositionU3Ek__BackingField_2;
	// System.Single UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CgraphicU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CgraphicU3Ek__BackingField_0)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_U3CgraphicU3Ek__BackingField_0() const { return ___U3CgraphicU3Ek__BackingField_0; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_U3CgraphicU3Ek__BackingField_0() { return &___U3CgraphicU3Ek__BackingField_0; }
	inline void set_U3CgraphicU3Ek__BackingField_0(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___U3CgraphicU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphicU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CworldHitPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CworldHitPositionU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldHitPositionU3Ek__BackingField_1() const { return ___U3CworldHitPositionU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldHitPositionU3Ek__BackingField_1() { return &___U3CworldHitPositionU3Ek__BackingField_1; }
	inline void set_U3CworldHitPositionU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldHitPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CscreenPositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CscreenPositionU3Ek__BackingField_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscreenPositionU3Ek__BackingField_2() const { return ___U3CscreenPositionU3Ek__BackingField_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscreenPositionU3Ek__BackingField_2() { return &___U3CscreenPositionU3Ek__BackingField_2; }
	inline void set_U3CscreenPositionU3Ek__BackingField_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscreenPositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CdistanceU3Ek__BackingField_3)); }
	inline float get_U3CdistanceU3Ek__BackingField_3() const { return ___U3CdistanceU3Ek__BackingField_3; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_3() { return &___U3CdistanceU3Ek__BackingField_3; }
	inline void set_U3CdistanceU3Ek__BackingField_3(float value)
	{
		___U3CdistanceU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
struct RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4_marshaled_pinvoke
{
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___U3CgraphicU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldHitPositionU3Ek__BackingField_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscreenPositionU3Ek__BackingField_2;
	float ___U3CdistanceU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
struct RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4_marshaled_com
{
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___U3CgraphicU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldHitPositionU3Ek__BackingField_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscreenPositionU3Ek__BackingField_2;
	float ___U3CdistanceU3Ek__BackingField_3;
};

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_tBAEC42444F14751378E9D7B2009867CBBBEF3FE9 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tBAEC42444F14751378E9D7B2009867CBBBEF3FE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags
struct Flags_tA6E2326F59CEB54963A3B54003607A85415FD47A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tA6E2326F59CEB54963A3B54003607A85415FD47A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___data_1)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_data_1() const { return ___data_1; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.LowLevel.DisableDeviceCommand
struct DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.DisableDeviceCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand
struct DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___lowFrequencyMotorSpeed_2_OffsetPadding[8];
					// System.Single UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand::lowFrequencyMotorSpeed
					float ___lowFrequencyMotorSpeed_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___lowFrequencyMotorSpeed_2_OffsetPadding_forAlignmentOnly[8];
					float ___lowFrequencyMotorSpeed_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___highFrequencyMotorSpeed_3_OffsetPadding[12];
					// System.Single UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand::highFrequencyMotorSpeed
					float ___highFrequencyMotorSpeed_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___highFrequencyMotorSpeed_3_OffsetPadding_forAlignmentOnly[12];
					float ___highFrequencyMotorSpeed_3_forAlignmentOnly;
				};
			};
		};
		uint8_t DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2__padding[16];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_lowFrequencyMotorSpeed_2() { return static_cast<int32_t>(offsetof(DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2, ___lowFrequencyMotorSpeed_2)); }
	inline float get_lowFrequencyMotorSpeed_2() const { return ___lowFrequencyMotorSpeed_2; }
	inline float* get_address_of_lowFrequencyMotorSpeed_2() { return &___lowFrequencyMotorSpeed_2; }
	inline void set_lowFrequencyMotorSpeed_2(float value)
	{
		___lowFrequencyMotorSpeed_2 = value;
	}

	inline static int32_t get_offset_of_highFrequencyMotorSpeed_3() { return static_cast<int32_t>(offsetof(DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2, ___highFrequencyMotorSpeed_3)); }
	inline float get_highFrequencyMotorSpeed_3() const { return ___highFrequencyMotorSpeed_3; }
	inline float* get_address_of_highFrequencyMotorSpeed_3() { return &___highFrequencyMotorSpeed_3; }
	inline void set_highFrequencyMotorSpeed_3(float value)
	{
		___highFrequencyMotorSpeed_3 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.EnableDeviceCommand
struct EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.EnableDeviceCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand
struct EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ImeEnabled_2_OffsetPadding[8];
					// System.Byte UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand::m_ImeEnabled
					uint8_t ___m_ImeEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ImeEnabled_2_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___m_ImeEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0__padding[9];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_m_ImeEnabled_2() { return static_cast<int32_t>(offsetof(EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0, ___m_ImeEnabled_2)); }
	inline uint8_t get_m_ImeEnabled_2() const { return ___m_ImeEnabled_2; }
	inline uint8_t* get_address_of_m_ImeEnabled_2() { return &___m_ImeEnabled_2; }
	inline void set_m_ImeEnabled_2(uint8_t value)
	{
		___m_ImeEnabled_2 = value;
	}
};


// UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand
struct GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___numChannels_2_OffsetPadding[8];
					// System.UInt32 UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::numChannels
					uint32_t ___numChannels_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___numChannels_2_OffsetPadding_forAlignmentOnly[8];
					uint32_t ___numChannels_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frequencyHz_3_OffsetPadding[12];
					// System.UInt32 UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::frequencyHz
					uint32_t ___frequencyHz_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frequencyHz_3_OffsetPadding_forAlignmentOnly[12];
					uint32_t ___frequencyHz_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___maxBufferSize_4_OffsetPadding[16];
					// System.UInt32 UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::maxBufferSize
					uint32_t ___maxBufferSize_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___maxBufferSize_4_OffsetPadding_forAlignmentOnly[16];
					uint32_t ___maxBufferSize_4_forAlignmentOnly;
				};
			};
		};
		uint8_t GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6__padding[20];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_numChannels_2() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___numChannels_2)); }
	inline uint32_t get_numChannels_2() const { return ___numChannels_2; }
	inline uint32_t* get_address_of_numChannels_2() { return &___numChannels_2; }
	inline void set_numChannels_2(uint32_t value)
	{
		___numChannels_2 = value;
	}

	inline static int32_t get_offset_of_frequencyHz_3() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___frequencyHz_3)); }
	inline uint32_t get_frequencyHz_3() const { return ___frequencyHz_3; }
	inline uint32_t* get_address_of_frequencyHz_3() { return &___frequencyHz_3; }
	inline void set_frequencyHz_3(uint32_t value)
	{
		___frequencyHz_3 = value;
	}

	inline static int32_t get_offset_of_maxBufferSize_4() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___maxBufferSize_4)); }
	inline uint32_t get_maxBufferSize_4() const { return ___maxBufferSize_4; }
	inline uint32_t* get_address_of_maxBufferSize_4() { return &___maxBufferSize_4; }
	inline void set_maxBufferSize_4(uint32_t value)
	{
		___maxBufferSize_4 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand
struct InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16  ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnBeforeUpdateDelegate_10;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_11;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___maps_1)); }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_1), (void*)value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___controls_2)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controls_2), (void*)value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___interactions_3)); }
	inline IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactions_3), (void*)value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___processors_4)); }
	inline InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composites_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___memory_7)); }
	inline UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16 * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_8() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnBeforeUpdateHooked_8)); }
	inline bool get_m_OnBeforeUpdateHooked_8() const { return ___m_OnBeforeUpdateHooked_8; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_8() { return &___m_OnBeforeUpdateHooked_8; }
	inline void set_m_OnBeforeUpdateHooked_8(bool value)
	{
		___m_OnBeforeUpdateHooked_8 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_9() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnAfterUpdateHooked_9)); }
	inline bool get_m_OnAfterUpdateHooked_9() const { return ___m_OnAfterUpdateHooked_9; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_9() { return &___m_OnAfterUpdateHooked_9; }
	inline void set_m_OnAfterUpdateHooked_9(bool value)
	{
		___m_OnAfterUpdateHooked_9 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_10() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnBeforeUpdateDelegate_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnBeforeUpdateDelegate_10() const { return ___m_OnBeforeUpdateDelegate_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnBeforeUpdateDelegate_10() { return &___m_OnBeforeUpdateDelegate_10; }
	inline void set_m_OnBeforeUpdateDelegate_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnBeforeUpdateDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnBeforeUpdateDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_11() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnAfterUpdateDelegate_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_11() const { return ___m_OnAfterUpdateDelegate_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_11() { return &___m_OnAfterUpdateDelegate_11; }
	inline void set_m_OnAfterUpdateDelegate_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_11), (void*)value);
	}
};

struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState::s_GlobalList
	InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723  ___s_GlobalList_12;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState::s_OnActionChange
	InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD  ___s_OnActionChange_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState::s_OnActionControlsChanged
	InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2  ___s_OnActionControlsChanged_14;

public:
	inline static int32_t get_offset_of_s_GlobalList_12() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields, ___s_GlobalList_12)); }
	inline InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723  get_s_GlobalList_12() const { return ___s_GlobalList_12; }
	inline InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723 * get_address_of_s_GlobalList_12() { return &___s_GlobalList_12; }
	inline void set_s_GlobalList_12(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723  value)
	{
		___s_GlobalList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalList_12))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_OnActionChange_13() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields, ___s_OnActionChange_13)); }
	inline InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD  get_s_OnActionChange_13() const { return ___s_OnActionChange_13; }
	inline InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD * get_address_of_s_OnActionChange_13() { return &___s_OnActionChange_13; }
	inline void set_s_OnActionChange_13(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD  value)
	{
		___s_OnActionChange_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionChange_13))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionChange_13))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_OnActionControlsChanged_14() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields, ___s_OnActionControlsChanged_14)); }
	inline InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2  get_s_OnActionControlsChanged_14() const { return ___s_OnActionControlsChanged_14; }
	inline InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2 * get_address_of_s_OnActionControlsChanged_14() { return &___s_OnActionControlsChanged_14; }
	inline void set_s_OnActionControlsChanged_14(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2  value)
	{
		___s_OnActionControlsChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionControlsChanged_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionControlsChanged_14))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Name_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variants_4() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Variants_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_4() const { return ___m_Variants_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_4() { return &___m_Variants_4; }
	inline void set_m_Variants_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_StateFormat_5() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_StateFormat_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_m_StateFormat_5() const { return ___m_StateFormat_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_m_StateFormat_5() { return &___m_StateFormat_5; }
	inline void set_m_StateFormat_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___m_StateFormat_5 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_6() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_StateSizeInBytes_6)); }
	inline int32_t get_m_StateSizeInBytes_6() const { return ___m_StateSizeInBytes_6; }
	inline int32_t* get_address_of_m_StateSizeInBytes_6() { return &___m_StateSizeInBytes_6; }
	inline void set_m_StateSizeInBytes_6(int32_t value)
	{
		___m_StateSizeInBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_7() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_UpdateBeforeRender_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_UpdateBeforeRender_7() const { return ___m_UpdateBeforeRender_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_UpdateBeforeRender_7() { return &___m_UpdateBeforeRender_7; }
	inline void set_m_UpdateBeforeRender_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_UpdateBeforeRender_7 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_8() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_BaseLayouts_8)); }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  get_m_BaseLayouts_8() const { return ___m_BaseLayouts_8; }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 * get_address_of_m_BaseLayouts_8() { return &___m_BaseLayouts_8; }
	inline void set_m_BaseLayouts_8(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  value)
	{
		___m_BaseLayouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BaseLayouts_8))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_9() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_AppliedOverrides_9)); }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  get_m_AppliedOverrides_9() const { return ___m_AppliedOverrides_9; }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 * get_address_of_m_AppliedOverrides_9() { return &___m_AppliedOverrides_9; }
	inline void set_m_AppliedOverrides_9(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  value)
	{
		___m_AppliedOverrides_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_AppliedOverrides_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CommonUsages_10() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_CommonUsages_10)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_CommonUsages_10() const { return ___m_CommonUsages_10; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_CommonUsages_10() { return &___m_CommonUsages_10; }
	inline void set_m_CommonUsages_10(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_CommonUsages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonUsages_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_11() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Controls_11)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get_m_Controls_11() const { return ___m_Controls_11; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of_m_Controls_11() { return &___m_Controls_11; }
	inline void set_m_Controls_11(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		___m_Controls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_12() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_DisplayName_12)); }
	inline String_t* get_m_DisplayName_12() const { return ___m_DisplayName_12; }
	inline String_t** get_address_of_m_DisplayName_12() { return &___m_DisplayName_12; }
	inline void set_m_DisplayName_12(String_t* value)
	{
		___m_DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Description_13() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Description_13)); }
	inline String_t* get_m_Description_13() const { return ___m_Description_13; }
	inline String_t** get_address_of_m_Description_13() { return &___m_Description_13; }
	inline void set_m_Description_13(String_t* value)
	{
		___m_Description_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Description_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Flags_14)); }
	inline int32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline int32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(int32_t value)
	{
		___m_Flags_14 = value;
	}
};

struct InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_0() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_DefaultVariant_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_s_DefaultVariant_0() const { return ___s_DefaultVariant_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_s_DefaultVariant_0() { return &___s_DefaultVariant_0; }
	inline void set_s_DefaultVariant_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___s_DefaultVariant_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_Layouts_15() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_Layouts_15)); }
	inline Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  get_s_Layouts_15() const { return ___s_Layouts_15; }
	inline Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B * get_address_of_s_Layouts_15() { return &___s_Layouts_15; }
	inline void set_s_Layouts_15(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  value)
	{
		___s_Layouts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutMatchers_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_CacheInstance_16() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_CacheInstance_16)); }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  get_s_CacheInstance_16() const { return ___s_CacheInstance_16; }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 * get_address_of_s_CacheInstance_16() { return &___s_CacheInstance_16; }
	inline void set_s_CacheInstance_16(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  value)
	{
		___s_CacheInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_CacheInstance_16))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_CacheInstanceRef_17() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_CacheInstanceRef_17)); }
	inline int32_t get_s_CacheInstanceRef_17() const { return ___s_CacheInstanceRef_17; }
	inline int32_t* get_address_of_s_CacheInstanceRef_17() { return &___s_CacheInstanceRef_17; }
	inline void set_s_CacheInstanceRef_17(int32_t value)
	{
		___s_CacheInstanceRef_17 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t * ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_declaring_type_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___declaring_type_1)); }
	inline Type_t * get_declaring_type_1() const { return ___declaring_type_1; }
	inline Type_t ** get_address_of_declaring_type_1() { return &___declaring_type_1; }
	inline void set_declaring_type_1(Type_t * value)
	{
		___declaring_type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declaring_type_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_get_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___get_method_3)); }
	inline MethodInfo_t * get_get_method_3() const { return ___get_method_3; }
	inline MethodInfo_t ** get_address_of_get_method_3() { return &___get_method_3; }
	inline void set_get_method_3(MethodInfo_t * value)
	{
		___get_method_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_method_3), (void*)value);
	}

	inline static int32_t get_offset_of_set_method_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___set_method_4)); }
	inline MethodInfo_t * get_set_method_4() const { return ___set_method_4; }
	inline MethodInfo_t ** get_address_of_set_method_4() { return &___set_method_4; }
	inline void set_set_method_4(MethodInfo_t * value)
	{
		___set_method_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___set_method_4), (void*)value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82, ___attrs_5)); }
	inline int32_t get_attrs_5() const { return ___attrs_5; }
	inline int32_t* get_address_of_attrs_5() { return &___attrs_5; }
	inline void set_attrs_5(int32_t value)
	{
		___attrs_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
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

// UnityEngineInternal.Input.NativeInputEvent
struct NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEventType UnityEngineInternal.Input.NativeInputEvent::type
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::sizeInBytes
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::deviceId
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					// System.Double UnityEngineInternal.Input.NativeInputEvent::time
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEvent::eventId
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD__padding[20];
	};

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_sizeInBytes_2() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___sizeInBytes_2)); }
	inline uint16_t get_sizeInBytes_2() const { return ___sizeInBytes_2; }
	inline uint16_t* get_address_of_sizeInBytes_2() { return &___sizeInBytes_2; }
	inline void set_sizeInBytes_2(uint16_t value)
	{
		___sizeInBytes_2 = value;
	}

	inline static int32_t get_offset_of_deviceId_3() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___deviceId_3)); }
	inline uint16_t get_deviceId_3() const { return ___deviceId_3; }
	inline uint16_t* get_address_of_deviceId_3() { return &___deviceId_3; }
	inline void set_deviceId_3(uint16_t value)
	{
		___deviceId_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___time_4)); }
	inline double get_time_4() const { return ___time_4; }
	inline double* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(double value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_eventId_5() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___eventId_5)); }
	inline int32_t get_eventId_5() const { return ___eventId_5; }
	inline int32_t* get_address_of_eventId_5() { return &___eventId_5; }
	inline void set_eventId_5(int32_t value)
	{
		___eventId_5 = value;
	}
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground
struct QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding[8];
					// System.Boolean UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground::canRunInBackground
					bool ___canRunInBackground_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding_forAlignmentOnly[8];
					bool ___canRunInBackground_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279__padding[9];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_canRunInBackground_2() { return static_cast<int32_t>(offsetof(QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279, ___canRunInBackground_2)); }
	inline bool get_canRunInBackground_2() const { return ___canRunInBackground_2; }
	inline bool* get_address_of_canRunInBackground_2() { return &___canRunInBackground_2; }
	inline void set_canRunInBackground_2(bool value)
	{
		___canRunInBackground_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground
struct QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding[8];
					int32_t ___canRunInBackground_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___canRunInBackground_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279__padding[9];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground
struct QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding[8];
					int32_t ___canRunInBackground_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___canRunInBackground_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279__padding[9];
	};
};

// UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand
struct QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isEnabled_2_OffsetPadding[8];
					// System.Boolean UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand::isEnabled
					bool ___isEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isEnabled_2_OffsetPadding_forAlignmentOnly[8];
					bool ___isEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865__padding[9];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_isEnabled_2() { return static_cast<int32_t>(offsetof(QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865, ___isEnabled_2)); }
	inline bool get_isEnabled_2() const { return ___isEnabled_2; }
	inline bool* get_address_of_isEnabled_2() { return &___isEnabled_2; }
	inline void set_isEnabled_2(bool value)
	{
		___isEnabled_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand
struct QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isEnabled_2_OffsetPadding[8];
					int32_t ___isEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isEnabled_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___isEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865__padding[9];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand
struct QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isEnabled_2_OffsetPadding[8];
					int32_t ___isEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isEnabled_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___isEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865__padding[9];
	};
};

// UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand
struct QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___scanOrKeyCode_3_OffsetPadding[8];
					// System.Int32 UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand::scanOrKeyCode
					int32_t ___scanOrKeyCode_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___scanOrKeyCode_3_OffsetPadding_forAlignmentOnly[8];
					int32_t ___scanOrKeyCode_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___nameBuffer_4_OffsetPadding[12];
					// UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand/<nameBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand::nameBuffer
					U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  ___nameBuffer_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___nameBuffer_4_OffsetPadding_forAlignmentOnly[12];
					U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  ___nameBuffer_4_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575__padding[268];
	};

public:
	inline static int32_t get_offset_of_baseCommand_2() { return static_cast<int32_t>(offsetof(QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575, ___baseCommand_2)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_2() const { return ___baseCommand_2; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_2() { return &___baseCommand_2; }
	inline void set_baseCommand_2(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_2 = value;
	}

	inline static int32_t get_offset_of_scanOrKeyCode_3() { return static_cast<int32_t>(offsetof(QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575, ___scanOrKeyCode_3)); }
	inline int32_t get_scanOrKeyCode_3() const { return ___scanOrKeyCode_3; }
	inline int32_t* get_address_of_scanOrKeyCode_3() { return &___scanOrKeyCode_3; }
	inline void set_scanOrKeyCode_3(int32_t value)
	{
		___scanOrKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_nameBuffer_4() { return static_cast<int32_t>(offsetof(QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575, ___nameBuffer_4)); }
	inline U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  get_nameBuffer_4() const { return ___nameBuffer_4; }
	inline U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290 * get_address_of_nameBuffer_4() { return &___nameBuffer_4; }
	inline void set_nameBuffer_4(U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  value)
	{
		___nameBuffer_4 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand
struct QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___nameBuffer_2_OffsetPadding[8];
					// UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand::nameBuffer
					U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  ___nameBuffer_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___nameBuffer_2_OffsetPadding_forAlignmentOnly[8];
					U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  ___nameBuffer_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34__padding[264];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_nameBuffer_2() { return static_cast<int32_t>(offsetof(QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34, ___nameBuffer_2)); }
	inline U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  get_nameBuffer_2() const { return ___nameBuffer_2; }
	inline U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58 * get_address_of_nameBuffer_2() { return &___nameBuffer_2; }
	inline void set_nameBuffer_2(U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  value)
	{
		___nameBuffer_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
struct QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___handle_4_OffsetPadding[8];
					// System.UInt64 UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::handle
					uint64_t ___handle_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___handle_4_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___handle_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___nameBuffer_5_OffsetPadding[16];
					// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::nameBuffer
					U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  ___nameBuffer_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___nameBuffer_5_OffsetPadding_forAlignmentOnly[16];
					U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  ___nameBuffer_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___idBuffer_6_OffsetPadding[528];
					// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::idBuffer
					U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  ___idBuffer_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___idBuffer_6_OffsetPadding_forAlignmentOnly[528];
					U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  ___idBuffer_6_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2__padding[1040];
	};

public:
	inline static int32_t get_offset_of_baseCommand_3() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___baseCommand_3)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_3() const { return ___baseCommand_3; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_3() { return &___baseCommand_3; }
	inline void set_baseCommand_3(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_3 = value;
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___handle_4)); }
	inline uint64_t get_handle_4() const { return ___handle_4; }
	inline uint64_t* get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(uint64_t value)
	{
		___handle_4 = value;
	}

	inline static int32_t get_offset_of_nameBuffer_5() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___nameBuffer_5)); }
	inline U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  get_nameBuffer_5() const { return ___nameBuffer_5; }
	inline U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8 * get_address_of_nameBuffer_5() { return &___nameBuffer_5; }
	inline void set_nameBuffer_5(U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  value)
	{
		___nameBuffer_5 = value;
	}

	inline static int32_t get_offset_of_idBuffer_6() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___idBuffer_6)); }
	inline U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  get_idBuffer_6() const { return ___idBuffer_6; }
	inline U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4 * get_address_of_idBuffer_6() { return &___idBuffer_6; }
	inline void set_idBuffer_6(U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  value)
	{
		___idBuffer_6 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand
struct QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frequency_2_OffsetPadding[8];
					// System.Single UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand::frequency
					float ___frequency_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frequency_2_OffsetPadding_forAlignmentOnly[8];
					float ___frequency_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625__padding[12];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_frequency_2() { return static_cast<int32_t>(offsetof(QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625, ___frequency_2)); }
	inline float get_frequency_2() const { return ___frequency_2; }
	inline float* get_address_of_frequency_2() { return &___frequency_2; }
	inline void set_frequency_2(float value)
	{
		___frequency_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.RequestResetCommand
struct RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.RequestResetCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.RequestSyncCommand
struct RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.RequestSyncCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand
struct SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___channel_3_OffsetPadding[8];
					// System.Int32 UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::channel
					int32_t ___channel_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___channel_3_OffsetPadding_forAlignmentOnly[8];
					int32_t ___channel_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___bufferSize_4_OffsetPadding[12];
					// System.Int32 UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::bufferSize
					int32_t ___bufferSize_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___bufferSize_4_OffsetPadding_forAlignmentOnly[12];
					int32_t ___bufferSize_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_5_OffsetPadding[16];
					// UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::buffer
					U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  ___buffer_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_5_OffsetPadding_forAlignmentOnly[16];
					U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  ___buffer_5_forAlignmentOnly;
				};
			};
		};
		uint8_t SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8__padding[1040];
	};

public:
	inline static int32_t get_offset_of_baseCommand_2() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___baseCommand_2)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_2() const { return ___baseCommand_2; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_2() { return &___baseCommand_2; }
	inline void set_baseCommand_2(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_2 = value;
	}

	inline static int32_t get_offset_of_channel_3() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___channel_3)); }
	inline int32_t get_channel_3() const { return ___channel_3; }
	inline int32_t* get_address_of_channel_3() { return &___channel_3; }
	inline void set_channel_3(int32_t value)
	{
		___channel_3 = value;
	}

	inline static int32_t get_offset_of_bufferSize_4() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___bufferSize_4)); }
	inline int32_t get_bufferSize_4() const { return ___bufferSize_4; }
	inline int32_t* get_address_of_bufferSize_4() { return &___bufferSize_4; }
	inline void set_bufferSize_4(int32_t value)
	{
		___bufferSize_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___buffer_5)); }
	inline U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  get_buffer_5() const { return ___buffer_5; }
	inline U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB * get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  value)
	{
		___buffer_5 = value;
	}
};


// UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand
struct SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___channel_2_OffsetPadding[8];
					// System.Int32 UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::channel
					int32_t ___channel_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___channel_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___channel_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___amplitude_3_OffsetPadding[12];
					// System.Single UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::amplitude
					float ___amplitude_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___amplitude_3_OffsetPadding_forAlignmentOnly[12];
					float ___amplitude_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___duration_4_OffsetPadding[16];
					// System.Single UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::duration
					float ___duration_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___duration_4_OffsetPadding_forAlignmentOnly[16];
					float ___duration_4_forAlignmentOnly;
				};
			};
		};
		uint8_t SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD__padding[20];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_channel_2() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___channel_2)); }
	inline int32_t get_channel_2() const { return ___channel_2; }
	inline int32_t* get_address_of_channel_2() { return &___channel_2; }
	inline void set_channel_2(int32_t value)
	{
		___channel_2 = value;
	}

	inline static int32_t get_offset_of_amplitude_3() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___amplitude_3)); }
	inline float get_amplitude_3() const { return ___amplitude_3; }
	inline float* get_address_of_amplitude_3() { return &___amplitude_3; }
	inline void set_amplitude_3(float value)
	{
		___amplitude_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand
struct SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Position_2_OffsetPadding[8];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand::m_Position
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Position_2_OffsetPadding_forAlignmentOnly[8];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2_forAlignmentOnly;
				};
			};
		};
		uint8_t SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E__padding[16];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E, ___m_Position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand
struct SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frequency_2_OffsetPadding[8];
					// System.Single UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand::frequency
					float ___frequency_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frequency_2_OffsetPadding_forAlignmentOnly[8];
					float ___frequency_2_forAlignmentOnly;
				};
			};
		};
		uint8_t SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20__padding[12];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_frequency_2() { return static_cast<int32_t>(offsetof(SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20, ___frequency_2)); }
	inline float get_frequency_2() const { return ___frequency_2; }
	inline float* get_address_of_frequency_2() { return &___frequency_2; }
	inline void set_frequency_2(float value)
	{
		___frequency_2 = value;
	}
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


// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand
struct WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___warpPositionInPlayerDisplaySpace_2_OffsetPadding[8];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand::warpPositionInPlayerDisplaySpace
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___warpPositionInPlayerDisplaySpace_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___warpPositionInPlayerDisplaySpace_2_OffsetPadding_forAlignmentOnly[8];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___warpPositionInPlayerDisplaySpace_2_forAlignmentOnly;
				};
			};
		};
		uint8_t WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5__padding[16];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_warpPositionInPlayerDisplaySpace_2() { return static_cast<int32_t>(offsetof(WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5, ___warpPositionInPlayerDisplaySpace_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_warpPositionInPlayerDisplaySpace_2() const { return ___warpPositionInPlayerDisplaySpace_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_warpPositionInPlayerDisplaySpace_2() { return &___warpPositionInPlayerDisplaySpace_2; }
	inline void set_warpPositionInPlayerDisplaySpace_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___warpPositionInPlayerDisplaySpace_2 = value;
	}
};


// UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8 
{
public:
	// System.String UnityEngine.InputSystem.XR.XRFeatureDescriptor::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.UsageHint> UnityEngine.InputSystem.XR.XRFeatureDescriptor::usageHints
	List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * ___usageHints_1;
	// UnityEngine.InputSystem.XR.FeatureType UnityEngine.InputSystem.XR.XRFeatureDescriptor::featureType
	int32_t ___featureType_2;
	// System.UInt32 UnityEngine.InputSystem.XR.XRFeatureDescriptor::customSize
	uint32_t ___customSize_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_usageHints_1() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___usageHints_1)); }
	inline List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * get_usageHints_1() const { return ___usageHints_1; }
	inline List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 ** get_address_of_usageHints_1() { return &___usageHints_1; }
	inline void set_usageHints_1(List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * value)
	{
		___usageHints_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usageHints_1), (void*)value);
	}

	inline static int32_t get_offset_of_featureType_2() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___featureType_2)); }
	inline int32_t get_featureType_2() const { return ___featureType_2; }
	inline int32_t* get_address_of_featureType_2() { return &___featureType_2; }
	inline void set_featureType_2(int32_t value)
	{
		___featureType_2 = value;
	}

	inline static int32_t get_offset_of_customSize_3() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___customSize_3)); }
	inline uint32_t get_customSize_3() const { return ___customSize_3; }
	inline uint32_t* get_address_of_customSize_3() { return &___customSize_3; }
	inline void set_customSize_3(uint32_t value)
	{
		___customSize_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8_marshaled_pinvoke
{
	char* ___name_0;
	List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8_marshaled_com
{
	Il2CppChar* ___name_0;
	List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};

// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor
struct HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A 
{
public:
	// UnityEngine.InputSystem.HID.HID/HIDCollectionType UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::type
	int32_t ___type_0;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::usage
	int32_t ___usage_1;
	// UnityEngine.InputSystem.HID.HID/UsagePage UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::usagePage
	int32_t ___usagePage_2;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::parent
	int32_t ___parent_3;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::childCount
	int32_t ___childCount_4;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::firstChild
	int32_t ___firstChild_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_usage_1() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___usage_1)); }
	inline int32_t get_usage_1() const { return ___usage_1; }
	inline int32_t* get_address_of_usage_1() { return &___usage_1; }
	inline void set_usage_1(int32_t value)
	{
		___usage_1 = value;
	}

	inline static int32_t get_offset_of_usagePage_2() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___usagePage_2)); }
	inline int32_t get_usagePage_2() const { return ___usagePage_2; }
	inline int32_t* get_address_of_usagePage_2() { return &___usagePage_2; }
	inline void set_usagePage_2(int32_t value)
	{
		___usagePage_2 = value;
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___parent_3)); }
	inline int32_t get_parent_3() const { return ___parent_3; }
	inline int32_t* get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(int32_t value)
	{
		___parent_3 = value;
	}

	inline static int32_t get_offset_of_childCount_4() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___childCount_4)); }
	inline int32_t get_childCount_4() const { return ___childCount_4; }
	inline int32_t* get_address_of_childCount_4() { return &___childCount_4; }
	inline void set_childCount_4(int32_t value)
	{
		___childCount_4 = value;
	}

	inline static int32_t get_offset_of_firstChild_5() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___firstChild_5)); }
	inline int32_t get_firstChild_5() const { return ___firstChild_5; }
	inline int32_t* get_address_of_firstChild_5() { return &___firstChild_5; }
	inline void set_firstChild_5(int32_t value)
	{
		___firstChild_5 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usage
	int32_t ___usage_0;
	// UnityEngine.InputSystem.HID.HID/UsagePage UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usagePage
	int32_t ___usagePage_1;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::unit
	int32_t ___unit_2;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::unitExponent
	int32_t ___unitExponent_3;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::logicalMin
	int32_t ___logicalMin_4;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::logicalMax
	int32_t ___logicalMax_5;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::physicalMin
	int32_t ___physicalMin_6;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::physicalMax
	int32_t ___physicalMax_7;
	// UnityEngine.InputSystem.HID.HID/HIDReportType UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportType
	int32_t ___reportType_8;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::collectionIndex
	int32_t ___collectionIndex_9;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportId
	int32_t ___reportId_10;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportSizeInBits
	int32_t ___reportSizeInBits_11;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportOffsetInBits
	int32_t ___reportOffsetInBits_12;
	// UnityEngine.InputSystem.HID.HID/HIDElementFlags UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::flags
	int32_t ___flags_13;
	// System.Nullable`1<System.Int32> UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usageMin
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMin_14;
	// System.Nullable`1<System.Int32> UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usageMax
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMax_15;

public:
	inline static int32_t get_offset_of_usage_0() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usage_0)); }
	inline int32_t get_usage_0() const { return ___usage_0; }
	inline int32_t* get_address_of_usage_0() { return &___usage_0; }
	inline void set_usage_0(int32_t value)
	{
		___usage_0 = value;
	}

	inline static int32_t get_offset_of_usagePage_1() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usagePage_1)); }
	inline int32_t get_usagePage_1() const { return ___usagePage_1; }
	inline int32_t* get_address_of_usagePage_1() { return &___usagePage_1; }
	inline void set_usagePage_1(int32_t value)
	{
		___usagePage_1 = value;
	}

	inline static int32_t get_offset_of_unit_2() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___unit_2)); }
	inline int32_t get_unit_2() const { return ___unit_2; }
	inline int32_t* get_address_of_unit_2() { return &___unit_2; }
	inline void set_unit_2(int32_t value)
	{
		___unit_2 = value;
	}

	inline static int32_t get_offset_of_unitExponent_3() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___unitExponent_3)); }
	inline int32_t get_unitExponent_3() const { return ___unitExponent_3; }
	inline int32_t* get_address_of_unitExponent_3() { return &___unitExponent_3; }
	inline void set_unitExponent_3(int32_t value)
	{
		___unitExponent_3 = value;
	}

	inline static int32_t get_offset_of_logicalMin_4() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___logicalMin_4)); }
	inline int32_t get_logicalMin_4() const { return ___logicalMin_4; }
	inline int32_t* get_address_of_logicalMin_4() { return &___logicalMin_4; }
	inline void set_logicalMin_4(int32_t value)
	{
		___logicalMin_4 = value;
	}

	inline static int32_t get_offset_of_logicalMax_5() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___logicalMax_5)); }
	inline int32_t get_logicalMax_5() const { return ___logicalMax_5; }
	inline int32_t* get_address_of_logicalMax_5() { return &___logicalMax_5; }
	inline void set_logicalMax_5(int32_t value)
	{
		___logicalMax_5 = value;
	}

	inline static int32_t get_offset_of_physicalMin_6() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___physicalMin_6)); }
	inline int32_t get_physicalMin_6() const { return ___physicalMin_6; }
	inline int32_t* get_address_of_physicalMin_6() { return &___physicalMin_6; }
	inline void set_physicalMin_6(int32_t value)
	{
		___physicalMin_6 = value;
	}

	inline static int32_t get_offset_of_physicalMax_7() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___physicalMax_7)); }
	inline int32_t get_physicalMax_7() const { return ___physicalMax_7; }
	inline int32_t* get_address_of_physicalMax_7() { return &___physicalMax_7; }
	inline void set_physicalMax_7(int32_t value)
	{
		___physicalMax_7 = value;
	}

	inline static int32_t get_offset_of_reportType_8() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportType_8)); }
	inline int32_t get_reportType_8() const { return ___reportType_8; }
	inline int32_t* get_address_of_reportType_8() { return &___reportType_8; }
	inline void set_reportType_8(int32_t value)
	{
		___reportType_8 = value;
	}

	inline static int32_t get_offset_of_collectionIndex_9() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___collectionIndex_9)); }
	inline int32_t get_collectionIndex_9() const { return ___collectionIndex_9; }
	inline int32_t* get_address_of_collectionIndex_9() { return &___collectionIndex_9; }
	inline void set_collectionIndex_9(int32_t value)
	{
		___collectionIndex_9 = value;
	}

	inline static int32_t get_offset_of_reportId_10() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportId_10)); }
	inline int32_t get_reportId_10() const { return ___reportId_10; }
	inline int32_t* get_address_of_reportId_10() { return &___reportId_10; }
	inline void set_reportId_10(int32_t value)
	{
		___reportId_10 = value;
	}

	inline static int32_t get_offset_of_reportSizeInBits_11() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportSizeInBits_11)); }
	inline int32_t get_reportSizeInBits_11() const { return ___reportSizeInBits_11; }
	inline int32_t* get_address_of_reportSizeInBits_11() { return &___reportSizeInBits_11; }
	inline void set_reportSizeInBits_11(int32_t value)
	{
		___reportSizeInBits_11 = value;
	}

	inline static int32_t get_offset_of_reportOffsetInBits_12() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportOffsetInBits_12)); }
	inline int32_t get_reportOffsetInBits_12() const { return ___reportOffsetInBits_12; }
	inline int32_t* get_address_of_reportOffsetInBits_12() { return &___reportOffsetInBits_12; }
	inline void set_reportOffsetInBits_12(int32_t value)
	{
		___reportOffsetInBits_12 = value;
	}

	inline static int32_t get_offset_of_flags_13() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___flags_13)); }
	inline int32_t get_flags_13() const { return ___flags_13; }
	inline int32_t* get_address_of_flags_13() { return &___flags_13; }
	inline void set_flags_13(int32_t value)
	{
		___flags_13 = value;
	}

	inline static int32_t get_offset_of_usageMin_14() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usageMin_14)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_usageMin_14() const { return ___usageMin_14; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_usageMin_14() { return &___usageMin_14; }
	inline void set_usageMin_14(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___usageMin_14 = value;
	}

	inline static int32_t get_offset_of_usageMax_15() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usageMax_15)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_usageMax_15() const { return ___usageMax_15; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_usageMax_15() { return &___usageMax_15; }
	inline void set_usageMax_15(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___usageMax_15 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259_marshaled_pinvoke
{
	int32_t ___usage_0;
	int32_t ___usagePage_1;
	int32_t ___unit_2;
	int32_t ___unitExponent_3;
	int32_t ___logicalMin_4;
	int32_t ___logicalMax_5;
	int32_t ___physicalMin_6;
	int32_t ___physicalMax_7;
	int32_t ___reportType_8;
	int32_t ___collectionIndex_9;
	int32_t ___reportId_10;
	int32_t ___reportSizeInBits_11;
	int32_t ___reportOffsetInBits_12;
	int32_t ___flags_13;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMin_14;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMax_15;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259_marshaled_com
{
	int32_t ___usage_0;
	int32_t ___usagePage_1;
	int32_t ___unit_2;
	int32_t ___unitExponent_3;
	int32_t ___logicalMin_4;
	int32_t ___logicalMax_5;
	int32_t ___physicalMin_6;
	int32_t ___physicalMax_7;
	int32_t ___reportType_8;
	int32_t ___collectionIndex_9;
	int32_t ___reportId_10;
	int32_t ___reportSizeInBits_11;
	int32_t ___reportOffsetInBits_12;
	int32_t ___flags_13;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMin_14;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMax_15;
};

// UnityEngine.InputSystem.HID.HIDParser/HIDReportData
struct HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HIDParser/HIDReportData::reportId
	int32_t ___reportId_0;
	// UnityEngine.InputSystem.HID.HID/HIDReportType UnityEngine.InputSystem.HID.HIDParser/HIDReportData::reportType
	int32_t ___reportType_1;
	// System.Int32 UnityEngine.InputSystem.HID.HIDParser/HIDReportData::currentBitOffset
	int32_t ___currentBitOffset_2;

public:
	inline static int32_t get_offset_of_reportId_0() { return static_cast<int32_t>(offsetof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F, ___reportId_0)); }
	inline int32_t get_reportId_0() const { return ___reportId_0; }
	inline int32_t* get_address_of_reportId_0() { return &___reportId_0; }
	inline void set_reportId_0(int32_t value)
	{
		___reportId_0 = value;
	}

	inline static int32_t get_offset_of_reportType_1() { return static_cast<int32_t>(offsetof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F, ___reportType_1)); }
	inline int32_t get_reportType_1() const { return ___reportType_1; }
	inline int32_t* get_address_of_reportType_1() { return &___reportType_1; }
	inline void set_reportType_1(int32_t value)
	{
		___reportType_1 = value;
	}

	inline static int32_t get_offset_of_currentBitOffset_2() { return static_cast<int32_t>(offsetof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F, ___currentBitOffset_2)); }
	inline int32_t get_currentBitOffset_2() const { return ___currentBitOffset_2; }
	inline int32_t* get_address_of_currentBitOffset_2() { return &___currentBitOffset_2; }
	inline void set_currentBitOffset_2(int32_t value)
	{
		___currentBitOffset_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 
{
public:
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject * ___anyValue_7;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}

	inline static int32_t get_offset_of_realValue_2() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___realValue_2)); }
	inline double get_realValue_2() const { return ___realValue_2; }
	inline double* get_address_of_realValue_2() { return &___realValue_2; }
	inline void set_realValue_2(double value)
	{
		___realValue_2 = value;
	}

	inline static int32_t get_offset_of_integerValue_3() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___integerValue_3)); }
	inline int64_t get_integerValue_3() const { return ___integerValue_3; }
	inline int64_t* get_address_of_integerValue_3() { return &___integerValue_3; }
	inline void set_integerValue_3(int64_t value)
	{
		___integerValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___stringValue_4)); }
	inline JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  get_stringValue_4() const { return ___stringValue_4; }
	inline JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE * get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_arrayValue_5() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___arrayValue_5)); }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * get_arrayValue_5() const { return ___arrayValue_5; }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 ** get_address_of_arrayValue_5() { return &___arrayValue_5; }
	inline void set_arrayValue_5(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * value)
	{
		___arrayValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectValue_6() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___objectValue_6)); }
	inline Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * get_objectValue_6() const { return ___objectValue_6; }
	inline Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 ** get_address_of_objectValue_6() { return &___objectValue_6; }
	inline void set_objectValue_6(Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * value)
	{
		___objectValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_anyValue_7() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___anyValue_7)); }
	inline RuntimeObject * get_anyValue_7() const { return ___anyValue_7; }
	inline RuntimeObject ** get_address_of_anyValue_7() { return &___anyValue_7; }
	inline void set_anyValue_7(RuntimeObject * value)
	{
		___anyValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anyValue_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_pinvoke ___stringValue_4;
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_com ___stringValue_4;
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E 
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher::layoutName
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___layoutName_0;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher::deviceMatcher
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  ___deviceMatcher_1;

public:
	inline static int32_t get_offset_of_layoutName_0() { return static_cast<int32_t>(offsetof(LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E, ___layoutName_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_layoutName_0() const { return ___layoutName_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_layoutName_0() { return &___layoutName_0; }
	inline void set_layoutName_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___layoutName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___layoutName_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___layoutName_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_deviceMatcher_1() { return static_cast<int32_t>(offsetof(LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E, ___deviceMatcher_1)); }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  get_deviceMatcher_1() const { return ___deviceMatcher_1; }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC * get_address_of_deviceMatcher_1() { return &___deviceMatcher_1; }
	inline void set_deviceMatcher_1(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  value)
	{
		___deviceMatcher_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceMatcher_1))->___m_Patterns_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E_marshaled_pinvoke
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___layoutName_0;
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_pinvoke ___deviceMatcher_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E_marshaled_com
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___layoutName_0;
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_com ___deviceMatcher_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___data_1)); }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  get_data_1() const { return ___data_1; }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  value)
	{
		___data_1 = value;
	}
};


// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82  : public MulticastDelegate_t
{
public:

public:
};


// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6, ___value_1)); }
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  get_value_1() const { return ___value_1; }
	inline JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_StateBlock_0)); }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Name_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Layout_7)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Variants_8)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Device_9)); }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Parent_10)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DefaultState_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MinValue_19)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MaxValue_20)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEvent UnityEngine.InputSystem.LowLevel.InputEvent::m_Event
					NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  ___m_Event_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  ___m_Event_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92__padding[20];
	};

public:
	inline static int32_t get_offset_of_m_Event_5() { return static_cast<int32_t>(offsetof(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92, ___m_Event_5)); }
	inline NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  get_m_Event_5() const { return ___m_Event_5; }
	inline NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD * get_address_of_m_Event_5() { return &___m_Event_5; }
	inline void set_m_Event_5(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  value)
	{
		___m_Event_5 = value;
	}
};


// System.Reflection.MonoProperty
struct MonoProperty_t  : public RuntimePropertyInfo_tBFADAB74EBBB380C7FF1B5004FDD5A39447574B5
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline intptr_t get_prop_1() const { return ___prop_1; }
	inline intptr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(intptr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_tA5A058F3C4CD862912818E54A4B6152F21433B82  value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___parent_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___declaring_type_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___name_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___get_method_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_2))->___set_method_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t4638094A6814F5738CB2D77994423EEBAB6F342A * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_getter_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.NamedValue::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.NamedValue::<value>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CvalueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489, ___U3CnameU3Ek__BackingField_1)); }
	inline String_t* get_U3CnameU3Ek__BackingField_1() const { return ___U3CnameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_1() { return &___U3CnameU3Ek__BackingField_1; }
	inline void set_U3CnameU3Ek__BackingField_1(String_t* value)
	{
		___U3CnameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489, ___U3CvalueU3Ek__BackingField_2)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CvalueU3Ek__BackingField_2() const { return ___U3CvalueU3Ek__BackingField_2; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CvalueU3Ek__BackingField_2() { return &___U3CvalueU3Ek__BackingField_2; }
	inline void set_U3CvalueU3Ek__BackingField_2(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CvalueU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CvalueU3Ek__BackingField_2;
};

// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA 
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<name>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<layout>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3ClayoutU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<variants>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3CvariantsU3Ek__BackingField_2;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<useStateFrom>k__BackingField
	String_t* ___U3CuseStateFromU3Ek__BackingField_3;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<shortDisplayName>k__BackingField
	String_t* ___U3CshortDisplayNameU3Ek__BackingField_5;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<usages>k__BackingField
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<aliases>k__BackingField
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<parameters>k__BackingField
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NameAndParameters> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<processors>k__BackingField
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<offset>k__BackingField
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<bit>k__BackingField
	uint32_t ___U3CbitU3Ek__BackingField_11;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<flags>k__BackingField
	int32_t ___U3CflagsU3Ek__BackingField_14;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<arraySize>k__BackingField
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<defaultState>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CdefaultStateU3Ek__BackingField_16;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<minValue>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CminValueU3Ek__BackingField_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<maxValue>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CmaxValueU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CnameU3Ek__BackingField_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3ClayoutU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3ClayoutU3Ek__BackingField_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3ClayoutU3Ek__BackingField_1() const { return ___U3ClayoutU3Ek__BackingField_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3ClayoutU3Ek__BackingField_1() { return &___U3ClayoutU3Ek__BackingField_1; }
	inline void set_U3ClayoutU3Ek__BackingField_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3ClayoutU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CvariantsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CvariantsU3Ek__BackingField_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3CvariantsU3Ek__BackingField_2() const { return ___U3CvariantsU3Ek__BackingField_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3CvariantsU3Ek__BackingField_2() { return &___U3CvariantsU3Ek__BackingField_2; }
	inline void set_U3CvariantsU3Ek__BackingField_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3CvariantsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CuseStateFromU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CuseStateFromU3Ek__BackingField_3)); }
	inline String_t* get_U3CuseStateFromU3Ek__BackingField_3() const { return ___U3CuseStateFromU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CuseStateFromU3Ek__BackingField_3() { return &___U3CuseStateFromU3Ek__BackingField_3; }
	inline void set_U3CuseStateFromU3Ek__BackingField_3(String_t* value)
	{
		___U3CuseStateFromU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuseStateFromU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CdisplayNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_4() const { return ___U3CdisplayNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_4() { return &___U3CdisplayNameU3Ek__BackingField_4; }
	inline void set_U3CdisplayNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshortDisplayNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CshortDisplayNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CshortDisplayNameU3Ek__BackingField_5() const { return ___U3CshortDisplayNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CshortDisplayNameU3Ek__BackingField_5() { return &___U3CshortDisplayNameU3Ek__BackingField_5; }
	inline void set_U3CshortDisplayNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CshortDisplayNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshortDisplayNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CusagesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CusagesU3Ek__BackingField_6)); }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  get_U3CusagesU3Ek__BackingField_6() const { return ___U3CusagesU3Ek__BackingField_6; }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * get_address_of_U3CusagesU3Ek__BackingField_6() { return &___U3CusagesU3Ek__BackingField_6; }
	inline void set_U3CusagesU3Ek__BackingField_6(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  value)
	{
		___U3CusagesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CaliasesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CaliasesU3Ek__BackingField_7)); }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  get_U3CaliasesU3Ek__BackingField_7() const { return ___U3CaliasesU3Ek__BackingField_7; }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * get_address_of_U3CaliasesU3Ek__BackingField_7() { return &___U3CaliasesU3Ek__BackingField_7; }
	inline void set_U3CaliasesU3Ek__BackingField_7(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  value)
	{
		___U3CaliasesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CparametersU3Ek__BackingField_8)); }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  get_U3CparametersU3Ek__BackingField_8() const { return ___U3CparametersU3Ek__BackingField_8; }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE * get_address_of_U3CparametersU3Ek__BackingField_8() { return &___U3CparametersU3Ek__BackingField_8; }
	inline void set_U3CparametersU3Ek__BackingField_8(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  value)
	{
		___U3CparametersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CprocessorsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CprocessorsU3Ek__BackingField_9)); }
	inline ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  get_U3CprocessorsU3Ek__BackingField_9() const { return ___U3CprocessorsU3Ek__BackingField_9; }
	inline ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED * get_address_of_U3CprocessorsU3Ek__BackingField_9() { return &___U3CprocessorsU3Ek__BackingField_9; }
	inline void set_U3CprocessorsU3Ek__BackingField_9(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  value)
	{
		___U3CprocessorsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CoffsetU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CoffsetU3Ek__BackingField_10)); }
	inline uint32_t get_U3CoffsetU3Ek__BackingField_10() const { return ___U3CoffsetU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CoffsetU3Ek__BackingField_10() { return &___U3CoffsetU3Ek__BackingField_10; }
	inline void set_U3CoffsetU3Ek__BackingField_10(uint32_t value)
	{
		___U3CoffsetU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CbitU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CbitU3Ek__BackingField_11)); }
	inline uint32_t get_U3CbitU3Ek__BackingField_11() const { return ___U3CbitU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CbitU3Ek__BackingField_11() { return &___U3CbitU3Ek__BackingField_11; }
	inline void set_U3CbitU3Ek__BackingField_11(uint32_t value)
	{
		___U3CbitU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CsizeInBitsU3Ek__BackingField_12)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_12() const { return ___U3CsizeInBitsU3Ek__BackingField_12; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_12() { return &___U3CsizeInBitsU3Ek__BackingField_12; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_12(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CformatU3Ek__BackingField_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_13() const { return ___U3CformatU3Ek__BackingField_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_13() { return &___U3CformatU3Ek__BackingField_13; }
	inline void set_U3CformatU3Ek__BackingField_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CflagsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CflagsU3Ek__BackingField_14)); }
	inline int32_t get_U3CflagsU3Ek__BackingField_14() const { return ___U3CflagsU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CflagsU3Ek__BackingField_14() { return &___U3CflagsU3Ek__BackingField_14; }
	inline void set_U3CflagsU3Ek__BackingField_14(int32_t value)
	{
		___U3CflagsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CarraySizeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CarraySizeU3Ek__BackingField_15)); }
	inline int32_t get_U3CarraySizeU3Ek__BackingField_15() const { return ___U3CarraySizeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CarraySizeU3Ek__BackingField_15() { return &___U3CarraySizeU3Ek__BackingField_15; }
	inline void set_U3CarraySizeU3Ek__BackingField_15(int32_t value)
	{
		___U3CarraySizeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultStateU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CdefaultStateU3Ek__BackingField_16)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CdefaultStateU3Ek__BackingField_16() const { return ___U3CdefaultStateU3Ek__BackingField_16; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CdefaultStateU3Ek__BackingField_16() { return &___U3CdefaultStateU3Ek__BackingField_16; }
	inline void set_U3CdefaultStateU3Ek__BackingField_16(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CdefaultStateU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CminValueU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CminValueU3Ek__BackingField_17)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CminValueU3Ek__BackingField_17() const { return ___U3CminValueU3Ek__BackingField_17; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CminValueU3Ek__BackingField_17() { return &___U3CminValueU3Ek__BackingField_17; }
	inline void set_U3CminValueU3Ek__BackingField_17(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CminValueU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CmaxValueU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CmaxValueU3Ek__BackingField_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CmaxValueU3Ek__BackingField_18() const { return ___U3CmaxValueU3Ek__BackingField_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CmaxValueU3Ek__BackingField_18() { return &___U3CmaxValueU3Ek__BackingField_18; }
	inline void set_U3CmaxValueU3Ek__BackingField_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CmaxValueU3Ek__BackingField_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_marshaled_pinvoke
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3CnameU3Ek__BackingField_0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField_1;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField_2;
	char* ___U3CuseStateFromU3Ek__BackingField_3;
	char* ___U3CdisplayNameU3Ek__BackingField_4;
	char* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField_18;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_marshaled_com
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3CnameU3Ek__BackingField_0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3ClayoutU3Ek__BackingField_1;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3CvariantsU3Ek__BackingField_2;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField_3;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField_4;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CmaxValueU3Ek__BackingField_18;
};

// UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo
struct OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo::eventPtr
	InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr_0;
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo::buffer
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___buffer_1;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo::device
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___device_2;
	// UnityEngine.InputSystem.OnScreen.OnScreenControl UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo::firstControl
	OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * ___firstControl_3;

public:
	inline static int32_t get_offset_of_eventPtr_0() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1, ___eventPtr_0)); }
	inline InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  get_eventPtr_0() const { return ___eventPtr_0; }
	inline InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * get_address_of_eventPtr_0() { return &___eventPtr_0; }
	inline void set_eventPtr_0(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  value)
	{
		___eventPtr_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1, ___buffer_1)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_buffer_1() const { return ___buffer_1; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1, ___device_2)); }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * get_device_2() const { return ___device_2; }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 ** get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * value)
	{
		___device_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_2), (void*)value);
	}

	inline static int32_t get_offset_of_firstControl_3() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1, ___firstControl_3)); }
	inline OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * get_firstControl_3() const { return ___firstControl_3; }
	inline OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA ** get_address_of_firstControl_3() { return &___firstControl_3; }
	inline void set_firstControl_3(OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * value)
	{
		___firstControl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstControl_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo
struct OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1_marshaled_pinvoke
{
	InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr_0;
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___buffer_1;
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___device_2;
	OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * ___firstControl_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo
struct OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1_marshaled_com
{
	InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr_0;
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___buffer_1;
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___device_2;
	OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * ___firstControl_3;
};

// System.Func`2<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem,System.String>
struct Func_2_t765DC2C04C049C22BF49AADA0025E9D23FB460DF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo>
struct InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OnScreenDeviceInfoU5BU5D_tAA013C12ACD7B16FEB72408E6098E2C38DE06127* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE, ___firstValue_1)); }
	inline OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1  get_firstValue_1() const { return ___firstValue_1; }
	inline OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(OnScreenDeviceInfo_t3FF50F1BB770BB111EB53D7E26389A4FF0DF3FF1  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___device_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___firstControl_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE, ___additionalValues_2)); }
	inline OnScreenDeviceInfoU5BU5D_tAA013C12ACD7B16FEB72408E6098E2C38DE06127* get_additionalValues_2() const { return ___additionalValues_2; }
	inline OnScreenDeviceInfoU5BU5D_tAA013C12ACD7B16FEB72408E6098E2C38DE06127** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(OnScreenDeviceInfoU5BU5D_tAA013C12ACD7B16FEB72408E6098E2C38DE06127* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t0968D9289CBC142C79F67D80291DBD0CD1FCC1F5  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
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


// UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent
struct DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputEvent UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent::baseEvent
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1_forAlignmentOnly;
				};
			};
		};
		uint8_t DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4__padding[20];
	};

public:
	inline static int32_t get_offset_of_baseEvent_1() { return static_cast<int32_t>(offsetof(DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4, ___baseEvent_1)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  get_baseEvent_1() const { return ___baseEvent_1; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_address_of_baseEvent_1() { return &___baseEvent_1; }
	inline void set_baseEvent_1(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  value)
	{
		___baseEvent_1 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07  : public TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___type_info_26)); }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_info_26), (void*)value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericCache_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializationCtor_28), (void*)value);
	}
};

struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___s_typedRef_25;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueType_10), (void*)value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumType_11), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_12), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___StringType_13)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_13), (void*)value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelegateType_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SICtorParamTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typedRef_25), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.TextEvent
struct TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputEvent UnityEngine.InputSystem.LowLevel.TextEvent::baseEvent
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___character_2_OffsetPadding[20];
					// System.Int32 UnityEngine.InputSystem.LowLevel.TextEvent::character
					int32_t ___character_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___character_2_OffsetPadding_forAlignmentOnly[20];
					int32_t ___character_2_forAlignmentOnly;
				};
			};
		};
		uint8_t TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5__padding[24];
	};

public:
	inline static int32_t get_offset_of_baseEvent_1() { return static_cast<int32_t>(offsetof(TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5, ___baseEvent_1)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  get_baseEvent_1() const { return ___baseEvent_1; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_address_of_baseEvent_1() { return &___baseEvent_1; }
	inline void set_baseEvent_1(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  value)
	{
		___baseEvent_1 = value;
	}

	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5, ___character_2)); }
	inline int32_t get_character_2() const { return ___character_2; }
	inline int32_t* get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(int32_t value)
	{
		___character_2 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuationsCount
	int32_t ___m_StartingActuationsCount_31;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StaringActuationMagnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_StaringActuationMagnitudes_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuationControls
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_StartingActuationControls_33;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ActionToRebind_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_BindingMask_2)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExpectedLayout_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Candidates_19)); }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnComplete_20)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnCancel_21)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnPotentialMatch_22)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnGeneratePath_23)); }
	inline Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnComputeScore_24)); }
	inline Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnApplyBinding_25)); }
	inline Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnEventDelegate_26)); }
	inline Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_LayoutCache_28)); }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuationsCount_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartingActuationsCount_31)); }
	inline int32_t get_m_StartingActuationsCount_31() const { return ___m_StartingActuationsCount_31; }
	inline int32_t* get_address_of_m_StartingActuationsCount_31() { return &___m_StartingActuationsCount_31; }
	inline void set_m_StartingActuationsCount_31(int32_t value)
	{
		___m_StartingActuationsCount_31 = value;
	}

	inline static int32_t get_offset_of_m_StaringActuationMagnitudes_32() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StaringActuationMagnitudes_32)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_StaringActuationMagnitudes_32() const { return ___m_StaringActuationMagnitudes_32; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_StaringActuationMagnitudes_32() { return &___m_StaringActuationMagnitudes_32; }
	inline void set_m_StaringActuationMagnitudes_32(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_StaringActuationMagnitudes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StaringActuationMagnitudes_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingActuationControls_33() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartingActuationControls_33)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_StartingActuationControls_33() const { return ___m_StartingActuationControls_33; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_StartingActuationControls_33() { return &___m_StartingActuationControls_33; }
	inline void set_m_StartingActuationControls_33(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_StartingActuationControls_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuationControls_33), (void*)value);
	}
};


// UnityEngine.InputSystem.OnScreen.OnScreenControl
struct OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.OnScreen.OnScreenControl::m_Control
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_Control_4;
	// UnityEngine.InputSystem.OnScreen.OnScreenControl UnityEngine.InputSystem.OnScreen.OnScreenControl::m_NextControlOnDevice
	OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * ___m_NextControlOnDevice_5;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.OnScreen.OnScreenControl::m_InputEventPtr
	InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___m_InputEventPtr_6;

public:
	inline static int32_t get_offset_of_m_Control_4() { return static_cast<int32_t>(offsetof(OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA, ___m_Control_4)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_Control_4() const { return ___m_Control_4; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_Control_4() { return &___m_Control_4; }
	inline void set_m_Control_4(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_Control_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Control_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_NextControlOnDevice_5() { return static_cast<int32_t>(offsetof(OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA, ___m_NextControlOnDevice_5)); }
	inline OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * get_m_NextControlOnDevice_5() const { return ___m_NextControlOnDevice_5; }
	inline OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA ** get_address_of_m_NextControlOnDevice_5() { return &___m_NextControlOnDevice_5; }
	inline void set_m_NextControlOnDevice_5(OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * value)
	{
		___m_NextControlOnDevice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NextControlOnDevice_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputEventPtr_6() { return static_cast<int32_t>(offsetof(OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA, ___m_InputEventPtr_6)); }
	inline InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  get_m_InputEventPtr_6() const { return ___m_InputEventPtr_6; }
	inline InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * get_address_of_m_InputEventPtr_6() { return &___m_InputEventPtr_6; }
	inline void set_m_InputEventPtr_6(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  value)
	{
		___m_InputEventPtr_6 = value;
	}
};

struct OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo> UnityEngine.InputSystem.OnScreen.OnScreenControl::s_OnScreenDevices
	InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE  ___s_OnScreenDevices_7;

public:
	inline static int32_t get_offset_of_s_OnScreenDevices_7() { return static_cast<int32_t>(offsetof(OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA_StaticFields, ___s_OnScreenDevices_7)); }
	inline InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE  get_s_OnScreenDevices_7() const { return ___s_OnScreenDevices_7; }
	inline InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE * get_address_of_s_OnScreenDevices_7() { return &___s_OnScreenDevices_7; }
	inline void set_s_OnScreenDevices_7(InlinedArray_1_t6D8F497C0B20FD502C4C1E10760B8957B00015FE  value)
	{
		___s_OnScreenDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_OnScreenDevices_7))->___firstValue_1))->___device_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_OnScreenDevices_7))->___firstValue_1))->___firstControl_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnScreenDevices_7))->___additionalValues_2), (void*)NULL);
		#endif
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
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
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
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  m_Items[1];

public:
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};


// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);

// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD (int32_t ___channel0, const RuntimeMethod* method);
// System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD (RuntimeObject * ___list0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, RuntimeArray * ___values3, int32_t ___valuesArrayLength4, int32_t ___valuesStart5, int32_t ___valuesCount6, int32_t ___flags7, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Rendering.VertexAttribute UnityEngine.Mesh::GetUVChannel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF (int32_t ___uvIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Utilities.NamedValue::ApplyToObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedValue_ApplyToObject_m53D6EAB30E1D45D2AB78E3C1F7EE796D6F939831 (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 * __this, RuntimeObject * ___instance0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void UnityEngine.NoAllocHelpers::Internal_ResizeList(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6 (RuntimeObject * ___list0, int32_t ___size1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_mFA979ED3433CACA46AC9AE0029A537B46E17D080 (RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Internal_CloneSingle_m6C669D602DFD7BC6C47ACA19B2F4D7C853F124BB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___data0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mA9A37F53F535C1FE2603DC002263C85337C1FE18 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___instantiateInWorldSpace2, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m0B91F1876CDBE46242A9E5B32F9EE53FAF2BDD99 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.OnScreen.OnScreenControl::get_controlPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OnScreenControl_get_controlPath_mAE0FE868E0B4359FE4A8BF3C50437A95A3E25364 (OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.LowLevel.InputEventPtr::set_internalTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEventPtr_set_internalTime_mB4091A1760FC846E54B077F9E937626A1D899292 (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputSystem::QueueEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueEvent_mE87A5B0E66CCBB6A15963E404288ECE86DC5E8E5 (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr0, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
inline bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared)(__this, method);
}
// System.Int32 UnityEngine.InputSystem.Utilities.InternedString::CompareTo(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternedString_CompareTo_mA7142ADD1B3162965720FE50BE29222A65A0BC21 (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * __this, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___other0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Resources_FindObjectsOfTypeAll_mAC4233995ECE942E2C0250607C5CFD9E805F2215 (Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_GetBuiltinResource_m59A7993A48D44A0002E532B7DD79BDA426E0C8A6 (Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2 (RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___type0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_mC19135099993954C820E030363B943034575F504 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m8DD2291586A77B073F3AF1E84F66C3AE77F5872D (String_t* ___id0, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m28D12CF785947DD24FACB7DAE3E7B887C03F4908 (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * RebindingOperation_WithExpectedControlType_m705AE6A47C8C1CA4F3E240985B5D1B96A8AAD012 (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  TypeTable_FindNameForType_m70022A55F8ADA2D7F33B9262F7F926145B4B6E4D (TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mD8617A5FDADD3E05A5F6253D42EFCB8BDAD11EE8 (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_mFA680218C45365E7ED57EA5EAA6ED59F15D8DFC6 (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___str0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_m5B7B398C4193415876B4C31BAFDCDD9EE5107576 (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, String_t* ___interaction0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  (*) (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_m0A13729474D2C44C0646703F5543B891132D6484 (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, String_t* ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  (*) (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  Collection_TryFindLayoutForType_mA1BA2AB384A930262B5B405EBA6136861A0D6A5E (Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B * __this, Type_t * ___layoutType0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_m2FF8E64B30FADEBCC623E0EFF944C3EDA244F6D7 (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_m1EEB8035CC62D2A78AC932A7CA0440AF94126C39 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_m7D612CC028141089F3AB419967A9A7F1D9FC3353 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m31E443E368751EC60EBA1A39D670313269E50B74_inline (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2938681F73D85BF97FFB78694899872748850BB1_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___values1, int32_t ___start2, int32_t ___length3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = ___values1;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = ___values1;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start2;
		int32_t L_8 = ___length3;
		int32_t L_9 = ___flags4;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m27B42528C124019912FCAE667B57E21E2D6A3CA6_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___values1, int32_t ___start2, int32_t ___length3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_m95062483A5D77AC517FE0F87EC41250CFDDEF8FD((int32_t)L_1, /*hidden argument*/NULL);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = ___values1;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___values1;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start2;
		int32_t L_8 = ___length3;
		int32_t L_9 = ___flags4;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m4F37FAE52CA9B894A889CD49C4E82BFD9AE204A4_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisRuntimeObject_m103E72D2B0BAAC576A1F271315A8AB752B2E225A_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetListForChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m19373092AF57249D933E7F25EEAD42128473FBA2_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___values3, int32_t ___start4, int32_t ___length5, int32_t ___flags6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___dim2;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = ___values3;
		RuntimeArray * L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_m097334749C829402A9634BF025A54F3918D238DD((RuntimeObject *)L_3, /*hidden argument*/NULL);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___values3;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_7 = ___start4;
		int32_t L_8 = ___length5;
		int32_t L_9 = ___flags6;
		Mesh_SetSizedArrayForChannel_m4E03A6A18D0C5BB49E89828AE7A0DD34BB20E7CC((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, (RuntimeArray *)L_4, (int32_t)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<System.Object>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisRuntimeObject_m0294ADCE7BB220AD5E98FFCDB4622FDC4793672A_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___uvs2, int32_t ___start3, int32_t ___length4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___uvIndex0;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___dim1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = ___uvs2;
		int32_t L_7 = ___start3;
		int32_t L_8 = ___length4;
		int32_t L_9 = ___flags5;
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, (int32_t)0, (int32_t)L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.Mesh::SetUvsImpl<UnityEngine.Vector4>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m39E92F4F2539677FCCAE08110A6E6E8DE90B3D49_gshared (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___uvIndex0, int32_t ___dim1, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uvs2, int32_t ___start3, int32_t ___length4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___uvIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___uvIndex0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485((RuntimeObject *)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___uvIndex0;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m9566A8802F5B87D061A2812FEF94230F8EA1CBBF((int32_t)L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___dim1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = ___uvs2;
		int32_t L_7 = ___start3;
		int32_t L_8 = ___length4;
		int32_t L_9 = ___flags5;
		((  void (*) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t, int32_t, int32_t, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)__this, (int32_t)L_4, (int32_t)0, (int32_t)L_5, (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_6, (int32_t)L_7, (int32_t)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_0034:
	{
		return;
	}
}
// System.Object System.Reflection.MonoProperty::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.MonoProperty/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoProperty_GetterAdapterFrame_TisRuntimeObject_TisRuntimeObject_m7E0F1D5DA7FDD458A16B131533A7FD24BA18D940_gshared (Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB * ___getter0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB * L_0 = ___getter0;
		RuntimeObject * L_1 = ___obj1;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Getter_2_t81181C5D3C83EE61FFA30B3479BF4F9FC6ECBBDB *)L_0, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_2;
	}
}
// System.Object System.Reflection.MonoProperty::StaticGetterAdapterFrame<System.Object>(System.Reflection.MonoProperty/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoProperty_StaticGetterAdapterFrame_TisRuntimeObject_m2EE1D441E2AEA6D2854D346C8B560080195E3703_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * ___getter0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	{
		StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * L_0 = ___getter0;
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.NamedValue::ApplyAllToObject<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>>(System.Object,TParameterList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedValue_ApplyAllToObject_TisReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE_m68E82CD558627335F5073570EB5AEF91F5B29EB8_gshared (RuntimeObject * ___instance0, ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___parameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1ACE8E7C607BD39B482048B25FB890B2A76E8E8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCCB6162CAF7CD0B37D2A14E8482AA5AE8E97A415_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var parameter in parameters)
		Il2CppFakeBox<ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___parameters1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__8 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IEnumerable_1_t1ACE8E7C607BD39B482048B25FB890B2A76E8E8A_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__8.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__8.method);
		___parameters1 = L_0.m_Value;
		V_0 = (RuntimeObject*)L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0010:
		{
			// foreach (var parameter in parameters)
			RuntimeObject* L_2 = V_0;
			NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_3;
			L_3 = InterfaceFuncInvoker0< NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current() */, IEnumerator_1_tCCB6162CAF7CD0B37D2A14E8482AA5AE8E97A415_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
			V_1 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_3;
			// parameter.ApplyToObject(instance);
			RuntimeObject * L_4 = ___instance0;
			NamedValue_ApplyToObject_m53D6EAB30E1D45D2AB78E3C1F7EE796D6F939831((NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 *)(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 *)(&V_1), (RuntimeObject *)L_4, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (var parameter in parameters)
			RuntimeObject* L_5 = V_0;
			bool L_6;
			L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
			if (L_6)
			{
				goto IL_0010;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			RuntimeObject* L_8 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.NamedValue::ApplyAllToObject<System.Object>(System.Object,TParameterList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedValue_ApplyAllToObject_TisRuntimeObject_m3E441DA924383825B240E2A187E60890D8B86B29_gshared (RuntimeObject * ___instance0, RuntimeObject * ___parameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1ACE8E7C607BD39B482048B25FB890B2A76E8E8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCCB6162CAF7CD0B37D2A14E8482AA5AE8E97A415_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var parameter in parameters)
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.NamedValue>::GetEnumerator() */, IEnumerable_1_t1ACE8E7C607BD39B482048B25FB890B2A76E8E8A_il2cpp_TypeInfo_var, (RuntimeObject*)(___parameters1));
		V_0 = (RuntimeObject*)L_0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0010:
		{
			// foreach (var parameter in parameters)
			RuntimeObject* L_1 = V_0;
			NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  L_2;
			L_2 = InterfaceFuncInvoker0< NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current() */, IEnumerator_1_tCCB6162CAF7CD0B37D2A14E8482AA5AE8E97A415_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
			V_1 = (NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 )L_2;
			// parameter.ApplyToObject(instance);
			RuntimeObject * L_3 = ___instance0;
			NamedValue_ApplyToObject_m53D6EAB30E1D45D2AB78E3C1F7EE796D6F939831((NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 *)(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 *)(&V_1), (RuntimeObject *)L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (var parameter in parameters)
			RuntimeObject* L_4 = V_0;
			bool L_5;
			L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			if (L_5)
			{
				goto IL_0010;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_0;
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			RuntimeObject* L_7 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m9A0BB9B3BA978D85C803B4FF986618C9ED0A646C_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_3 = V_1;
		V_0 = (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_3;
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_4 = V_0;
		V_2 = (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  L_5 = V_2;
		return (NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m9E7D10B81811FA59E5B5C6FFA11EB2C5B38D1132_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_3 = V_1;
		V_0 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_3;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_4 = V_0;
		V_2 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_5 = V_2;
		return (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m74FE8D780F0B79978FC91EDDC7805B680AC3BDBC_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_3 = V_1;
		V_0 = (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_3;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_4 = V_0;
		V_2 = (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_5 = V_2;
		return (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m8C1569DE0152F03C853DC04F7385EB527B091624_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_3 = V_1;
		V_0 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_3;
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_4 = V_0;
		V_2 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_5 = V_2;
		return (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mBE30B32838E7517398FD847EB4FE3D2A6DE467C9_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_3 = V_1;
		V_0 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_3;
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_4 = V_0;
		V_2 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_5 = V_2;
		return (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_5;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mCA457AEBD49C3610DC1D6DA67E7DB972DE12AF19_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.UInt64>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mDC7B3169CCFDE15AADE121960C06725BAEB05CE6_gshared (NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m737FADCCFDDA872A91DAAF05ACB33476C33ED811_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.UInt64>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB45DBFC7B9446567E10F45B1637208E967449C80_gshared (NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void UnityEngine.NoAllocHelpers::EnsureListElemCount<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisRuntimeObject_m862DEF3A3C49631D768D53E2ED9DAF0D716EF572_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, int32_t ___count1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___list0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_3 = ___count1;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6 = ___count1;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_001d:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = ___list0;
		int32_t L_8 = ___count1;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::EnsureListElemCount<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mFC6B4E9E1CCAED900AA93036E007A0B2039198DF_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list0, int32_t ___count1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___list0;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_1 = ___list0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_3 = ___count1;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___list0;
		int32_t L_6 = ___count1;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_001d:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_7 = ___list0;
		int32_t L_8 = ___count1;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::ResizeList<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, int32_t ___size1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___size1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___size1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var)));
	}

IL_0038:
	{
		int32_t L_9 = ___size1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_10 = ___list0;
		int32_t L_11;
		L_11 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13 = ___list0;
		int32_t L_14 = ___size1;
		NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6((RuntimeObject *)L_13, (int32_t)L_14, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::ResizeList<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list0, int32_t ___size1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___size1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___size1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var)));
	}

IL_0038:
	{
		int32_t L_9 = ___size1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_10 = ___list0;
		int32_t L_11;
		L_11 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_13 = ___list0;
		int32_t L_14 = ___size1;
		NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6((RuntimeObject *)L_13, (int32_t)L_14, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Color32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m5BDA87ED32CFC55DA1F206A10F0F7269375460A0_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Int32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4B9D1CD951454AB53830295C8EC6981FE2CC67BA_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisRuntimeObject_m7734F08807A81E543786DF8E8B2B4C20CD0C76A5_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m6D424749FB41FF954AA7F64B7692638719F3E159_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m2F702FC41F0D28D59ED05964609082B91F8960FD_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		goto IL_0019;
	}

IL_0019:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_mFA979ED3433CACA46AC9AE0029A537B46E17D080((RuntimeObject *)L_0, (String_t*)_stringLiteralF704B54D833421164E45E576DFD279921246BCEA, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___original0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_Internal_CloneSingle_m6C669D602DFD7BC6C47ACA19B2F4D7C853F124BB((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject * L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_6 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_6, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_RuntimeMethod_var)));
	}

IL_003e:
	{
		RuntimeObject * L_7 = V_0;
		V_2 = (RuntimeObject *)L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject * L_8 = V_2;
		return (RuntimeObject *)L_8;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (RuntimeObject *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_1, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___parent1;
		bool L_2 = ___worldPositionStays2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Object_Instantiate_mA9A37F53F535C1FE2603DC002263C85337C1FE18((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___rotation2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___parent3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Object_Instantiate_m0B91F1876CDBE46242A9E5B32F9EE53FAF2BDD99((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_2, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_3, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject * L_5 = V_0;
		return (RuntimeObject *)L_5;
	}
}
// System.Void UnityEngine.InputSystem.OnScreen.OnScreenControl::SendValueToControl<System.Single>(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m58D2BBAD2EA81317CB370CDD5EA5A0B00F995612_gshared (OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t09A0B25ED98E14F02D9120A3A0AED398DA01045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534 * V_0 = NULL;
	{
		// if (m_Control == null)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_0 = (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)__this->get_m_Control_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!(m_Control is InputControl<TValue> control))
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_1 = (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)__this->get_m_Control_4();
		V_0 = (InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534 *)((InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		// throw new ArgumentException(
		//     $"The control path {controlPath} yields a control of type {m_Control.GetType().Name} which is not an InputControl with value type {typeof(TValue).Name}", nameof(value));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_3;
		ArrayElementTypeCheck (L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_mAE0FE868E0B4359FE4A8BF3C50437A95A3E25364((OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA *)__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_5;
		ArrayElementTypeCheck (L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_7;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_9 = (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)__this->get_m_Control_4();
		Type_t * L_10;
		L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_13, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_18, (String_t*)L_17, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OnScreenControl_SendValueToControl_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m58D2BBAD2EA81317CB370CDD5EA5A0B00F995612_RuntimeMethod_var)));
	}

IL_0074:
	{
		// m_InputEventPtr.internalTime = InputRuntime.s_Instance.currentTime;
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * L_19 = (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)__this->get_address_of_m_InputEventPtr_6();
		RuntimeObject* L_20 = ((InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_il2cpp_TypeInfo_var))->get_s_Instance_0();
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(18 /* System.Double UnityEngine.InputSystem.LowLevel.IInputRuntime::get_currentTime() */, IInputRuntime_t09A0B25ED98E14F02D9120A3A0AED398DA01045B_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		InputEventPtr_set_internalTime_mB4091A1760FC846E54B077F9E937626A1D899292((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)L_19, (double)L_21, /*hidden argument*/NULL);
		// control.WriteValueIntoEvent(value, m_InputEventPtr);
		InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534 * L_22 = V_0;
		float L_23 = ___value0;
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  L_24 = (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )__this->get_m_InputEventPtr_6();
		((  void (*) (InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534 *, float, InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534 *)L_22, (float)L_23, (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// InputSystem.QueueEvent(m_InputEventPtr);
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  L_25 = (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )__this->get_m_InputEventPtr_6();
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSystem_QueueEvent_mE87A5B0E66CCBB6A15963E404288ECE86DC5E8E5((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.OnScreen.OnScreenControl::SendValueToControl<UnityEngine.Vector2>(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF3607B45C44D4F2A70E0BE6B157AF4EA50AE00A2_gshared (OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t09A0B25ED98E14F02D9120A3A0AED398DA01045B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099 * V_0 = NULL;
	{
		// if (m_Control == null)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_0 = (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)__this->get_m_Control_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!(m_Control is InputControl<TValue> control))
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_1 = (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)__this->get_m_Control_4();
		V_0 = (InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099 *)((InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		// throw new ArgumentException(
		//     $"The control path {controlPath} yields a control of type {m_Control.GetType().Name} which is not an InputControl with value type {typeof(TValue).Name}", nameof(value));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_3;
		ArrayElementTypeCheck (L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_4;
		String_t* L_6;
		L_6 = OnScreenControl_get_controlPath_mAE0FE868E0B4359FE4A8BF3C50437A95A3E25364((OnScreenControl_tA622E313421A2688159E3E5F5A77515BE4AEC7AA *)__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_5;
		ArrayElementTypeCheck (L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_7;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_9 = (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)__this->get_m_Control_4();
		Type_t * L_10;
		L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_13, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_18, (String_t*)L_17, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OnScreenControl_SendValueToControl_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF3607B45C44D4F2A70E0BE6B157AF4EA50AE00A2_RuntimeMethod_var)));
	}

IL_0074:
	{
		// m_InputEventPtr.internalTime = InputRuntime.s_Instance.currentTime;
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * L_19 = (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)__this->get_address_of_m_InputEventPtr_6();
		RuntimeObject* L_20 = ((InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t399CAAEFF76DC283B6BA7A48245CBE41E2652CA6_il2cpp_TypeInfo_var))->get_s_Instance_0();
		double L_21;
		L_21 = InterfaceFuncInvoker0< double >::Invoke(18 /* System.Double UnityEngine.InputSystem.LowLevel.IInputRuntime::get_currentTime() */, IInputRuntime_t09A0B25ED98E14F02D9120A3A0AED398DA01045B_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		InputEventPtr_set_internalTime_mB4091A1760FC846E54B077F9E937626A1D899292((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)L_19, (double)L_21, /*hidden argument*/NULL);
		// control.WriteValueIntoEvent(value, m_InputEventPtr);
		InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099 * L_22 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = ___value0;
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  L_24 = (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )__this->get_m_InputEventPtr_6();
		((  void (*) (InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((InputControl_1_tA4BF55CA1B309AF994CE9A5BC3D3F054EE3F3099 *)L_22, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_23, (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// InputSystem.QueueEvent(m_InputEventPtr);
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  L_25 = (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )__this->get_m_InputEventPtr_6();
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSystem_QueueEvent_mE87A5B0E66CCBB6A15963E404288ECE86DC5E8E5((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D )L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArrayExtensions::Contains<UnityEngine.InputSystem.Utilities.InternedString>(UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayExtensions_Contains_TisInternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_mD358B70CCAD4BCEFE2EFF4E93B729BD622001AFB_gshared (ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___array0, InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < array.m_Length; ++i)
		V_0 = (int32_t)0;
		goto IL_002d;
	}

IL_0004:
	{
		// if (array.m_Array[array.m_StartIndex + i].CompareTo(value) == 0)
		ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  L_0 = ___array0;
		InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* L_1 = (InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648*)L_0.get_m_Array_0();
		ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  L_2 = ___array0;
		int32_t L_3 = (int32_t)L_2.get_m_StartIndex_1();
		int32_t L_4 = V_0;
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_5 = ___value1;
		int32_t L_6;
		L_6 = InternedString_CompareTo_mA7142ADD1B3162965720FE50BE29222A65A0BC21((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))))), (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// for (var i = 0; i < array.m_Length; ++i)
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002d:
	{
		// for (var i = 0; i < array.m_Length; ++i)
		int32_t L_8 = V_0;
		ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  L_9 = ___array0;
		int32_t L_10 = (int32_t)L_9.get_m_Length_2();
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArrayExtensions::Contains<System.Object>(UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayExtensions_Contains_TisRuntimeObject_mEF11BF6F4146359DC48B5C506A4CB3CC7146E6B1_gshared (ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  ___array0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < array.m_Length; ++i)
		V_0 = (int32_t)0;
		goto IL_002d;
	}

IL_0004:
	{
		// if (array.m_Array[array.m_StartIndex + i].CompareTo(value) == 0)
		ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  L_0 = ___array0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0.get_m_Array_0();
		ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  L_2 = ___array0;
		int32_t L_3 = (int32_t)L_2.get_m_StartIndex_1();
		int32_t L_4 = V_0;
		RuntimeObject * L_5 = ___value1;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(0 /* System.Int32 System.IComparable`1<System.Object>::CompareTo(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)(*((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)))))), (RuntimeObject *)L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// for (var i = 0; i < array.m_Length; ++i)
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002d:
	{
		// for (var i = 0; i < array.m_Length; ++i)
		int32_t L_8 = V_0;
		ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  L_9 = ___array0;
		int32_t L_10 = (int32_t)L_9.get_m_Length_2();
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArrayExtensions::ContainsReference<System.Object>(UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayExtensions_ContainsReference_TisRuntimeObject_m7D2616CBB7A707BECB4AD9FD93C768E0A2241D6D_gshared (ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  ___array0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// return IndexOfReference(array, value) != -1;
		ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  L_0 = ___array0;
		RuntimeObject * L_1 = ___value1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975 )L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArrayExtensions::IndexOfReference<System.Object>(UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArrayExtensions_IndexOfReference_TisRuntimeObject_m3ADB0E998D7E55C57291C0EE58E014CFF8B65542_gshared (ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  ___array0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < array.m_Length; ++i)
		V_0 = (int32_t)0;
		goto IL_002a;
	}

IL_0004:
	{
		// if (ReferenceEquals(array.m_Array[array.m_StartIndex + i], value))
		ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  L_0 = ___array0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0.get_m_Array_0();
		ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  L_2 = ___array0;
		int32_t L_3 = (int32_t)L_2.get_m_StartIndex_1();
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		RuntimeObject * L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		RuntimeObject * L_7 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_6) == ((RuntimeObject*)(RuntimeObject *)L_7))))
		{
			goto IL_0026;
		}
	}
	{
		// return i;
		int32_t L_8 = V_0;
		return (int32_t)L_8;
	}

IL_0026:
	{
		// for (var i = 0; i < array.m_Length; ++i)
		int32_t L_9 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002a:
	{
		// for (var i = 0; i < array.m_Length; ++i)
		int32_t L_10 = V_0;
		ReadOnlyArray_1_t5ADC18691D6630D9FEAC4C60D3322F195C52A975  L_11 = ___array0;
		int32_t L_12 = (int32_t)L_11.get_m_Length_2();
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// return -1;
		return (int32_t)(-1);
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_ConvertObjects_TisRuntimeObject_mFE4CAC97B9FCF924DBB444ADE1F3F489FAF47A73_gshared (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2 = ___rawObjects0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_0;
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_2;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_15;
	}
}
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD763706888FB5FCE1ED21C8703BB59DEF63870EA_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_mAC4233995ECE942E2C0250607C5CFD9E805F2215((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_mEFE806C359F59E719E60AD86FFF7C2577FB98ED2_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_GetBuiltinResource_m59A7993A48D44A0002E532B7DD79BDA426E0C8A6((Type_t *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC389C88529EF229E1BABC989C94EE2223BD56AD0_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.InputSystem.Utilities.InternedString>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_m150D542277E9AEEDCF62DB50D10C61EB8B84CE24_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m2AC7D63AB4EDAEC644206513E9541129F65EB86E_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.Vector3Int>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_mB04E3AB40200E8166BD5C0B85C78A42E955AC843_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_2;
		L_2 = ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4((Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetClass<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisRuntimeObject_m5FFE5BDC8FFF1BE342BF12D2FA3D924B59CF1814_gshared (RuntimeObject ** ___currentValue0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		RuntimeObject ** L_0 = ___currentValue0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___newValue1;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		RuntimeObject ** L_3 = ___currentValue0;
		RuntimeObject * L_4 = (*(RuntimeObject **)L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject ** L_5 = ___currentValue0;
		RuntimeObject * L_6 = ___newValue1;
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(*L_5), (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// currentValue = newValue;
		RuntimeObject ** L_8 = ___currentValue0;
		RuntimeObject * L_9 = ___newValue1;
		*(RuntimeObject **)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)L_9);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Boolean>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m6E2FF3626DFDB226EC45A0225EB571151DAC1EAD_gshared (bool* ___currentValue0, bool ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_0;
		L_0 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool* L_1 = ___currentValue0;
		bool L_2 = (*(bool*)L_1);
		bool L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(!0,!0) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_0, (bool)L_2, (bool)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		bool* L_5 = ___currentValue0;
		bool L_6 = ___newValue1;
		*(bool*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Char>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mAC32D0C9CB1952351983635D14A11AEBACD8640F_gshared (Il2CppChar* ___currentValue0, Il2CppChar ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * L_0;
		L_0 = ((  EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		Il2CppChar* L_1 = ___currentValue0;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		Il2CppChar L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Char>::Equals(!0,!0) */, (EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 *)L_0, (Il2CppChar)L_2, (Il2CppChar)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		Il2CppChar* L_5 = ___currentValue0;
		Il2CppChar L_6 = ___newValue1;
		*(Il2CppChar*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.ColorBlock>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_m7F8E5115E86B1666472040BC04D78034F008988F_gshared (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * ___currentValue0, ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * L_0;
		L_0 = ((  EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * L_1 = ___currentValue0;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_2 = (*(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)L_1);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 , ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>::Equals(!0,!0) */, (EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 *)L_0, (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 )L_2, (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * L_5 = ___currentValue0;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_6 = ___newValue1;
		*(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Int32>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE46479E370530BDE29FA53D4857B1414E52FDA5_gshared (int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * L_0;
		L_0 = ((  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t* L_1 = ___currentValue0;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(!0,!0) */, (EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_0, (int32_t)L_2, (int32_t)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		int32_t* L_5 = ___currentValue0;
		int32_t L_6 = ___newValue1;
		*(int32_t*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Int32Enum>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m45F808F8A7CDCC736724DDB19D3FC2F6BB75D65C_gshared (int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * L_0;
		L_0 = ((  EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t* L_1 = ___currentValue0;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(!0,!0) */, (EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_0, (int32_t)L_2, (int32_t)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		int32_t* L_5 = ___currentValue0;
		int32_t L_6 = ___newValue1;
		*(int32_t*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.Navigation>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisNavigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_m408B16038A42AF06DCB8642CB1DC5D3118C4071D_gshared (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * ___currentValue0, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * L_0;
		L_0 = ((  EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * L_1 = ___currentValue0;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_2 = (*(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_1);
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A , Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>::Equals(!0,!0) */, (EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC *)L_0, (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A )L_2, (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * L_5 = ___currentValue0;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_6 = ___newValue1;
		*(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnRight_5), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Single>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD2FEFB6B008F6267B83749DDC273A8F4F29F36D9_gshared (float* ___currentValue0, float ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_0;
		L_0 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float* L_1 = ___currentValue0;
		float L_2 = (*(float*)L_1);
		float L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(!0,!0) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_0, (float)L_2, (float)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		float* L_5 = ___currentValue0;
		float L_6 = ___newValue1;
		*(float*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.SpriteState>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_mD0C3F4C3C5162AB96A8E9D750F87CC0FFE362572_gshared (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * ___currentValue0, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * L_0;
		L_0 = ((  EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * L_1 = ___currentValue0;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_2 = (*(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_1);
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E , SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>::Equals(!0,!0) */, (EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 *)L_0, (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E )L_2, (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * L_5 = ___currentValue0;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_6 = ___newValue1;
		*(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_DisabledSprite_3), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}
}
// System.String UnityEngine.InputSystem.Utilities.StringHelpers::Join<System.Object>(System.Collections.Generic.IEnumerable`1<TValue>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringHelpers_Join_TisRuntimeObject_m08366C0651545EEC9FBB58D48AD04CEE5E91D2CE_gshared (RuntimeObject* ___values0, String_t* ___separator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringBuilder_t * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var firstValue = default(string);
		V_0 = (String_t*)NULL;
		// var valueCount = 0;
		V_1 = (int32_t)0;
		// StringBuilder result = null;
		V_2 = (StringBuilder_t *)NULL;
		// foreach (var value in values)
		RuntimeObject* L_0 = ___values0;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_3 = (RuntimeObject*)L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_000f:
		{
			// foreach (var value in values)
			RuntimeObject* L_2 = V_3;
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_4 = (RuntimeObject *)L_3;
			// if (value == null)
			RuntimeObject * L_4 = V_4;
			if (!L_4)
			{
				goto IL_0068;
			}
		}

IL_0020:
		{
			// var str = value.ToString();
			String_t* L_5;
			L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(V_4));
			V_5 = (String_t*)L_5;
			// if (string.IsNullOrEmpty(str))
			String_t* L_6 = V_5;
			bool L_7;
			L_7 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C((String_t*)L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0068;
			}
		}

IL_0038:
		{
			// ++valueCount;
			int32_t L_8 = V_1;
			V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			// if (valueCount == 1)
			int32_t L_9 = V_1;
			if ((!(((uint32_t)L_9) == ((uint32_t)1))))
			{
				goto IL_0045;
			}
		}

IL_0040:
		{
			// firstValue = str;
			String_t* L_10 = V_5;
			V_0 = (String_t*)L_10;
			// continue;
			goto IL_0068;
		}

IL_0045:
		{
			// if (valueCount == 2)
			int32_t L_11 = V_1;
			if ((!(((uint32_t)L_11) == ((uint32_t)2))))
			{
				goto IL_0057;
			}
		}

IL_0049:
		{
			// result = new StringBuilder();
			StringBuilder_t * L_12 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_12, /*hidden argument*/NULL);
			V_2 = (StringBuilder_t *)L_12;
			// result.Append(firstValue);
			StringBuilder_t * L_13 = V_2;
			String_t* L_14 = V_0;
			StringBuilder_t * L_15;
			L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_13, (String_t*)L_14, /*hidden argument*/NULL);
		}

IL_0057:
		{
			// result.Append(separator);
			StringBuilder_t * L_16 = V_2;
			String_t* L_17 = ___separator1;
			StringBuilder_t * L_18;
			L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_16, (String_t*)L_17, /*hidden argument*/NULL);
			// result.Append(str);
			StringBuilder_t * L_19 = V_2;
			String_t* L_20 = V_5;
			StringBuilder_t * L_21;
			L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_19, (String_t*)L_20, /*hidden argument*/NULL);
		}

IL_0068:
		{
			// foreach (var value in values)
			RuntimeObject* L_22 = V_3;
			bool L_23;
			L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			if (L_23)
			{
				goto IL_000f;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_3;
			if (!L_24)
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			RuntimeObject* L_25 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
		}

IL_007b:
		{
			IL2CPP_END_FINALLY(114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// if (valueCount == 0)
		int32_t L_26 = V_1;
		if (L_26)
		{
			goto IL_0081;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0081:
	{
		// if (valueCount == 1)
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		// return firstValue;
		String_t* L_28 = V_0;
		return (String_t*)L_28;
	}

IL_0087:
	{
		// return result.ToString();
		StringBuilder_t * L_29 = V_2;
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_29);
		return (String_t*)L_30;
	}
}
// System.String UnityEngine.InputSystem.Utilities.StringHelpers::Join<System.Object>(System.String,TValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringHelpers_Join_TisRuntimeObject_m65F81B4CC21AB0ADD514E9BF282D3D706DF90800_gshared (String_t* ___separator0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method)
{
	{
		// return Join(values, separator);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___values1;
		String_t* L_1 = ___separator0;
		String_t* L_2;
		L_2 = ((  String_t* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)(RuntimeObject*)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (String_t*)L_2;
	}
}
// System.String UnityEngine.InputSystem.Utilities.StringHelpers::MakeUniqueName<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<TExisting>,System.Func`2<TExisting,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringHelpers_MakeUniqueName_TisRuntimeObject_m76627A6F9E96DEE0D67AE0ED8ED357CC63B97B72_gshared (String_t* ___baseName0, RuntimeObject* ___existingSet1, Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___getNameFunc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (getNameFunc == null)
		Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * L_0 = ___getNameFunc2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(getNameFunc));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A2A387BC9FF3611BBF99C11B1CC0549CD9C67A5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringHelpers_MakeUniqueName_TisRuntimeObject_m76627A6F9E96DEE0D67AE0ED8ED357CC63B97B72_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (existingSet == null)
		RuntimeObject* L_2 = ___existingSet1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return baseName;
		String_t* L_3 = ___baseName0;
		return (String_t*)L_3;
	}

IL_0013:
	{
		// var name = baseName;
		String_t* L_4 = ___baseName0;
		V_0 = (String_t*)L_4;
		// var nameLowerCase = name.ToLower();
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D((String_t*)L_5, /*hidden argument*/NULL);
		V_1 = (String_t*)L_6;
		// var nameIsUnique = false;
		V_2 = (bool)0;
		// var namesTried = 1;
		V_3 = (int32_t)1;
		// if (baseName.Length > 0)
		String_t* L_7 = ___baseName0;
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		// var lastDigit = baseName.Length;
		String_t* L_9 = ___baseName0;
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_9, /*hidden argument*/NULL);
		V_4 = (int32_t)L_10;
		goto IL_003c;
	}

IL_0036:
	{
		// --lastDigit;
		int32_t L_11 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		// while (lastDigit > 0 && char.IsDigit(baseName[lastDigit - 1]))
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_13 = ___baseName0;
		int32_t L_14 = V_4;
		Il2CppChar L_15;
		L_15 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70((String_t*)L_13, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Char_IsDigit_mC19135099993954C820E030363B943034575F504((Il2CppChar)L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0036;
		}
	}

IL_0052:
	{
		// if (lastDigit != baseName.Length)
		int32_t L_17 = V_4;
		String_t* L_18 = ___baseName0;
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)L_19)))
		{
			goto IL_00db;
		}
	}
	{
		// namesTried = int.Parse(baseName.Substring(lastDigit)) + 1;
		String_t* L_20 = ___baseName0;
		int32_t L_21 = V_4;
		String_t* L_22;
		L_22 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190((String_t*)L_20, (int32_t)L_21, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C((String_t*)L_22, /*hidden argument*/NULL);
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		// baseName = baseName.Substring(0, lastDigit);
		String_t* L_24 = ___baseName0;
		int32_t L_25 = V_4;
		String_t* L_26;
		L_26 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B((String_t*)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		___baseName0 = (String_t*)L_26;
		goto IL_00db;
	}

IL_0079:
	{
		// nameIsUnique = true;
		V_2 = (bool)1;
		// foreach (var existing in existingSet)
		RuntimeObject* L_27 = ___existingSet1;
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_27);
		V_5 = (RuntimeObject*)L_28;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c4;
		}

IL_0085:
		{
			// foreach (var existing in existingSet)
			RuntimeObject* L_29 = V_5;
			RuntimeObject * L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_29);
			V_6 = (RuntimeObject *)L_30;
			// var existingName = getNameFunc(existing);
			Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * L_31 = ___getNameFunc2;
			RuntimeObject * L_32 = V_6;
			String_t* L_33;
			L_33 = ((  String_t* (*) (Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 *)L_31, (RuntimeObject *)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			// if (existingName.ToLower() == nameLowerCase)
			String_t* L_34;
			L_34 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D((String_t*)L_33, /*hidden argument*/NULL);
			String_t* L_35 = V_1;
			bool L_36;
			L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_34, (String_t*)L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_00c4;
			}
		}

IL_00a3:
		{
			// name = $"{baseName}{namesTried}";
			String_t* L_37 = ___baseName0;
			int32_t L_38 = V_3;
			int32_t L_39 = L_38;
			RuntimeObject * L_40 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_39);
			String_t* L_41;
			L_41 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, (RuntimeObject *)L_37, (RuntimeObject *)L_40, /*hidden argument*/NULL);
			V_0 = (String_t*)L_41;
			// nameLowerCase = name.ToLower();
			String_t* L_42 = V_0;
			String_t* L_43;
			L_43 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D((String_t*)L_42, /*hidden argument*/NULL);
			V_1 = (String_t*)L_43;
			// nameIsUnique = false;
			V_2 = (bool)0;
			// ++namesTried;
			int32_t L_44 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
			// break;
			IL2CPP_LEAVE(0xDB, FINALLY_00cf);
		}

IL_00c4:
		{
			// foreach (var existing in existingSet)
			RuntimeObject* L_45 = V_5;
			bool L_46;
			L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			if (L_46)
			{
				goto IL_0085;
			}
		}

IL_00cd:
		{
			IL2CPP_LEAVE(0xDB, FINALLY_00cf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cf;
	}

FINALLY_00cf:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_47 = V_5;
			if (!L_47)
			{
				goto IL_00da;
			}
		}

IL_00d3:
		{
			RuntimeObject* L_48 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		}

IL_00da:
		{
			IL2CPP_END_FINALLY(207)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
	}

IL_00db:
	{
		// while (!nameIsUnique)
		bool L_49 = V_2;
		if (!L_49)
		{
			goto IL_0079;
		}
	}
	{
		// return name;
		String_t* L_50 = V_0;
		return (String_t*)L_50;
	}
}
// System.String UnityEngine.InputSystem.Utilities.StringHelpers::MakeUniqueName<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>(System.String,System.Collections.Generic.IEnumerable`1<TExisting>,System.Func`2<TExisting,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringHelpers_MakeUniqueName_TisControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_m2C4625D6F13B01BE0F62F7444BF458B8513931C0_gshared (String_t* ___baseName0, RuntimeObject* ___existingSet1, Func_2_t765DC2C04C049C22BF49AADA0025E9D23FB460DF * ___getNameFunc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (getNameFunc == null)
		Func_2_t765DC2C04C049C22BF49AADA0025E9D23FB460DF * L_0 = ___getNameFunc2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(getNameFunc));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A2A387BC9FF3611BBF99C11B1CC0549CD9C67A5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringHelpers_MakeUniqueName_TisControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_m2C4625D6F13B01BE0F62F7444BF458B8513931C0_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (existingSet == null)
		RuntimeObject* L_2 = ___existingSet1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return baseName;
		String_t* L_3 = ___baseName0;
		return (String_t*)L_3;
	}

IL_0013:
	{
		// var name = baseName;
		String_t* L_4 = ___baseName0;
		V_0 = (String_t*)L_4;
		// var nameLowerCase = name.ToLower();
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D((String_t*)L_5, /*hidden argument*/NULL);
		V_1 = (String_t*)L_6;
		// var nameIsUnique = false;
		V_2 = (bool)0;
		// var namesTried = 1;
		V_3 = (int32_t)1;
		// if (baseName.Length > 0)
		String_t* L_7 = ___baseName0;
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		// var lastDigit = baseName.Length;
		String_t* L_9 = ___baseName0;
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_9, /*hidden argument*/NULL);
		V_4 = (int32_t)L_10;
		goto IL_003c;
	}

IL_0036:
	{
		// --lastDigit;
		int32_t L_11 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		// while (lastDigit > 0 && char.IsDigit(baseName[lastDigit - 1]))
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_13 = ___baseName0;
		int32_t L_14 = V_4;
		Il2CppChar L_15;
		L_15 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70((String_t*)L_13, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Char_IsDigit_mC19135099993954C820E030363B943034575F504((Il2CppChar)L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0036;
		}
	}

IL_0052:
	{
		// if (lastDigit != baseName.Length)
		int32_t L_17 = V_4;
		String_t* L_18 = ___baseName0;
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)L_19)))
		{
			goto IL_00db;
		}
	}
	{
		// namesTried = int.Parse(baseName.Substring(lastDigit)) + 1;
		String_t* L_20 = ___baseName0;
		int32_t L_21 = V_4;
		String_t* L_22;
		L_22 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190((String_t*)L_20, (int32_t)L_21, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C((String_t*)L_22, /*hidden argument*/NULL);
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		// baseName = baseName.Substring(0, lastDigit);
		String_t* L_24 = ___baseName0;
		int32_t L_25 = V_4;
		String_t* L_26;
		L_26 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B((String_t*)L_24, (int32_t)0, (int32_t)L_25, /*hidden argument*/NULL);
		___baseName0 = (String_t*)L_26;
		goto IL_00db;
	}

IL_0079:
	{
		// nameIsUnique = true;
		V_2 = (bool)1;
		// foreach (var existing in existingSet)
		RuntimeObject* L_27 = ___existingSet1;
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_27);
		V_5 = (RuntimeObject*)L_28;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c4;
		}

IL_0085:
		{
			// foreach (var existing in existingSet)
			RuntimeObject* L_29 = V_5;
			ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_30;
			L_30 = InterfaceFuncInvoker0< ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_29);
			V_6 = (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_30;
			// var existingName = getNameFunc(existing);
			Func_2_t765DC2C04C049C22BF49AADA0025E9D23FB460DF * L_31 = ___getNameFunc2;
			ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  L_32 = V_6;
			String_t* L_33;
			L_33 = ((  String_t* (*) (Func_2_t765DC2C04C049C22BF49AADA0025E9D23FB460DF *, ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t765DC2C04C049C22BF49AADA0025E9D23FB460DF *)L_31, (ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA )L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			// if (existingName.ToLower() == nameLowerCase)
			String_t* L_34;
			L_34 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D((String_t*)L_33, /*hidden argument*/NULL);
			String_t* L_35 = V_1;
			bool L_36;
			L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB((String_t*)L_34, (String_t*)L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_00c4;
			}
		}

IL_00a3:
		{
			// name = $"{baseName}{namesTried}";
			String_t* L_37 = ___baseName0;
			int32_t L_38 = V_3;
			int32_t L_39 = L_38;
			RuntimeObject * L_40 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_39);
			String_t* L_41;
			L_41 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, (RuntimeObject *)L_37, (RuntimeObject *)L_40, /*hidden argument*/NULL);
			V_0 = (String_t*)L_41;
			// nameLowerCase = name.ToLower();
			String_t* L_42 = V_0;
			String_t* L_43;
			L_43 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D((String_t*)L_42, /*hidden argument*/NULL);
			V_1 = (String_t*)L_43;
			// nameIsUnique = false;
			V_2 = (bool)0;
			// ++namesTried;
			int32_t L_44 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
			// break;
			IL2CPP_LEAVE(0xDB, FINALLY_00cf);
		}

IL_00c4:
		{
			// foreach (var existing in existingSet)
			RuntimeObject* L_45 = V_5;
			bool L_46;
			L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			if (L_46)
			{
				goto IL_0085;
			}
		}

IL_00cd:
		{
			IL2CPP_LEAVE(0xDB, FINALLY_00cf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cf;
	}

FINALLY_00cf:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_47 = V_5;
			if (!L_47)
			{
				goto IL_00da;
			}
		}

IL_00d3:
		{
			RuntimeObject* L_48 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
		}

IL_00da:
		{
			IL2CPP_END_FINALLY(207)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
	}

IL_00db:
	{
		// while (!nameIsUnique)
		bool L_49 = V_2;
		if (!L_49)
		{
			goto IL_0079;
		}
	}
	{
		// return name;
		String_t* L_50 = V_0;
		return (String_t*)L_50;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor<System.Object,System.Object>(TDescriptor,System.Collections.Generic.List`1<TBaseTypeInList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_TisRuntimeObject_TisRuntimeObject_mAB56DC82E916F116B981E0849B9B474384B36376_gshared (RuntimeObject * ___descriptor0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___storeInList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	{
		V_0 = (int32_t)0;
		goto IL_006e;
	}

IL_0005:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___storeInList1;
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_2 = (RuntimeObject *)L_2;
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		bool L_5;
		L_5 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2((String_t*)L_3, (String_t*)L_4, /*hidden argument*/NULL);
		V_1 = (bool)L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_006a;
	}

IL_0033:
	{
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68, (String_t*)L_7, (String_t*)_stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)L_8, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = ___storeInList1;
		int32_t L_10 = V_0;
		RuntimeObject * L_11 = ___descriptor0;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9, (int32_t)L_10, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		goto IL_00a0;
	}

IL_006a:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_13 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = ___storeInList1;
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m8DD2291586A77B073F3AF1E84F66C3AE77F5872D((String_t*)L_17, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_18 = ___storeInList1;
		RuntimeObject * L_19 = ___descriptor0;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_18, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
	}

IL_00a0:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, bool, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (bool)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_4 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, RuntimeObject *, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (RuntimeObject *)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_4;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_mA4806A887115203276C18C332B40C1DAC07D5497_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tB9AD9D8785EE40F111BF97556EB835143F4A81AF_mAC0CA82E37DA654A322C15D8E4442B5A2310B74E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_tB9AD9D8785EE40F111BF97556EB835143F4A81AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tB9AD9D8785EE40F111BF97556EB835143F4A81AF ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mE7C12627AFAE9D06160EE4E8C6493B64949F9E15_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6_m253B471C99EF29502BE8D18AD7D9EA36690308EB_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_t3E0CBDA1BFB0496C29B470A7231F28BAD812ABA6 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Color>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m85650456548033FB62E0DED8F9071C9975E401C9_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Color32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_mB86B8897F2F4044A68F9A3B03DDED5ADB01A7274_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Double>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mF81C6246925E318AAB857B2C5D5856116D4F009B_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.InputBinding>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_m8DFE1FD9BA7A167C0485EFE50202DF8A8FB5448A_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Layouts.InputDeviceDescription>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_m669BD1CF004411FC4E8908E88C19276DA6A61F19_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.LowLevel.InputEventPtr>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D_m6D8E0186D14029346DCBB0F6C98850804D4991CD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5865AA873219669B49B7CD22B8F5037B78624444_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32Enum>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m09C495E3282F1EB4D86AFD41E4A1D71D28013202_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Utilities.InternedString>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_m6A585640574B1AE45422E18FD5FA98BC2BA1B93A_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Utilities.NameAndParameters>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisNameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4_m071734FD3461263E524FF11713F5516128A2724B_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NameAndParameters_t2B86375E9882DEB71415B719608CB47EC457DFF4 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Utilities.NamedValue>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisNamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489_m52F1266AC8A3BC3C6D054BC3F6D08DBD6E0173F5_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NamedValue_t0779F5798D434A96A43265D15168F9B9F4E5D489 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m539AEA437A51B6A554E8ADD3076EDA49258FFF2F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.RaycastHit2D>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mACCA4234150FCFC9F678AB4A55C779DBB0A9427D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.EventSystems.RaycastResult>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_m7B6AFD6EC684F98352846D8662E379807D36BFF4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Single>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m725C0271801F3A66BFD397B5C1210DBA009259C8_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Utilities.Substring>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSubstring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_mE1971CDED5DBFF7B0A612F9C844A33451EE83355_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UICharInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A_m7DF5C6239E156DBE1471885B9B0A2EF4978325C9_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UILineInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C_mF9A73CFD6E0760C7690ED5253A743B30172980F6_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIVertex>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_m50A402D6DF7FC7FCBAE5AF5C0D055FF2C5A2D94E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.XR.UsageHint>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB_m3BB04240D7FE2823B9E7D2373EADE4C939C965B1_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE2606512887650500549E97A027D886C84CBF61C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3Int>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_m8DDB491C8EBFE9995CD814A7CD57BF11DADFB163_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector4>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA932D671F9BE87E641DB0FCC8E2DB6C52EA4A76D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.XR.XRFeatureDescriptor>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8_m66D28C3981BCF223D0A25590BEAD1158B81E6D7C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_m524E3CF7C698B1C70A686928AF4E31E0FB01FD6D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m8CC8BBE8B343B5710C3AA0F32012D23AC131AFFD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Tilemaps.GridInformation/GridInformationKey>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941_m2A5068A7A8EB1AAF67E66CCBB33BDDEF120A0587_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	GridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GridInformationKey_tF00E3D60C37934AABE74B390BFBB85A93B4F9941 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisHIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A_m43BCD1FCC4C76269CA75D9D01A632E814CA4BB04_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.HID.HID/HIDElementDescriptor>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisHIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259_mA09401008011CF212F46D4D9A65B7FDBFAA1652D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.HID.HIDParser/HIDReportData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisHIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F_m01EC1EE0416F8D17596DF9C521C336EA93824602_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_m82A5FB73454EB2DB660D2F991B0B0E116A99FA07_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisJsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_m3D16F1B6E616978662710D5F1E08A4E916CC005B_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4_m416B3A4C83FEB893C3A67A550818BAB4A9486207_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_mAA66AF0A6DC5C07BA4B170C83C4E741F47BDED75_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E_mBC4973E5CF3A644A1BBA96C0BB4EF5074C55C4D4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_mF386334EA2E5B5781A35A5D57F090EF2A1C6BAD0_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		RuntimeObject * L_1 = ___item21;
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)L_2;
	}
}
// TObject UnityEngine.InputSystem.Utilities.TypeHelpers::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeHelpers_As_TisRuntimeObject_m29CCF3427F7A294B290EE3862A4036BCD960124D_gshared (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return (TObject)obj;
		RuntimeObject * L_0 = ___obj0;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Bone>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56_m0B8D66B5E6A331E9A320F793AD5784A24A85C65F_gshared (Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 * ___output0, const RuntimeMethod* method)
{
	{
		Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m90178B8C0262856D36BA720BE83861C3B15C5E9E_gshared (uint8_t* ___output0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4_m961B43C5836FCFE43A9B98536880C013CEA341DF_gshared (DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4 * ___output0, const RuntimeMethod* method)
{
	{
		DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.DisableDeviceCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5_mB8C29FF2AB4AE757E519534BF9FCB440F7E75478_gshared (DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5 * ___output0, const RuntimeMethod* method)
{
	{
		DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Double>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mB7306827840D6A524BDA621C614204B9E5194158_gshared (double* ___output0, const RuntimeMethod* method)
{
	{
		double* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2_m27625B0855E4EED6D9772A04E365D4E99D063E23_gshared (DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2 * ___output0, const RuntimeMethod* method)
{
	{
		DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.EnableDeviceCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisEnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E_mD8B3748D00A287D103B54D24CE1CED95B4B6FA22_gshared (EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E * ___output0, const RuntimeMethod* method)
{
	{
		EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisEnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0_mCEA32443851DD7FB7B3BE6ED6450BF0E80F90DB7_gshared (EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0 * ___output0, const RuntimeMethod* method)
{
	{
		EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Eyes>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisEyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318_mAE3BE9DF9E3A80279F50668203DC625D1C0D3A85_gshared (Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 * ___output0, const RuntimeMethod* method)
{
	{
		Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisGetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6_mDC919FB18BBA52E6977B50AFD2A06DB78F371B3D_gshared (GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6 * ___output0, const RuntimeMethod* method)
{
	{
		GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2_mB1E715807A48492F68CD79D217B9E9D48D62DE0F_gshared (InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2 * ___output0, const RuntimeMethod* method)
{
	{
		InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.InputDeviceCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6_mBC10AA5EE08DED2356334F1CD6DD3C10DBA4EDE0_gshared (InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * ___output0, const RuntimeMethod* method)
{
	{
		InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.InputEvent>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92_mD830CADB344C89A03F3360DF66C40EDF92E4F268_gshared (InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * ___output0, const RuntimeMethod* method)
{
	{
		InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Int32>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5DF44744D2EB3E065218D40347A044EE040E6757_gshared (int32_t* ___output0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Int32Enum>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m2DBEBF846C10471A0B0FA71D80E45833F22AF9D5_gshared (int32_t* ___output0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.Quaternion>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB8194F4AE31E4FA4E2C35D30612DDF181E303B20_gshared (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___output0, const RuntimeMethod* method)
{
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279_m8E9FDE8F947489CD9A914983EB60660CB4AE32A7_gshared (QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279 * ___output0, const RuntimeMethod* method)
{
	{
		QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865_m661109EE5F769807D70D7557877303C662D0D41B_gshared (QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865 * ___output0, const RuntimeMethod* method)
{
	{
		QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575_m2D9A3C045D7F7158FC7B3D5376AE1DDAD6F99ABB_gshared (QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575 * ___output0, const RuntimeMethod* method)
{
	{
		QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34_m2D5C0E01758CD2B14782AC22E09F269C7ACE20BB_gshared (QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34 * ___output0, const RuntimeMethod* method)
{
	{
		QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2_mC65EA2E23756CC9901DDFC43CF11AD5C74892A6F_gshared (QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2 * ___output0, const RuntimeMethod* method)
{
	{
		QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625_m322789A15942F8C69C4B40645B8928914B134831_gshared (QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625 * ___output0, const RuntimeMethod* method)
{
	{
		QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.RequestResetCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisRequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B_mFE9956F7B4E3B3B167D1B2F21570CA18D21D287A_gshared (RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B * ___output0, const RuntimeMethod* method)
{
	{
		RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.RequestSyncCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisRequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D_m037461DAA2136E09D02061331B577299E1F8DDAD_gshared (RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D * ___output0, const RuntimeMethod* method)
{
	{
		RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8_m462354CC71C51B20AA3FD732912059EE13370537_gshared (SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8 * ___output0, const RuntimeMethod* method)
{
	{
		SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD_m59487FDCB1B999869D2765BF7C4E143ADA69912C_gshared (SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD * ___output0, const RuntimeMethod* method)
{
	{
		SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E_mD08811E522462095A9B31FCA6EB314AA68FB26F5_gshared (SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E * ___output0, const RuntimeMethod* method)
{
	{
		SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20_m00DBA41BA9C8742A6061F01F8E2738B034AC8EE1_gshared (SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20 * ___output0, const RuntimeMethod* method)
{
	{
		SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Single>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m78C28ACFA9499DEBC6D2B4919F2D90AB379806E9_gshared (float* ___output0, const RuntimeMethod* method)
{
	{
		float* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.TextEvent>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5_m72BA77424D5B6AF67AC2249AACA2581A7F1A5D2B_gshared (TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5 * ___output0, const RuntimeMethod* method)
{
	{
		TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.TouchState>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTouchState_t83BF8A46038EF445074F008746EA36DC95EA139F_m9FB54C08481E453A67BDD2A74E1613C0A52288A2_gshared (TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F * ___output0, const RuntimeMethod* method)
{
	{
		TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.Vector2>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m1B0E8237D96B63D8D163846EB65DA4E83A1E3505_gshared (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___output0, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.Vector3>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m77C533DB8019B7456463381CFE64179CEEBE3A2C_gshared (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___output0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisWarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5_m581A9F750F9CC2365340D6FE5D4DCBB1ECCA0973_gshared (WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5 * ___output0, const RuntimeMethod* method)
{
	{
		WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m64B7496928323FC31813F990FE5AC06057213ABD_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB20DF48ED17C5C1B91F7B365DA01C9D9883CE22D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4DA9BD8ABD57EA456BBBF0DB0A9917AE7A67806D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mD39AE841C76B62A720795E45A9CAB847804CDBD2_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mF71D0A0AD3A01326E5D0D9C4D78FFE82E985A28E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6600143AD86280DD50C787F98E3B3DD98A429D39_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mF1E1FA0E9424F2F320E9B0339FC687ADF10BCBA9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3A787297B1A91CA14E1AA3B0034A681D407C2C6F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB96EA425698FAC912FBF9F171D49A9115BBC6D3B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m4E2C63FA44B1C28449F8F4BB7905B51D78AE236D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mF01BC97D058E55A4713C93F8CB551700296191ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mEECC8D753A2ECD36000F48387C6A2D1D4E564F62_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt64>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m31B60AC4311A7041BA0F9FEDD78EEFBD66E26E3D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint64_t)L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F_m4F09A05D3DD170DFA1F796E0A8FA0B313C65725B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A_m483AA7FC51E6A112FC0A4D06D38B11D37DFEF879_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1_mDA545781E7F1E51EA4B8806FE9681D3A0680C2BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17_m78DEA1E58B4D9D6E271BFF9B14011D45ED34B031_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893_m7C04B3AA1BAA024C62459AAFF0C635C222310A16_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D_mDC03CB15A108E86CF91BE61A0D5DD966741B6F0D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m59EADA64485304CCC918007EE51D37E128AB411D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.XR.Bone>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56_mE9B36DDF7ABCCA7F5F4D81AD87799577044AB649_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC38689A53E959AC0D3F9C9BF89F277C4A1D23BBF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Double>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m14E2C57CE3AE941D4E5A541BF22D1A5C7AADEF05_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(double);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.XR.Eyes>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318_m598D376666D8D19E246792AF20FF9B065CA737DF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.LowLevel.InputEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92_mE85A693FE3B5FA8A5305B4C79465F5EF5853418E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC154751B6ED1926446C432F482791D0C5D3F663A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mFC3373190B3BE1CF7E7594D8E6A3FBC6251EA6DB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mBBB6CBF143991B044213D375125D1E6F3352FF81_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m223C8A2842490CA74E75B2180AEE83873D0A4696_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mAC8905497A863AD87BFE65762297003BA81AB81F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m62538C9CC88C24C00F26BFEDEFDDF192DF3D7074_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.LowLevel.TouchState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTouchState_t83BF8A46038EF445074F008746EA36DC95EA139F_mE40E6AD721B08F00ACB1314F1FA32B4A57151F3D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mDBC64421AD01832F8501B6A63808B500603B0428_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mB0BA7AC549DE2A13AFD6C8FAF906DFABF03C148D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m8508D752DDCACDDA57921C7B14C2ABAB9E07C134_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502_mF0B12FBB200377CE2A0E32FD9E71C45461349140_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502 );
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mC2658E4BCDD5CB7B35E546FAE518CF3C4102626E_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB82F9E11B8FEC9E090AEA6C9C2C8A611682E7825_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mB7E008D6D4C2008C47D4D71528F6AE7AFCF0B7CB_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt64>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m108F557D18F2F5C93557B2FED6ABADA10061283C_gshared (void* ___destination0, int32_t ___index1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___value2;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_5;
	}

IL_0032:
	{
		// return value;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = V_0;
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_6;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		float L_5;
		L_5 = ((  float (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (float)L_5;
	}

IL_0032:
	{
		// return value;
		float L_6 = V_0;
		return (float)L_6;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5;
	}

IL_0032:
	{
		// return value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5;
	}

IL_0032:
	{
		// return value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * RebindingOperation_WithExpectedControlType_TisRuntimeObject_m04CD217329B40A5260B4520D5F17E7A9E04CC927_gshared (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThrowIfRebindInProgress();
		RebindingOperation_ThrowIfRebindInProgress_m28D12CF785947DD24FACB7DAE3E7B887C03F4908((RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)__this, /*hidden argument*/NULL);
		// return WithExpectedControlType(typeof(TControl));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m705AE6A47C8C1CA4F3E240985B5D1B96A8AAD012((RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)L_2;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_2;
		L_2 = TypeTable_FindNameForType_m70022A55F8ADA2D7F33B9262F7F926145B4B6E4D((TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(((InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_2;
		// if (interactionName.IsEmpty())
		bool L_3;
		L_3 = InternedString_IsEmpty_mD8617A5FDADD3E05A5F6253D42EFCB8BDAD11EE8((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_7 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_7, (String_t*)L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_RuntimeMethod_var)));
	}

IL_0038:
	{
		// return WithInteraction(interactionName);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_8 = V_0;
		String_t* L_9;
		L_9 = InternedString_op_Implicit_mFA680218C45365E7ED57EA5EAA6ED59F15D8DFC6((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_8, /*hidden argument*/NULL);
		BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  L_10;
		L_10 = BindingSyntax_WithInteraction_m5B7B398C4193415876B4C31BAFDCDD9EE5107576((BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)__this, (String_t*)L_9, /*hidden argument*/NULL);
		return (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 )L_10;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * _thisAdjusted = reinterpret_cast<BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *>(__this + _offset);
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_2;
		L_2 = TypeTable_FindNameForType_m70022A55F8ADA2D7F33B9262F7F926145B4B6E4D((TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(((InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_2;
		// if (processorName.IsEmpty())
		bool L_3;
		L_3 = InternedString_IsEmpty_mD8617A5FDADD3E05A5F6253D42EFCB8BDAD11EE8((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_7 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_7, (String_t*)L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_RuntimeMethod_var)));
	}

IL_0038:
	{
		// return WithProcessor(processorName);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_8 = V_0;
		String_t* L_9;
		L_9 = InternedString_op_Implicit_mFA680218C45365E7ED57EA5EAA6ED59F15D8DFC6((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_8, /*hidden argument*/NULL);
		BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  L_10;
		L_10 = BindingSyntax_WithProcessor_m0A13729474D2C44C0646703F5543B891132D6484((BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)__this, (String_t*)L_9, /*hidden argument*/NULL);
		return (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 )L_10;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * _thisAdjusted = reinterpret_cast<BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *>(__this + _offset);
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_2;
		L_2 = Collection_TryFindLayoutForType_mA1BA2AB384A930262B5B405EBA6136861A0D6A5E((Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B *)(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B *)(((InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var))->get_address_of_s_Layouts_15()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_m2FF8E64B30FADEBCC623E0EFF944C3EDA244F6D7((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(&V_1), /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		// if (string.IsNullOrEmpty(layoutName))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C((String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_7);
		V_0 = (String_t*)L_8;
	}

IL_003b:
	{
		// return $"<{layoutName}>";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, (String_t*)L_9, (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		return (String_t*)L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m1EEB8035CC62D2A78AC932A7CA0440AF94126C39((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_m7D612CC028141089F3AB419967A9A7F1D9FC3353((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m1EEB8035CC62D2A78AC932A7CA0440AF94126C39((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_m7D612CC028141089F3AB419967A9A7F1D9FC3353((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * Builder_WithType_TisRuntimeObject_m83FE280551024B58C685344F4FDB38F91DA78443_gshared (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		Builder_set_type_m31E443E368751EC60EBA1A39D670313269E50B74_inline((Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return this;
		return (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB *)__this;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m31E443E368751EC60EBA1A39D670313269E50B74_inline (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}
