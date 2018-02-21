#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// CnControls.CnInputManager
struct CnInputManager_t16497872;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>
struct Dictionary_2_t3962437003;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>
struct Dictionary_2_t3154576040;
// System.String
struct String_t;
// System.Collections.Generic.List`1<CnControls.VirtualAxis>
struct List_1_t4177180704;
// System.Collections.Generic.List`1<CnControls.VirtualButton>
struct List_1_t3369319741;
// CnControls.VirtualAxis
struct VirtualAxis_t2705105962;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// CnControls.VirtualButton
struct VirtualButton_t1897244999;
// CnControls.Dpad
struct Dpad_t980821090;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// CnControls.DpadAxis
struct DpadAxis_t781101020;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Component
struct Component_t1923634451;
// CnControls.EmptyGraphic
struct EmptyGraphic_t2931555429;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// CnControls.SensitiveJoystick
struct SensitiveJoystick_t60193198;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471;
// CnControls.SimpleJoystick
struct SimpleJoystick_t421539915;
// CnControls.SimpleButton
struct SimpleButton_t1119332961;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// CnControls.Touchpad
struct Touchpad_t4056981531;
// CommonOnScreenControl
struct CommonOnScreenControl_t421185803;
// CustomJoystick.FourWayController
struct FourWayController_t2275257414;
// Examples.Scenes.TouchpadCamera.RotateCamera
struct RotateCamera_t2021658767;
// Examples.Scenes.TouchpadCamera.RotationConstraint
struct RotationConstraint_t62602506;
// ThidPersonExampleController
struct ThidPersonExampleController_t267694585;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityStandardAssets._2D.Camera2DFollow
struct Camera2DFollow_t3335230098;
// UnityStandardAssets._2D.Restarter
struct Restarter_t269523250;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t1919708159;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityStandardAssets.Cameras.AutoCam
struct AutoCam_t137911967;
// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct PivotBasedCameraRig_t3786953582;
// UnityStandardAssets.Copy._2D.Platformer2DUserControl
struct Platformer2DUserControl_t2984076696;
// UnityStandardAssets.Copy._2D.PlatformerCharacter2D
struct PlatformerCharacter2D_t4151009609;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t3522881333;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t4087348596;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t823762219;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t2025745297;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1343950252;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t2597455733;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t2756566330;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t457958266;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t2204371675;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_t1964600252;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t2760469101;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t3872604895;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t2541822629;
// System.Exception
struct Exception_t;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t1639936653;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t3982445645;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t539039257;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis[]
struct VirtualAxisU5BU5D_t3683203645;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis,System.Collections.DictionaryEntry>
struct Transform_1_t2533615361;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton[]
struct VirtualButtonU5BU5D_t926872735;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton,System.Collections.DictionaryEntry>
struct Transform_1_t4072251747;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<CnControls.VirtualAxis>[]
struct List_1U5BU5D_t4131373921;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>,System.Collections.DictionaryEntry>
struct Transform_1_t2981785637;
// System.Collections.Generic.List`1<CnControls.VirtualButton>[]
struct List_1U5BU5D_t1148550448;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>,System.Collections.DictionaryEntry>
struct Transform_1_t4293929460;
// CnControls.VirtualButton[]
struct VirtualButtonU5BU5D_t2247933374;
// CnControls.VirtualAxis[]
struct VirtualAxisU5BU5D_t935789551;
// System.Void
struct Void_t1185182177;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// CnControls.DpadAxis[]
struct DpadAxisU5BU5D_t387633461;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t2696614423;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t384203932;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;

extern RuntimeClass* Dictionary_2_t3962437003_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3154576040_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3137277790_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3108089431_RuntimeMethod_var;
extern const uint32_t CnInputManager__ctor_m2849005735_MetadataUsageId;
extern RuntimeClass* CnInputManager_t16497872_il2cpp_TypeInfo_var;
extern const uint32_t CnInputManager_get_Instance_m651793267_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t CnInputManager_get_TouchCount_m157751202_MetadataUsageId;
extern const uint32_t CnInputManager_GetTouch_m4036200253_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m1062706786_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2630743097_RuntimeMethod_var;
extern const uint32_t CnInputManager_GetAxis_m3048911529_MetadataUsageId;
extern const uint32_t CnInputManager_GetButton_m754666042_MetadataUsageId;
extern const uint32_t CnInputManager_GetButtonDown_m4216504428_MetadataUsageId;
extern const uint32_t CnInputManager_GetButtonUp_m2060150396_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m672998822_RuntimeMethod_var;
extern const uint32_t CnInputManager_AxisExists_m95741991_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m617935258_RuntimeMethod_var;
extern const uint32_t CnInputManager_ButtonExists_m2689649392_MetadataUsageId;
extern RuntimeClass* List_1_t4177180704_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2292671058_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2326629400_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1720352400_RuntimeMethod_var;
extern const uint32_t CnInputManager_RegisterVirtualAxis_m3521689230_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Remove_m4289802854_RuntimeMethod_var;
extern String_t* _stringLiteral542744637;
extern String_t* _stringLiteral2513976067;
extern String_t* _stringLiteral3842785318;
extern String_t* _stringLiteral1650275928;
extern const uint32_t CnInputManager_UnregisterVirtualAxis_m1265339305_MetadataUsageId;
extern RuntimeClass* List_1_t3369319741_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3837413355_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m189772369_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2731066031_RuntimeMethod_var;
extern const uint32_t CnInputManager_RegisterVirtualButton_m3096476519_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m1119192539_RuntimeMethod_var;
extern String_t* _stringLiteral3890388708;
extern String_t* _stringLiteral707811840;
extern const uint32_t CnInputManager_UnregisterVirtualButton_m772080246_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m3449434113_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3448069616_RuntimeMethod_var;
extern const uint32_t CnInputManager_GetVirtualAxisValue_m456977846_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m1157183561_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2718932326_RuntimeMethod_var;
extern const uint32_t CnInputManager_GetAnyVirtualButtonDown_m3615553324_MetadataUsageId;
extern const uint32_t CnInputManager_GetAnyVirtualButtonUp_m1183918506_MetadataUsageId;
extern const uint32_t CnInputManager_GetAnyVirtualButton_m2901901429_MetadataUsageId;
extern RuntimeClass* RectTransformUtility_t1743242446_il2cpp_TypeInfo_var;
extern const uint32_t Dpad_OnPointerDown_m1078264504_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const uint32_t DpadAxis_Awake_m1244525653_MetadataUsageId;
extern RuntimeClass* VirtualAxis_t2705105962_il2cpp_TypeInfo_var;
extern const uint32_t DpadAxis_OnEnable_m95271212_MetadataUsageId;
extern const uint32_t DpadAxis_Press_m409404626_MetadataUsageId;
extern RuntimeClass* Graphic_t1660335611_il2cpp_TypeInfo_var;
extern const uint32_t EmptyGraphic__ctor_m4624055_MetadataUsageId;
extern RuntimeClass* KeyframeU5BU5D_t1068524471_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationCurve_t3046754366_il2cpp_TypeInfo_var;
extern const uint32_t SensitiveJoystick__ctor_m757518986_MetadataUsageId;
extern const uint32_t SensitiveJoystick_OnDrag_m2440427309_MetadataUsageId;
extern String_t* _stringLiteral1930566815;
extern const uint32_t SimpleButton__ctor_m804020201_MetadataUsageId;
extern RuntimeClass* VirtualButton_t1897244999_il2cpp_TypeInfo_var;
extern const uint32_t SimpleButton_OnEnable_m1436442780_MetadataUsageId;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern const uint32_t SimpleJoystick__ctor_m687439859_MetadataUsageId;
extern const uint32_t SimpleJoystick_Awake_m4282195851_MetadataUsageId;
extern const uint32_t SimpleJoystick_OnEnable_m1273232302_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t SimpleJoystick_OnDrag_m1433377547_MetadataUsageId;
extern const uint32_t SimpleJoystick_OnPointerDown_m1819683062_MetadataUsageId;
extern const uint32_t Touchpad__ctor_m3847996051_MetadataUsageId;
extern const uint32_t Touchpad_OnEnable_m4145045210_MetadataUsageId;
extern const uint32_t Touchpad_Update_m753503222_MetadataUsageId;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t FourWayController__ctor_m1442805656_MetadataUsageId;
extern const uint32_t FourWayController_Update_m2218027012_MetadataUsageId;
extern const uint32_t RotateCamera_Update_m3593010096_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t RotationConstraint_Awake_m4024623427_MetadataUsageId;
extern const uint32_t RotationConstraint_LateUpdate_m2469188857_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCharacterController_t1138636865_m3643263329_RuntimeMethod_var;
extern const uint32_t ThidPersonExampleController_OnEnable_m2960848733_MetadataUsageId;
extern const uint32_t ThidPersonExampleController_Update_m2867403993_MetadataUsageId;
extern const uint32_t Camera2DFollow_Start_m622883919_MetadataUsageId;
extern const uint32_t Camera2DFollow_Update_m1162929075_MetadataUsageId;
extern String_t* _stringLiteral2261822918;
extern const uint32_t Restarter_OnTriggerEnter2D_m388320205_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m4049400462_RuntimeMethod_var;
extern const uint32_t AbstractTargetFollower_Start_m3187027043_MetadataUsageId;
extern const uint32_t AbstractTargetFollower_FixedUpdate_m2948633058_MetadataUsageId;
extern const uint32_t AbstractTargetFollower_LateUpdate_m770262367_MetadataUsageId;
extern const uint32_t AbstractTargetFollower_ManualUpdate_m3296222285_MetadataUsageId;
extern const uint32_t AbstractTargetFollower_FindAndTargetPlayer_m654483193_MetadataUsageId;
extern const uint32_t AutoCam__ctor_m1453755247_MetadataUsageId;
extern const uint32_t AutoCam_FollowTarget_m2695955448_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisCamera_t4157153871_m3232034033_RuntimeMethod_var;
extern const uint32_t PivotBasedCameraRig_Awake_m3014846370_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisPlatformerCharacter2D_t4151009609_m81340503_RuntimeMethod_var;
extern const uint32_t Platformer2DUserControl_Awake_m2059030511_MetadataUsageId;
extern const uint32_t Platformer2DUserControl_Update_m1575461566_MetadataUsageId;
extern const uint32_t Platformer2DUserControl_FixedUpdate_m1374030358_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m2731142064_RuntimeMethod_var;
extern String_t* _stringLiteral1396832867;
extern const uint32_t PlatformerCharacter2D_Awake_m1454527382_MetadataUsageId;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3128803744;
extern const uint32_t PlatformerCharacter2D_FixedUpdate_m1238418411_MetadataUsageId;
extern String_t* _stringLiteral3556802456;
extern const uint32_t PlatformerCharacter2D_Move_m4107252912_MetadataUsageId;
extern const uint32_t AxisTouchButton__ctor_m999535707_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var;
extern RuntimeClass* VirtualAxis_t4087348596_il2cpp_TypeInfo_var;
extern const uint32_t AxisTouchButton_OnEnable_m442372918_MetadataUsageId;
extern const RuntimeType* AxisTouchButton_t3522881333_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* AxisTouchButtonU5BU5D_t4256519256_il2cpp_TypeInfo_var;
extern const uint32_t AxisTouchButton_FindPairedButton_m3895318073_MetadataUsageId;
extern const uint32_t AxisTouchButton_OnPointerDown_m2871318548_MetadataUsageId;
extern const uint32_t AxisTouchButton_OnPointerUp_m3116908619_MetadataUsageId;
extern const uint32_t ButtonHandler_SetDownState_m1604948932_MetadataUsageId;
extern const uint32_t ButtonHandler_SetUpState_m1609465475_MetadataUsageId;
extern const uint32_t ButtonHandler_SetAxisPositiveState_m3352739966_MetadataUsageId;
extern const uint32_t ButtonHandler_SetAxisNeutralState_m3530688688_MetadataUsageId;
extern const uint32_t ButtonHandler_SetAxisNegativeState_m513810363_MetadataUsageId;
extern RuntimeClass* MobileInput_t2025745297_il2cpp_TypeInfo_var;
extern RuntimeClass* StandaloneInput_t1343950252_il2cpp_TypeInfo_var;
extern const uint32_t CrossPlatformInputManager__cctor_m342528670_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SwitchActiveInputMethod_m1628095800_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_AxisExists_m365322552_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_ButtonExists_m3745088456_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualAxis_m3479801628_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_RegisterVirtualButton_m1830161946_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral62725243;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_VirtualAxisReference_m1463805196_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m693277759_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxisRaw_m3797907116_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetAxis_m4082502259_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButton_m241794690_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonDown_m1689635996_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_GetButtonUp_m100471868_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonDown_m1980143873_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetButtonUp_m3204959434_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisPositive_m3893292619_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisNegative_m1070090094_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxisZero_m3139545681_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetAxis_m1144576044_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_get_mousePosition_m2355398278_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionY_m427631433_MetadataUsageId;
extern const uint32_t CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475_MetadataUsageId;
extern const uint32_t VirtualAxis_Remove_m3159277484_MetadataUsageId;
extern const uint32_t VirtualButton_Remove_m3337140985_MetadataUsageId;
extern const uint32_t InputAxisScrollbar_HandleInput_m921720287_MetadataUsageId;
extern const uint32_t Joystick__ctor_m2282195716_MetadataUsageId;
extern const uint32_t Joystick_UpdateVirtualAxes_m1439422241_MetadataUsageId;
extern const uint32_t Joystick_CreateVirtualAxes_m2739417166_MetadataUsageId;
extern const uint32_t Joystick_OnDrag_m2237949000_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t1003666588_m91970758_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t1003666588_m1318992319_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_t2760469101_m928840512_RuntimeMethod_var;
extern String_t* _stringLiteral3534642813;
extern const uint32_t MobileControlRig_Start_m3940777587_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t MobileControlRig_EnableControlRig_m2268035780_MetadataUsageId;
extern RuntimeClass* VirtualButton_t2756566330_il2cpp_TypeInfo_var;
extern const uint32_t MobileInput_AddButton_m1457048403_MetadataUsageId;
extern const uint32_t MobileInput_AddAxes_m488652706_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1067981918_RuntimeMethod_var;
extern const uint32_t MobileInput_GetAxis_m2154000143_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m572056520_RuntimeMethod_var;
extern const uint32_t MobileInput_SetButtonDown_m3216050691_MetadataUsageId;
extern const uint32_t MobileInput_SetButtonUp_m157564634_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisPositive_m3252752591_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisNegative_m2158886203_MetadataUsageId;
extern const uint32_t MobileInput_SetAxisZero_m4114279636_MetadataUsageId;
extern const uint32_t MobileInput_SetAxis_m8177381_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonDown_m504405365_MetadataUsageId;
extern const uint32_t MobileInput_GetButtonUp_m2869453812_MetadataUsageId;
extern const uint32_t MobileInput_GetButton_m1481759253_MetadataUsageId;
extern const uint32_t StandaloneInput_GetAxis_m2410539728_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButton_m1835211858_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonDown_m3583403365_MetadataUsageId;
extern const uint32_t StandaloneInput_GetButtonUp_m3464108891_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1111251549;
extern const uint32_t StandaloneInput_SetButtonDown_m3676829417_MetadataUsageId;
extern const uint32_t StandaloneInput_SetButtonUp_m191088641_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxisPositive_m3047996072_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxisNegative_m1888816296_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxisZero_m1274847735_MetadataUsageId;
extern const uint32_t StandaloneInput_SetAxis_m55497828_MetadataUsageId;
extern const uint32_t StandaloneInput_MousePosition_m3719131973_MetadataUsageId;
extern const uint32_t TiltInput_OnEnable_m692757573_MetadataUsageId;
extern const uint32_t TiltInput_Update_m223364922_MetadataUsageId;
extern const uint32_t TouchPad__ctor_m1845169266_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const uint32_t TouchPad_Start_m2936652414_MetadataUsageId;
extern const uint32_t TouchPad_CreateVirtualAxes_m1112936150_MetadataUsageId;
extern const uint32_t TouchPad_OnPointerDown_m2573988246_MetadataUsageId;
extern const uint32_t TouchPad_Update_m4068717841_MetadataUsageId;
extern const uint32_t TouchPad_OnPointerUp_m2465142363_MetadataUsageId;
extern const uint32_t TouchPad_OnDisable_m3391228923_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3872604895_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2541822629_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3611672568_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2614243156_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const uint32_t VirtualInput__ctor_m132259715_MetadataUsageId;
extern const uint32_t VirtualInput_AxisExists_m20278768_MetadataUsageId;
extern const uint32_t VirtualInput_ButtonExists_m3875122617_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m2550485437_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern String_t* _stringLiteral1316003440;
extern String_t* _stringLiteral499939329;
extern const uint32_t VirtualInput_RegisterVirtualAxis_m2884529091_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m1118216421_RuntimeMethod_var;
extern String_t* _stringLiteral341380797;
extern const uint32_t VirtualInput_RegisterVirtualButton_m3959785200_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2199267801_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualAxis_m2956537171_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2343242332_RuntimeMethod_var;
extern const uint32_t VirtualInput_UnRegisterVirtualButton_m3129182690_MetadataUsageId;
extern const uint32_t VirtualInput_VirtualAxisReference_m2155778560_MetadataUsageId;

struct DpadAxisU5BU5D_t387633461;
struct KeyframeU5BU5D_t1068524471;
struct Vector3U5BU5D_t1718750761;
struct Collider2DU5BU5D_t1693969295;
struct AxisTouchButtonU5BU5D_t4256519256;
struct ObjectU5BU5D_t1417781964;
struct TouchU5BU5D_t1849554061;


#ifndef U3CMODULEU3E_T692745550_H
#define U3CMODULEU3E_T692745550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745550 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745550_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VIRTUALAXIS_T2705105962_H
#define VIRTUALAXIS_T2705105962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.VirtualAxis
struct  VirtualAxis_t2705105962  : public RuntimeObject
{
public:
	// System.String CnControls.VirtualAxis::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Single CnControls.VirtualAxis::<Value>k__BackingField
	float ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t2705105962, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t2705105962, ___U3CValueU3Ek__BackingField_1)); }
	inline float get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline float* get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(float value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALAXIS_T2705105962_H
#ifndef VIRTUALBUTTON_T1897244999_H
#define VIRTUALBUTTON_T1897244999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.VirtualButton
struct  VirtualButton_t1897244999  : public RuntimeObject
{
public:
	// System.String CnControls.VirtualButton::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean CnControls.VirtualButton::<IsPressed>k__BackingField
	bool ___U3CIsPressedU3Ek__BackingField_1;
	// System.Int32 CnControls.VirtualButton::_lastPressedFrame
	int32_t ____lastPressedFrame_2;
	// System.Int32 CnControls.VirtualButton::_lastReleasedFrame
	int32_t ____lastReleasedFrame_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t1897244999, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIsPressedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t1897244999, ___U3CIsPressedU3Ek__BackingField_1)); }
	inline bool get_U3CIsPressedU3Ek__BackingField_1() const { return ___U3CIsPressedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsPressedU3Ek__BackingField_1() { return &___U3CIsPressedU3Ek__BackingField_1; }
	inline void set_U3CIsPressedU3Ek__BackingField_1(bool value)
	{
		___U3CIsPressedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__lastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t1897244999, ____lastPressedFrame_2)); }
	inline int32_t get__lastPressedFrame_2() const { return ____lastPressedFrame_2; }
	inline int32_t* get_address_of__lastPressedFrame_2() { return &____lastPressedFrame_2; }
	inline void set__lastPressedFrame_2(int32_t value)
	{
		____lastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of__lastReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t1897244999, ____lastReleasedFrame_3)); }
	inline int32_t get__lastReleasedFrame_3() const { return ____lastReleasedFrame_3; }
	inline int32_t* get_address_of__lastReleasedFrame_3() { return &____lastReleasedFrame_3; }
	inline void set__lastReleasedFrame_3(int32_t value)
	{
		____lastReleasedFrame_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTON_T1897244999_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef CROSSPLATFORMINPUTMANAGER_T191731427_H
#define CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t191731427  : public RuntimeObject
{
public:

public:
};

struct CrossPlatformInputManager_t191731427_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_t2597455733 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_t2597455733 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_t2597455733 * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___activeInput_0)); }
	inline VirtualInput_t2597455733 * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_t2597455733 ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_t2597455733 * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier((&___activeInput_0), value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_t2597455733 * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_t2597455733 ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_t2597455733 * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_TouchInput_1), value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t191731427_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_t2597455733 * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_t2597455733 ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_t2597455733 * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_HardwareInput_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSPLATFORMINPUTMANAGER_T191731427_H
#ifndef VIRTUALBUTTON_T2756566330_H
#define VIRTUALBUTTON_T2756566330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct  VirtualButton_t2756566330  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___U3CmatchWithInputManagerU3Ek__BackingField_1)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_1() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_1() { return &___U3CmatchWithInputManagerU3Ek__BackingField_1; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_1(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_LastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_LastPressedFrame_2)); }
	inline int32_t get_m_LastPressedFrame_2() const { return ___m_LastPressedFrame_2; }
	inline int32_t* get_address_of_m_LastPressedFrame_2() { return &___m_LastPressedFrame_2; }
	inline void set_m_LastPressedFrame_2(int32_t value)
	{
		___m_LastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of_m_ReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_ReleasedFrame_3)); }
	inline int32_t get_m_ReleasedFrame_3() const { return ___m_ReleasedFrame_3; }
	inline int32_t* get_address_of_m_ReleasedFrame_3() { return &___m_ReleasedFrame_3; }
	inline void set_m_ReleasedFrame_3(int32_t value)
	{
		___m_ReleasedFrame_3 = value;
	}

	inline static int32_t get_offset_of_m_Pressed_4() { return static_cast<int32_t>(offsetof(VirtualButton_t2756566330, ___m_Pressed_4)); }
	inline bool get_m_Pressed_4() const { return ___m_Pressed_4; }
	inline bool* get_address_of_m_Pressed_4() { return &___m_Pressed_4; }
	inline void set_m_Pressed_4(bool value)
	{
		___m_Pressed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTON_T2756566330_H
#ifndef DICTIONARY_2_T3872604895_H
#define DICTIONARY_2_T3872604895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct  Dictionary_2_t3872604895  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualAxisU5BU5D_t3683203645* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___valueSlots_7)); }
	inline VirtualAxisU5BU5D_t3683203645* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualAxisU5BU5D_t3683203645** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualAxisU5BU5D_t3683203645* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3872604895_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2533615361 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3872604895_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2533615361 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2533615361 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2533615361 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3872604895_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef DICTIONARY_2_T2541822629_H
#define DICTIONARY_2_T2541822629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct  Dictionary_2_t2541822629  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VirtualButtonU5BU5D_t926872735* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___valueSlots_7)); }
	inline VirtualButtonU5BU5D_t926872735* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VirtualButtonU5BU5D_t926872735** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VirtualButtonU5BU5D_t926872735* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2541822629_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4072251747 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2541822629_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4072251747 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4072251747 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4072251747 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2541822629_H
#ifndef VIRTUALAXIS_T4087348596_H
#define VIRTUALAXIS_T4087348596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct  VirtualAxis_t4087348596  : public RuntimeObject
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualAxis_t4087348596, ___U3CmatchWithInputManagerU3Ek__BackingField_2)); }
	inline bool get_U3CmatchWithInputManagerU3Ek__BackingField_2() const { return ___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CmatchWithInputManagerU3Ek__BackingField_2() { return &___U3CmatchWithInputManagerU3Ek__BackingField_2; }
	inline void set_U3CmatchWithInputManagerU3Ek__BackingField_2(bool value)
	{
		___U3CmatchWithInputManagerU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALAXIS_T4087348596_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CNINPUTMANAGER_T16497872_H
#define CNINPUTMANAGER_T16497872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.CnInputManager
struct  CnInputManager_t16497872  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>> CnControls.CnInputManager::_virtualAxisDictionary
	Dictionary_2_t3962437003 * ____virtualAxisDictionary_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>> CnControls.CnInputManager::_virtualButtonsDictionary
	Dictionary_2_t3154576040 * ____virtualButtonsDictionary_2;

public:
	inline static int32_t get_offset_of__virtualAxisDictionary_1() { return static_cast<int32_t>(offsetof(CnInputManager_t16497872, ____virtualAxisDictionary_1)); }
	inline Dictionary_2_t3962437003 * get__virtualAxisDictionary_1() const { return ____virtualAxisDictionary_1; }
	inline Dictionary_2_t3962437003 ** get_address_of__virtualAxisDictionary_1() { return &____virtualAxisDictionary_1; }
	inline void set__virtualAxisDictionary_1(Dictionary_2_t3962437003 * value)
	{
		____virtualAxisDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&____virtualAxisDictionary_1), value);
	}

	inline static int32_t get_offset_of__virtualButtonsDictionary_2() { return static_cast<int32_t>(offsetof(CnInputManager_t16497872, ____virtualButtonsDictionary_2)); }
	inline Dictionary_2_t3154576040 * get__virtualButtonsDictionary_2() const { return ____virtualButtonsDictionary_2; }
	inline Dictionary_2_t3154576040 ** get_address_of__virtualButtonsDictionary_2() { return &____virtualButtonsDictionary_2; }
	inline void set__virtualButtonsDictionary_2(Dictionary_2_t3154576040 * value)
	{
		____virtualButtonsDictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____virtualButtonsDictionary_2), value);
	}
};

struct CnInputManager_t16497872_StaticFields
{
public:
	// CnControls.CnInputManager CnControls.CnInputManager::_instance
	CnInputManager_t16497872 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(CnInputManager_t16497872_StaticFields, ____instance_0)); }
	inline CnInputManager_t16497872 * get__instance_0() const { return ____instance_0; }
	inline CnInputManager_t16497872 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(CnInputManager_t16497872 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CNINPUTMANAGER_T16497872_H
#ifndef DICTIONARY_2_T3962437003_H
#define DICTIONARY_2_T3962437003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>
struct  Dictionary_2_t3962437003  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t4131373921* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___valueSlots_7)); }
	inline List_1U5BU5D_t4131373921* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t4131373921** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t4131373921* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3962437003_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2981785637 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3962437003_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2981785637 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2981785637 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2981785637 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3962437003_H
#ifndef DICTIONARY_2_T3154576040_H
#define DICTIONARY_2_T3154576040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>
struct  Dictionary_2_t3154576040  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t1148550448* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___valueSlots_7)); }
	inline List_1U5BU5D_t1148550448* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t1148550448** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t1148550448* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3154576040_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4293929460 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3154576040_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4293929460 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4293929460 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4293929460 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3154576040_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3369319741_H
#define LIST_1_T3369319741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<CnControls.VirtualButton>
struct  List_1_t3369319741  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VirtualButtonU5BU5D_t2247933374* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3369319741, ____items_1)); }
	inline VirtualButtonU5BU5D_t2247933374* get__items_1() const { return ____items_1; }
	inline VirtualButtonU5BU5D_t2247933374** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VirtualButtonU5BU5D_t2247933374* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3369319741, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3369319741, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3369319741_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	VirtualButtonU5BU5D_t2247933374* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3369319741_StaticFields, ___EmptyArray_4)); }
	inline VirtualButtonU5BU5D_t2247933374* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline VirtualButtonU5BU5D_t2247933374** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(VirtualButtonU5BU5D_t2247933374* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3369319741_H
#ifndef LIST_1_T4177180704_H
#define LIST_1_T4177180704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<CnControls.VirtualAxis>
struct  List_1_t4177180704  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VirtualAxisU5BU5D_t935789551* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4177180704, ____items_1)); }
	inline VirtualAxisU5BU5D_t935789551* get__items_1() const { return ____items_1; }
	inline VirtualAxisU5BU5D_t935789551** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VirtualAxisU5BU5D_t935789551* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4177180704, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4177180704, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4177180704_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	VirtualAxisU5BU5D_t935789551* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4177180704_StaticFields, ___EmptyArray_4)); }
	inline VirtualAxisU5BU5D_t935789551* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline VirtualAxisU5BU5D_t935789551** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(VirtualAxisU5BU5D_t935789551* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4177180704_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef AXISOPTION_T1372819835_H
#define AXISOPTION_T1372819835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct  AxisOption_t1372819835 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t1372819835, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTION_T1372819835_H
#ifndef UPDATETYPE_T2449601881_H
#define UPDATETYPE_T2449601881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType
struct  UpdateType_t2449601881 
{
public:
	// System.Int32 UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpdateType_t2449601881, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETYPE_T2449601881_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef VIRTUALINPUT_T2597455733_H
#define VIRTUALINPUT_T2597455733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t2597455733  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t3722313464  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t3872604895 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t2541822629 * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t3319525431 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualAxes_1)); }
	inline Dictionary_2_t3872604895 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_t3872604895 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_t3872604895 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualAxes_1), value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t2541822629 * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t2541822629 ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t2541822629 * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtons_2), value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_t2597455733, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t3319525431 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t3319525431 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t3319525431 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlwaysUseVirtual_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALINPUT_T2597455733_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CONTROLSTYLE_T1372986211_H
#define CONTROLSTYLE_T1372986211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct  ControlStyle_t1372986211 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlStyle_t1372986211, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLSTYLE_T1372986211_H
#ifndef ACTIVEINPUTMETHOD_T139315314_H
#define ACTIVEINPUTMETHOD_T139315314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
struct  ActiveInputMethod_t139315314 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActiveInputMethod_t139315314, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVEINPUTMETHOD_T139315314_H
#ifndef MAPPINGTYPE_T2039944511_H
#define MAPPINGTYPE_T2039944511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct  MappingType_t2039944511 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t2039944511, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPPINGTYPE_T2039944511_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef VERTEXHELPER_T2453304189_H
#define VERTEXHELPER_T2453304189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t2453304189  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t899420910 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t4072576034 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t3628304265 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t3628304265 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t3628304265 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t3628304265 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t899420910 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t496136383 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t128053199 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Positions_0)); }
	inline List_1_t899420910 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t899420910 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t899420910 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Colors_1)); }
	inline List_1_t4072576034 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t4072576034 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t4072576034 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv0S_2)); }
	inline List_1_t3628304265 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t3628304265 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t3628304265 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv1S_3)); }
	inline List_1_t3628304265 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t3628304265 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t3628304265 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv2S_4)); }
	inline List_1_t3628304265 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t3628304265 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t3628304265 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv3S_5)); }
	inline List_1_t3628304265 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t3628304265 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t3628304265 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Normals_6)); }
	inline List_1_t899420910 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t899420910 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t899420910 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Tangents_7)); }
	inline List_1_t496136383 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t496136383 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t496136383 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Indices_8)); }
	inline List_1_t128053199 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t128053199 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t128053199 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t2453304189_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t3722313464  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t3722313464  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t3722313464 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t3722313464  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T2453304189_H
#ifndef AXISOPTION_T3128671669_H
#define AXISOPTION_T3128671669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption
struct  AxisOption_t3128671669 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t3128671669, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTION_T3128671669_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
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
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef AXISOPTIONS_T3101732129_H
#define AXISOPTIONS_T3101732129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct  AxisOptions_t3101732129 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOptions_t3101732129, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISOPTIONS_T3101732129_H
#ifndef CONTROLMOVEMENTDIRECTION_T2392175116_H
#define CONTROLMOVEMENTDIRECTION_T2392175116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.ControlMovementDirection
struct  ControlMovementDirection_t2392175116 
{
public:
	// System.Int32 CnControls.ControlMovementDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlMovementDirection_t2392175116, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLMOVEMENTDIRECTION_T2392175116_H
#ifndef COLLISIONFLAGS_T1776808576_H
#define COLLISIONFLAGS_T1776808576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionFlags
struct  CollisionFlags_t1776808576 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionFlags_t1776808576, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONFLAGS_T1776808576_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef MOBILEINPUT_T2025745297_H
#define MOBILEINPUT_T2025745297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t2025745297  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEINPUT_T2025745297_H
#ifndef AXISMAPPING_T3982445645_H
#define AXISMAPPING_T3982445645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct  AxisMapping_t3982445645  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t3982445645, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISMAPPING_T3982445645_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef STANDALONEINPUT_T1343950252_H
#define STANDALONEINPUT_T1343950252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t1343950252  : public VirtualInput_t2597455733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUT_T1343950252_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef CHARACTERCONTROLLER_T1138636865_H
#define CHARACTERCONTROLLER_T1138636865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1138636865  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1138636865_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef TOUCHPAD_T539039257_H
#define TOUCHPAD_T539039257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct  TouchPad_t539039257  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_2;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_3;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t3722313464  ___m_StartPos_8;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t2156229523  ___m_PreviousDelta_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t3722313464  ___m_JoytickOutput_10;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_11;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_12;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_13;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_14;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_15;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_16;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t2156229523  ___m_PreviousTouchPos_17;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t3722313464  ___m_Center_18;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t2670269651 * ___m_Image_19;

public:
	inline static int32_t get_offset_of_axesToUse_2() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___axesToUse_2)); }
	inline int32_t get_axesToUse_2() const { return ___axesToUse_2; }
	inline int32_t* get_address_of_axesToUse_2() { return &___axesToUse_2; }
	inline void set_axesToUse_2(int32_t value)
	{
		___axesToUse_2 = value;
	}

	inline static int32_t get_offset_of_controlStyle_3() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___controlStyle_3)); }
	inline int32_t get_controlStyle_3() const { return ___controlStyle_3; }
	inline int32_t* get_address_of_controlStyle_3() { return &___controlStyle_3; }
	inline void set_controlStyle_3(int32_t value)
	{
		___controlStyle_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_Xsensitivity_6() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Xsensitivity_6)); }
	inline float get_Xsensitivity_6() const { return ___Xsensitivity_6; }
	inline float* get_address_of_Xsensitivity_6() { return &___Xsensitivity_6; }
	inline void set_Xsensitivity_6(float value)
	{
		___Xsensitivity_6 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_7() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___Ysensitivity_7)); }
	inline float get_Ysensitivity_7() const { return ___Ysensitivity_7; }
	inline float* get_address_of_Ysensitivity_7() { return &___Ysensitivity_7; }
	inline void set_Ysensitivity_7(float value)
	{
		___Ysensitivity_7 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_StartPos_8)); }
	inline Vector3_t3722313464  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t3722313464  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_9() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousDelta_9)); }
	inline Vector2_t2156229523  get_m_PreviousDelta_9() const { return ___m_PreviousDelta_9; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousDelta_9() { return &___m_PreviousDelta_9; }
	inline void set_m_PreviousDelta_9(Vector2_t2156229523  value)
	{
		___m_PreviousDelta_9 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_10() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_JoytickOutput_10)); }
	inline Vector3_t3722313464  get_m_JoytickOutput_10() const { return ___m_JoytickOutput_10; }
	inline Vector3_t3722313464 * get_address_of_m_JoytickOutput_10() { return &___m_JoytickOutput_10; }
	inline void set_m_JoytickOutput_10(Vector3_t3722313464  value)
	{
		___m_JoytickOutput_10 = value;
	}

	inline static int32_t get_offset_of_m_UseX_11() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseX_11)); }
	inline bool get_m_UseX_11() const { return ___m_UseX_11; }
	inline bool* get_address_of_m_UseX_11() { return &___m_UseX_11; }
	inline void set_m_UseX_11(bool value)
	{
		___m_UseX_11 = value;
	}

	inline static int32_t get_offset_of_m_UseY_12() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_UseY_12)); }
	inline bool get_m_UseY_12() const { return ___m_UseY_12; }
	inline bool* get_address_of_m_UseY_12() { return &___m_UseY_12; }
	inline void set_m_UseY_12(bool value)
	{
		___m_UseY_12 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_13() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_HorizontalVirtualAxis_13)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_13() const { return ___m_HorizontalVirtualAxis_13; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_13() { return &___m_HorizontalVirtualAxis_13; }
	inline void set_m_HorizontalVirtualAxis_13(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_13), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_14() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_VerticalVirtualAxis_14)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_14() const { return ___m_VerticalVirtualAxis_14; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_14() { return &___m_VerticalVirtualAxis_14; }
	inline void set_m_VerticalVirtualAxis_14(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_14), value);
	}

	inline static int32_t get_offset_of_m_Dragging_15() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Dragging_15)); }
	inline bool get_m_Dragging_15() const { return ___m_Dragging_15; }
	inline bool* get_address_of_m_Dragging_15() { return &___m_Dragging_15; }
	inline void set_m_Dragging_15(bool value)
	{
		___m_Dragging_15 = value;
	}

	inline static int32_t get_offset_of_m_Id_16() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Id_16)); }
	inline int32_t get_m_Id_16() const { return ___m_Id_16; }
	inline int32_t* get_address_of_m_Id_16() { return &___m_Id_16; }
	inline void set_m_Id_16(int32_t value)
	{
		___m_Id_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_17() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_PreviousTouchPos_17)); }
	inline Vector2_t2156229523  get_m_PreviousTouchPos_17() const { return ___m_PreviousTouchPos_17; }
	inline Vector2_t2156229523 * get_address_of_m_PreviousTouchPos_17() { return &___m_PreviousTouchPos_17; }
	inline void set_m_PreviousTouchPos_17(Vector2_t2156229523  value)
	{
		___m_PreviousTouchPos_17 = value;
	}

	inline static int32_t get_offset_of_m_Center_18() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Center_18)); }
	inline Vector3_t3722313464  get_m_Center_18() const { return ___m_Center_18; }
	inline Vector3_t3722313464 * get_address_of_m_Center_18() { return &___m_Center_18; }
	inline void set_m_Center_18(Vector3_t3722313464  value)
	{
		___m_Center_18 = value;
	}

	inline static int32_t get_offset_of_m_Image_19() { return static_cast<int32_t>(offsetof(TouchPad_t539039257, ___m_Image_19)); }
	inline Image_t2670269651 * get_m_Image_19() const { return ___m_Image_19; }
	inline Image_t2670269651 ** get_address_of_m_Image_19() { return &___m_Image_19; }
	inline void set_m_Image_19(Image_t2670269651 * value)
	{
		___m_Image_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPAD_T539039257_H
#ifndef TILTINPUT_T1639936653_H
#define TILTINPUT_T1639936653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t1639936653  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t3982445645 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t4087348596 * ___m_SteerAxis_6;

public:
	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___mapping_2)); }
	inline AxisMapping_t3982445645 * get_mapping_2() const { return ___mapping_2; }
	inline AxisMapping_t3982445645 ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(AxisMapping_t3982445645 * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_3() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___tiltAroundAxis_3)); }
	inline int32_t get_tiltAroundAxis_3() const { return ___tiltAroundAxis_3; }
	inline int32_t* get_address_of_tiltAroundAxis_3() { return &___tiltAroundAxis_3; }
	inline void set_tiltAroundAxis_3(int32_t value)
	{
		___tiltAroundAxis_3 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_4() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___fullTiltAngle_4)); }
	inline float get_fullTiltAngle_4() const { return ___fullTiltAngle_4; }
	inline float* get_address_of_fullTiltAngle_4() { return &___fullTiltAngle_4; }
	inline void set_fullTiltAngle_4(float value)
	{
		___fullTiltAngle_4 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_5() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___centreAngleOffset_5)); }
	inline float get_centreAngleOffset_5() const { return ___centreAngleOffset_5; }
	inline float* get_address_of_centreAngleOffset_5() { return &___centreAngleOffset_5; }
	inline void set_centreAngleOffset_5(float value)
	{
		___centreAngleOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_6() { return static_cast<int32_t>(offsetof(TiltInput_t1639936653, ___m_SteerAxis_6)); }
	inline VirtualAxis_t4087348596 * get_m_SteerAxis_6() const { return ___m_SteerAxis_6; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_SteerAxis_6() { return &___m_SteerAxis_6; }
	inline void set_m_SteerAxis_6(VirtualAxis_t4087348596 * value)
	{
		___m_SteerAxis_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SteerAxis_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTINPUT_T1639936653_H
#ifndef CAMERA2DFOLLOW_T3335230098_H
#define CAMERA2DFOLLOW_T3335230098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.Camera2DFollow
struct  Camera2DFollow_t3335230098  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets._2D.Camera2DFollow::target
	Transform_t3600365921 * ___target_2;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::damping
	float ___damping_3;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadFactor
	float ___lookAheadFactor_4;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadReturnSpeed
	float ___lookAheadReturnSpeed_5;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::lookAheadMoveThreshold
	float ___lookAheadMoveThreshold_6;
	// System.Single UnityStandardAssets._2D.Camera2DFollow::m_OffsetZ
	float ___m_OffsetZ_7;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_LastTargetPosition
	Vector3_t3722313464  ___m_LastTargetPosition_8;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_CurrentVelocity
	Vector3_t3722313464  ___m_CurrentVelocity_9;
	// UnityEngine.Vector3 UnityStandardAssets._2D.Camera2DFollow::m_LookAheadPos
	Vector3_t3722313464  ___m_LookAheadPos_10;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_damping_3() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___damping_3)); }
	inline float get_damping_3() const { return ___damping_3; }
	inline float* get_address_of_damping_3() { return &___damping_3; }
	inline void set_damping_3(float value)
	{
		___damping_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadFactor_4() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___lookAheadFactor_4)); }
	inline float get_lookAheadFactor_4() const { return ___lookAheadFactor_4; }
	inline float* get_address_of_lookAheadFactor_4() { return &___lookAheadFactor_4; }
	inline void set_lookAheadFactor_4(float value)
	{
		___lookAheadFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadReturnSpeed_5() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___lookAheadReturnSpeed_5)); }
	inline float get_lookAheadReturnSpeed_5() const { return ___lookAheadReturnSpeed_5; }
	inline float* get_address_of_lookAheadReturnSpeed_5() { return &___lookAheadReturnSpeed_5; }
	inline void set_lookAheadReturnSpeed_5(float value)
	{
		___lookAheadReturnSpeed_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadMoveThreshold_6() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___lookAheadMoveThreshold_6)); }
	inline float get_lookAheadMoveThreshold_6() const { return ___lookAheadMoveThreshold_6; }
	inline float* get_address_of_lookAheadMoveThreshold_6() { return &___lookAheadMoveThreshold_6; }
	inline void set_lookAheadMoveThreshold_6(float value)
	{
		___lookAheadMoveThreshold_6 = value;
	}

	inline static int32_t get_offset_of_m_OffsetZ_7() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_OffsetZ_7)); }
	inline float get_m_OffsetZ_7() const { return ___m_OffsetZ_7; }
	inline float* get_address_of_m_OffsetZ_7() { return &___m_OffsetZ_7; }
	inline void set_m_OffsetZ_7(float value)
	{
		___m_OffsetZ_7 = value;
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_8() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_LastTargetPosition_8)); }
	inline Vector3_t3722313464  get_m_LastTargetPosition_8() const { return ___m_LastTargetPosition_8; }
	inline Vector3_t3722313464 * get_address_of_m_LastTargetPosition_8() { return &___m_LastTargetPosition_8; }
	inline void set_m_LastTargetPosition_8(Vector3_t3722313464  value)
	{
		___m_LastTargetPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_CurrentVelocity_9() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_CurrentVelocity_9)); }
	inline Vector3_t3722313464  get_m_CurrentVelocity_9() const { return ___m_CurrentVelocity_9; }
	inline Vector3_t3722313464 * get_address_of_m_CurrentVelocity_9() { return &___m_CurrentVelocity_9; }
	inline void set_m_CurrentVelocity_9(Vector3_t3722313464  value)
	{
		___m_CurrentVelocity_9 = value;
	}

	inline static int32_t get_offset_of_m_LookAheadPos_10() { return static_cast<int32_t>(offsetof(Camera2DFollow_t3335230098, ___m_LookAheadPos_10)); }
	inline Vector3_t3722313464  get_m_LookAheadPos_10() const { return ___m_LookAheadPos_10; }
	inline Vector3_t3722313464 * get_address_of_m_LookAheadPos_10() { return &___m_LookAheadPos_10; }
	inline void set_m_LookAheadPos_10(Vector3_t3722313464  value)
	{
		___m_LookAheadPos_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA2DFOLLOW_T3335230098_H
#ifndef THIDPERSONEXAMPLECONTROLLER_T267694585_H
#define THIDPERSONEXAMPLECONTROLLER_T267694585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThidPersonExampleController
struct  ThidPersonExampleController_t267694585  : public MonoBehaviour_t3962482529
{
public:
	// System.Single ThidPersonExampleController::MovementSpeed
	float ___MovementSpeed_2;
	// UnityEngine.Transform ThidPersonExampleController::_mainCameraTransform
	Transform_t3600365921 * ____mainCameraTransform_3;
	// UnityEngine.Transform ThidPersonExampleController::_transform
	Transform_t3600365921 * ____transform_4;
	// UnityEngine.CharacterController ThidPersonExampleController::_characterController
	CharacterController_t1138636865 * ____characterController_5;

public:
	inline static int32_t get_offset_of_MovementSpeed_2() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t267694585, ___MovementSpeed_2)); }
	inline float get_MovementSpeed_2() const { return ___MovementSpeed_2; }
	inline float* get_address_of_MovementSpeed_2() { return &___MovementSpeed_2; }
	inline void set_MovementSpeed_2(float value)
	{
		___MovementSpeed_2 = value;
	}

	inline static int32_t get_offset_of__mainCameraTransform_3() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t267694585, ____mainCameraTransform_3)); }
	inline Transform_t3600365921 * get__mainCameraTransform_3() const { return ____mainCameraTransform_3; }
	inline Transform_t3600365921 ** get_address_of__mainCameraTransform_3() { return &____mainCameraTransform_3; }
	inline void set__mainCameraTransform_3(Transform_t3600365921 * value)
	{
		____mainCameraTransform_3 = value;
		Il2CppCodeGenWriteBarrier((&____mainCameraTransform_3), value);
	}

	inline static int32_t get_offset_of__transform_4() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t267694585, ____transform_4)); }
	inline Transform_t3600365921 * get__transform_4() const { return ____transform_4; }
	inline Transform_t3600365921 ** get_address_of__transform_4() { return &____transform_4; }
	inline void set__transform_4(Transform_t3600365921 * value)
	{
		____transform_4 = value;
		Il2CppCodeGenWriteBarrier((&____transform_4), value);
	}

	inline static int32_t get_offset_of__characterController_5() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t267694585, ____characterController_5)); }
	inline CharacterController_t1138636865 * get__characterController_5() const { return ____characterController_5; }
	inline CharacterController_t1138636865 ** get_address_of__characterController_5() { return &____characterController_5; }
	inline void set__characterController_5(CharacterController_t1138636865 * value)
	{
		____characterController_5 = value;
		Il2CppCodeGenWriteBarrier((&____characterController_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THIDPERSONEXAMPLECONTROLLER_T267694585_H
#ifndef RESTARTER_T269523250_H
#define RESTARTER_T269523250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.Restarter
struct  Restarter_t269523250  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTARTER_T269523250_H
#ifndef SIMPLEBUTTON_T1119332961_H
#define SIMPLEBUTTON_T1119332961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SimpleButton
struct  SimpleButton_t1119332961  : public MonoBehaviour_t3962482529
{
public:
	// System.String CnControls.SimpleButton::ButtonName
	String_t* ___ButtonName_2;
	// CnControls.VirtualButton CnControls.SimpleButton::_virtualButton
	VirtualButton_t1897244999 * ____virtualButton_3;

public:
	inline static int32_t get_offset_of_ButtonName_2() { return static_cast<int32_t>(offsetof(SimpleButton_t1119332961, ___ButtonName_2)); }
	inline String_t* get_ButtonName_2() const { return ___ButtonName_2; }
	inline String_t** get_address_of_ButtonName_2() { return &___ButtonName_2; }
	inline void set_ButtonName_2(String_t* value)
	{
		___ButtonName_2 = value;
		Il2CppCodeGenWriteBarrier((&___ButtonName_2), value);
	}

	inline static int32_t get_offset_of__virtualButton_3() { return static_cast<int32_t>(offsetof(SimpleButton_t1119332961, ____virtualButton_3)); }
	inline VirtualButton_t1897244999 * get__virtualButton_3() const { return ____virtualButton_3; }
	inline VirtualButton_t1897244999 ** get_address_of__virtualButton_3() { return &____virtualButton_3; }
	inline void set__virtualButton_3(VirtualButton_t1897244999 * value)
	{
		____virtualButton_3 = value;
		Il2CppCodeGenWriteBarrier((&____virtualButton_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEBUTTON_T1119332961_H
#ifndef ABSTRACTTARGETFOLLOWER_T1919708159_H
#define ABSTRACTTARGETFOLLOWER_T1919708159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct  AbstractTargetFollower_t1919708159  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_t3600365921 * ___m_Target_2;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_3;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t3916780224 * ___targetRigidbody_5;

public:
	inline static int32_t get_offset_of_m_Target_2() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_Target_2)); }
	inline Transform_t3600365921 * get_m_Target_2() const { return ___m_Target_2; }
	inline Transform_t3600365921 ** get_address_of_m_Target_2() { return &___m_Target_2; }
	inline void set_m_Target_2(Transform_t3600365921 * value)
	{
		___m_Target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_2), value);
	}

	inline static int32_t get_offset_of_m_AutoTargetPlayer_3() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_AutoTargetPlayer_3)); }
	inline bool get_m_AutoTargetPlayer_3() const { return ___m_AutoTargetPlayer_3; }
	inline bool* get_address_of_m_AutoTargetPlayer_3() { return &___m_AutoTargetPlayer_3; }
	inline void set_m_AutoTargetPlayer_3(bool value)
	{
		___m_AutoTargetPlayer_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_4() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___m_UpdateType_4)); }
	inline int32_t get_m_UpdateType_4() const { return ___m_UpdateType_4; }
	inline int32_t* get_address_of_m_UpdateType_4() { return &___m_UpdateType_4; }
	inline void set_m_UpdateType_4(int32_t value)
	{
		___m_UpdateType_4 = value;
	}

	inline static int32_t get_offset_of_targetRigidbody_5() { return static_cast<int32_t>(offsetof(AbstractTargetFollower_t1919708159, ___targetRigidbody_5)); }
	inline Rigidbody_t3916780224 * get_targetRigidbody_5() const { return ___targetRigidbody_5; }
	inline Rigidbody_t3916780224 ** get_address_of_targetRigidbody_5() { return &___targetRigidbody_5; }
	inline void set_targetRigidbody_5(Rigidbody_t3916780224 * value)
	{
		___targetRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((&___targetRigidbody_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTTARGETFOLLOWER_T1919708159_H
#ifndef TOUCHPAD_T4056981531_H
#define TOUCHPAD_T4056981531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.Touchpad
struct  Touchpad_t4056981531  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera CnControls.Touchpad::<CurrentEventCamera>k__BackingField
	Camera_t4157153871 * ___U3CCurrentEventCameraU3Ek__BackingField_2;
	// System.String CnControls.Touchpad::HorizontalAxisName
	String_t* ___HorizontalAxisName_3;
	// System.String CnControls.Touchpad::VerticalAxisName
	String_t* ___VerticalAxisName_4;
	// System.Boolean CnControls.Touchpad::PreserveInertia
	bool ___PreserveInertia_5;
	// System.Single CnControls.Touchpad::Friction
	float ___Friction_6;
	// CnControls.VirtualAxis CnControls.Touchpad::_horizintalAxis
	VirtualAxis_t2705105962 * ____horizintalAxis_7;
	// CnControls.VirtualAxis CnControls.Touchpad::_verticalAxis
	VirtualAxis_t2705105962 * ____verticalAxis_8;
	// System.Int32 CnControls.Touchpad::_lastDragFrameNumber
	int32_t ____lastDragFrameNumber_9;
	// System.Boolean CnControls.Touchpad::_isCurrentlyTweaking
	bool ____isCurrentlyTweaking_10;
	// CnControls.ControlMovementDirection CnControls.Touchpad::ControlMoveAxis
	int32_t ___ControlMoveAxis_11;

public:
	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ___U3CCurrentEventCameraU3Ek__BackingField_2)); }
	inline Camera_t4157153871 * get_U3CCurrentEventCameraU3Ek__BackingField_2() const { return ___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline Camera_t4157153871 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return &___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_2(Camera_t4157153871 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentEventCameraU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_HorizontalAxisName_3() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ___HorizontalAxisName_3)); }
	inline String_t* get_HorizontalAxisName_3() const { return ___HorizontalAxisName_3; }
	inline String_t** get_address_of_HorizontalAxisName_3() { return &___HorizontalAxisName_3; }
	inline void set_HorizontalAxisName_3(String_t* value)
	{
		___HorizontalAxisName_3 = value;
		Il2CppCodeGenWriteBarrier((&___HorizontalAxisName_3), value);
	}

	inline static int32_t get_offset_of_VerticalAxisName_4() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ___VerticalAxisName_4)); }
	inline String_t* get_VerticalAxisName_4() const { return ___VerticalAxisName_4; }
	inline String_t** get_address_of_VerticalAxisName_4() { return &___VerticalAxisName_4; }
	inline void set_VerticalAxisName_4(String_t* value)
	{
		___VerticalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___VerticalAxisName_4), value);
	}

	inline static int32_t get_offset_of_PreserveInertia_5() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ___PreserveInertia_5)); }
	inline bool get_PreserveInertia_5() const { return ___PreserveInertia_5; }
	inline bool* get_address_of_PreserveInertia_5() { return &___PreserveInertia_5; }
	inline void set_PreserveInertia_5(bool value)
	{
		___PreserveInertia_5 = value;
	}

	inline static int32_t get_offset_of_Friction_6() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ___Friction_6)); }
	inline float get_Friction_6() const { return ___Friction_6; }
	inline float* get_address_of_Friction_6() { return &___Friction_6; }
	inline void set_Friction_6(float value)
	{
		___Friction_6 = value;
	}

	inline static int32_t get_offset_of__horizintalAxis_7() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ____horizintalAxis_7)); }
	inline VirtualAxis_t2705105962 * get__horizintalAxis_7() const { return ____horizintalAxis_7; }
	inline VirtualAxis_t2705105962 ** get_address_of__horizintalAxis_7() { return &____horizintalAxis_7; }
	inline void set__horizintalAxis_7(VirtualAxis_t2705105962 * value)
	{
		____horizintalAxis_7 = value;
		Il2CppCodeGenWriteBarrier((&____horizintalAxis_7), value);
	}

	inline static int32_t get_offset_of__verticalAxis_8() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ____verticalAxis_8)); }
	inline VirtualAxis_t2705105962 * get__verticalAxis_8() const { return ____verticalAxis_8; }
	inline VirtualAxis_t2705105962 ** get_address_of__verticalAxis_8() { return &____verticalAxis_8; }
	inline void set__verticalAxis_8(VirtualAxis_t2705105962 * value)
	{
		____verticalAxis_8 = value;
		Il2CppCodeGenWriteBarrier((&____verticalAxis_8), value);
	}

	inline static int32_t get_offset_of__lastDragFrameNumber_9() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ____lastDragFrameNumber_9)); }
	inline int32_t get__lastDragFrameNumber_9() const { return ____lastDragFrameNumber_9; }
	inline int32_t* get_address_of__lastDragFrameNumber_9() { return &____lastDragFrameNumber_9; }
	inline void set__lastDragFrameNumber_9(int32_t value)
	{
		____lastDragFrameNumber_9 = value;
	}

	inline static int32_t get_offset_of__isCurrentlyTweaking_10() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ____isCurrentlyTweaking_10)); }
	inline bool get__isCurrentlyTweaking_10() const { return ____isCurrentlyTweaking_10; }
	inline bool* get_address_of__isCurrentlyTweaking_10() { return &____isCurrentlyTweaking_10; }
	inline void set__isCurrentlyTweaking_10(bool value)
	{
		____isCurrentlyTweaking_10 = value;
	}

	inline static int32_t get_offset_of_ControlMoveAxis_11() { return static_cast<int32_t>(offsetof(Touchpad_t4056981531, ___ControlMoveAxis_11)); }
	inline int32_t get_ControlMoveAxis_11() const { return ___ControlMoveAxis_11; }
	inline int32_t* get_address_of_ControlMoveAxis_11() { return &___ControlMoveAxis_11; }
	inline void set_ControlMoveAxis_11(int32_t value)
	{
		___ControlMoveAxis_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPAD_T4056981531_H
#ifndef SIMPLEJOYSTICK_T421539915_H
#define SIMPLEJOYSTICK_T421539915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SimpleJoystick
struct  SimpleJoystick_t421539915  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera CnControls.SimpleJoystick::<CurrentEventCamera>k__BackingField
	Camera_t4157153871 * ___U3CCurrentEventCameraU3Ek__BackingField_2;
	// System.Single CnControls.SimpleJoystick::MovementRange
	float ___MovementRange_3;
	// System.String CnControls.SimpleJoystick::HorizontalAxisName
	String_t* ___HorizontalAxisName_4;
	// System.String CnControls.SimpleJoystick::VerticalAxisName
	String_t* ___VerticalAxisName_5;
	// System.Boolean CnControls.SimpleJoystick::HideOnRelease
	bool ___HideOnRelease_6;
	// System.Boolean CnControls.SimpleJoystick::MoveBase
	bool ___MoveBase_7;
	// System.Boolean CnControls.SimpleJoystick::SnapsToFinger
	bool ___SnapsToFinger_8;
	// CnControls.ControlMovementDirection CnControls.SimpleJoystick::JoystickMoveAxis
	int32_t ___JoystickMoveAxis_9;
	// UnityEngine.UI.Image CnControls.SimpleJoystick::JoystickBase
	Image_t2670269651 * ___JoystickBase_10;
	// UnityEngine.UI.Image CnControls.SimpleJoystick::Stick
	Image_t2670269651 * ___Stick_11;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::TouchZone
	RectTransform_t3704657025 * ___TouchZone_12;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_initialStickPosition
	Vector2_t2156229523  ____initialStickPosition_13;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_intermediateStickPosition
	Vector2_t2156229523  ____intermediateStickPosition_14;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_initialBasePosition
	Vector2_t2156229523  ____initialBasePosition_15;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::_baseTransform
	RectTransform_t3704657025 * ____baseTransform_16;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::_stickTransform
	RectTransform_t3704657025 * ____stickTransform_17;
	// System.Single CnControls.SimpleJoystick::_oneOverMovementRange
	float ____oneOverMovementRange_18;
	// CnControls.VirtualAxis CnControls.SimpleJoystick::HorizintalAxis
	VirtualAxis_t2705105962 * ___HorizintalAxis_19;
	// CnControls.VirtualAxis CnControls.SimpleJoystick::VerticalAxis
	VirtualAxis_t2705105962 * ___VerticalAxis_20;

public:
	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___U3CCurrentEventCameraU3Ek__BackingField_2)); }
	inline Camera_t4157153871 * get_U3CCurrentEventCameraU3Ek__BackingField_2() const { return ___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline Camera_t4157153871 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return &___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_2(Camera_t4157153871 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentEventCameraU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_MovementRange_3() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___MovementRange_3)); }
	inline float get_MovementRange_3() const { return ___MovementRange_3; }
	inline float* get_address_of_MovementRange_3() { return &___MovementRange_3; }
	inline void set_MovementRange_3(float value)
	{
		___MovementRange_3 = value;
	}

	inline static int32_t get_offset_of_HorizontalAxisName_4() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___HorizontalAxisName_4)); }
	inline String_t* get_HorizontalAxisName_4() const { return ___HorizontalAxisName_4; }
	inline String_t** get_address_of_HorizontalAxisName_4() { return &___HorizontalAxisName_4; }
	inline void set_HorizontalAxisName_4(String_t* value)
	{
		___HorizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___HorizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_VerticalAxisName_5() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___VerticalAxisName_5)); }
	inline String_t* get_VerticalAxisName_5() const { return ___VerticalAxisName_5; }
	inline String_t** get_address_of_VerticalAxisName_5() { return &___VerticalAxisName_5; }
	inline void set_VerticalAxisName_5(String_t* value)
	{
		___VerticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___VerticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_HideOnRelease_6() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___HideOnRelease_6)); }
	inline bool get_HideOnRelease_6() const { return ___HideOnRelease_6; }
	inline bool* get_address_of_HideOnRelease_6() { return &___HideOnRelease_6; }
	inline void set_HideOnRelease_6(bool value)
	{
		___HideOnRelease_6 = value;
	}

	inline static int32_t get_offset_of_MoveBase_7() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___MoveBase_7)); }
	inline bool get_MoveBase_7() const { return ___MoveBase_7; }
	inline bool* get_address_of_MoveBase_7() { return &___MoveBase_7; }
	inline void set_MoveBase_7(bool value)
	{
		___MoveBase_7 = value;
	}

	inline static int32_t get_offset_of_SnapsToFinger_8() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___SnapsToFinger_8)); }
	inline bool get_SnapsToFinger_8() const { return ___SnapsToFinger_8; }
	inline bool* get_address_of_SnapsToFinger_8() { return &___SnapsToFinger_8; }
	inline void set_SnapsToFinger_8(bool value)
	{
		___SnapsToFinger_8 = value;
	}

	inline static int32_t get_offset_of_JoystickMoveAxis_9() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___JoystickMoveAxis_9)); }
	inline int32_t get_JoystickMoveAxis_9() const { return ___JoystickMoveAxis_9; }
	inline int32_t* get_address_of_JoystickMoveAxis_9() { return &___JoystickMoveAxis_9; }
	inline void set_JoystickMoveAxis_9(int32_t value)
	{
		___JoystickMoveAxis_9 = value;
	}

	inline static int32_t get_offset_of_JoystickBase_10() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___JoystickBase_10)); }
	inline Image_t2670269651 * get_JoystickBase_10() const { return ___JoystickBase_10; }
	inline Image_t2670269651 ** get_address_of_JoystickBase_10() { return &___JoystickBase_10; }
	inline void set_JoystickBase_10(Image_t2670269651 * value)
	{
		___JoystickBase_10 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickBase_10), value);
	}

	inline static int32_t get_offset_of_Stick_11() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___Stick_11)); }
	inline Image_t2670269651 * get_Stick_11() const { return ___Stick_11; }
	inline Image_t2670269651 ** get_address_of_Stick_11() { return &___Stick_11; }
	inline void set_Stick_11(Image_t2670269651 * value)
	{
		___Stick_11 = value;
		Il2CppCodeGenWriteBarrier((&___Stick_11), value);
	}

	inline static int32_t get_offset_of_TouchZone_12() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___TouchZone_12)); }
	inline RectTransform_t3704657025 * get_TouchZone_12() const { return ___TouchZone_12; }
	inline RectTransform_t3704657025 ** get_address_of_TouchZone_12() { return &___TouchZone_12; }
	inline void set_TouchZone_12(RectTransform_t3704657025 * value)
	{
		___TouchZone_12 = value;
		Il2CppCodeGenWriteBarrier((&___TouchZone_12), value);
	}

	inline static int32_t get_offset_of__initialStickPosition_13() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ____initialStickPosition_13)); }
	inline Vector2_t2156229523  get__initialStickPosition_13() const { return ____initialStickPosition_13; }
	inline Vector2_t2156229523 * get_address_of__initialStickPosition_13() { return &____initialStickPosition_13; }
	inline void set__initialStickPosition_13(Vector2_t2156229523  value)
	{
		____initialStickPosition_13 = value;
	}

	inline static int32_t get_offset_of__intermediateStickPosition_14() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ____intermediateStickPosition_14)); }
	inline Vector2_t2156229523  get__intermediateStickPosition_14() const { return ____intermediateStickPosition_14; }
	inline Vector2_t2156229523 * get_address_of__intermediateStickPosition_14() { return &____intermediateStickPosition_14; }
	inline void set__intermediateStickPosition_14(Vector2_t2156229523  value)
	{
		____intermediateStickPosition_14 = value;
	}

	inline static int32_t get_offset_of__initialBasePosition_15() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ____initialBasePosition_15)); }
	inline Vector2_t2156229523  get__initialBasePosition_15() const { return ____initialBasePosition_15; }
	inline Vector2_t2156229523 * get_address_of__initialBasePosition_15() { return &____initialBasePosition_15; }
	inline void set__initialBasePosition_15(Vector2_t2156229523  value)
	{
		____initialBasePosition_15 = value;
	}

	inline static int32_t get_offset_of__baseTransform_16() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ____baseTransform_16)); }
	inline RectTransform_t3704657025 * get__baseTransform_16() const { return ____baseTransform_16; }
	inline RectTransform_t3704657025 ** get_address_of__baseTransform_16() { return &____baseTransform_16; }
	inline void set__baseTransform_16(RectTransform_t3704657025 * value)
	{
		____baseTransform_16 = value;
		Il2CppCodeGenWriteBarrier((&____baseTransform_16), value);
	}

	inline static int32_t get_offset_of__stickTransform_17() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ____stickTransform_17)); }
	inline RectTransform_t3704657025 * get__stickTransform_17() const { return ____stickTransform_17; }
	inline RectTransform_t3704657025 ** get_address_of__stickTransform_17() { return &____stickTransform_17; }
	inline void set__stickTransform_17(RectTransform_t3704657025 * value)
	{
		____stickTransform_17 = value;
		Il2CppCodeGenWriteBarrier((&____stickTransform_17), value);
	}

	inline static int32_t get_offset_of__oneOverMovementRange_18() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ____oneOverMovementRange_18)); }
	inline float get__oneOverMovementRange_18() const { return ____oneOverMovementRange_18; }
	inline float* get_address_of__oneOverMovementRange_18() { return &____oneOverMovementRange_18; }
	inline void set__oneOverMovementRange_18(float value)
	{
		____oneOverMovementRange_18 = value;
	}

	inline static int32_t get_offset_of_HorizintalAxis_19() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___HorizintalAxis_19)); }
	inline VirtualAxis_t2705105962 * get_HorizintalAxis_19() const { return ___HorizintalAxis_19; }
	inline VirtualAxis_t2705105962 ** get_address_of_HorizintalAxis_19() { return &___HorizintalAxis_19; }
	inline void set_HorizintalAxis_19(VirtualAxis_t2705105962 * value)
	{
		___HorizintalAxis_19 = value;
		Il2CppCodeGenWriteBarrier((&___HorizintalAxis_19), value);
	}

	inline static int32_t get_offset_of_VerticalAxis_20() { return static_cast<int32_t>(offsetof(SimpleJoystick_t421539915, ___VerticalAxis_20)); }
	inline VirtualAxis_t2705105962 * get_VerticalAxis_20() const { return ___VerticalAxis_20; }
	inline VirtualAxis_t2705105962 ** get_address_of_VerticalAxis_20() { return &___VerticalAxis_20; }
	inline void set_VerticalAxis_20(VirtualAxis_t2705105962 * value)
	{
		___VerticalAxis_20 = value;
		Il2CppCodeGenWriteBarrier((&___VerticalAxis_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEJOYSTICK_T421539915_H
#ifndef COMMONONSCREENCONTROL_T421185803_H
#define COMMONONSCREENCONTROL_T421185803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CommonOnScreenControl
struct  CommonOnScreenControl_t421185803  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONONSCREENCONTROL_T421185803_H
#ifndef ROTATECAMERA_T2021658767_H
#define ROTATECAMERA_T2021658767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Examples.Scenes.TouchpadCamera.RotateCamera
struct  RotateCamera_t2021658767  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Examples.Scenes.TouchpadCamera.RotateCamera::RotationSpeed
	float ___RotationSpeed_2;
	// UnityEngine.Transform Examples.Scenes.TouchpadCamera.RotateCamera::OriginTransform
	Transform_t3600365921 * ___OriginTransform_3;

public:
	inline static int32_t get_offset_of_RotationSpeed_2() { return static_cast<int32_t>(offsetof(RotateCamera_t2021658767, ___RotationSpeed_2)); }
	inline float get_RotationSpeed_2() const { return ___RotationSpeed_2; }
	inline float* get_address_of_RotationSpeed_2() { return &___RotationSpeed_2; }
	inline void set_RotationSpeed_2(float value)
	{
		___RotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_OriginTransform_3() { return static_cast<int32_t>(offsetof(RotateCamera_t2021658767, ___OriginTransform_3)); }
	inline Transform_t3600365921 * get_OriginTransform_3() const { return ___OriginTransform_3; }
	inline Transform_t3600365921 ** get_address_of_OriginTransform_3() { return &___OriginTransform_3; }
	inline void set_OriginTransform_3(Transform_t3600365921 * value)
	{
		___OriginTransform_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginTransform_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATECAMERA_T2021658767_H
#ifndef FOURWAYCONTROLLER_T2275257414_H
#define FOURWAYCONTROLLER_T2275257414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomJoystick.FourWayController
struct  FourWayController_t2275257414  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3[] CustomJoystick.FourWayController::directionalVectors
	Vector3U5BU5D_t1718750761* ___directionalVectors_2;
	// UnityEngine.Transform CustomJoystick.FourWayController::_mainCameraTransform
	Transform_t3600365921 * ____mainCameraTransform_3;

public:
	inline static int32_t get_offset_of_directionalVectors_2() { return static_cast<int32_t>(offsetof(FourWayController_t2275257414, ___directionalVectors_2)); }
	inline Vector3U5BU5D_t1718750761* get_directionalVectors_2() const { return ___directionalVectors_2; }
	inline Vector3U5BU5D_t1718750761** get_address_of_directionalVectors_2() { return &___directionalVectors_2; }
	inline void set_directionalVectors_2(Vector3U5BU5D_t1718750761* value)
	{
		___directionalVectors_2 = value;
		Il2CppCodeGenWriteBarrier((&___directionalVectors_2), value);
	}

	inline static int32_t get_offset_of__mainCameraTransform_3() { return static_cast<int32_t>(offsetof(FourWayController_t2275257414, ____mainCameraTransform_3)); }
	inline Transform_t3600365921 * get__mainCameraTransform_3() const { return ____mainCameraTransform_3; }
	inline Transform_t3600365921 ** get_address_of__mainCameraTransform_3() { return &____mainCameraTransform_3; }
	inline void set__mainCameraTransform_3(Transform_t3600365921 * value)
	{
		____mainCameraTransform_3 = value;
		Il2CppCodeGenWriteBarrier((&____mainCameraTransform_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOURWAYCONTROLLER_T2275257414_H
#ifndef INPUTAXISSCROLLBAR_T457958266_H
#define INPUTAXISSCROLLBAR_T457958266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct  InputAxisScrollbar_t457958266  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_2;

public:
	inline static int32_t get_offset_of_axis_2() { return static_cast<int32_t>(offsetof(InputAxisScrollbar_t457958266, ___axis_2)); }
	inline String_t* get_axis_2() const { return ___axis_2; }
	inline String_t** get_address_of_axis_2() { return &___axis_2; }
	inline void set_axis_2(String_t* value)
	{
		___axis_2 = value;
		Il2CppCodeGenWriteBarrier((&___axis_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTAXISSCROLLBAR_T457958266_H
#ifndef ROTATIONCONSTRAINT_T62602506_H
#define ROTATIONCONSTRAINT_T62602506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Examples.Scenes.TouchpadCamera.RotationConstraint
struct  RotationConstraint_t62602506  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Examples.Scenes.TouchpadCamera.RotationConstraint::Min
	float ___Min_2;
	// System.Single Examples.Scenes.TouchpadCamera.RotationConstraint::Max
	float ___Max_3;
	// UnityEngine.Transform Examples.Scenes.TouchpadCamera.RotationConstraint::_transformCache
	Transform_t3600365921 * ____transformCache_4;
	// UnityEngine.Quaternion Examples.Scenes.TouchpadCamera.RotationConstraint::_minQuaternion
	Quaternion_t2301928331  ____minQuaternion_5;
	// UnityEngine.Quaternion Examples.Scenes.TouchpadCamera.RotationConstraint::_maxQuaternion
	Quaternion_t2301928331  ____maxQuaternion_6;
	// UnityEngine.Vector3 Examples.Scenes.TouchpadCamera.RotationConstraint::_rotateAround
	Vector3_t3722313464  ____rotateAround_7;
	// System.Single Examples.Scenes.TouchpadCamera.RotationConstraint::_range
	float ____range_8;

public:
	inline static int32_t get_offset_of_Min_2() { return static_cast<int32_t>(offsetof(RotationConstraint_t62602506, ___Min_2)); }
	inline float get_Min_2() const { return ___Min_2; }
	inline float* get_address_of_Min_2() { return &___Min_2; }
	inline void set_Min_2(float value)
	{
		___Min_2 = value;
	}

	inline static int32_t get_offset_of_Max_3() { return static_cast<int32_t>(offsetof(RotationConstraint_t62602506, ___Max_3)); }
	inline float get_Max_3() const { return ___Max_3; }
	inline float* get_address_of_Max_3() { return &___Max_3; }
	inline void set_Max_3(float value)
	{
		___Max_3 = value;
	}

	inline static int32_t get_offset_of__transformCache_4() { return static_cast<int32_t>(offsetof(RotationConstraint_t62602506, ____transformCache_4)); }
	inline Transform_t3600365921 * get__transformCache_4() const { return ____transformCache_4; }
	inline Transform_t3600365921 ** get_address_of__transformCache_4() { return &____transformCache_4; }
	inline void set__transformCache_4(Transform_t3600365921 * value)
	{
		____transformCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____transformCache_4), value);
	}

	inline static int32_t get_offset_of__minQuaternion_5() { return static_cast<int32_t>(offsetof(RotationConstraint_t62602506, ____minQuaternion_5)); }
	inline Quaternion_t2301928331  get__minQuaternion_5() const { return ____minQuaternion_5; }
	inline Quaternion_t2301928331 * get_address_of__minQuaternion_5() { return &____minQuaternion_5; }
	inline void set__minQuaternion_5(Quaternion_t2301928331  value)
	{
		____minQuaternion_5 = value;
	}

	inline static int32_t get_offset_of__maxQuaternion_6() { return static_cast<int32_t>(offsetof(RotationConstraint_t62602506, ____maxQuaternion_6)); }
	inline Quaternion_t2301928331  get__maxQuaternion_6() const { return ____maxQuaternion_6; }
	inline Quaternion_t2301928331 * get_address_of__maxQuaternion_6() { return &____maxQuaternion_6; }
	inline void set__maxQuaternion_6(Quaternion_t2301928331  value)
	{
		____maxQuaternion_6 = value;
	}

	inline static int32_t get_offset_of__rotateAround_7() { return static_cast<int32_t>(offsetof(RotationConstraint_t62602506, ____rotateAround_7)); }
	inline Vector3_t3722313464  get__rotateAround_7() const { return ____rotateAround_7; }
	inline Vector3_t3722313464 * get_address_of__rotateAround_7() { return &____rotateAround_7; }
	inline void set__rotateAround_7(Vector3_t3722313464  value)
	{
		____rotateAround_7 = value;
	}

	inline static int32_t get_offset_of__range_8() { return static_cast<int32_t>(offsetof(RotationConstraint_t62602506, ____range_8)); }
	inline float get__range_8() const { return ____range_8; }
	inline float* get_address_of__range_8() { return &____range_8; }
	inline void set__range_8(float value)
	{
		____range_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONCONSTRAINT_T62602506_H
#ifndef JOYSTICK_T2204371675_H
#define JOYSTICK_T2204371675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t2204371675  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_2;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t3722313464  ___m_StartPos_6;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_7;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t4087348596 * ___m_HorizontalVirtualAxis_9;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t4087348596 * ___m_VerticalVirtualAxis_10;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_axesToUse_3() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___axesToUse_3)); }
	inline int32_t get_axesToUse_3() const { return ___axesToUse_3; }
	inline int32_t* get_address_of_axesToUse_3() { return &___axesToUse_3; }
	inline void set_axesToUse_3(int32_t value)
	{
		___axesToUse_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_m_StartPos_6() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_StartPos_6)); }
	inline Vector3_t3722313464  get_m_StartPos_6() const { return ___m_StartPos_6; }
	inline Vector3_t3722313464 * get_address_of_m_StartPos_6() { return &___m_StartPos_6; }
	inline void set_m_StartPos_6(Vector3_t3722313464  value)
	{
		___m_StartPos_6 = value;
	}

	inline static int32_t get_offset_of_m_UseX_7() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseX_7)); }
	inline bool get_m_UseX_7() const { return ___m_UseX_7; }
	inline bool* get_address_of_m_UseX_7() { return &___m_UseX_7; }
	inline void set_m_UseX_7(bool value)
	{
		___m_UseX_7 = value;
	}

	inline static int32_t get_offset_of_m_UseY_8() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_UseY_8)); }
	inline bool get_m_UseY_8() const { return ___m_UseY_8; }
	inline bool* get_address_of_m_UseY_8() { return &___m_UseY_8; }
	inline void set_m_UseY_8(bool value)
	{
		___m_UseY_8 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_9() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_HorizontalVirtualAxis_9)); }
	inline VirtualAxis_t4087348596 * get_m_HorizontalVirtualAxis_9() const { return ___m_HorizontalVirtualAxis_9; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_HorizontalVirtualAxis_9() { return &___m_HorizontalVirtualAxis_9; }
	inline void set_m_HorizontalVirtualAxis_9(VirtualAxis_t4087348596 * value)
	{
		___m_HorizontalVirtualAxis_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_9), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_10() { return static_cast<int32_t>(offsetof(Joystick_t2204371675, ___m_VerticalVirtualAxis_10)); }
	inline VirtualAxis_t4087348596 * get_m_VerticalVirtualAxis_10() const { return ___m_VerticalVirtualAxis_10; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_VerticalVirtualAxis_10() { return &___m_VerticalVirtualAxis_10; }
	inline void set_m_VerticalVirtualAxis_10(VirtualAxis_t4087348596 * value)
	{
		___m_VerticalVirtualAxis_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICK_T2204371675_H
#ifndef DPAD_T980821090_H
#define DPAD_T980821090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.Dpad
struct  Dpad_t980821090  : public MonoBehaviour_t3962482529
{
public:
	// CnControls.DpadAxis[] CnControls.Dpad::DpadAxis
	DpadAxisU5BU5D_t387633461* ___DpadAxis_2;
	// UnityEngine.Camera CnControls.Dpad::<CurrentEventCamera>k__BackingField
	Camera_t4157153871 * ___U3CCurrentEventCameraU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_DpadAxis_2() { return static_cast<int32_t>(offsetof(Dpad_t980821090, ___DpadAxis_2)); }
	inline DpadAxisU5BU5D_t387633461* get_DpadAxis_2() const { return ___DpadAxis_2; }
	inline DpadAxisU5BU5D_t387633461** get_address_of_DpadAxis_2() { return &___DpadAxis_2; }
	inline void set_DpadAxis_2(DpadAxisU5BU5D_t387633461* value)
	{
		___DpadAxis_2 = value;
		Il2CppCodeGenWriteBarrier((&___DpadAxis_2), value);
	}

	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Dpad_t980821090, ___U3CCurrentEventCameraU3Ek__BackingField_3)); }
	inline Camera_t4157153871 * get_U3CCurrentEventCameraU3Ek__BackingField_3() const { return ___U3CCurrentEventCameraU3Ek__BackingField_3; }
	inline Camera_t4157153871 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_3() { return &___U3CCurrentEventCameraU3Ek__BackingField_3; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_3(Camera_t4157153871 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentEventCameraU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DPAD_T980821090_H
#ifndef MOBILECONTROLRIG_T1964600252_H
#define MOBILECONTROLRIG_T1964600252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_t1964600252  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILECONTROLRIG_T1964600252_H
#ifndef PLATFORMER2DUSERCONTROL_T2984076696_H
#define PLATFORMER2DUSERCONTROL_T2984076696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Copy._2D.Platformer2DUserControl
struct  Platformer2DUserControl_t2984076696  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Copy._2D.PlatformerCharacter2D UnityStandardAssets.Copy._2D.Platformer2DUserControl::m_Character
	PlatformerCharacter2D_t4151009609 * ___m_Character_2;
	// System.Boolean UnityStandardAssets.Copy._2D.Platformer2DUserControl::m_Jump
	bool ___m_Jump_3;

public:
	inline static int32_t get_offset_of_m_Character_2() { return static_cast<int32_t>(offsetof(Platformer2DUserControl_t2984076696, ___m_Character_2)); }
	inline PlatformerCharacter2D_t4151009609 * get_m_Character_2() const { return ___m_Character_2; }
	inline PlatformerCharacter2D_t4151009609 ** get_address_of_m_Character_2() { return &___m_Character_2; }
	inline void set_m_Character_2(PlatformerCharacter2D_t4151009609 * value)
	{
		___m_Character_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Character_2), value);
	}

	inline static int32_t get_offset_of_m_Jump_3() { return static_cast<int32_t>(offsetof(Platformer2DUserControl_t2984076696, ___m_Jump_3)); }
	inline bool get_m_Jump_3() const { return ___m_Jump_3; }
	inline bool* get_address_of_m_Jump_3() { return &___m_Jump_3; }
	inline void set_m_Jump_3(bool value)
	{
		___m_Jump_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMER2DUSERCONTROL_T2984076696_H
#ifndef DPADAXIS_T781101020_H
#define DPADAXIS_T781101020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.DpadAxis
struct  DpadAxis_t781101020  : public MonoBehaviour_t3962482529
{
public:
	// System.String CnControls.DpadAxis::AxisName
	String_t* ___AxisName_2;
	// System.Single CnControls.DpadAxis::AxisMultiplier
	float ___AxisMultiplier_3;
	// UnityEngine.RectTransform CnControls.DpadAxis::<RectTransform>k__BackingField
	RectTransform_t3704657025 * ___U3CRectTransformU3Ek__BackingField_4;
	// System.Int32 CnControls.DpadAxis::<LastFingerId>k__BackingField
	int32_t ___U3CLastFingerIdU3Ek__BackingField_5;
	// CnControls.VirtualAxis CnControls.DpadAxis::_virtualAxis
	VirtualAxis_t2705105962 * ____virtualAxis_6;

public:
	inline static int32_t get_offset_of_AxisName_2() { return static_cast<int32_t>(offsetof(DpadAxis_t781101020, ___AxisName_2)); }
	inline String_t* get_AxisName_2() const { return ___AxisName_2; }
	inline String_t** get_address_of_AxisName_2() { return &___AxisName_2; }
	inline void set_AxisName_2(String_t* value)
	{
		___AxisName_2 = value;
		Il2CppCodeGenWriteBarrier((&___AxisName_2), value);
	}

	inline static int32_t get_offset_of_AxisMultiplier_3() { return static_cast<int32_t>(offsetof(DpadAxis_t781101020, ___AxisMultiplier_3)); }
	inline float get_AxisMultiplier_3() const { return ___AxisMultiplier_3; }
	inline float* get_address_of_AxisMultiplier_3() { return &___AxisMultiplier_3; }
	inline void set_AxisMultiplier_3(float value)
	{
		___AxisMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_U3CRectTransformU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DpadAxis_t781101020, ___U3CRectTransformU3Ek__BackingField_4)); }
	inline RectTransform_t3704657025 * get_U3CRectTransformU3Ek__BackingField_4() const { return ___U3CRectTransformU3Ek__BackingField_4; }
	inline RectTransform_t3704657025 ** get_address_of_U3CRectTransformU3Ek__BackingField_4() { return &___U3CRectTransformU3Ek__BackingField_4; }
	inline void set_U3CRectTransformU3Ek__BackingField_4(RectTransform_t3704657025 * value)
	{
		___U3CRectTransformU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRectTransformU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CLastFingerIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DpadAxis_t781101020, ___U3CLastFingerIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CLastFingerIdU3Ek__BackingField_5() const { return ___U3CLastFingerIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CLastFingerIdU3Ek__BackingField_5() { return &___U3CLastFingerIdU3Ek__BackingField_5; }
	inline void set_U3CLastFingerIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CLastFingerIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of__virtualAxis_6() { return static_cast<int32_t>(offsetof(DpadAxis_t781101020, ____virtualAxis_6)); }
	inline VirtualAxis_t2705105962 * get__virtualAxis_6() const { return ____virtualAxis_6; }
	inline VirtualAxis_t2705105962 ** get_address_of__virtualAxis_6() { return &____virtualAxis_6; }
	inline void set__virtualAxis_6(VirtualAxis_t2705105962 * value)
	{
		____virtualAxis_6 = value;
		Il2CppCodeGenWriteBarrier((&____virtualAxis_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DPADAXIS_T781101020_H
#ifndef PLATFORMERCHARACTER2D_T4151009609_H
#define PLATFORMERCHARACTER2D_T4151009609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Copy._2D.PlatformerCharacter2D
struct  PlatformerCharacter2D_t4151009609  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_JumpForce
	float ___m_JumpForce_3;
	// System.Boolean UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_AirControl
	bool ___m_AirControl_4;
	// UnityEngine.LayerMask UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_WhatIsGround
	LayerMask_t3493934918  ___m_WhatIsGround_5;
	// UnityEngine.Transform UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_GroundCheck
	Transform_t3600365921 * ___m_GroundCheck_6;
	// System.Boolean UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_Grounded
	bool ___m_Grounded_8;
	// UnityEngine.Animator UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_Anim
	Animator_t434523843 * ___m_Anim_9;
	// UnityEngine.Rigidbody2D UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_Rigidbody2D
	Rigidbody2D_t939494601 * ___m_Rigidbody2D_10;
	// System.Boolean UnityStandardAssets.Copy._2D.PlatformerCharacter2D::m_FacingRight
	bool ___m_FacingRight_11;

public:
	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_JumpForce_3() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_JumpForce_3)); }
	inline float get_m_JumpForce_3() const { return ___m_JumpForce_3; }
	inline float* get_address_of_m_JumpForce_3() { return &___m_JumpForce_3; }
	inline void set_m_JumpForce_3(float value)
	{
		___m_JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_4() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_AirControl_4)); }
	inline bool get_m_AirControl_4() const { return ___m_AirControl_4; }
	inline bool* get_address_of_m_AirControl_4() { return &___m_AirControl_4; }
	inline void set_m_AirControl_4(bool value)
	{
		___m_AirControl_4 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_5() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_WhatIsGround_5)); }
	inline LayerMask_t3493934918  get_m_WhatIsGround_5() const { return ___m_WhatIsGround_5; }
	inline LayerMask_t3493934918 * get_address_of_m_WhatIsGround_5() { return &___m_WhatIsGround_5; }
	inline void set_m_WhatIsGround_5(LayerMask_t3493934918  value)
	{
		___m_WhatIsGround_5 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_6() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_GroundCheck_6)); }
	inline Transform_t3600365921 * get_m_GroundCheck_6() const { return ___m_GroundCheck_6; }
	inline Transform_t3600365921 ** get_address_of_m_GroundCheck_6() { return &___m_GroundCheck_6; }
	inline void set_m_GroundCheck_6(Transform_t3600365921 * value)
	{
		___m_GroundCheck_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroundCheck_6), value);
	}

	inline static int32_t get_offset_of_m_Grounded_8() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_Grounded_8)); }
	inline bool get_m_Grounded_8() const { return ___m_Grounded_8; }
	inline bool* get_address_of_m_Grounded_8() { return &___m_Grounded_8; }
	inline void set_m_Grounded_8(bool value)
	{
		___m_Grounded_8 = value;
	}

	inline static int32_t get_offset_of_m_Anim_9() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_Anim_9)); }
	inline Animator_t434523843 * get_m_Anim_9() const { return ___m_Anim_9; }
	inline Animator_t434523843 ** get_address_of_m_Anim_9() { return &___m_Anim_9; }
	inline void set_m_Anim_9(Animator_t434523843 * value)
	{
		___m_Anim_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Anim_9), value);
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_10() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_Rigidbody2D_10)); }
	inline Rigidbody2D_t939494601 * get_m_Rigidbody2D_10() const { return ___m_Rigidbody2D_10; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_Rigidbody2D_10() { return &___m_Rigidbody2D_10; }
	inline void set_m_Rigidbody2D_10(Rigidbody2D_t939494601 * value)
	{
		___m_Rigidbody2D_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody2D_10), value);
	}

	inline static int32_t get_offset_of_m_FacingRight_11() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t4151009609, ___m_FacingRight_11)); }
	inline bool get_m_FacingRight_11() const { return ___m_FacingRight_11; }
	inline bool* get_address_of_m_FacingRight_11() { return &___m_FacingRight_11; }
	inline void set_m_FacingRight_11(bool value)
	{
		___m_FacingRight_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMERCHARACTER2D_T4151009609_H
#ifndef BUTTONHANDLER_T823762219_H
#define BUTTONHANDLER_T823762219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct  ButtonHandler_t823762219  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ButtonHandler_t823762219, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONHANDLER_T823762219_H
#ifndef AXISTOUCHBUTTON_T3522881333_H
#define AXISTOUCHBUTTON_T3522881333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t3522881333  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t3522881333 * ___m_PairedWith_6;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t4087348596 * ___m_Axis_7;

public:
	inline static int32_t get_offset_of_axisName_2() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisName_2)); }
	inline String_t* get_axisName_2() const { return ___axisName_2; }
	inline String_t** get_address_of_axisName_2() { return &___axisName_2; }
	inline void set_axisName_2(String_t* value)
	{
		___axisName_2 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_2), value);
	}

	inline static int32_t get_offset_of_axisValue_3() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___axisValue_3)); }
	inline float get_axisValue_3() const { return ___axisValue_3; }
	inline float* get_address_of_axisValue_3() { return &___axisValue_3; }
	inline void set_axisValue_3(float value)
	{
		___axisValue_3 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___responseSpeed_4)); }
	inline float get_responseSpeed_4() const { return ___responseSpeed_4; }
	inline float* get_address_of_responseSpeed_4() { return &___responseSpeed_4; }
	inline void set_responseSpeed_4(float value)
	{
		___responseSpeed_4 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___returnToCentreSpeed_5)); }
	inline float get_returnToCentreSpeed_5() const { return ___returnToCentreSpeed_5; }
	inline float* get_address_of_returnToCentreSpeed_5() { return &___returnToCentreSpeed_5; }
	inline void set_returnToCentreSpeed_5(float value)
	{
		___returnToCentreSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_PairedWith_6)); }
	inline AxisTouchButton_t3522881333 * get_m_PairedWith_6() const { return ___m_PairedWith_6; }
	inline AxisTouchButton_t3522881333 ** get_address_of_m_PairedWith_6() { return &___m_PairedWith_6; }
	inline void set_m_PairedWith_6(AxisTouchButton_t3522881333 * value)
	{
		___m_PairedWith_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PairedWith_6), value);
	}

	inline static int32_t get_offset_of_m_Axis_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3522881333, ___m_Axis_7)); }
	inline VirtualAxis_t4087348596 * get_m_Axis_7() const { return ___m_Axis_7; }
	inline VirtualAxis_t4087348596 ** get_address_of_m_Axis_7() { return &___m_Axis_7; }
	inline void set_m_Axis_7(VirtualAxis_t4087348596 * value)
	{
		___m_Axis_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Axis_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTOUCHBUTTON_T3522881333_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SENSITIVEJOYSTICK_T60193198_H
#define SENSITIVEJOYSTICK_T60193198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SensitiveJoystick
struct  SensitiveJoystick_t60193198  : public SimpleJoystick_t421539915
{
public:
	// UnityEngine.AnimationCurve CnControls.SensitiveJoystick::SensitivityCurve
	AnimationCurve_t3046754366 * ___SensitivityCurve_21;

public:
	inline static int32_t get_offset_of_SensitivityCurve_21() { return static_cast<int32_t>(offsetof(SensitiveJoystick_t60193198, ___SensitivityCurve_21)); }
	inline AnimationCurve_t3046754366 * get_SensitivityCurve_21() const { return ___SensitivityCurve_21; }
	inline AnimationCurve_t3046754366 ** get_address_of_SensitivityCurve_21() { return &___SensitivityCurve_21; }
	inline void set_SensitivityCurve_21(AnimationCurve_t3046754366 * value)
	{
		___SensitivityCurve_21 = value;
		Il2CppCodeGenWriteBarrier((&___SensitivityCurve_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENSITIVEJOYSTICK_T60193198_H
#ifndef BASEINPUTMODULE_T2019268878_H
#define BASEINPUTMODULE_T2019268878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_5;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_6;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_7;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_2() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_2)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_2() const { return ___m_RaycastResultCache_2; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_2() { return &___m_RaycastResultCache_2; }
	inline void set_m_RaycastResultCache_2(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResultCache_2), value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_3() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_3)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_3() const { return ___m_AxisEventData_3; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_3() { return &___m_AxisEventData_3; }
	inline void set_m_AxisEventData_3(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AxisEventData_3), value);
	}

	inline static int32_t get_offset_of_m_EventSystem_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_4)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_4() const { return ___m_EventSystem_4; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_4() { return &___m_EventSystem_4; }
	inline void set_m_EventSystem_4(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_4), value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_5)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_5() const { return ___m_BaseEventData_5; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_5() { return &___m_BaseEventData_5; }
	inline void set_m_BaseEventData_5(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseEventData_5), value);
	}

	inline static int32_t get_offset_of_m_InputOverride_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_6)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_6() const { return ___m_InputOverride_6; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_6() { return &___m_InputOverride_6; }
	inline void set_m_InputOverride_6(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputOverride_6), value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_7)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_7() const { return ___m_DefaultInput_7; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_7() { return &___m_DefaultInput_7; }
	inline void set_m_DefaultInput_7(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultInput_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTMODULE_T2019268878_H
#ifndef PIVOTBASEDCAMERARIG_T3786953582_H
#define PIVOTBASEDCAMERARIG_T3786953582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct  PivotBasedCameraRig_t3786953582  : public AbstractTargetFollower_t1919708159
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_t3600365921 * ___m_Cam_6;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_t3600365921 * ___m_Pivot_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t3722313464  ___m_LastTargetPosition_8;

public:
	inline static int32_t get_offset_of_m_Cam_6() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_Cam_6)); }
	inline Transform_t3600365921 * get_m_Cam_6() const { return ___m_Cam_6; }
	inline Transform_t3600365921 ** get_address_of_m_Cam_6() { return &___m_Cam_6; }
	inline void set_m_Cam_6(Transform_t3600365921 * value)
	{
		___m_Cam_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cam_6), value);
	}

	inline static int32_t get_offset_of_m_Pivot_7() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_Pivot_7)); }
	inline Transform_t3600365921 * get_m_Pivot_7() const { return ___m_Pivot_7; }
	inline Transform_t3600365921 ** get_address_of_m_Pivot_7() { return &___m_Pivot_7; }
	inline void set_m_Pivot_7(Transform_t3600365921 * value)
	{
		___m_Pivot_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Pivot_7), value);
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_8() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3786953582, ___m_LastTargetPosition_8)); }
	inline Vector3_t3722313464  get_m_LastTargetPosition_8() const { return ___m_LastTargetPosition_8; }
	inline Vector3_t3722313464 * get_address_of_m_LastTargetPosition_8() { return &___m_LastTargetPosition_8; }
	inline void set_m_LastTargetPosition_8(Vector3_t3722313464  value)
	{
		___m_LastTargetPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIVOTBASEDCAMERARIG_T3786953582_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_5;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_6;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_7;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_8;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_9;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_10;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_11;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_2() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_2)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_2() const { return ___m_SystemInputModules_2; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_2() { return &___m_SystemInputModules_2; }
	inline void set_m_SystemInputModules_2(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_3() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_3)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_3() const { return ___m_CurrentInputModule_3; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_3() { return &___m_CurrentInputModule_3; }
	inline void set_m_CurrentInputModule_3(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_3), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_5)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_5() const { return ___m_FirstSelected_5; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_5() { return &___m_FirstSelected_5; }
	inline void set_m_FirstSelected_5(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_5), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_6)); }
	inline bool get_m_sendNavigationEvents_6() const { return ___m_sendNavigationEvents_6; }
	inline bool* get_address_of_m_sendNavigationEvents_6() { return &___m_sendNavigationEvents_6; }
	inline void set_m_sendNavigationEvents_6(bool value)
	{
		___m_sendNavigationEvents_6 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_7)); }
	inline int32_t get_m_DragThreshold_7() const { return ___m_DragThreshold_7; }
	inline int32_t* get_address_of_m_DragThreshold_7() { return &___m_DragThreshold_7; }
	inline void set_m_DragThreshold_7(int32_t value)
	{
		___m_DragThreshold_7 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_8)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_8() const { return ___m_CurrentSelected_8; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_8() { return &___m_CurrentSelected_8; }
	inline void set_m_CurrentSelected_8(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_8), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_9)); }
	inline bool get_m_HasFocus_9() const { return ___m_HasFocus_9; }
	inline bool* get_address_of_m_HasFocus_9() { return &___m_HasFocus_9; }
	inline void set_m_HasFocus_9(bool value)
	{
		___m_HasFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_10)); }
	inline bool get_m_SelectionGuard_10() const { return ___m_SelectionGuard_10; }
	inline bool* get_address_of_m_SelectionGuard_10() { return &___m_SelectionGuard_10; }
	inline void set_m_SelectionGuard_10(bool value)
	{
		___m_SelectionGuard_10 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_11)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_11() const { return ___m_DummyData_11; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_11() { return &___m_DummyData_11; }
	inline void set_m_DummyData_11(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_11), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_4;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_12;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_13;

public:
	inline static int32_t get_offset_of_m_EventSystems_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_4)); }
	inline List_1_t2475741330 * get_m_EventSystems_4() const { return ___m_EventSystems_4; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_4() { return &___m_EventSystems_4; }
	inline void set_m_EventSystems_4(List_1_t2475741330 * value)
	{
		___m_EventSystems_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_4), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_12)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_12() const { return ___s_RaycastComparer_12; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_12() { return &___s_RaycastComparer_12; }
	inline void set_s_RaycastComparer_12(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef POINTERINPUTMODULE_T3453173740_H
#define POINTERINPUTMODULE_T3453173740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t3453173740  : public BaseInputModule_t2019268878
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t2696614423 * ___m_PointerData_12;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t384203932 * ___m_MouseState_13;

public:
	inline static int32_t get_offset_of_m_PointerData_12() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_PointerData_12)); }
	inline Dictionary_2_t2696614423 * get_m_PointerData_12() const { return ___m_PointerData_12; }
	inline Dictionary_2_t2696614423 ** get_address_of_m_PointerData_12() { return &___m_PointerData_12; }
	inline void set_m_PointerData_12(Dictionary_2_t2696614423 * value)
	{
		___m_PointerData_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerData_12), value);
	}

	inline static int32_t get_offset_of_m_MouseState_13() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_MouseState_13)); }
	inline MouseState_t384203932 * get_m_MouseState_13() const { return ___m_MouseState_13; }
	inline MouseState_t384203932 ** get_address_of_m_MouseState_13() { return &___m_MouseState_13; }
	inline void set_m_MouseState_13(MouseState_t384203932 * value)
	{
		___m_MouseState_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseState_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERINPUTMODULE_T3453173740_H
#ifndef EMPTYGRAPHIC_T2931555429_H
#define EMPTYGRAPHIC_T2931555429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.EmptyGraphic
struct  EmptyGraphic_t2931555429  : public Graphic_t1660335611
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYGRAPHIC_T2931555429_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef AUTOCAM_T137911967_H
#define AUTOCAM_T137911967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.AutoCam
struct  AutoCam_t137911967  : public PivotBasedCameraRig_t3786953582
{
public:
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeed
	float ___m_TurnSpeed_10;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_RollSpeed
	float ___m_RollSpeed_11;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowVelocity
	bool ___m_FollowVelocity_12;
	// System.Boolean UnityStandardAssets.Cameras.AutoCam::m_FollowTilt
	bool ___m_FollowTilt_13;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SpinTurnLimit
	float ___m_SpinTurnLimit_14;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TargetVelocityLowerLimit
	float ___m_TargetVelocityLowerLimit_15;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_SmoothTurnTime
	float ___m_SmoothTurnTime_16;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_LastFlatAngle
	float ___m_LastFlatAngle_17;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_CurrentTurnAmount
	float ___m_CurrentTurnAmount_18;
	// System.Single UnityStandardAssets.Cameras.AutoCam::m_TurnSpeedVelocityChange
	float ___m_TurnSpeedVelocityChange_19;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.AutoCam::m_RollUp
	Vector3_t3722313464  ___m_RollUp_20;

public:
	inline static int32_t get_offset_of_m_MoveSpeed_9() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_MoveSpeed_9)); }
	inline float get_m_MoveSpeed_9() const { return ___m_MoveSpeed_9; }
	inline float* get_address_of_m_MoveSpeed_9() { return &___m_MoveSpeed_9; }
	inline void set_m_MoveSpeed_9(float value)
	{
		___m_MoveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeed_10() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TurnSpeed_10)); }
	inline float get_m_TurnSpeed_10() const { return ___m_TurnSpeed_10; }
	inline float* get_address_of_m_TurnSpeed_10() { return &___m_TurnSpeed_10; }
	inline void set_m_TurnSpeed_10(float value)
	{
		___m_TurnSpeed_10 = value;
	}

	inline static int32_t get_offset_of_m_RollSpeed_11() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_RollSpeed_11)); }
	inline float get_m_RollSpeed_11() const { return ___m_RollSpeed_11; }
	inline float* get_address_of_m_RollSpeed_11() { return &___m_RollSpeed_11; }
	inline void set_m_RollSpeed_11(float value)
	{
		___m_RollSpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_12() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_FollowVelocity_12)); }
	inline bool get_m_FollowVelocity_12() const { return ___m_FollowVelocity_12; }
	inline bool* get_address_of_m_FollowVelocity_12() { return &___m_FollowVelocity_12; }
	inline void set_m_FollowVelocity_12(bool value)
	{
		___m_FollowVelocity_12 = value;
	}

	inline static int32_t get_offset_of_m_FollowTilt_13() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_FollowTilt_13)); }
	inline bool get_m_FollowTilt_13() const { return ___m_FollowTilt_13; }
	inline bool* get_address_of_m_FollowTilt_13() { return &___m_FollowTilt_13; }
	inline void set_m_FollowTilt_13(bool value)
	{
		___m_FollowTilt_13 = value;
	}

	inline static int32_t get_offset_of_m_SpinTurnLimit_14() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_SpinTurnLimit_14)); }
	inline float get_m_SpinTurnLimit_14() const { return ___m_SpinTurnLimit_14; }
	inline float* get_address_of_m_SpinTurnLimit_14() { return &___m_SpinTurnLimit_14; }
	inline void set_m_SpinTurnLimit_14(float value)
	{
		___m_SpinTurnLimit_14 = value;
	}

	inline static int32_t get_offset_of_m_TargetVelocityLowerLimit_15() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TargetVelocityLowerLimit_15)); }
	inline float get_m_TargetVelocityLowerLimit_15() const { return ___m_TargetVelocityLowerLimit_15; }
	inline float* get_address_of_m_TargetVelocityLowerLimit_15() { return &___m_TargetVelocityLowerLimit_15; }
	inline void set_m_TargetVelocityLowerLimit_15(float value)
	{
		___m_TargetVelocityLowerLimit_15 = value;
	}

	inline static int32_t get_offset_of_m_SmoothTurnTime_16() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_SmoothTurnTime_16)); }
	inline float get_m_SmoothTurnTime_16() const { return ___m_SmoothTurnTime_16; }
	inline float* get_address_of_m_SmoothTurnTime_16() { return &___m_SmoothTurnTime_16; }
	inline void set_m_SmoothTurnTime_16(float value)
	{
		___m_SmoothTurnTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastFlatAngle_17() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_LastFlatAngle_17)); }
	inline float get_m_LastFlatAngle_17() const { return ___m_LastFlatAngle_17; }
	inline float* get_address_of_m_LastFlatAngle_17() { return &___m_LastFlatAngle_17; }
	inline void set_m_LastFlatAngle_17(float value)
	{
		___m_LastFlatAngle_17 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTurnAmount_18() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_CurrentTurnAmount_18)); }
	inline float get_m_CurrentTurnAmount_18() const { return ___m_CurrentTurnAmount_18; }
	inline float* get_address_of_m_CurrentTurnAmount_18() { return &___m_CurrentTurnAmount_18; }
	inline void set_m_CurrentTurnAmount_18(float value)
	{
		___m_CurrentTurnAmount_18 = value;
	}

	inline static int32_t get_offset_of_m_TurnSpeedVelocityChange_19() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_TurnSpeedVelocityChange_19)); }
	inline float get_m_TurnSpeedVelocityChange_19() const { return ___m_TurnSpeedVelocityChange_19; }
	inline float* get_address_of_m_TurnSpeedVelocityChange_19() { return &___m_TurnSpeedVelocityChange_19; }
	inline void set_m_TurnSpeedVelocityChange_19(float value)
	{
		___m_TurnSpeedVelocityChange_19 = value;
	}

	inline static int32_t get_offset_of_m_RollUp_20() { return static_cast<int32_t>(offsetof(AutoCam_t137911967, ___m_RollUp_20)); }
	inline Vector3_t3722313464  get_m_RollUp_20() const { return ___m_RollUp_20; }
	inline Vector3_t3722313464 * get_address_of_m_RollUp_20() { return &___m_RollUp_20; }
	inline void set_m_RollUp_20(Vector3_t3722313464  value)
	{
		___m_RollUp_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOCAM_T137911967_H
#ifndef STANDALONEINPUTMODULE_T2760469101_H
#define STANDALONEINPUTMODULE_T2760469101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_t2760469101  : public PointerInputModule_t3453173740
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t2156229523  ___m_LastMoveVector_15;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t2156229523  ___m_LastMousePosition_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t2156229523  ___m_MousePosition_18;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t1113636619 * ___m_CurrentFocusedGameObject_19;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_20;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_21;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_23;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_24;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_25;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_26;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_14() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_PrevActionTime_14)); }
	inline float get_m_PrevActionTime_14() const { return ___m_PrevActionTime_14; }
	inline float* get_address_of_m_PrevActionTime_14() { return &___m_PrevActionTime_14; }
	inline void set_m_PrevActionTime_14(float value)
	{
		___m_PrevActionTime_14 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_15() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_LastMoveVector_15)); }
	inline Vector2_t2156229523  get_m_LastMoveVector_15() const { return ___m_LastMoveVector_15; }
	inline Vector2_t2156229523 * get_address_of_m_LastMoveVector_15() { return &___m_LastMoveVector_15; }
	inline void set_m_LastMoveVector_15(Vector2_t2156229523  value)
	{
		___m_LastMoveVector_15 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_ConsecutiveMoveCount_16)); }
	inline int32_t get_m_ConsecutiveMoveCount_16() const { return ___m_ConsecutiveMoveCount_16; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_16() { return &___m_ConsecutiveMoveCount_16; }
	inline void set_m_ConsecutiveMoveCount_16(int32_t value)
	{
		___m_ConsecutiveMoveCount_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_LastMousePosition_17)); }
	inline Vector2_t2156229523  get_m_LastMousePosition_17() const { return ___m_LastMousePosition_17; }
	inline Vector2_t2156229523 * get_address_of_m_LastMousePosition_17() { return &___m_LastMousePosition_17; }
	inline void set_m_LastMousePosition_17(Vector2_t2156229523  value)
	{
		___m_LastMousePosition_17 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_MousePosition_18)); }
	inline Vector2_t2156229523  get_m_MousePosition_18() const { return ___m_MousePosition_18; }
	inline Vector2_t2156229523 * get_address_of_m_MousePosition_18() { return &___m_MousePosition_18; }
	inline void set_m_MousePosition_18(Vector2_t2156229523  value)
	{
		___m_MousePosition_18 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_CurrentFocusedGameObject_19)); }
	inline GameObject_t1113636619 * get_m_CurrentFocusedGameObject_19() const { return ___m_CurrentFocusedGameObject_19; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentFocusedGameObject_19() { return &___m_CurrentFocusedGameObject_19; }
	inline void set_m_CurrentFocusedGameObject_19(GameObject_t1113636619 * value)
	{
		___m_CurrentFocusedGameObject_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentFocusedGameObject_19), value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_HorizontalAxis_20)); }
	inline String_t* get_m_HorizontalAxis_20() const { return ___m_HorizontalAxis_20; }
	inline String_t** get_address_of_m_HorizontalAxis_20() { return &___m_HorizontalAxis_20; }
	inline void set_m_HorizontalAxis_20(String_t* value)
	{
		___m_HorizontalAxis_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalAxis_20), value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_VerticalAxis_21)); }
	inline String_t* get_m_VerticalAxis_21() const { return ___m_VerticalAxis_21; }
	inline String_t** get_address_of_m_VerticalAxis_21() { return &___m_VerticalAxis_21; }
	inline void set_m_VerticalAxis_21(String_t* value)
	{
		___m_VerticalAxis_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalAxis_21), value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_SubmitButton_22)); }
	inline String_t* get_m_SubmitButton_22() const { return ___m_SubmitButton_22; }
	inline String_t** get_address_of_m_SubmitButton_22() { return &___m_SubmitButton_22; }
	inline void set_m_SubmitButton_22(String_t* value)
	{
		___m_SubmitButton_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_SubmitButton_22), value);
	}

	inline static int32_t get_offset_of_m_CancelButton_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_CancelButton_23)); }
	inline String_t* get_m_CancelButton_23() const { return ___m_CancelButton_23; }
	inline String_t** get_address_of_m_CancelButton_23() { return &___m_CancelButton_23; }
	inline void set_m_CancelButton_23(String_t* value)
	{
		___m_CancelButton_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CancelButton_23), value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_InputActionsPerSecond_24)); }
	inline float get_m_InputActionsPerSecond_24() const { return ___m_InputActionsPerSecond_24; }
	inline float* get_address_of_m_InputActionsPerSecond_24() { return &___m_InputActionsPerSecond_24; }
	inline void set_m_InputActionsPerSecond_24(float value)
	{
		___m_InputActionsPerSecond_24 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_RepeatDelay_25)); }
	inline float get_m_RepeatDelay_25() const { return ___m_RepeatDelay_25; }
	inline float* get_address_of_m_RepeatDelay_25() { return &___m_RepeatDelay_25; }
	inline void set_m_RepeatDelay_25(float value)
	{
		___m_RepeatDelay_25 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_t2760469101, ___m_ForceModuleActive_26)); }
	inline bool get_m_ForceModuleActive_26() const { return ___m_ForceModuleActive_26; }
	inline bool* get_address_of_m_ForceModuleActive_26() { return &___m_ForceModuleActive_26; }
	inline void set_m_ForceModuleActive_26(bool value)
	{
		___m_ForceModuleActive_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUTMODULE_T2760469101_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
// CnControls.DpadAxis[]
struct DpadAxisU5BU5D_t387633461  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DpadAxis_t781101020 * m_Items[1];

public:
	inline DpadAxis_t781101020 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DpadAxis_t781101020 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DpadAxis_t781101020 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DpadAxis_t781101020 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DpadAxis_t781101020 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DpadAxis_t781101020 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t4206410242  m_Items[1];

public:
	inline Keyframe_t4206410242  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t4206410242  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_t2806799626 * m_Items[1];

public:
	inline Collider2D_t2806799626 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider2D_t2806799626 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_t4256519256  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AxisTouchButton_t3522881333 * m_Items[1];

public:
	inline AxisTouchButton_t3522881333 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_t3522881333 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_t3522881333 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AxisTouchButton_t3522881333 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_t3522881333 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_t3522881333 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t631007953 * m_Items[1];

public:
	inline Object_t631007953 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t631007953 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t1921856868  m_Items[1];

public:
	inline Touch_t1921856868  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t1921856868  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m4191481190_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>::.ctor()
#define Dictionary_2__ctor_m3137277790(__this, method) ((  void (*) (Dictionary_2_t3962437003 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>::.ctor()
#define Dictionary_2__ctor_m3108089431(__this, method) ((  void (*) (Dictionary_2_t3154576040 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::.ctor()
extern "C"  void CnInputManager__ctor_m2849005735 (CnInputManager_t16497872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t1921856868  Input_GetTouch_m2192712756 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CnInputManager_GetAxis_m3048911529 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, bool ___isRaw1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::AxisExists(System.String)
extern "C"  bool CnInputManager_AxisExists_m95741991 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// CnControls.CnInputManager CnControls.CnInputManager::get_Instance()
extern "C"  CnInputManager_t16497872 * CnInputManager_get_Instance_m651793267 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>::get_Item(!0)
#define Dictionary_2_get_Item_m1062706786(__this, p0, method) ((  List_1_t4177180704 * (*) (Dictionary_2_t3962437003 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Single CnControls.CnInputManager::GetVirtualAxisValue(System.Collections.Generic.List`1<CnControls.VirtualAxis>,System.String,System.Boolean)
extern "C"  float CnInputManager_GetVirtualAxisValue_m456977846 (RuntimeObject * __this /* static, unused */, List_1_t4177180704 * ___virtualAxisList0, String_t* ___axisName1, bool ___isRaw2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::ButtonExists(System.String)
extern "C"  bool CnInputManager_ButtonExists_m2689649392 (RuntimeObject * __this /* static, unused */, String_t* ___buttonName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>::get_Item(!0)
#define Dictionary_2_get_Item_m2630743097(__this, p0, method) ((  List_1_t3369319741 * (*) (Dictionary_2_t3154576040 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButton(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButton_m2901901429 (RuntimeObject * __this /* static, unused */, List_1_t3369319741 * ___virtualButtons0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C"  float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C"  bool Input_GetButton_m2064261504 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C"  bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonDown(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonDown_m3615553324 (RuntimeObject * __this /* static, unused */, List_1_t3369319741 * ___virtualButtons0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C"  bool Input_GetButtonUp_m4007681079 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonUp(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonUp_m1183918506 (RuntimeObject * __this /* static, unused */, List_1_t3369319741 * ___virtualButtons0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m672998822(__this, p0, method) ((  bool (*) (Dictionary_2_t3962437003 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m617935258(__this, p0, method) ((  bool (*) (Dictionary_2_t3154576040 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.String CnControls.VirtualAxis::get_Name()
extern "C"  String_t* VirtualAxis_get_Name_m3580586152 (VirtualAxis_t2705105962 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<CnControls.VirtualAxis>::.ctor()
#define List_1__ctor_m2292671058(__this, method) ((  void (*) (List_1_t4177180704 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2326629400(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3962437003 *, String_t*, List_1_t4177180704 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<CnControls.VirtualAxis>::Add(!0)
#define List_1_Add_m1720352400(__this, p0, method) ((  void (*) (List_1_t4177180704 *, VirtualAxis_t2705105962 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<CnControls.VirtualAxis>::Remove(!0)
#define List_1_Remove_m4289802854(__this, p0, method) ((  bool (*) (List_1_t4177180704 *, VirtualAxis_t2705105962 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String CnControls.VirtualButton::get_Name()
extern "C"  String_t* VirtualButton_get_Name_m1486646029 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<CnControls.VirtualButton>::.ctor()
#define List_1__ctor_m3837413355(__this, method) ((  void (*) (List_1_t3369319741 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m189772369(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3154576040 *, String_t*, List_1_t3369319741 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<CnControls.VirtualButton>::Add(!0)
#define List_1_Add_m2731066031(__this, p0, method) ((  void (*) (List_1_t3369319741 *, VirtualButton_t1897244999 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<CnControls.VirtualButton>::Remove(!0)
#define List_1_Remove_m1119192539(__this, p0, method) ((  bool (*) (List_1_t3369319741 *, VirtualButton_t1897244999 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C"  bool Mathf_Approximately_m245805902 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<CnControls.VirtualAxis>::get_Item(System.Int32)
#define List_1_get_Item_m3449434113(__this, p0, method) ((  VirtualAxis_t2705105962 * (*) (List_1_t4177180704 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Single CnControls.VirtualAxis::get_Value()
extern "C"  float VirtualAxis_get_Value_m1618256004 (VirtualAxis_t2705105962 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<CnControls.VirtualAxis>::get_Count()
#define List_1_get_Count_m3448069616(__this, method) ((  int32_t (*) (List_1_t4177180704 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<CnControls.VirtualButton>::get_Item(System.Int32)
#define List_1_get_Item_m1157183561(__this, p0, method) ((  VirtualButton_t1897244999 * (*) (List_1_t3369319741 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Boolean CnControls.VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m2997105053 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<CnControls.VirtualButton>::get_Count()
#define List_1_get_Count_m2718932326(__this, method) ((  int32_t (*) (List_1_t3369319741 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean CnControls.VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m3309573997 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m3068570859 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C"  Camera_t4157153871 * PointerEventData_get_pressEventCamera_m2613974917 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.Dpad::get_CurrentEventCamera()
extern "C"  Camera_t4157153871 * Dpad_get_CurrentEventCamera_m1692823293 (Dpad_t980821090 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void Dpad_set_CurrentEventCamera_m2654443616 (Dpad_t980821090 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform CnControls.DpadAxis::get_RectTransform()
extern "C"  RectTransform_t3704657025 * DpadAxis_get_RectTransform_m1740560235 (DpadAxis_t781101020 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool RectTransformUtility_RectangleContainsScreenPoint_m4031431712 (RuntimeObject * __this /* static, unused */, RectTransform_t3704657025 * p0, Vector2_t2156229523  p1, Camera_t4157153871 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C"  int32_t PointerEventData_get_pointerId_m1200356155 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::Press(UnityEngine.Vector2,UnityEngine.Camera,System.Int32)
extern "C"  void DpadAxis_Press_m409404626 (DpadAxis_t781101020 * __this, Vector2_t2156229523  ___screenPoint0, Camera_t4157153871 * ___eventCamera1, int32_t ___pointerId2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::TryRelease(System.Int32)
extern "C"  void DpadAxis_TryRelease_m4156722657 (DpadAxis_t781101020 * __this, int32_t ___pointerId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void CnControls.DpadAxis::set_RectTransform(UnityEngine.RectTransform)
extern "C"  void DpadAxis_set_RectTransform_m1157400813 (DpadAxis_t781101020 * __this, RectTransform_t3704657025 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m2706333303 (VirtualAxis_t2705105962 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::set_LastFingerId(System.Int32)
extern "C"  void DpadAxis_set_LastFingerId_m432573798 (DpadAxis_t781101020 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::RegisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_RegisterVirtualAxis_m3521689230 (RuntimeObject * __this /* static, unused */, VirtualAxis_t2705105962 * ___virtualAxis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::UnregisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_UnregisterVirtualAxis_m1265339305 (RuntimeObject * __this /* static, unused */, VirtualAxis_t2705105962 * ___virtualAxis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualAxis::set_Value(System.Single)
extern "C"  void VirtualAxis_set_Value_m2937739439 (VirtualAxis_t2705105962 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 CnControls.DpadAxis::get_LastFingerId()
extern "C"  int32_t DpadAxis_get_LastFingerId_m2594169843 (DpadAxis_t781101020 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C"  void Graphic__ctor_m2983567630 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m627349662 (VertexHelper_t2453304189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Keyframe__ctor_m1259609478 (Keyframe_t4206410242 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m1565662948 (AnimationCurve_t3046754366 * __this, KeyframeU5BU5D_t1068524471* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::.ctor()
extern "C"  void SimpleJoystick__ctor_m687439859 (SimpleJoystick_t421539915 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnDrag_m1433377547 (SimpleJoystick_t421539915 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C"  float Mathf_Sign_m3457838305 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m2125563588 (AnimationCurve_t3046754366 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m3613420199 (VirtualButton_t1897244999 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::RegisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_RegisterVirtualButton_m3096476519 (RuntimeObject * __this /* static, unused */, VirtualButton_t1897244999 * ___virtualButton0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::UnregisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_UnregisterVirtualButton_m772080246 (RuntimeObject * __this /* static, unused */, VirtualButton_t1897244999 * ___virtualButton0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualButton::Release()
extern "C"  void VirtualButton_Release_m1006480204 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualButton::Press()
extern "C"  void VirtualButton_Press_m102003541 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C"  Vector2_t2156229523  RectTransform_get_anchoredPosition_m1813443094 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::Hide(System.Boolean)
extern "C"  void SimpleJoystick_Hide_m1848238907 (SimpleJoystick_t421539915 * __this, bool ___isHidden0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.SimpleJoystick::get_CurrentEventCamera()
extern "C"  Camera_t4157153871 * SimpleJoystick_get_CurrentEventCamera_m2042874296 (SimpleJoystick_t421539915 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void SimpleJoystick_set_CurrentEventCamera_m4140099097 (SimpleJoystick_t421539915 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C"  bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807 (RuntimeObject * __this /* static, unused */, RectTransform_t3704657025 * p0, Vector2_t2156229523  p1, Camera_t4157153871 * p2, Vector3_t3722313464 * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C"  Vector2_t2156229523  PointerEventData_get_delta_m1062010255 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Time::get_renderedFrameCount()
extern "C"  int32_t Time_get_renderedFrameCount_m3445787045 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualAxis::set_Name(System.String)
extern "C"  void VirtualAxis_set_Name_m3020559976 (VirtualAxis_t2705105962 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualButton::set_Name(System.String)
extern "C"  void VirtualButton_set_Name_m3231462351 (VirtualButton_t1897244999 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.VirtualButton::get_IsPressed()
extern "C"  bool VirtualButton_get_IsPressed_m2180001186 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.VirtualButton::set_IsPressed(System.Boolean)
extern "C"  void VirtualButton_set_IsPressed_m3659342507 (VirtualButton_t1897244999 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C"  int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t3722313464  Vector3_get_left_m2428419009 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxis(System.String)
extern "C"  float CnInputManager_GetAxis_m3740099655 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_InverseTransformDirection_m3843238577 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m914904454 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
extern "C"  void Transform_Rotate_m1749346957 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t3722313464  Quaternion_get_eulerAngles_m3425202016 (Quaternion_t2301928331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C"  float Vector3_get_Item_m668685504 (Vector3_t3722313464 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Angle_m1586774072 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C"  void Vector3_set_Item_m1772472431 (Vector3_t3722313464 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
#define Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, method) ((  Transform_t3600365921 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t1138636865_m3643263329(__this, method) ((  CharacterController_t1138636865 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformDirection_m3784028109 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
extern "C"  void Transform_set_forward_m1840797198 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C"  Vector3_t3722313464  Physics_get_gravity_m2660066594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C"  int32_t CharacterController_Move_m1547317252 (CharacterController_t1138636865 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3722313464  Vector3_SmoothDamp_m1123559802 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Vector3_t3722313464 * p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
extern "C"  void AbstractTargetFollower_FindAndTargetPlayer_m654483193 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m4049400462(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
extern "C"  void PivotBasedCameraRig__ctor_m2711623346 (PivotBasedCameraRig_t3786953582 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C"  Vector3_t3722313464  Transform_get_up_m3972993886 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
extern "C"  float Mathf_SmoothDamp_m3171073017 (RuntimeObject * __this /* static, unused */, float p0, float p1, float* p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
extern "C"  float Mathf_DeltaAngle_m1993880167 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m3197602968 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Slerp_m802114822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Lerp_m1238806789 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
extern "C"  void AbstractTargetFollower__ctor_m3114134843 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
#define Component_GetComponentInChildren_TisCamera_t4157153871_m3232034033(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Copy._2D.PlatformerCharacter2D>()
#define Component_GetComponent_TisPlatformerCharacter2D_t4151009609_m81340503(__this, method) ((  PlatformerCharacter2D_t4151009609 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityStandardAssets.Copy._2D.PlatformerCharacter2D::Move(System.Single,System.Boolean)
extern "C"  void PlatformerCharacter2D_Move_m4107252912 (PlatformerCharacter2D_t4151009609 * __this, float ___move0, bool ___jump1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C"  Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, method) ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m2731142064(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  Collider2DU5BU5D_t1693969295* Physics2D_OverlapCircleAll_m638049410 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m1701463607 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Copy._2D.PlatformerCharacter2D::Flip()
extern "C"  void PlatformerCharacter2D_Flip_m3658360162 (PlatformerCharacter2D_t4151009609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C"  bool Animator_GetBool_m2865822416 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern "C"  bool CrossPlatformInputManager_AxisExists_m365322552 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m1869943658 (VirtualAxis_t4087348596 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m3479801628 (RuntimeObject * __this /* static, unused */, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t4087348596 * CrossPlatformInputManager_VirtualAxisReference_m1463805196 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
extern "C"  void AxisTouchButton_FindPairedButton_m3895318073 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t1417781964* Object_FindObjectsOfType_m2295101757 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C"  void VirtualAxis_Remove_m3159277484 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C"  float VirtualAxis_get_GetValue_m337417923 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
extern "C"  float Mathf_MoveTowards_m2357711114 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C"  void VirtualAxis_Update_m1043809197 (VirtualAxis_t4087348596 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonDown_m1980143873 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonUp_m3204959434 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisPositive_m3893292619 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisZero_m3139545681 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisNegative_m1070090094 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C"  void MobileInput__ctor_m1458281675 (MobileInput_t2025745297 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C"  void StandaloneInput__ctor_m1221073179 (StandaloneInput_t1343950252 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C"  bool VirtualInput_AxisExists_m20278768 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C"  bool VirtualInput_ButtonExists_m3875122617 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m2884529091 (VirtualInput_t2597455733 * __this, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m3959785200 (VirtualInput_t2597455733 * __this, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m2956537171 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m3129182690 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t4087348596 * VirtualInput_VirtualAxisReference_m2155778560 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m4082502259 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m1438630863 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m110408526 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m414912069 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C"  void VirtualAxis__ctor_m2412437643 (VirtualAxis_t4087348596 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C"  void VirtualAxis_set_name_m1459829131 (VirtualAxis_t4087348596 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualAxis_set_matchWithInputManager_m2896509700 (VirtualAxis_t4087348596 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C"  String_t* VirtualAxis_get_name_m610059897 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C"  void VirtualButton__ctor_m1314603841 (VirtualButton_t2756566330 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C"  void VirtualButton_set_name_m2909511825 (VirtualButton_t2756566330 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualButton_set_matchWithInputManager_m3716809525 (VirtualButton_t2756566330 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C"  String_t* VirtualButton_get_name_m3473382228 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C"  void CrossPlatformInputManager_SetAxis_m1144576044 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C"  void Joystick_CreateVirtualAxes_m2739417166 (Joystick_t2204371675 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void Joystick_UpdateVirtualAxes_m1439422241 (Joystick_t2204371675 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C"  void MobileControlRig_CheckEnableControlRig_m2194254892 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
#define Object_FindObjectOfType_TisEventSystem_t1003666588_m91970758(__this /* static, unused */, method) ((  EventSystem_t1003666588 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m4191481190_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
#define GameObject_AddComponent_TisEventSystem_t1003666588_m1318992319(__this, method) ((  EventSystem_t1003666588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
#define GameObject_AddComponent_TisStandaloneInputModule_t2760469101_m928840512(__this, method) ((  StandaloneInputModule_t2760469101 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C"  void MobileControlRig_EnableControlRig_m2268035780 (MobileControlRig_t1964600252 * __this, bool ___enabled0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m132259715 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m4196049871 (VirtualButton_t2756566330 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m1830161946 (RuntimeObject * __this /* static, unused */, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3309109471(__this, p0, method) ((  bool (*) (Dictionary_2_t3872604895 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C"  void MobileInput_AddAxes_m488652706 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(!0)
#define Dictionary_2_get_Item_m1067981918(__this, p0, method) ((  VirtualAxis_t4087348596 * (*) (Dictionary_2_t3872604895 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3760162225(__this, p0, method) ((  bool (*) (Dictionary_2_t2541822629 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C"  void MobileInput_AddButton_m1457048403 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(!0)
#define Dictionary_2_get_Item_m572056520(__this, p0, method) ((  VirtualButton_t2756566330 * (*) (Dictionary_2_t2541822629 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C"  void VirtualButton_Pressed_m2977736877 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C"  void VirtualButton_Released_m3633878926 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m2538225749 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m3614711974 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m426677553 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m1530934210 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C"  Vector3_t3722313464  Input_get_acceleration_m2528400370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionY_m427631433 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
extern "C"  void TouchPad_CreateVirtualAxes_m1112936150 (TouchPad_t539039257 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C"  TouchU5BU5D_t1849554061* Input_get_touches_m1702694043 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C"  Vector2_t2156229523  Vector2_get_normalized_m2683665860 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void TouchPad_UpdateVirtualAxes_m1567451020 (TouchPad_t539039257 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
#define Dictionary_2__ctor_m3611672568(__this, method) ((  void (*) (Dictionary_2_t3872604895 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
#define Dictionary_2__ctor_m2614243156(__this, method) ((  void (*) (Dictionary_2_t2541822629 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(!0,!1)
#define Dictionary_2_Add_m2550485437(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3872604895 *, String_t*, VirtualAxis_t4087348596 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C"  bool VirtualAxis_get_matchWithInputManager_m2059598452 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(!0,!1)
#define Dictionary_2_Add_m1118216421(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2541822629 *, String_t*, VirtualButton_t2756566330 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C"  bool VirtualButton_get_matchWithInputManager_m2472937772 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(!0)
#define Dictionary_2_Remove_m2199267801(__this, p0, method) ((  bool (*) (Dictionary_2_t3872604895 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(!0)
#define Dictionary_2_Remove_m2343242332(__this, p0, method) ((  bool (*) (Dictionary_2_t2541822629 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m308564020 (VirtualInput_t2597455733 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void CnControls.CnInputManager::.ctor()
extern "C"  void CnInputManager__ctor_m2849005735 (CnInputManager_t16497872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager__ctor_m2849005735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3962437003 * L_0 = (Dictionary_2_t3962437003 *)il2cpp_codegen_object_new(Dictionary_2_t3962437003_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3137277790(L_0, /*hidden argument*/Dictionary_2__ctor_m3137277790_RuntimeMethod_var);
		__this->set__virtualAxisDictionary_1(L_0);
		Dictionary_2_t3154576040 * L_1 = (Dictionary_2_t3154576040 *)il2cpp_codegen_object_new(Dictionary_2_t3154576040_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3108089431(L_1, /*hidden argument*/Dictionary_2__ctor_m3108089431_RuntimeMethod_var);
		__this->set__virtualButtonsDictionary_2(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// CnControls.CnInputManager CnControls.CnInputManager::get_Instance()
extern "C"  CnInputManager_t16497872 * CnInputManager_get_Instance_m651793267 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_get_Instance_m651793267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CnInputManager_t16497872 * G_B2_0 = NULL;
	CnInputManager_t16497872 * G_B1_0 = NULL;
	{
		CnInputManager_t16497872 * L_0 = ((CnInputManager_t16497872_StaticFields*)il2cpp_codegen_static_fields_for(CnInputManager_t16497872_il2cpp_TypeInfo_var))->get__instance_0();
		CnInputManager_t16497872 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		CnInputManager_t16497872 * L_2 = (CnInputManager_t16497872 *)il2cpp_codegen_object_new(CnInputManager_t16497872_il2cpp_TypeInfo_var);
		CnInputManager__ctor_m2849005735(L_2, /*hidden argument*/NULL);
		CnInputManager_t16497872 * L_3 = L_2;
		((CnInputManager_t16497872_StaticFields*)il2cpp_codegen_static_fields_for(CnInputManager_t16497872_il2cpp_TypeInfo_var))->set__instance_0(L_3);
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// System.Int32 CnControls.CnInputManager::get_TouchCount()
extern "C"  int32_t CnInputManager_get_TouchCount_m157751202 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_get_TouchCount_m157751202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Touch CnControls.CnInputManager::GetTouch(System.Int32)
extern "C"  Touch_t1921856868  CnInputManager_GetTouch_m4036200253 (RuntimeObject * __this /* static, unused */, int32_t ___touchIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetTouch_m4036200253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___touchIndex0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_1 = Input_GetTouch_m2192712756(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CnControls.CnInputManager::GetAxis(System.String)
extern "C"  float CnInputManager_GetAxis_m3740099655 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___axisName0;
		float L_1 = CnInputManager_GetAxis_m3048911529(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CnControls.CnInputManager::GetAxisRaw(System.String)
extern "C"  float CnInputManager_GetAxisRaw_m2167224483 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___axisName0;
		float L_1 = CnInputManager_GetAxis_m3048911529(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CnControls.CnInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CnInputManager_GetAxis_m3048911529 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, bool ___isRaw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetAxis_m3048911529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float G_B8_0 = 0.0f;
	{
		String_t* L_0 = ___axisName0;
		bool L_1 = CnInputManager_AxisExists_m95741991(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		CnInputManager_t16497872 * L_2 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_t3962437003 * L_3 = L_2->get__virtualAxisDictionary_1();
		String_t* L_4 = ___axisName0;
		NullCheck(L_3);
		List_1_t4177180704 * L_5 = Dictionary_2_get_Item_m1062706786(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m1062706786_RuntimeMethod_var);
		String_t* L_6 = ___axisName0;
		bool L_7 = ___isRaw1;
		float L_8 = CnInputManager_GetVirtualAxisValue_m456977846(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0023:
	{
		String_t* L_9 = ___axisName0;
		bool L_10 = CnInputManager_ButtonExists_m2689649392(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		CnInputManager_t16497872 * L_11 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_t3154576040 * L_12 = L_11->get__virtualButtonsDictionary_2();
		String_t* L_13 = ___axisName0;
		NullCheck(L_12);
		List_1_t3369319741 * L_14 = Dictionary_2_get_Item_m2630743097(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_m2630743097_RuntimeMethod_var);
		bool L_15 = CnInputManager_GetAnyVirtualButton_m2901901429(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		return (1.0f);
	}

IL_0050:
	{
		bool L_17 = ___isRaw1;
		if (!L_17)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_18 = ___axisName0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_19 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		G_B8_0 = L_19;
		goto IL_0067;
	}

IL_0061:
	{
		String_t* L_20 = ___axisName0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_21 = Input_GetAxis_m4009438427(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		G_B8_0 = L_21;
	}

IL_0067:
	{
		return G_B8_0;
	}
}
// System.Boolean CnControls.CnInputManager::GetButton(System.String)
extern "C"  bool CnInputManager_GetButton_m754666042 (RuntimeObject * __this /* static, unused */, String_t* ___buttonName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetButton_m754666042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___buttonName0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m2064261504(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		String_t* L_3 = ___buttonName0;
		bool L_4 = CnInputManager_ButtonExists_m2689649392(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		CnInputManager_t16497872 * L_5 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_t3154576040 * L_6 = L_5->get__virtualButtonsDictionary_2();
		String_t* L_7 = ___buttonName0;
		NullCheck(L_6);
		List_1_t3369319741 * L_8 = Dictionary_2_get_Item_m2630743097(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m2630743097_RuntimeMethod_var);
		bool L_9 = CnInputManager_GetAnyVirtualButton_m2901901429(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Boolean CnControls.CnInputManager::GetButtonDown(System.String)
extern "C"  bool CnInputManager_GetButtonDown_m4216504428 (RuntimeObject * __this /* static, unused */, String_t* ___buttonName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetButtonDown_m4216504428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___buttonName0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		String_t* L_3 = ___buttonName0;
		bool L_4 = CnInputManager_ButtonExists_m2689649392(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		CnInputManager_t16497872 * L_5 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_t3154576040 * L_6 = L_5->get__virtualButtonsDictionary_2();
		String_t* L_7 = ___buttonName0;
		NullCheck(L_6);
		List_1_t3369319741 * L_8 = Dictionary_2_get_Item_m2630743097(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m2630743097_RuntimeMethod_var);
		bool L_9 = CnInputManager_GetAnyVirtualButtonDown_m3615553324(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Boolean CnControls.CnInputManager::GetButtonUp(System.String)
extern "C"  bool CnInputManager_GetButtonUp_m2060150396 (RuntimeObject * __this /* static, unused */, String_t* ___buttonName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetButtonUp_m2060150396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___buttonName0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonUp_m4007681079(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		String_t* L_3 = ___buttonName0;
		bool L_4 = CnInputManager_ButtonExists_m2689649392(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		CnInputManager_t16497872 * L_5 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_t3154576040 * L_6 = L_5->get__virtualButtonsDictionary_2();
		String_t* L_7 = ___buttonName0;
		NullCheck(L_6);
		List_1_t3369319741 * L_8 = Dictionary_2_get_Item_m2630743097(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m2630743097_RuntimeMethod_var);
		bool L_9 = CnInputManager_GetAnyVirtualButtonUp_m1183918506(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Boolean CnControls.CnInputManager::AxisExists(System.String)
extern "C"  bool CnInputManager_AxisExists_m95741991 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_AxisExists_m95741991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CnInputManager_t16497872 * L_0 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_t3962437003 * L_1 = L_0->get__virtualAxisDictionary_1();
		String_t* L_2 = ___axisName0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m672998822(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m672998822_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean CnControls.CnInputManager::ButtonExists(System.String)
extern "C"  bool CnInputManager_ButtonExists_m2689649392 (RuntimeObject * __this /* static, unused */, String_t* ___buttonName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_ButtonExists_m2689649392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CnInputManager_t16497872 * L_0 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_t3154576040 * L_1 = L_0->get__virtualButtonsDictionary_2();
		String_t* L_2 = ___buttonName0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m617935258(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m617935258_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void CnControls.CnInputManager::RegisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_RegisterVirtualAxis_m3521689230 (RuntimeObject * __this /* static, unused */, VirtualAxis_t2705105962 * ___virtualAxis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_RegisterVirtualAxis_m3521689230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CnInputManager_t16497872 * L_0 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_t3962437003 * L_1 = L_0->get__virtualAxisDictionary_1();
		VirtualAxis_t2705105962 * L_2 = ___virtualAxis0;
		NullCheck(L_2);
		String_t* L_3 = VirtualAxis_get_Name_m3580586152(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m672998822(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m672998822_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		CnInputManager_t16497872 * L_5 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_t3962437003 * L_6 = L_5->get__virtualAxisDictionary_1();
		VirtualAxis_t2705105962 * L_7 = ___virtualAxis0;
		NullCheck(L_7);
		String_t* L_8 = VirtualAxis_get_Name_m3580586152(L_7, /*hidden argument*/NULL);
		List_1_t4177180704 * L_9 = (List_1_t4177180704 *)il2cpp_codegen_object_new(List_1_t4177180704_il2cpp_TypeInfo_var);
		List_1__ctor_m2292671058(L_9, /*hidden argument*/List_1__ctor_m2292671058_RuntimeMethod_var);
		NullCheck(L_6);
		Dictionary_2_set_Item_m2326629400(L_6, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m2326629400_RuntimeMethod_var);
	}

IL_0034:
	{
		CnInputManager_t16497872 * L_10 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_t3962437003 * L_11 = L_10->get__virtualAxisDictionary_1();
		VirtualAxis_t2705105962 * L_12 = ___virtualAxis0;
		NullCheck(L_12);
		String_t* L_13 = VirtualAxis_get_Name_m3580586152(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_t4177180704 * L_14 = Dictionary_2_get_Item_m1062706786(L_11, L_13, /*hidden argument*/Dictionary_2_get_Item_m1062706786_RuntimeMethod_var);
		VirtualAxis_t2705105962 * L_15 = ___virtualAxis0;
		NullCheck(L_14);
		List_1_Add_m1720352400(L_14, L_15, /*hidden argument*/List_1_Add_m1720352400_RuntimeMethod_var);
		return;
	}
}
// System.Void CnControls.CnInputManager::UnregisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_UnregisterVirtualAxis_m1265339305 (RuntimeObject * __this /* static, unused */, VirtualAxis_t2705105962 * ___virtualAxis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_UnregisterVirtualAxis_m1265339305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CnInputManager_t16497872 * L_0 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_t3962437003 * L_1 = L_0->get__virtualAxisDictionary_1();
		VirtualAxis_t2705105962 * L_2 = ___virtualAxis0;
		NullCheck(L_2);
		String_t* L_3 = VirtualAxis_get_Name_m3580586152(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m672998822(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m672998822_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		CnInputManager_t16497872 * L_5 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_t3962437003 * L_6 = L_5->get__virtualAxisDictionary_1();
		VirtualAxis_t2705105962 * L_7 = ___virtualAxis0;
		NullCheck(L_7);
		String_t* L_8 = VirtualAxis_get_Name_m3580586152(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_t4177180704 * L_9 = Dictionary_2_get_Item_m1062706786(L_6, L_8, /*hidden argument*/Dictionary_2_get_Item_m1062706786_RuntimeMethod_var);
		VirtualAxis_t2705105962 * L_10 = ___virtualAxis0;
		NullCheck(L_9);
		bool L_11 = List_1_Remove_m4289802854(L_9, L_10, /*hidden argument*/List_1_Remove_m4289802854_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		VirtualAxis_t2705105962 * L_12 = ___virtualAxis0;
		NullCheck(L_12);
		String_t* L_13 = VirtualAxis_get_Name_m3580586152(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral542744637, L_13, _stringLiteral2513976067, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_0054:
	{
		goto IL_0073;
	}

IL_0059:
	{
		VirtualAxis_t2705105962 * L_15 = ___virtualAxis0;
		NullCheck(L_15);
		String_t* L_16 = VirtualAxis_get_Name_m3580586152(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3842785318, L_16, _stringLiteral1650275928, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void CnControls.CnInputManager::RegisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_RegisterVirtualButton_m3096476519 (RuntimeObject * __this /* static, unused */, VirtualButton_t1897244999 * ___virtualButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_RegisterVirtualButton_m3096476519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CnInputManager_t16497872 * L_0 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_t3154576040 * L_1 = L_0->get__virtualButtonsDictionary_2();
		VirtualButton_t1897244999 * L_2 = ___virtualButton0;
		NullCheck(L_2);
		String_t* L_3 = VirtualButton_get_Name_m1486646029(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m617935258(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m617935258_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		CnInputManager_t16497872 * L_5 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_t3154576040 * L_6 = L_5->get__virtualButtonsDictionary_2();
		VirtualButton_t1897244999 * L_7 = ___virtualButton0;
		NullCheck(L_7);
		String_t* L_8 = VirtualButton_get_Name_m1486646029(L_7, /*hidden argument*/NULL);
		List_1_t3369319741 * L_9 = (List_1_t3369319741 *)il2cpp_codegen_object_new(List_1_t3369319741_il2cpp_TypeInfo_var);
		List_1__ctor_m3837413355(L_9, /*hidden argument*/List_1__ctor_m3837413355_RuntimeMethod_var);
		NullCheck(L_6);
		Dictionary_2_set_Item_m189772369(L_6, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m189772369_RuntimeMethod_var);
	}

IL_0034:
	{
		CnInputManager_t16497872 * L_10 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_t3154576040 * L_11 = L_10->get__virtualButtonsDictionary_2();
		VirtualButton_t1897244999 * L_12 = ___virtualButton0;
		NullCheck(L_12);
		String_t* L_13 = VirtualButton_get_Name_m1486646029(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_t3369319741 * L_14 = Dictionary_2_get_Item_m2630743097(L_11, L_13, /*hidden argument*/Dictionary_2_get_Item_m2630743097_RuntimeMethod_var);
		VirtualButton_t1897244999 * L_15 = ___virtualButton0;
		NullCheck(L_14);
		List_1_Add_m2731066031(L_14, L_15, /*hidden argument*/List_1_Add_m2731066031_RuntimeMethod_var);
		return;
	}
}
// System.Void CnControls.CnInputManager::UnregisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_UnregisterVirtualButton_m772080246 (RuntimeObject * __this /* static, unused */, VirtualButton_t1897244999 * ___virtualButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_UnregisterVirtualButton_m772080246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CnInputManager_t16497872 * L_0 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_t3154576040 * L_1 = L_0->get__virtualButtonsDictionary_2();
		VirtualButton_t1897244999 * L_2 = ___virtualButton0;
		NullCheck(L_2);
		String_t* L_3 = VirtualButton_get_Name_m1486646029(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m617935258(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m617935258_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		CnInputManager_t16497872 * L_5 = CnInputManager_get_Instance_m651793267(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_t3154576040 * L_6 = L_5->get__virtualButtonsDictionary_2();
		VirtualButton_t1897244999 * L_7 = ___virtualButton0;
		NullCheck(L_7);
		String_t* L_8 = VirtualButton_get_Name_m1486646029(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_t3369319741 * L_9 = Dictionary_2_get_Item_m2630743097(L_6, L_8, /*hidden argument*/Dictionary_2_get_Item_m2630743097_RuntimeMethod_var);
		VirtualButton_t1897244999 * L_10 = ___virtualButton0;
		NullCheck(L_9);
		bool L_11 = List_1_Remove_m1119192539(L_9, L_10, /*hidden argument*/List_1_Remove_m1119192539_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3890388708, /*hidden argument*/NULL);
	}

IL_0044:
	{
		goto IL_0053;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral707811840, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Single CnControls.CnInputManager::GetVirtualAxisValue(System.Collections.Generic.List`1<CnControls.VirtualAxis>,System.String,System.Boolean)
extern "C"  float CnInputManager_GetVirtualAxisValue_m456977846 (RuntimeObject * __this /* static, unused */, List_1_t4177180704 * ___virtualAxisList0, String_t* ___axisName1, bool ___isRaw2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetVirtualAxisValue_m456977846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___isRaw2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___axisName1;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___axisName1;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m4009438427(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_6 = Mathf_Approximately_m245805902(NULL /*static, unused*/, L_5, (0.0f), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		float L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		V_1 = 0;
		goto IL_0054;
	}

IL_0031:
	{
		List_1_t4177180704 * L_8 = ___virtualAxisList0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		VirtualAxis_t2705105962 * L_10 = List_1_get_Item_m3449434113(L_8, L_9, /*hidden argument*/List_1_get_Item_m3449434113_RuntimeMethod_var);
		NullCheck(L_10);
		float L_11 = VirtualAxis_get_Value_m1618256004(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_13 = Mathf_Approximately_m245805902(NULL /*static, unused*/, L_12, (0.0f), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0050;
		}
	}
	{
		float L_14 = V_2;
		return L_14;
	}

IL_0050:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0054:
	{
		int32_t L_16 = V_1;
		List_1_t4177180704 * L_17 = ___virtualAxisList0;
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m3448069616(L_17, /*hidden argument*/List_1_get_Count_m3448069616_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0031;
		}
	}
	{
		return (0.0f);
	}
}
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonDown(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonDown_m3615553324 (RuntimeObject * __this /* static, unused */, List_1_t3369319741 * ___virtualButtons0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetAnyVirtualButtonDown_m3615553324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		List_1_t3369319741 * L_0 = ___virtualButtons0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		VirtualButton_t1897244999 * L_2 = List_1_get_Item_m1157183561(L_0, L_1, /*hidden argument*/List_1_get_Item_m1157183561_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = VirtualButton_get_GetButtonDown_m2997105053(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		List_1_t3369319741 * L_6 = ___virtualButtons0;
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m2718932326(L_6, /*hidden argument*/List_1_get_Count_m2718932326_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonUp(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonUp_m1183918506 (RuntimeObject * __this /* static, unused */, List_1_t3369319741 * ___virtualButtons0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetAnyVirtualButtonUp_m1183918506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		List_1_t3369319741 * L_0 = ___virtualButtons0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		VirtualButton_t1897244999 * L_2 = List_1_get_Item_m1157183561(L_0, L_1, /*hidden argument*/List_1_get_Item_m1157183561_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = VirtualButton_get_GetButtonUp_m3309573997(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		List_1_t3369319741 * L_6 = ___virtualButtons0;
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m2718932326(L_6, /*hidden argument*/List_1_get_Count_m2718932326_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButton(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButton_m2901901429 (RuntimeObject * __this /* static, unused */, List_1_t3369319741 * ___virtualButtons0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CnInputManager_GetAnyVirtualButton_m2901901429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		List_1_t3369319741 * L_0 = ___virtualButtons0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		VirtualButton_t1897244999 * L_2 = List_1_get_Item_m1157183561(L_0, L_1, /*hidden argument*/List_1_get_Item_m1157183561_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = VirtualButton_get_GetButton_m3068570859(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		List_1_t3369319741 * L_6 = ___virtualButtons0;
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m2718932326(L_6, /*hidden argument*/List_1_get_Count_m2718932326_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CnControls.Dpad::.ctor()
extern "C"  void Dpad__ctor_m854736893 (Dpad_t980821090 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Camera CnControls.Dpad::get_CurrentEventCamera()
extern "C"  Camera_t4157153871 * Dpad_get_CurrentEventCamera_m1692823293 (Dpad_t980821090 * __this, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = __this->get_U3CCurrentEventCameraU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void CnControls.Dpad::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void Dpad_set_CurrentEventCamera_m2654443616 (Dpad_t980821090 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___value0;
		__this->set_U3CCurrentEventCameraU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void CnControls.Dpad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Dpad_OnPointerDown_m1078264504 (Dpad_t980821090 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dpad_OnPointerDown_m1078264504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DpadAxis_t781101020 * V_0 = NULL;
	DpadAxisU5BU5D_t387633461* V_1 = NULL;
	int32_t V_2 = 0;
	Camera_t4157153871 * G_B2_0 = NULL;
	Dpad_t980821090 * G_B2_1 = NULL;
	Camera_t4157153871 * G_B1_0 = NULL;
	Dpad_t980821090 * G_B1_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = PointerEventData_get_pressEventCamera_m2613974917(L_0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		Camera_t4157153871 * L_3 = Dpad_get_CurrentEventCamera_m1692823293(__this, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0014:
	{
		NullCheck(G_B2_1);
		Dpad_set_CurrentEventCamera_m2654443616(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		DpadAxisU5BU5D_t387633461* L_4 = __this->get_DpadAxis_2();
		V_1 = L_4;
		V_2 = 0;
		goto IL_0063;
	}

IL_0027:
	{
		DpadAxisU5BU5D_t387633461* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		DpadAxis_t781101020 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		DpadAxis_t781101020 * L_9 = V_0;
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = DpadAxis_get_RectTransform_m1740560235(L_9, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_t2156229523  L_12 = PointerEventData_get_position_m437660275(L_11, /*hidden argument*/NULL);
		Camera_t4157153871 * L_13 = Dpad_get_CurrentEventCamera_m1692823293(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		bool L_14 = RectTransformUtility_RectangleContainsScreenPoint_m4031431712(NULL /*static, unused*/, L_10, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		DpadAxis_t781101020 * L_15 = V_0;
		PointerEventData_t3807901092 * L_16 = ___eventData0;
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = PointerEventData_get_position_m437660275(L_16, /*hidden argument*/NULL);
		Camera_t4157153871 * L_18 = Dpad_get_CurrentEventCamera_m1692823293(__this, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_19 = ___eventData0;
		NullCheck(L_19);
		int32_t L_20 = PointerEventData_get_pointerId_m1200356155(L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		DpadAxis_Press_m409404626(L_15, L_17, L_18, L_20, /*hidden argument*/NULL);
	}

IL_005f:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_22 = V_2;
		DpadAxisU5BU5D_t387633461* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Void CnControls.Dpad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Dpad_OnPointerUp_m1652992732 (Dpad_t980821090 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	DpadAxis_t781101020 * V_0 = NULL;
	DpadAxisU5BU5D_t387633461* V_1 = NULL;
	int32_t V_2 = 0;
	{
		DpadAxisU5BU5D_t387633461* L_0 = __this->get_DpadAxis_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0022;
	}

IL_000e:
	{
		DpadAxisU5BU5D_t387633461* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DpadAxis_t781101020 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		DpadAxis_t781101020 * L_5 = V_0;
		PointerEventData_t3807901092 * L_6 = ___eventData0;
		NullCheck(L_6);
		int32_t L_7 = PointerEventData_get_pointerId_m1200356155(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		DpadAxis_TryRelease_m4156722657(L_5, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_9 = V_2;
		DpadAxisU5BU5D_t387633461* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000e;
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
// System.Void CnControls.DpadAxis::.ctor()
extern "C"  void DpadAxis__ctor_m3714894229 (DpadAxis_t781101020 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RectTransform CnControls.DpadAxis::get_RectTransform()
extern "C"  RectTransform_t3704657025 * DpadAxis_get_RectTransform_m1740560235 (DpadAxis_t781101020 * __this, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = __this->get_U3CRectTransformU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void CnControls.DpadAxis::set_RectTransform(UnityEngine.RectTransform)
extern "C"  void DpadAxis_set_RectTransform_m1157400813 (DpadAxis_t781101020 * __this, RectTransform_t3704657025 * ___value0, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = ___value0;
		__this->set_U3CRectTransformU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 CnControls.DpadAxis::get_LastFingerId()
extern "C"  int32_t DpadAxis_get_LastFingerId_m2594169843 (DpadAxis_t781101020 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLastFingerIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void CnControls.DpadAxis::set_LastFingerId(System.Int32)
extern "C"  void DpadAxis_set_LastFingerId_m432573798 (DpadAxis_t781101020 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLastFingerIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void CnControls.DpadAxis::Awake()
extern "C"  void DpadAxis_Awake_m1244525653 (DpadAxis_t781101020 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DpadAxis_Awake_m1244525653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		DpadAxis_set_RectTransform_m1157400813(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.DpadAxis::OnEnable()
extern "C"  void DpadAxis_OnEnable_m95271212 (DpadAxis_t781101020 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DpadAxis_OnEnable_m95271212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAxis_t2705105962 * G_B2_0 = NULL;
	DpadAxis_t781101020 * G_B2_1 = NULL;
	VirtualAxis_t2705105962 * G_B1_0 = NULL;
	DpadAxis_t781101020 * G_B1_1 = NULL;
	{
		VirtualAxis_t2705105962 * L_0 = __this->get__virtualAxis_6();
		VirtualAxis_t2705105962 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->get_AxisName_2();
		VirtualAxis_t2705105962 * L_3 = (VirtualAxis_t2705105962 *)il2cpp_codegen_object_new(VirtualAxis_t2705105962_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m2706333303(L_3, L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__virtualAxis_6(G_B2_0);
		DpadAxis_set_LastFingerId_m432573798(__this, (-1), /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_4 = __this->get__virtualAxis_6();
		CnInputManager_RegisterVirtualAxis_m3521689230(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.DpadAxis::OnDisable()
extern "C"  void DpadAxis_OnDisable_m2483815870 (DpadAxis_t781101020 * __this, const RuntimeMethod* method)
{
	{
		VirtualAxis_t2705105962 * L_0 = __this->get__virtualAxis_6();
		CnInputManager_UnregisterVirtualAxis_m1265339305(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.DpadAxis::Press(UnityEngine.Vector2,UnityEngine.Camera,System.Int32)
extern "C"  void DpadAxis_Press_m409404626 (DpadAxis_t781101020 * __this, Vector2_t2156229523  ___screenPoint0, Camera_t4157153871 * ___eventCamera1, int32_t ___pointerId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DpadAxis_Press_m409404626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualAxis_t2705105962 * L_0 = __this->get__virtualAxis_6();
		float L_1 = __this->get_AxisMultiplier_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_1, (-1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_set_Value_m2937739439(L_0, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___pointerId2;
		DpadAxis_set_LastFingerId_m432573798(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.DpadAxis::TryRelease(System.Int32)
extern "C"  void DpadAxis_TryRelease_m4156722657 (DpadAxis_t781101020 * __this, int32_t ___pointerId0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = DpadAxis_get_LastFingerId_m2594169843(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___pointerId0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		VirtualAxis_t2705105962 * L_2 = __this->get__virtualAxis_6();
		NullCheck(L_2);
		VirtualAxis_set_Value_m2937739439(L_2, (0.0f), /*hidden argument*/NULL);
		DpadAxis_set_LastFingerId_m432573798(__this, (-1), /*hidden argument*/NULL);
	}

IL_0023:
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
// System.Void CnControls.EmptyGraphic::.ctor()
extern "C"  void EmptyGraphic__ctor_m4624055 (EmptyGraphic_t2931555429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmptyGraphic__ctor_m4624055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphic_t1660335611_il2cpp_TypeInfo_var);
		Graphic__ctor_m2983567630(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.EmptyGraphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void EmptyGraphic_OnPopulateMesh_m2035234630 (EmptyGraphic_t2931555429 * __this, VertexHelper_t2453304189 * ___vh0, const RuntimeMethod* method)
{
	{
		VertexHelper_t2453304189 * L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_m627349662(L_0, /*hidden argument*/NULL);
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
// System.Void CnControls.SensitiveJoystick::.ctor()
extern "C"  void SensitiveJoystick__ctor_m757518986 (SensitiveJoystick_t60193198 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SensitiveJoystick__ctor_m757518986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyframeU5BU5D_t1068524471* L_0 = ((KeyframeU5BU5D_t1068524471*)SZArrayNew(KeyframeU5BU5D_t1068524471_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_0);
		Keyframe_t4206410242  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Keyframe__ctor_m1259609478((&L_1), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		KeyframeU5BU5D_t1068524471* L_2 = L_0;
		NullCheck(L_2);
		Keyframe_t4206410242  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Keyframe__ctor_m1259609478((&L_3), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		*(Keyframe_t4206410242 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		AnimationCurve_t3046754366 * L_4 = (AnimationCurve_t3046754366 *)il2cpp_codegen_object_new(AnimationCurve_t3046754366_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m1565662948(L_4, L_2, /*hidden argument*/NULL);
		__this->set_SensitivityCurve_21(L_4);
		SimpleJoystick__ctor_m687439859(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SensitiveJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SensitiveJoystick_OnDrag_m2440427309 (SensitiveJoystick_t60193198 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SensitiveJoystick_OnDrag_m2440427309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		SimpleJoystick_OnDrag_m1433377547(__this, L_0, /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_1 = ((SimpleJoystick_t421539915 *)__this)->get_HorizintalAxis_19();
		NullCheck(L_1);
		float L_2 = VirtualAxis_get_Value_m1618256004(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		VirtualAxis_t2705105962 * L_3 = ((SimpleJoystick_t421539915 *)__this)->get_VerticalAxis_20();
		NullCheck(L_3);
		float L_4 = VirtualAxis_get_Value_m1618256004(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Sign_m3457838305(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = V_1;
		float L_8 = Mathf_Sign_m3457838305(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		VirtualAxis_t2705105962 * L_9 = ((SimpleJoystick_t421539915 *)__this)->get_HorizintalAxis_19();
		float L_10 = V_2;
		AnimationCurve_t3046754366 * L_11 = __this->get_SensitivityCurve_21();
		float L_12 = V_2;
		float L_13 = V_0;
		NullCheck(L_11);
		float L_14 = AnimationCurve_Evaluate_m2125563588(L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtualAxis_set_Value_m2937739439(L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_14)), /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_15 = ((SimpleJoystick_t421539915 *)__this)->get_VerticalAxis_20();
		float L_16 = V_3;
		AnimationCurve_t3046754366 * L_17 = __this->get_SensitivityCurve_21();
		float L_18 = V_3;
		float L_19 = V_1;
		NullCheck(L_17);
		float L_20 = AnimationCurve_Evaluate_m2125563588(L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtualAxis_set_Value_m2937739439(L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_20)), /*hidden argument*/NULL);
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
// System.Void CnControls.SimpleButton::.ctor()
extern "C"  void SimpleButton__ctor_m804020201 (SimpleButton_t1119332961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleButton__ctor_m804020201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_ButtonName_2(_stringLiteral1930566815);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SimpleButton::OnEnable()
extern "C"  void SimpleButton_OnEnable_m1436442780 (SimpleButton_t1119332961 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleButton_OnEnable_m1436442780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualButton_t1897244999 * G_B2_0 = NULL;
	SimpleButton_t1119332961 * G_B2_1 = NULL;
	VirtualButton_t1897244999 * G_B1_0 = NULL;
	SimpleButton_t1119332961 * G_B1_1 = NULL;
	{
		VirtualButton_t1897244999 * L_0 = __this->get__virtualButton_3();
		VirtualButton_t1897244999 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->get_ButtonName_2();
		VirtualButton_t1897244999 * L_3 = (VirtualButton_t1897244999 *)il2cpp_codegen_object_new(VirtualButton_t1897244999_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m3613420199(L_3, L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__virtualButton_3(G_B2_0);
		VirtualButton_t1897244999 * L_4 = __this->get__virtualButton_3();
		CnInputManager_RegisterVirtualButton_m3096476519(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SimpleButton::OnDisable()
extern "C"  void SimpleButton_OnDisable_m1966100162 (SimpleButton_t1119332961 * __this, const RuntimeMethod* method)
{
	{
		VirtualButton_t1897244999 * L_0 = __this->get__virtualButton_3();
		CnInputManager_UnregisterVirtualButton_m772080246(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SimpleButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleButton_OnPointerUp_m2752047106 (SimpleButton_t1119332961 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		VirtualButton_t1897244999 * L_0 = __this->get__virtualButton_3();
		NullCheck(L_0);
		VirtualButton_Release_m1006480204(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SimpleButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleButton_OnPointerDown_m3560687489 (SimpleButton_t1119332961 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		VirtualButton_t1897244999 * L_0 = __this->get__virtualButton_3();
		NullCheck(L_0);
		VirtualButton_Press_m102003541(L_0, /*hidden argument*/NULL);
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
// System.Void CnControls.SimpleJoystick::.ctor()
extern "C"  void SimpleJoystick__ctor_m687439859 (SimpleJoystick_t421539915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJoystick__ctor_m687439859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_MovementRange_3((50.0f));
		__this->set_HorizontalAxisName_4(_stringLiteral1828639942);
		__this->set_VerticalAxisName_5(_stringLiteral2984908384);
		__this->set_MoveBase_7((bool)1);
		__this->set_SnapsToFinger_8((bool)1);
		__this->set_JoystickMoveAxis_9(3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Camera CnControls.SimpleJoystick::get_CurrentEventCamera()
extern "C"  Camera_t4157153871 * SimpleJoystick_get_CurrentEventCamera_m2042874296 (SimpleJoystick_t421539915 * __this, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = __this->get_U3CCurrentEventCameraU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void CnControls.SimpleJoystick::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void SimpleJoystick_set_CurrentEventCamera_m4140099097 (SimpleJoystick_t421539915 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___value0;
		__this->set_U3CCurrentEventCameraU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void CnControls.SimpleJoystick::Awake()
extern "C"  void SimpleJoystick_Awake_m4282195851 (SimpleJoystick_t421539915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJoystick_Awake_m4282195851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_Stick_11();
		NullCheck(L_0);
		RectTransform_t3704657025 * L_1 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_0, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set__stickTransform_17(L_1);
		Image_t2670269651 * L_2 = __this->get_JoystickBase_10();
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_2, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set__baseTransform_16(L_3);
		RectTransform_t3704657025 * L_4 = __this->get__stickTransform_17();
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = RectTransform_get_anchoredPosition_m1813443094(L_4, /*hidden argument*/NULL);
		__this->set__initialStickPosition_13(L_5);
		Vector2_t2156229523  L_6 = __this->get__initialStickPosition_13();
		__this->set__intermediateStickPosition_14(L_6);
		RectTransform_t3704657025 * L_7 = __this->get__baseTransform_16();
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = RectTransform_get_anchoredPosition_m1813443094(L_7, /*hidden argument*/NULL);
		__this->set__initialBasePosition_15(L_8);
		RectTransform_t3704657025 * L_9 = __this->get__stickTransform_17();
		Vector2_t2156229523  L_10 = __this->get__initialStickPosition_13();
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_m4126691837(L_9, L_10, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_11 = __this->get__baseTransform_16();
		Vector2_t2156229523  L_12 = __this->get__initialBasePosition_15();
		NullCheck(L_11);
		RectTransform_set_anchoredPosition_m4126691837(L_11, L_12, /*hidden argument*/NULL);
		float L_13 = __this->get_MovementRange_3();
		__this->set__oneOverMovementRange_18(((float)((float)(1.0f)/(float)L_13)));
		bool L_14 = __this->get_HideOnRelease_6();
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		SimpleJoystick_Hide_m1848238907(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0096:
	{
		return;
	}
}
// System.Void CnControls.SimpleJoystick::OnEnable()
extern "C"  void SimpleJoystick_OnEnable_m1273232302 (SimpleJoystick_t421539915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJoystick_OnEnable_m1273232302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAxis_t2705105962 * G_B2_0 = NULL;
	SimpleJoystick_t421539915 * G_B2_1 = NULL;
	VirtualAxis_t2705105962 * G_B1_0 = NULL;
	SimpleJoystick_t421539915 * G_B1_1 = NULL;
	VirtualAxis_t2705105962 * G_B4_0 = NULL;
	SimpleJoystick_t421539915 * G_B4_1 = NULL;
	VirtualAxis_t2705105962 * G_B3_0 = NULL;
	SimpleJoystick_t421539915 * G_B3_1 = NULL;
	{
		VirtualAxis_t2705105962 * L_0 = __this->get_HorizintalAxis_19();
		VirtualAxis_t2705105962 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->get_HorizontalAxisName_4();
		VirtualAxis_t2705105962 * L_3 = (VirtualAxis_t2705105962 *)il2cpp_codegen_object_new(VirtualAxis_t2705105962_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m2706333303(L_3, L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_HorizintalAxis_19(G_B2_0);
		VirtualAxis_t2705105962 * L_4 = __this->get_VerticalAxis_20();
		VirtualAxis_t2705105962 * L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = __this;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = __this;
			goto IL_0037;
		}
	}
	{
		String_t* L_6 = __this->get_VerticalAxisName_5();
		VirtualAxis_t2705105962 * L_7 = (VirtualAxis_t2705105962 *)il2cpp_codegen_object_new(VirtualAxis_t2705105962_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m2706333303(L_7, L_6, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0037:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_VerticalAxis_20(G_B4_0);
		VirtualAxis_t2705105962 * L_8 = __this->get_HorizintalAxis_19();
		CnInputManager_RegisterVirtualAxis_m3521689230(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_9 = __this->get_VerticalAxis_20();
		CnInputManager_RegisterVirtualAxis_m3521689230(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SimpleJoystick::OnDisable()
extern "C"  void SimpleJoystick_OnDisable_m1075345392 (SimpleJoystick_t421539915 * __this, const RuntimeMethod* method)
{
	{
		VirtualAxis_t2705105962 * L_0 = __this->get_HorizintalAxis_19();
		CnInputManager_UnregisterVirtualAxis_m1265339305(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_1 = __this->get_VerticalAxis_20();
		CnInputManager_UnregisterVirtualAxis_m1265339305(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SimpleJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnDrag_m1433377547 (SimpleJoystick_t421539915 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJoystick_OnDrag_m1433377547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Camera_t4157153871 * G_B2_0 = NULL;
	SimpleJoystick_t421539915 * G_B2_1 = NULL;
	Camera_t4157153871 * G_B1_0 = NULL;
	SimpleJoystick_t421539915 * G_B1_1 = NULL;
	{
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = PointerEventData_get_pressEventCamera_m2613974917(L_0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		Camera_t4157153871 * L_3 = SimpleJoystick_get_CurrentEventCamera_m2042874296(__this, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0014:
	{
		NullCheck(G_B2_1);
		SimpleJoystick_set_CurrentEventCamera_m4140099097(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_4 = __this->get__stickTransform_17();
		PointerEventData_t3807901092 * L_5 = ___eventData0;
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = PointerEventData_get_position_m437660275(L_5, /*hidden argument*/NULL);
		Camera_t4157153871 * L_7 = SimpleJoystick_get_CurrentEventCamera_m2042874296(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807(NULL /*static, unused*/, L_4, L_6, L_7, (&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_8 = __this->get__stickTransform_17();
		Vector3_t3722313464  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_m3387557959(L_8, L_9, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_10 = __this->get__stickTransform_17();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_anchoredPosition_m1813443094(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = __this->get_JoystickMoveAxis_9();
		if (((int32_t)((int32_t)L_12&(int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		Vector2_t2156229523 * L_13 = __this->get_address_of__intermediateStickPosition_14();
		float L_14 = L_13->get_x_0();
		(&V_1)->set_x_0(L_14);
	}

IL_006a:
	{
		int32_t L_15 = __this->get_JoystickMoveAxis_9();
		if (((int32_t)((int32_t)L_15&(int32_t)2)))
		{
			goto IL_0089;
		}
	}
	{
		Vector2_t2156229523 * L_16 = __this->get_address_of__intermediateStickPosition_14();
		float L_17 = L_16->get_y_1();
		(&V_1)->set_y_1(L_17);
	}

IL_0089:
	{
		RectTransform_t3704657025 * L_18 = __this->get__stickTransform_17();
		Vector2_t2156229523  L_19 = V_1;
		NullCheck(L_18);
		RectTransform_set_anchoredPosition_m4126691837(L_18, L_19, /*hidden argument*/NULL);
		float L_20 = (&V_1)->get_x_0();
		float L_21 = (&V_1)->get_y_1();
		Vector2_t2156229523  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector2__ctor_m3970636864((&L_22), L_20, L_21, /*hidden argument*/NULL);
		Vector2_t2156229523  L_23 = __this->get__intermediateStickPosition_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_24 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		float L_25 = Vector2_get_magnitude_m2752892833((&V_2), /*hidden argument*/NULL);
		V_3 = L_25;
		Vector2_t2156229523  L_26 = V_2;
		float L_27 = V_3;
		Vector2_t2156229523  L_28 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29 = V_3;
		float L_30 = __this->get_MovementRange_3();
		if ((!(((float)L_29) > ((float)L_30))))
		{
			goto IL_0155;
		}
	}
	{
		bool L_31 = __this->get_MoveBase_7();
		if (!L_31)
		{
			goto IL_0132;
		}
	}
	{
		bool L_32 = __this->get_SnapsToFinger_8();
		if (!L_32)
		{
			goto IL_0132;
		}
	}
	{
		float L_33 = Vector2_get_magnitude_m2752892833((&V_2), /*hidden argument*/NULL);
		float L_34 = __this->get_MovementRange_3();
		V_5 = ((float)il2cpp_codegen_subtract((float)L_33, (float)L_34));
		Vector2_t2156229523  L_35 = V_4;
		float L_36 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_37 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		RectTransform_t3704657025 * L_38 = __this->get__baseTransform_16();
		RectTransform_t3704657025 * L_39 = L_38;
		NullCheck(L_39);
		Vector2_t2156229523  L_40 = RectTransform_get_anchoredPosition_m1813443094(L_39, /*hidden argument*/NULL);
		Vector2_t2156229523  L_41 = V_6;
		Vector2_t2156229523  L_42 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		RectTransform_set_anchoredPosition_m4126691837(L_39, L_42, /*hidden argument*/NULL);
		Vector2_t2156229523  L_43 = __this->get__intermediateStickPosition_14();
		Vector2_t2156229523  L_44 = V_6;
		Vector2_t2156229523  L_45 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		__this->set__intermediateStickPosition_14(L_45);
		goto IL_0155;
	}

IL_0132:
	{
		RectTransform_t3704657025 * L_46 = __this->get__stickTransform_17();
		Vector2_t2156229523  L_47 = __this->get__intermediateStickPosition_14();
		Vector2_t2156229523  L_48 = V_4;
		float L_49 = __this->get_MovementRange_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_50 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		Vector2_t2156229523  L_51 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_47, L_50, /*hidden argument*/NULL);
		NullCheck(L_46);
		RectTransform_set_anchoredPosition_m4126691837(L_46, L_51, /*hidden argument*/NULL);
	}

IL_0155:
	{
		RectTransform_t3704657025 * L_52 = __this->get__stickTransform_17();
		NullCheck(L_52);
		Vector2_t2156229523  L_53 = RectTransform_get_anchoredPosition_m1813443094(L_52, /*hidden argument*/NULL);
		V_7 = L_53;
		float L_54 = (&V_7)->get_x_0();
		float L_55 = (&V_7)->get_y_1();
		Vector2_t2156229523  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector2__ctor_m3970636864((&L_56), L_54, L_55, /*hidden argument*/NULL);
		Vector2_t2156229523  L_57 = __this->get__intermediateStickPosition_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_58 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_56, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		float L_59 = (&V_8)->get_x_0();
		float L_60 = __this->get__oneOverMovementRange_18();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_61 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_59, (float)L_60)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_9 = L_61;
		float L_62 = (&V_8)->get_y_1();
		float L_63 = __this->get__oneOverMovementRange_18();
		float L_64 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_10 = L_64;
		VirtualAxis_t2705105962 * L_65 = __this->get_HorizintalAxis_19();
		float L_66 = V_9;
		NullCheck(L_65);
		VirtualAxis_set_Value_m2937739439(L_65, L_66, /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_67 = __this->get_VerticalAxis_20();
		float L_68 = V_10;
		NullCheck(L_67);
		VirtualAxis_set_Value_m2937739439(L_67, L_68, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.SimpleJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnPointerUp_m3400564486 (SimpleJoystick_t421539915 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		RectTransform_t3704657025 * L_0 = __this->get__baseTransform_16();
		Vector2_t2156229523  L_1 = __this->get__initialBasePosition_15();
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4126691837(L_0, L_1, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_2 = __this->get__stickTransform_17();
		Vector2_t2156229523  L_3 = __this->get__initialStickPosition_13();
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m4126691837(L_2, L_3, /*hidden argument*/NULL);
		Vector2_t2156229523  L_4 = __this->get__initialStickPosition_13();
		__this->set__intermediateStickPosition_14(L_4);
		VirtualAxis_t2705105962 * L_5 = __this->get_HorizintalAxis_19();
		V_0 = (0.0f);
		VirtualAxis_t2705105962 * L_6 = __this->get_VerticalAxis_20();
		float L_7 = V_0;
		NullCheck(L_6);
		VirtualAxis_set_Value_m2937739439(L_6, L_7, /*hidden argument*/NULL);
		float L_8 = V_0;
		NullCheck(L_5);
		VirtualAxis_set_Value_m2937739439(L_5, L_8, /*hidden argument*/NULL);
		bool L_9 = __this->get_HideOnRelease_6();
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		SimpleJoystick_Hide_m1848238907(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Void CnControls.SimpleJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnPointerDown_m1819683062 (SimpleJoystick_t421539915 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJoystick_OnPointerDown_m1819683062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Camera_t4157153871 * G_B5_0 = NULL;
	SimpleJoystick_t421539915 * G_B5_1 = NULL;
	Camera_t4157153871 * G_B4_0 = NULL;
	SimpleJoystick_t421539915 * G_B4_1 = NULL;
	{
		bool L_0 = __this->get_HideOnRelease_6();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		SimpleJoystick_Hide_m1848238907(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		bool L_1 = __this->get_SnapsToFinger_8();
		if (!L_1)
		{
			goto IL_0098;
		}
	}
	{
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_2);
		Camera_t4157153871 * L_3 = PointerEventData_get_pressEventCamera_m2613974917(L_2, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = L_3;
		G_B4_0 = L_4;
		G_B4_1 = __this;
		if (L_4)
		{
			G_B5_0 = L_4;
			G_B5_1 = __this;
			goto IL_0031;
		}
	}
	{
		Camera_t4157153871 * L_5 = SimpleJoystick_get_CurrentEventCamera_m2042874296(__this, /*hidden argument*/NULL);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
	}

IL_0031:
	{
		NullCheck(G_B5_1);
		SimpleJoystick_set_CurrentEventCamera_m4140099097(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_6 = __this->get__stickTransform_17();
		PointerEventData_t3807901092 * L_7 = ___eventData0;
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = PointerEventData_get_position_m437660275(L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = SimpleJoystick_get_CurrentEventCamera_m2042874296(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807(NULL /*static, unused*/, L_6, L_8, L_9, (&V_0), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_10 = __this->get__baseTransform_16();
		PointerEventData_t3807901092 * L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_t2156229523  L_12 = PointerEventData_get_position_m437660275(L_11, /*hidden argument*/NULL);
		Camera_t4157153871 * L_13 = SimpleJoystick_get_CurrentEventCamera_m2042874296(__this, /*hidden argument*/NULL);
		RectTransformUtility_ScreenPointToWorldPointInRectangle_m1761902807(NULL /*static, unused*/, L_10, L_12, L_13, (&V_1), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_14 = __this->get__baseTransform_16();
		Vector3_t3722313464  L_15 = V_1;
		NullCheck(L_14);
		Transform_set_position_m3387557959(L_14, L_15, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_16 = __this->get__stickTransform_17();
		Vector3_t3722313464  L_17 = V_0;
		NullCheck(L_16);
		Transform_set_position_m3387557959(L_16, L_17, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_18 = __this->get__stickTransform_17();
		NullCheck(L_18);
		Vector2_t2156229523  L_19 = RectTransform_get_anchoredPosition_m1813443094(L_18, /*hidden argument*/NULL);
		__this->set__intermediateStickPosition_14(L_19);
		goto IL_009f;
	}

IL_0098:
	{
		PointerEventData_t3807901092 * L_20 = ___eventData0;
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(7 /* System.Void CnControls.SimpleJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_20);
	}

IL_009f:
	{
		return;
	}
}
// System.Void CnControls.SimpleJoystick::Hide(System.Boolean)
extern "C"  void SimpleJoystick_Hide_m1848238907 (SimpleJoystick_t421539915 * __this, bool ___isHidden0, const RuntimeMethod* method)
{
	{
		Image_t2670269651 * L_0 = __this->get_JoystickBase_10();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = ___isHidden0;
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Image_t2670269651 * L_3 = __this->get_Stick_11();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		bool L_5 = ___isHidden0;
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// System.Void CnControls.Touchpad::.ctor()
extern "C"  void Touchpad__ctor_m3847996051 (Touchpad_t4056981531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Touchpad__ctor_m3847996051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_HorizontalAxisName_3(_stringLiteral1828639942);
		__this->set_VerticalAxisName_4(_stringLiteral2984908384);
		__this->set_PreserveInertia_5((bool)1);
		__this->set_Friction_6((3.0f));
		__this->set_ControlMoveAxis_11(3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Camera CnControls.Touchpad::get_CurrentEventCamera()
extern "C"  Camera_t4157153871 * Touchpad_get_CurrentEventCamera_m3638914761 (Touchpad_t4056981531 * __this, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = __this->get_U3CCurrentEventCameraU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void CnControls.Touchpad::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void Touchpad_set_CurrentEventCamera_m2290932482 (Touchpad_t4056981531 * __this, Camera_t4157153871 * ___value0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___value0;
		__this->set_U3CCurrentEventCameraU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void CnControls.Touchpad::OnEnable()
extern "C"  void Touchpad_OnEnable_m4145045210 (Touchpad_t4056981531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Touchpad_OnEnable_m4145045210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAxis_t2705105962 * G_B2_0 = NULL;
	Touchpad_t4056981531 * G_B2_1 = NULL;
	VirtualAxis_t2705105962 * G_B1_0 = NULL;
	Touchpad_t4056981531 * G_B1_1 = NULL;
	VirtualAxis_t2705105962 * G_B4_0 = NULL;
	Touchpad_t4056981531 * G_B4_1 = NULL;
	VirtualAxis_t2705105962 * G_B3_0 = NULL;
	Touchpad_t4056981531 * G_B3_1 = NULL;
	{
		VirtualAxis_t2705105962 * L_0 = __this->get__horizintalAxis_7();
		VirtualAxis_t2705105962 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->get_HorizontalAxisName_3();
		VirtualAxis_t2705105962 * L_3 = (VirtualAxis_t2705105962 *)il2cpp_codegen_object_new(VirtualAxis_t2705105962_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m2706333303(L_3, L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__horizintalAxis_7(G_B2_0);
		VirtualAxis_t2705105962 * L_4 = __this->get__verticalAxis_8();
		VirtualAxis_t2705105962 * L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = __this;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = __this;
			goto IL_0037;
		}
	}
	{
		String_t* L_6 = __this->get_VerticalAxisName_4();
		VirtualAxis_t2705105962 * L_7 = (VirtualAxis_t2705105962 *)il2cpp_codegen_object_new(VirtualAxis_t2705105962_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m2706333303(L_7, L_6, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0037:
	{
		NullCheck(G_B4_1);
		G_B4_1->set__verticalAxis_8(G_B4_0);
		VirtualAxis_t2705105962 * L_8 = __this->get__horizintalAxis_7();
		CnInputManager_RegisterVirtualAxis_m3521689230(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_9 = __this->get__verticalAxis_8();
		CnInputManager_RegisterVirtualAxis_m3521689230(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.Touchpad::OnDisable()
extern "C"  void Touchpad_OnDisable_m3920761416 (Touchpad_t4056981531 * __this, const RuntimeMethod* method)
{
	{
		VirtualAxis_t2705105962 * L_0 = __this->get__horizintalAxis_7();
		CnInputManager_UnregisterVirtualAxis_m1265339305(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_1 = __this->get__verticalAxis_8();
		CnInputManager_UnregisterVirtualAxis_m1265339305(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CnControls.Touchpad::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnDrag_m3651052572 (Touchpad_t4056981531 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_ControlMoveAxis_11();
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		VirtualAxis_t2705105962 * L_1 = __this->get__horizintalAxis_7();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = PointerEventData_get_delta_m1062010255(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_0();
		NullCheck(L_1);
		VirtualAxis_set_Value_m2937739439(L_1, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		int32_t L_5 = __this->get_ControlMoveAxis_11();
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		VirtualAxis_t2705105962 * L_6 = __this->get__verticalAxis_8();
		PointerEventData_t3807901092 * L_7 = ___eventData0;
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = PointerEventData_get_delta_m1062010255(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_y_1();
		NullCheck(L_6);
		VirtualAxis_set_Value_m2937739439(L_6, L_9, /*hidden argument*/NULL);
	}

IL_004c:
	{
		int32_t L_10 = Time_get_renderedFrameCount_m3445787045(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__lastDragFrameNumber_9(L_10);
		return;
	}
}
// System.Void CnControls.Touchpad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnPointerUp_m120515639 (Touchpad_t4056981531 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		__this->set__isCurrentlyTweaking_10((bool)0);
		bool L_0 = __this->get_PreserveInertia_5();
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		VirtualAxis_t2705105962 * L_1 = __this->get__horizintalAxis_7();
		NullCheck(L_1);
		VirtualAxis_set_Value_m2937739439(L_1, (0.0f), /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_2 = __this->get__verticalAxis_8();
		NullCheck(L_2);
		VirtualAxis_set_Value_m2937739439(L_2, (0.0f), /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void CnControls.Touchpad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnPointerDown_m1038875147 (Touchpad_t4056981531 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	{
		__this->set__isCurrentlyTweaking_10((bool)1);
		PointerEventData_t3807901092 * L_0 = ___eventData0;
		VirtActionInvoker1< PointerEventData_t3807901092 * >::Invoke(7 /* System.Void CnControls.Touchpad::OnDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_0);
		return;
	}
}
// System.Void CnControls.Touchpad::Update()
extern "C"  void Touchpad_Update_m753503222 (Touchpad_t4056981531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Touchpad_Update_m753503222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__isCurrentlyTweaking_10();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = __this->get__lastDragFrameNumber_9();
		int32_t L_2 = Time_get_renderedFrameCount_m3445787045(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)2)))))
		{
			goto IL_003d;
		}
	}
	{
		VirtualAxis_t2705105962 * L_3 = __this->get__horizintalAxis_7();
		NullCheck(L_3);
		VirtualAxis_set_Value_m2937739439(L_3, (0.0f), /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_4 = __this->get__verticalAxis_8();
		NullCheck(L_4);
		VirtualAxis_set_Value_m2937739439(L_4, (0.0f), /*hidden argument*/NULL);
	}

IL_003d:
	{
		bool L_5 = __this->get_PreserveInertia_5();
		if (!L_5)
		{
			goto IL_00ab;
		}
	}
	{
		bool L_6 = __this->get__isCurrentlyTweaking_10();
		if (L_6)
		{
			goto IL_00ab;
		}
	}
	{
		VirtualAxis_t2705105962 * L_7 = __this->get__horizintalAxis_7();
		VirtualAxis_t2705105962 * L_8 = __this->get__horizintalAxis_7();
		NullCheck(L_8);
		float L_9 = VirtualAxis_get_Value_m1618256004(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_Friction_6();
		float L_11 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_9, (0.0f), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtualAxis_set_Value_m2937739439(L_7, L_12, /*hidden argument*/NULL);
		VirtualAxis_t2705105962 * L_13 = __this->get__verticalAxis_8();
		VirtualAxis_t2705105962 * L_14 = __this->get__verticalAxis_8();
		NullCheck(L_14);
		float L_15 = VirtualAxis_get_Value_m1618256004(L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_Friction_6();
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_15, (0.0f), ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtualAxis_set_Value_m2937739439(L_13, L_18, /*hidden argument*/NULL);
	}

IL_00ab:
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
// System.Void CnControls.VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m2706333303 (VirtualAxis_t2705105962 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualAxis_set_Name_m3020559976(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String CnControls.VirtualAxis::get_Name()
extern "C"  String_t* VirtualAxis_get_Name_m3580586152 (VirtualAxis_t2705105962 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void CnControls.VirtualAxis::set_Name(System.String)
extern "C"  void VirtualAxis_set_Name_m3020559976 (VirtualAxis_t2705105962 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single CnControls.VirtualAxis::get_Value()
extern "C"  float VirtualAxis_get_Value_m1618256004 (VirtualAxis_t2705105962 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CValueU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void CnControls.VirtualAxis::set_Value(System.Single)
extern "C"  void VirtualAxis_set_Value_m2937739439 (VirtualAxis_t2705105962 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
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
// System.Void CnControls.VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m3613420199 (VirtualButton_t1897244999 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		__this->set__lastPressedFrame_2((-1));
		__this->set__lastReleasedFrame_3((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualButton_set_Name_m3231462351(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String CnControls.VirtualButton::get_Name()
extern "C"  String_t* VirtualButton_get_Name_m1486646029 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void CnControls.VirtualButton::set_Name(System.String)
extern "C"  void VirtualButton_set_Name_m3231462351 (VirtualButton_t1897244999 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean CnControls.VirtualButton::get_IsPressed()
extern "C"  bool VirtualButton_get_IsPressed_m2180001186 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsPressedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void CnControls.VirtualButton::set_IsPressed(System.Boolean)
extern "C"  void VirtualButton_set_IsPressed_m3659342507 (VirtualButton_t1897244999 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsPressedU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void CnControls.VirtualButton::Press()
extern "C"  void VirtualButton_Press_m102003541 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtualButton_get_IsPressed_m2180001186(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		VirtualButton_set_IsPressed_m3659342507(__this, (bool)1, /*hidden argument*/NULL);
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__lastPressedFrame_2(L_1);
		return;
	}
}
// System.Void CnControls.VirtualButton::Release()
extern "C"  void VirtualButton_Release_m1006480204 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method)
{
	{
		VirtualButton_set_IsPressed_m3659342507(__this, (bool)0, /*hidden argument*/NULL);
		int32_t L_0 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__lastReleasedFrame_3(L_0);
		return;
	}
}
// System.Boolean CnControls.VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m3068570859 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtualButton_get_IsPressed_m2180001186(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean CnControls.VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m2997105053 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get__lastPressedFrame_2();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->get__lastPressedFrame_2();
		int32_t L_2 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) == ((int32_t)(-1)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean CnControls.VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m3309573997 (VirtualButton_t1897244999 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get__lastReleasedFrame_3();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->get__lastReleasedFrame_3();
		int32_t L_2 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
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
// System.Void CommonOnScreenControl::.ctor()
extern "C"  void CommonOnScreenControl__ctor_m3194887696 (CommonOnScreenControl_t421185803 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void CustomJoystick.FourWayController::.ctor()
extern "C"  void FourWayController__ctor_m1442805656 (FourWayController_t2275257414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FourWayController__ctor_m1442805656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3U5BU5D_t1718750761* L_0 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_1;
		Vector3U5BU5D_t1718750761* L_2 = L_0;
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_3;
		Vector3U5BU5D_t1718750761* L_4 = L_2;
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_5;
		Vector3U5BU5D_t1718750761* L_6 = L_4;
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_7;
		__this->set_directionalVectors_2(L_6);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomJoystick.FourWayController::Awake()
extern "C"  void FourWayController_Awake_m1217060667 (FourWayController_t2275257414 * __this, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		__this->set__mainCameraTransform_3(L_1);
		return;
	}
}
// System.Void CustomJoystick.FourWayController::Update()
extern "C"  void FourWayController_Update_m2218027012 (FourWayController_t2275257414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FourWayController_Update_m2218027012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		float L_0 = CnInputManager_GetAxis_m3740099655(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_1 = CnInputManager_GetAxis_m3740099655(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((&V_0), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		float L_2 = Vector3_get_sqrMagnitude_m1474274574((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)(1.0E-05f)))))
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		Vector3U5BU5D_t1718750761* L_3 = __this->get_directionalVectors_2();
		NullCheck(L_3);
		V_1 = (*(Vector3_t3722313464 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		Vector3_t3722313464  L_4 = V_0;
		Vector3_t3722313464  L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_6 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		V_3 = 1;
		goto IL_008d;
	}

IL_0053:
	{
		Vector3_t3722313464  L_7 = V_0;
		Vector3U5BU5D_t1718750761* L_8 = __this->get_directionalVectors_2();
		int32_t L_9 = V_3;
		NullCheck(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_10 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_7, (*(Vector3_t3722313464 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))), /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = V_4;
		float L_12 = V_2;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_13 = __this->get_directionalVectors_2();
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_1 = (*(Vector3_t3722313464 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))));
		float L_15 = V_4;
		V_2 = L_15;
	}

IL_0089:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_17 = V_3;
		Vector3U5BU5D_t1718750761* L_18 = __this->get_directionalVectors_2();
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0053;
		}
	}
	{
		Transform_t3600365921 * L_19 = __this->get__mainCameraTransform_3();
		Vector3_t3722313464  L_20 = V_1;
		NullCheck(L_19);
		Vector3_t3722313464  L_21 = Transform_InverseTransformDirection_m3843238577(L_19, L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		(&V_5)->set_y_2((0.0f));
		Vector3_Normalize_m914904454((&V_5), /*hidden argument*/NULL);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = L_22;
		NullCheck(L_23);
		Vector3_t3722313464  L_24 = Transform_get_position_m36019626(L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = V_5;
		float L_26 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_27 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m3387557959(L_23, L_28, /*hidden argument*/NULL);
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
// System.Void Examples.Scenes.TouchpadCamera.RotateCamera::.ctor()
extern "C"  void RotateCamera__ctor_m970005246 (RotateCamera_t2021658767 * __this, const RuntimeMethod* method)
{
	{
		__this->set_RotationSpeed_2((15.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Examples.Scenes.TouchpadCamera.RotateCamera::Update()
extern "C"  void RotateCamera_Update_m3593010096 (RotateCamera_t2021658767 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotateCamera_Update_m3593010096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = CnInputManager_GetAxis_m3740099655(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t3600365921 * L_1 = __this->get_OriginTransform_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = V_0;
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = __this->get_RotationSpeed_2();
		NullCheck(L_1);
		Transform_Rotate_m1749346957(L_1, L_2, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)), /*hidden argument*/NULL);
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
// System.Void Examples.Scenes.TouchpadCamera.RotationConstraint::.ctor()
extern "C"  void RotationConstraint__ctor_m3510911235 (RotationConstraint_t62602506 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Min_2((-15.0f));
		__this->set_Max_3((15.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Examples.Scenes.TouchpadCamera.RotationConstraint::Awake()
extern "C"  void RotationConstraint_Awake_m4024623427 (RotationConstraint_t62602506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotationConstraint_Awake_m4024623427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set__transformCache_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__rotateAround_7(L_1);
		Transform_t3600365921 * L_2 = __this->get__transformCache_4();
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_localRotation_m3487911431(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t3722313464  L_4 = Quaternion_get_eulerAngles_m3425202016((&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Vector3_get_Item_m668685504((&V_2), 0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = __this->get__rotateAround_7();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_7 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Quaternion_t2301928331  L_8 = V_0;
		float L_9 = __this->get_Min_2();
		Vector3_t3722313464  L_10 = __this->get__rotateAround_7();
		Quaternion_t2301928331  L_11 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_12 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		__this->set__minQuaternion_5(L_12);
		Quaternion_t2301928331  L_13 = V_0;
		float L_14 = __this->get_Max_3();
		Vector3_t3722313464  L_15 = __this->get__rotateAround_7();
		Quaternion_t2301928331  L_16 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_17 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		__this->set__maxQuaternion_6(L_17);
		float L_18 = __this->get_Max_3();
		float L_19 = __this->get_Min_2();
		__this->set__range_8(((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)));
		return;
	}
}
// System.Void Examples.Scenes.TouchpadCamera.RotationConstraint::LateUpdate()
extern "C"  void RotationConstraint_LateUpdate_m2469188857 (RotationConstraint_t62602506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RotationConstraint_LateUpdate_m2469188857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Transform_t3600365921 * L_0 = __this->get__transformCache_4();
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = Transform_get_localRotation_m3487911431(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3722313464  L_2 = Quaternion_get_eulerAngles_m3425202016((&V_0), /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = Vector3_get_Item_m668685504((&V_2), 0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get__rotateAround_7();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_5 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Quaternion_t2301928331  L_6 = V_1;
		Quaternion_t2301928331  L_7 = __this->get__minQuaternion_5();
		float L_8 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Quaternion_t2301928331  L_9 = V_1;
		Quaternion_t2301928331  L_10 = __this->get__maxQuaternion_6();
		float L_11 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = V_3;
		float L_13 = __this->get__range_8();
		if ((!(((float)L_12) <= ((float)L_13))))
		{
			goto IL_005d;
		}
	}
	{
		float L_14 = V_4;
		float L_15 = __this->get__range_8();
		if ((!(((float)L_14) <= ((float)L_15))))
		{
			goto IL_005d;
		}
	}
	{
		return;
	}

IL_005d:
	{
		Vector3_t3722313464  L_16 = Quaternion_get_eulerAngles_m3425202016((&V_0), /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = V_3;
		float L_18 = V_4;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_0090;
		}
	}
	{
		Quaternion_t2301928331 * L_19 = __this->get_address_of__maxQuaternion_6();
		Vector3_t3722313464  L_20 = Quaternion_get_eulerAngles_m3425202016(L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		float L_21 = Vector3_get_Item_m668685504((&V_6), 0, /*hidden argument*/NULL);
		Vector3_set_Item_m1772472431((&V_5), 0, L_21, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_0090:
	{
		Quaternion_t2301928331 * L_22 = __this->get_address_of__minQuaternion_5();
		Vector3_t3722313464  L_23 = Quaternion_get_eulerAngles_m3425202016(L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		float L_24 = Vector3_get_Item_m668685504((&V_7), 0, /*hidden argument*/NULL);
		Vector3_set_Item_m1772472431((&V_5), 0, L_24, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		Transform_t3600365921 * L_25 = __this->get__transformCache_4();
		Vector3_t3722313464  L_26 = V_5;
		NullCheck(L_25);
		Transform_set_localEulerAngles_m4202601546(L_25, L_26, /*hidden argument*/NULL);
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
// System.Void ThidPersonExampleController::.ctor()
extern "C"  void ThidPersonExampleController__ctor_m2664951872 (ThidPersonExampleController_t267694585 * __this, const RuntimeMethod* method)
{
	{
		__this->set_MovementSpeed_2((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThidPersonExampleController::OnEnable()
extern "C"  void ThidPersonExampleController_OnEnable_m2960848733 (ThidPersonExampleController_t267694585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThidPersonExampleController_OnEnable_m2960848733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_GetComponent_TisTransform_t3600365921_m1200784320(L_0, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set__mainCameraTransform_3(L_1);
		CharacterController_t1138636865 * L_2 = Component_GetComponent_TisCharacterController_t1138636865_m3643263329(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t1138636865_m3643263329_RuntimeMethod_var);
		__this->set__characterController_5(L_2);
		Transform_t3600365921 * L_3 = Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set__transform_4(L_3);
		return;
	}
}
// System.Void ThidPersonExampleController::Update()
extern "C"  void ThidPersonExampleController_Update_m2867403993 (ThidPersonExampleController_t267694585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThidPersonExampleController_Update_m2867403993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = CnInputManager_GetAxis_m3740099655(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_1 = CnInputManager_GetAxis_m3740099655(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		Vector3__ctor_m1719387948((&V_0), L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = Vector3_get_sqrMagnitude_m1474274574((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_3) > ((float)(0.001f)))))
		{
			goto IL_005e;
		}
	}
	{
		Transform_t3600365921 * L_4 = __this->get__mainCameraTransform_3();
		Vector3_t3722313464  L_5 = V_0;
		NullCheck(L_4);
		Vector3_t3722313464  L_6 = Transform_TransformDirection_m3784028109(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		(&V_1)->set_y_2((0.0f));
		Vector3_Normalize_m914904454((&V_1), /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = __this->get__transform_4();
		Vector3_t3722313464  L_8 = V_1;
		NullCheck(L_7);
		Transform_set_forward_m1840797198(L_7, L_8, /*hidden argument*/NULL);
	}

IL_005e:
	{
		Vector3_t3722313464  L_9 = V_1;
		Vector3_t3722313464  L_10 = Physics_get_gravity_m2660066594(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		CharacterController_t1138636865 * L_12 = __this->get__characterController_5();
		Vector3_t3722313464  L_13 = V_1;
		float L_14 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		CharacterController_Move_m1547317252(L_12, L_15, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets._2D.Camera2DFollow::.ctor()
extern "C"  void Camera2DFollow__ctor_m1109142833 (Camera2DFollow_t3335230098 * __this, const RuntimeMethod* method)
{
	{
		__this->set_damping_3((1.0f));
		__this->set_lookAheadFactor_4((3.0f));
		__this->set_lookAheadReturnSpeed_5((0.5f));
		__this->set_lookAheadMoveThreshold_6((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Start()
extern "C"  void Camera2DFollow_Start_m622883919 (Camera2DFollow_t3335230098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera2DFollow_Start_m622883919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		__this->set_m_LastTargetPosition_8(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = __this->get_target_2();
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_z_3();
		__this->set_m_OffsetZ_7(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_m786917804(L_8, (Transform_t3600365921 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Camera2DFollow::Update()
extern "C"  void Camera2DFollow_Update_m1162929075 (Camera2DFollow_t3335230098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera2DFollow_Update_m1162929075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_m_LastTargetPosition_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_x_1();
		V_0 = L_4;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = fabsf(L_5);
		float L_7 = __this->get_lookAheadMoveThreshold_6();
		V_2 = (bool)((((float)L_6) > ((float)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		float L_9 = __this->get_lookAheadFactor_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Sign_m3457838305(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		__this->set_m_LookAheadPos_10(L_14);
		goto IL_007c;
	}

IL_005a:
	{
		Vector3_t3722313464  L_15 = __this->get_m_LookAheadPos_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = __this->get_lookAheadReturnSpeed_5();
		Vector3_t3722313464  L_19 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_15, L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), /*hidden argument*/NULL);
		__this->set_m_LookAheadPos_10(L_19);
	}

IL_007c:
	{
		Transform_t3600365921 * L_20 = __this->get_target_2();
		NullCheck(L_20);
		Vector3_t3722313464  L_21 = Transform_get_position_m36019626(L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = __this->get_m_LookAheadPos_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = __this->get_m_OffsetZ_7();
		Vector3_t3722313464  L_26 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t3722313464  L_29 = Transform_get_position_m36019626(L_28, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = V_3;
		Vector3_t3722313464 * L_31 = __this->get_address_of_m_CurrentVelocity_9();
		float L_32 = __this->get_damping_3();
		Vector3_t3722313464  L_33 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = V_4;
		NullCheck(L_34);
		Transform_set_position_m3387557959(L_34, L_35, /*hidden argument*/NULL);
		Transform_t3600365921 * L_36 = __this->get_target_2();
		NullCheck(L_36);
		Vector3_t3722313464  L_37 = Transform_get_position_m36019626(L_36, /*hidden argument*/NULL);
		__this->set_m_LastTargetPosition_8(L_37);
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
// System.Void UnityStandardAssets._2D.Restarter::.ctor()
extern "C"  void Restarter__ctor_m464080376 (Restarter_t269523250 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets._2D.Restarter::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Restarter_OnTriggerEnter2D_m388320205 (Restarter_t269523250 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Restarter_OnTriggerEnter2D_m388320205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Scene_t2348375561  L_3 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = Scene_get_name_m622963475((&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0027:
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
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
extern "C"  void AbstractTargetFollower__ctor_m3114134843 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_AutoTargetPlayer_3((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::Start()
extern "C"  void AbstractTargetFollower_Start_m3187027043 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractTargetFollower_Start_m3187027043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_AutoTargetPlayer_3();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		AbstractTargetFollower_FindAndTargetPlayer_m654483193(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		Transform_t3600365921 * L_1 = __this->get_m_Target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		Transform_t3600365921 * L_3 = __this->get_m_Target_2();
		NullCheck(L_3);
		Rigidbody_t3916780224 * L_4 = Component_GetComponent_TisRigidbody_t3916780224_m4049400462(L_3, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m4049400462_RuntimeMethod_var);
		__this->set_targetRigidbody_5(L_4);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FixedUpdate()
extern "C"  void AbstractTargetFollower_FixedUpdate_m2948633058 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractTargetFollower_FixedUpdate_m2948633058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_AutoTargetPlayer_3();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Transform_t3600365921 * L_1 = __this->get_m_Target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_m_Target_2();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m1767405923(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		AbstractTargetFollower_FindAndTargetPlayer_m654483193(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_6 = __this->get_m_UpdateType_4();
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::LateUpdate()
extern "C"  void AbstractTargetFollower_LateUpdate_m770262367 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractTargetFollower_LateUpdate_m770262367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_AutoTargetPlayer_3();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Transform_t3600365921 * L_1 = __this->get_m_Target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_m_Target_2();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m1767405923(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		AbstractTargetFollower_FindAndTargetPlayer_m654483193(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_6 = __this->get_m_UpdateType_4();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::ManualUpdate()
extern "C"  void AbstractTargetFollower_ManualUpdate_m3296222285 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractTargetFollower_ManualUpdate_m3296222285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_AutoTargetPlayer_3();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Transform_t3600365921 * L_1 = __this->get_m_Target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_m_Target_2();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = GameObject_get_activeSelf_m1767405923(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		AbstractTargetFollower_FindAndTargetPlayer_m654483193(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_6 = __this->get_m_UpdateType_4();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
extern "C"  void AbstractTargetFollower_FindAndTargetPlayer_m654483193 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractTargetFollower_FindAndTargetPlayer_m654483193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< Transform_t3600365921 * >::Invoke(6 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform) */, __this, L_4);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform)
extern "C"  void AbstractTargetFollower_SetTarget_m3941692674 (AbstractTargetFollower_t1919708159 * __this, Transform_t3600365921 * ___newTransform0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___newTransform0;
		__this->set_m_Target_2(L_0);
		return;
	}
}
// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::get_Target()
extern "C"  Transform_t3600365921 * AbstractTargetFollower_get_Target_m2242103391 (AbstractTargetFollower_t1919708159 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = __this->get_m_Target_2();
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
// System.Void UnityStandardAssets.Cameras.AutoCam::.ctor()
extern "C"  void AutoCam__ctor_m1453755247 (AutoCam_t137911967 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoCam__ctor_m1453755247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_MoveSpeed_9((3.0f));
		__this->set_m_TurnSpeed_10((1.0f));
		__this->set_m_RollSpeed_11((0.2f));
		__this->set_m_FollowTilt_13((bool)1);
		__this->set_m_SpinTurnLimit_14((90.0f));
		__this->set_m_TargetVelocityLowerLimit_15((4.0f));
		__this->set_m_SmoothTurnTime_16((0.2f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_RollUp_20(L_0);
		PivotBasedCameraRig__ctor_m2711623346(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AutoCam::FollowTarget(System.Single)
extern "C"  void AutoCam_FollowTarget_m2695955448 (AutoCam_t137911967 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoCam_FollowTarget_m2695955448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Quaternion_t2301928331  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float G_B13_0 = 0.0f;
	AutoCam_t137911967 * G_B24_0 = NULL;
	AutoCam_t137911967 * G_B23_0 = NULL;
	Vector3_t3722313464  G_B25_0;
	memset(&G_B25_0, 0, sizeof(G_B25_0));
	AutoCam_t137911967 * G_B25_1 = NULL;
	{
		float L_0 = ___deltaTime0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		Transform_t3600365921 * L_1 = ((AbstractTargetFollower_t1919708159 *)__this)->get_m_Target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		Transform_t3600365921 * L_3 = ((AbstractTargetFollower_t1919708159 *)__this)->get_m_Target_2();
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_forward_m747522392(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Transform_t3600365921 * L_5 = ((AbstractTargetFollower_t1919708159 *)__this)->get_m_Target_2();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_up_m3972993886(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = __this->get_m_FollowVelocity_12();
		if (!L_7)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_8 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b4;
		}
	}
	{
		Rigidbody_t3916780224 * L_9 = ((AbstractTargetFollower_t1919708159 *)__this)->get_targetRigidbody_5();
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Rigidbody_get_velocity_m2993632669(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = Vector3_get_magnitude_m27958459((&V_2), /*hidden argument*/NULL);
		float L_12 = __this->get_m_TargetVelocityLowerLimit_15();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0087;
		}
	}
	{
		Rigidbody_t3916780224 * L_13 = ((AbstractTargetFollower_t1919708159 *)__this)->get_targetRigidbody_5();
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Rigidbody_get_velocity_m2993632669(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		Vector3_t3722313464  L_15 = Vector3_get_normalized_m2454957984((&V_3), /*hidden argument*/NULL);
		V_0 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_008d;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_17;
	}

IL_008d:
	{
		float L_18 = __this->get_m_CurrentTurnAmount_18();
		float* L_19 = __this->get_address_of_m_TurnSpeedVelocityChange_19();
		float L_20 = __this->get_m_SmoothTurnTime_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_SmoothDamp_m3171073017(NULL /*static, unused*/, L_18, (1.0f), L_19, L_20, /*hidden argument*/NULL);
		__this->set_m_CurrentTurnAmount_18(L_21);
		goto IL_0178;
	}

IL_00b4:
	{
		float L_22 = (&V_0)->get_x_1();
		float L_23 = (&V_0)->get_z_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_24 = atan2f(L_22, L_23);
		V_4 = ((float)il2cpp_codegen_multiply((float)L_24, (float)(57.29578f)));
		float L_25 = __this->get_m_SpinTurnLimit_14();
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_0165;
		}
	}
	{
		float L_26 = __this->get_m_LastFlatAngle_17();
		float L_27 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_28 = Mathf_DeltaAngle_m1993880167(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		float L_29 = fabsf(L_28);
		float L_30 = ___deltaTime0;
		V_5 = ((float)((float)L_29/(float)L_30));
		float L_31 = __this->get_m_SpinTurnLimit_14();
		float L_32 = __this->get_m_SpinTurnLimit_14();
		float L_33 = V_5;
		float L_34 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, L_31, ((float)il2cpp_codegen_multiply((float)L_32, (float)(0.75f))), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		float L_35 = __this->get_m_CurrentTurnAmount_18();
		float L_36 = V_6;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_0127;
		}
	}
	{
		G_B13_0 = (0.1f);
		goto IL_012c;
	}

IL_0127:
	{
		G_B13_0 = (1.0f);
	}

IL_012c:
	{
		V_7 = G_B13_0;
		bool L_37 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0158;
		}
	}
	{
		float L_38 = __this->get_m_CurrentTurnAmount_18();
		float L_39 = V_6;
		float* L_40 = __this->get_address_of_m_TurnSpeedVelocityChange_19();
		float L_41 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_42 = Mathf_SmoothDamp_m3171073017(NULL /*static, unused*/, L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		__this->set_m_CurrentTurnAmount_18(L_42);
		goto IL_0160;
	}

IL_0158:
	{
		float L_43 = V_6;
		__this->set_m_CurrentTurnAmount_18(L_43);
	}

IL_0160:
	{
		goto IL_0170;
	}

IL_0165:
	{
		__this->set_m_CurrentTurnAmount_18((1.0f));
	}

IL_0170:
	{
		float L_44 = V_4;
		__this->set_m_LastFlatAngle_17(L_44);
	}

IL_0178:
	{
		Transform_t3600365921 * L_45 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t3722313464  L_47 = Transform_get_position_m36019626(L_46, /*hidden argument*/NULL);
		Transform_t3600365921 * L_48 = ((AbstractTargetFollower_t1919708159 *)__this)->get_m_Target_2();
		NullCheck(L_48);
		Vector3_t3722313464  L_49 = Transform_get_position_m36019626(L_48, /*hidden argument*/NULL);
		float L_50 = ___deltaTime0;
		float L_51 = __this->get_m_MoveSpeed_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_52 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_47, L_49, ((float)il2cpp_codegen_multiply((float)L_50, (float)L_51)), /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_position_m3387557959(L_45, L_52, /*hidden argument*/NULL);
		bool L_53 = __this->get_m_FollowTilt_13();
		if (L_53)
		{
			goto IL_01da;
		}
	}
	{
		(&V_0)->set_y_2((0.0f));
		float L_54 = Vector3_get_sqrMagnitude_m1474274574((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_54) < ((float)(1.401298E-45f)))))
		{
			goto IL_01da;
		}
	}
	{
		Transform_t3600365921 * L_55 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		Vector3_t3722313464  L_56 = Transform_get_forward_m747522392(L_55, /*hidden argument*/NULL);
		V_0 = L_56;
	}

IL_01da:
	{
		Vector3_t3722313464  L_57 = V_0;
		Vector3_t3722313464  L_58 = __this->get_m_RollUp_20();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_59 = Quaternion_LookRotation_m3197602968(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		V_8 = L_59;
		float L_60 = __this->get_m_RollSpeed_11();
		G_B23_0 = __this;
		if ((!(((float)L_60) > ((float)(0.0f)))))
		{
			G_B24_0 = __this;
			goto IL_0212;
		}
	}
	{
		Vector3_t3722313464  L_61 = __this->get_m_RollUp_20();
		Vector3_t3722313464  L_62 = V_1;
		float L_63 = __this->get_m_RollSpeed_11();
		float L_64 = ___deltaTime0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_65 = Vector3_Slerp_m802114822(NULL /*static, unused*/, L_61, L_62, ((float)il2cpp_codegen_multiply((float)L_63, (float)L_64)), /*hidden argument*/NULL);
		G_B25_0 = L_65;
		G_B25_1 = G_B23_0;
		goto IL_0217;
	}

IL_0212:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_66 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B25_0 = L_66;
		G_B25_1 = G_B24_0;
	}

IL_0217:
	{
		NullCheck(G_B25_1);
		G_B25_1->set_m_RollUp_20(G_B25_0);
		Transform_t3600365921 * L_67 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_68 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		Quaternion_t2301928331  L_69 = Transform_get_rotation_m3502953881(L_68, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_70 = V_8;
		float L_71 = __this->get_m_TurnSpeed_10();
		float L_72 = __this->get_m_CurrentTurnAmount_18();
		float L_73 = ___deltaTime0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_74 = Quaternion_Lerp_m1238806789(NULL /*static, unused*/, L_69, L_70, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_71, (float)L_72)), (float)L_73)), /*hidden argument*/NULL);
		NullCheck(L_67);
		Transform_set_rotation_m3524318132(L_67, L_74, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
extern "C"  void PivotBasedCameraRig__ctor_m2711623346 (PivotBasedCameraRig_t3786953582 * __this, const RuntimeMethod* method)
{
	{
		AbstractTargetFollower__ctor_m3114134843(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
extern "C"  void PivotBasedCameraRig_Awake_m3014846370 (PivotBasedCameraRig_t3786953582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PivotBasedCameraRig_Awake_m3014846370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Component_GetComponentInChildren_TisCamera_t4157153871_m3232034033(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_t4157153871_m3232034033_RuntimeMethod_var);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		__this->set_m_Cam_6(L_1);
		Transform_t3600365921 * L_2 = __this->get_m_Cam_6();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_get_parent_m835071599(L_2, /*hidden argument*/NULL);
		__this->set_m_Pivot_7(L_3);
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
// System.Void UnityStandardAssets.Copy._2D.Platformer2DUserControl::.ctor()
extern "C"  void Platformer2DUserControl__ctor_m3375467340 (Platformer2DUserControl_t2984076696 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Copy._2D.Platformer2DUserControl::Awake()
extern "C"  void Platformer2DUserControl_Awake_m2059030511 (Platformer2DUserControl_t2984076696 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platformer2DUserControl_Awake_m2059030511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformerCharacter2D_t4151009609 * L_0 = Component_GetComponent_TisPlatformerCharacter2D_t4151009609_m81340503(__this, /*hidden argument*/Component_GetComponent_TisPlatformerCharacter2D_t4151009609_m81340503_RuntimeMethod_var);
		__this->set_m_Character_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Copy._2D.Platformer2DUserControl::Update()
extern "C"  void Platformer2DUserControl_Update_m1575461566 (Platformer2DUserControl_t2984076696 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platformer2DUserControl_Update_m1575461566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_Jump_3();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = CnInputManager_GetAxis_m3740099655(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		__this->set_m_Jump_3((bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Copy._2D.Platformer2DUserControl::FixedUpdate()
extern "C"  void Platformer2DUserControl_FixedUpdate_m1374030358 (Platformer2DUserControl_t2984076696 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platformer2DUserControl_FixedUpdate_m1374030358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = CnInputManager_GetAxis_m3740099655(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		PlatformerCharacter2D_t4151009609 * L_1 = __this->get_m_Character_2();
		float L_2 = V_0;
		bool L_3 = __this->get_m_Jump_3();
		NullCheck(L_1);
		PlatformerCharacter2D_Move_m4107252912(L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_m_Jump_3((bool)0);
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
// System.Void UnityStandardAssets.Copy._2D.PlatformerCharacter2D::.ctor()
extern "C"  void PlatformerCharacter2D__ctor_m299278061 (PlatformerCharacter2D_t4151009609 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_MaxSpeed_2((10.0f));
		__this->set_m_JumpForce_3((400.0f));
		__this->set_m_FacingRight_11((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Copy._2D.PlatformerCharacter2D::Awake()
extern "C"  void PlatformerCharacter2D_Awake_m1454527382 (PlatformerCharacter2D_t4151009609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformerCharacter2D_Awake_m1454527382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_Find_m1729760951(L_0, _stringLiteral1396832867, /*hidden argument*/NULL);
		__this->set_m_GroundCheck_6(L_1);
		Animator_t434523843 * L_2 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_m_Anim_9(L_2);
		Rigidbody2D_t939494601 * L_3 = Component_GetComponent_TisRigidbody2D_t939494601_m2731142064(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m2731142064_RuntimeMethod_var);
		__this->set_m_Rigidbody2D_10(L_3);
		return;
	}
}
// System.Void UnityStandardAssets.Copy._2D.PlatformerCharacter2D::FixedUpdate()
extern "C"  void PlatformerCharacter2D_FixedUpdate_m1238418411 (PlatformerCharacter2D_t4151009609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformerCharacter2D_FixedUpdate_m1238418411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t1693969295* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__this->set_m_Grounded_8((bool)0);
		Transform_t3600365921 * L_0 = __this->get_m_GroundCheck_6();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_3 = __this->get_m_WhatIsGround_5();
		int32_t L_4 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t1693969295* L_5 = Physics2D_OverlapCircleAll_m638049410(NULL /*static, unused*/, L_2, (0.2f), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0057;
	}

IL_0034:
	{
		Collider2DU5BU5D_t1693969295* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Collider2D_t2806799626 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_m_Grounded_8((bool)1);
	}

IL_0053:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_14 = V_1;
		Collider2DU5BU5D_t1693969295* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		Animator_t434523843 * L_16 = __this->get_m_Anim_9();
		bool L_17 = __this->get_m_Grounded_8();
		NullCheck(L_16);
		Animator_SetBool_m234840832(L_16, _stringLiteral3128803744, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Copy._2D.PlatformerCharacter2D::Move(System.Single,System.Boolean)
extern "C"  void PlatformerCharacter2D_Move_m4107252912 (PlatformerCharacter2D_t4151009609 * __this, float ___move0, bool ___jump1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformerCharacter2D_Move_m4107252912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_Grounded_8();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->get_m_AirControl_4();
		if (!L_1)
		{
			goto IL_0094;
		}
	}

IL_0016:
	{
		Animator_t434523843 * L_2 = __this->get_m_Anim_9();
		float L_3 = ___move0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = fabsf(L_3);
		NullCheck(L_2);
		Animator_SetFloat_m1701463607(L_2, _stringLiteral3556802456, L_4, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_5 = __this->get_m_Rigidbody2D_10();
		float L_6 = ___move0;
		float L_7 = __this->get_m_MaxSpeed_2();
		Rigidbody2D_t939494601 * L_8 = __this->get_m_Rigidbody2D_10();
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = Rigidbody2D_get_velocity_m366589732(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = (&V_0)->get_y_1();
		Vector2_t2156229523  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector2__ctor_m3970636864((&L_11), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_set_velocity_m2898400508(L_5, L_11, /*hidden argument*/NULL);
		float L_12 = ___move0;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		bool L_13 = __this->get_m_FacingRight_11();
		if (L_13)
		{
			goto IL_0078;
		}
	}
	{
		PlatformerCharacter2D_Flip_m3658360162(__this, /*hidden argument*/NULL);
		goto IL_0094;
	}

IL_0078:
	{
		float L_14 = ___move0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		bool L_15 = __this->get_m_FacingRight_11();
		if (!L_15)
		{
			goto IL_0094;
		}
	}
	{
		PlatformerCharacter2D_Flip_m3658360162(__this, /*hidden argument*/NULL);
	}

IL_0094:
	{
		bool L_16 = __this->get_m_Grounded_8();
		if (!L_16)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_17 = ___jump1;
		if (!L_17)
		{
			goto IL_00ed;
		}
	}
	{
		Animator_t434523843 * L_18 = __this->get_m_Anim_9();
		NullCheck(L_18);
		bool L_19 = Animator_GetBool_m2865822416(L_18, _stringLiteral3128803744, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ed;
		}
	}
	{
		__this->set_m_Grounded_8((bool)0);
		Animator_t434523843 * L_20 = __this->get_m_Anim_9();
		NullCheck(L_20);
		Animator_SetBool_m234840832(L_20, _stringLiteral3128803744, (bool)0, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_21 = __this->get_m_Rigidbody2D_10();
		float L_22 = __this->get_m_JumpForce_3();
		Vector2_t2156229523  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector2__ctor_m3970636864((&L_23), (0.0f), L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody2D_AddForce_m1113499586(L_21, L_23, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Copy._2D.PlatformerCharacter2D::Flip()
extern "C"  void PlatformerCharacter2D_Flip_m3658360162 (PlatformerCharacter2D_t4151009609 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_FacingRight_11();
		__this->set_m_FacingRight_11((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localScale_m129152068(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464 * L_3 = (&V_0);
		float L_4 = L_3->get_x_1();
		L_3->set_x_1(((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_0;
		NullCheck(L_5);
		Transform_set_localScale_m3053443106(L_5, L_6, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
extern "C"  void AxisTouchButton__ctor_m999535707 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton__ctor_m999535707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_axisName_2(_stringLiteral1828639942);
		__this->set_axisValue_3((1.0f));
		__this->set_responseSpeed_4((3.0f));
		__this->set_returnToCentreSpeed_5((3.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
extern "C"  void AxisTouchButton_OnEnable_m442372918 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnEnable_m442372918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_axisName_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m365322552(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = __this->get_axisName_2();
		VirtualAxis_t4087348596 * L_3 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_Axis_7(L_3);
		VirtualAxis_t4087348596 * L_4 = __this->get_m_Axis_7();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0031:
	{
		String_t* L_5 = __this->get_axisName_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualAxis_t4087348596 * L_6 = CrossPlatformInputManager_VirtualAxisReference_m1463805196(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_m_Axis_7(L_6);
	}

IL_0042:
	{
		AxisTouchButton_FindPairedButton_m3895318073(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
extern "C"  void AxisTouchButton_FindPairedButton_m3895318073 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_FindPairedButton_m3895318073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_t4256519256* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_t3522881333_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_2 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((AxisTouchButtonU5BU5D_t4256519256*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_t4256519256_il2cpp_TypeInfo_var));
		AxisTouchButtonU5BU5D_t4256519256* L_3 = V_0;
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 0;
		goto IL_0055;
	}

IL_0022:
	{
		AxisTouchButtonU5BU5D_t4256519256* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AxisTouchButton_t3522881333 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->get_axisName_2();
		String_t* L_9 = __this->get_axisName_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t4256519256* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AxisTouchButton_t3522881333 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_14, __this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0051;
		}
	}
	{
		AxisTouchButtonU5BU5D_t4256519256* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AxisTouchButton_t3522881333 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_m_PairedWith_6(L_19);
	}

IL_0051:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_t4256519256* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0022;
		}
	}

IL_005e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
extern "C"  void AxisTouchButton_OnDisable_m2583211833 (AxisTouchButton_t3522881333 * __this, const RuntimeMethod* method)
{
	{
		VirtualAxis_t4087348596 * L_0 = __this->get_m_Axis_7();
		NullCheck(L_0);
		VirtualAxis_Remove_m3159277484(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void AxisTouchButton_OnPointerDown_m2871318548 (AxisTouchButton_t3522881333 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnPointerDown_m2871318548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AxisTouchButton_t3522881333 * L_0 = __this->get_m_PairedWith_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AxisTouchButton_FindPairedButton_m3895318073(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		VirtualAxis_t4087348596 * L_2 = __this->get_m_Axis_7();
		VirtualAxis_t4087348596 * L_3 = __this->get_m_Axis_7();
		NullCheck(L_3);
		float L_4 = VirtualAxis_get_GetValue_m337417923(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_axisValue_3();
		float L_6 = __this->get_responseSpeed_4();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = Mathf_MoveTowards_m2357711114(NULL /*static, unused*/, L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m1043809197(L_2, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void AxisTouchButton_OnPointerUp_m3116908619 (AxisTouchButton_t3522881333 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AxisTouchButton_OnPointerUp_m3116908619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualAxis_t4087348596 * L_0 = __this->get_m_Axis_7();
		VirtualAxis_t4087348596 * L_1 = __this->get_m_Axis_7();
		NullCheck(L_1);
		float L_2 = VirtualAxis_get_GetValue_m337417923(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_responseSpeed_4();
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = Mathf_MoveTowards_m2357711114(NULL /*static, unused*/, L_2, (0.0f), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m1043809197(L_0, L_5, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
extern "C"  void ButtonHandler__ctor_m64354371 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
extern "C"  void ButtonHandler_OnEnable_m2044794226 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
extern "C"  void ButtonHandler_SetDownState_m1604948932 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetDownState_m1604948932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m1980143873(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
extern "C"  void ButtonHandler_SetUpState_m1609465475 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetUpState_m1609465475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m3204959434(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
extern "C"  void ButtonHandler_SetAxisPositiveState_m3352739966 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisPositiveState_m3352739966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_m3893292619(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
extern "C"  void ButtonHandler_SetAxisNeutralState_m3530688688 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisNeutralState_m3530688688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_m3139545681(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
extern "C"  void ButtonHandler_SetAxisNegativeState_m513810363 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonHandler_SetAxisNegativeState_m513810363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_m1070090094(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
extern "C"  void ButtonHandler_Update_m1804842525 (ButtonHandler_t823762219 * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
extern "C"  void CrossPlatformInputManager__cctor_m342528670 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager__cctor_m342528670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileInput_t2025745297 * L_0 = (MobileInput_t2025745297 *)il2cpp_codegen_object_new(MobileInput_t2025745297_il2cpp_TypeInfo_var);
		MobileInput__ctor_m1458281675(L_0, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_s_TouchInput_1(L_0);
		StandaloneInput_t1343950252 * L_1 = (StandaloneInput_t1343950252 *)il2cpp_codegen_object_new(StandaloneInput_t1343950252_il2cpp_TypeInfo_var);
		StandaloneInput__ctor_m1221073179(L_1, /*hidden argument*/NULL);
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_s_HardwareInput_2(L_1);
		VirtualInput_t2597455733 * L_2 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
extern "C"  void CrossPlatformInputManager_SwitchActiveInputMethod_m1628095800 (RuntimeObject * __this /* static, unused */, int32_t ___activeInputMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SwitchActiveInputMethod_m1628095800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0030;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_2 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_s_HardwareInput_2();
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_activeInput_0(L_2);
		goto IL_0030;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_3 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_s_TouchInput_1();
		((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->set_activeInput_0(L_3);
		goto IL_0030;
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
extern "C"  bool CrossPlatformInputManager_AxisExists_m365322552 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_AxisExists_m365322552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtualInput_AxisExists_m20278768(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
extern "C"  bool CrossPlatformInputManager_ButtonExists_m3745088456 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_ButtonExists_m3745088456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtualInput_ButtonExists_m3875122617(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void CrossPlatformInputManager_RegisterVirtualAxis_m3479801628 (RuntimeObject * __this /* static, unused */, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualAxis_m3479801628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualAxis_t4087348596 * L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m2884529091(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void CrossPlatformInputManager_RegisterVirtualButton_m1830161946 (RuntimeObject * __this /* static, unused */, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_RegisterVirtualButton_m1830161946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		VirtualButton_t2756566330 * L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m3959785200(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_2 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m2956537171(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
extern "C"  void CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_m3129182690(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t4087348596 * CrossPlatformInputManager_VirtualAxisReference_m1463805196 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_VirtualAxisReference_m1463805196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_t4087348596 * L_2 = VirtualInput_VirtualAxisReference_m2155778560(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m693277759 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m693277759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m4082502259(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
extern "C"  float CrossPlatformInputManager_GetAxisRaw_m3797907116 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxisRaw_m3797907116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		float L_1 = CrossPlatformInputManager_GetAxis_m4082502259(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CrossPlatformInputManager_GetAxis_m4082502259 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetAxis_m4082502259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3 = VirtFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m241794690 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButton_m241794690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonDown_m1689635996 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonDown_m1689635996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonUp_m100471868 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_GetButtonUp_m100471868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonDown_m1980143873 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonDown_m1980143873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
extern "C"  void CrossPlatformInputManager_SetButtonUp_m3204959434 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetButtonUp_m3204959434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisPositive_m3893292619 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisPositive_m3893292619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisNegative_m1070090094 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisNegative_m1070090094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
extern "C"  void CrossPlatformInputManager_SetAxisZero_m3139545681 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxisZero_m3139545681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
extern "C"  void CrossPlatformInputManager_SetAxis_m1144576044 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetAxis_m1144576044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
extern "C"  Vector3_t3722313464  CrossPlatformInputManager_get_mousePosition_m2355398278 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_get_mousePosition_m2355398278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m1438630863(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionY_m427631433 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionY_m427631433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m110408526(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
extern "C"  void CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		VirtualInput_t2597455733 * L_0 = ((CrossPlatformInputManager_t191731427_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var))->get_activeInput_0();
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m414912069(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C"  void VirtualAxis__ctor_m1869943658 (VirtualAxis_t4087348596 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_m2412437643(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C"  void VirtualAxis__ctor_m2412437643 (VirtualAxis_t4087348596 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_m1459829131(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m2896509700(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C"  String_t* VirtualAxis_get_name_m610059897 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C"  void VirtualAxis_set_name_m1459829131 (VirtualAxis_t4087348596 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C"  bool VirtualAxis_get_matchWithInputManager_m2059598452 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualAxis_set_matchWithInputManager_m2896509700 (VirtualAxis_t4087348596 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C"  void VirtualAxis_Remove_m3159277484 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualAxis_Remove_m3159277484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualAxis_get_name_m610059897(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C"  void VirtualAxis_Update_m1043809197 (VirtualAxis_t4087348596 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Value_1(L_0);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C"  float VirtualAxis_get_GetValue_m337417923 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern "C"  float VirtualAxis_get_GetValueRaw_m2713978768 (VirtualAxis_t4087348596 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Value_1();
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
extern "C"  void VirtualButton__ctor_m4196049871 (VirtualButton_t2756566330 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m1314603841(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
extern "C"  void VirtualButton__ctor_m1314603841 (VirtualButton_t2756566330 * __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method)
{
	{
		__this->set_m_LastPressedFrame_2(((int32_t)-5));
		__this->set_m_ReleasedFrame_3(((int32_t)-5));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		VirtualButton_set_name_m2909511825(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m3716809525(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
extern "C"  String_t* VirtualButton_get_name_m3473382228 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
extern "C"  void VirtualButton_set_name_m2909511825 (VirtualButton_t2756566330 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
extern "C"  bool VirtualButton_get_matchWithInputManager_m2472937772 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CmatchWithInputManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
extern "C"  void VirtualButton_set_matchWithInputManager_m3716809525 (VirtualButton_t2756566330 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CmatchWithInputManagerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
extern "C"  void VirtualButton_Pressed_m2977736877 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Pressed_4();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_m_Pressed_4((bool)1);
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_LastPressedFrame_2(L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
extern "C"  void VirtualButton_Released_m3633878926 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Pressed_4((bool)0);
		int32_t L_0 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_ReleasedFrame_3(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
extern "C"  void VirtualButton_Remove_m3337140985 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButton_Remove_m3337140985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtualButton_get_name_m3473382228(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m2844659319(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
extern "C"  bool VirtualButton_get_GetButton_m426677553 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Pressed_4();
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
extern "C"  bool VirtualButton_get_GetButtonDown_m2538225749 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_LastPressedFrame_2();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
extern "C"  bool VirtualButton_get_GetButtonUp_m3614711974 (VirtualButton_t2756566330 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_ReleasedFrame_3();
		int32_t L_1 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))))? 1 : 0);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
extern "C"  void InputAxisScrollbar__ctor_m1747268639 (InputAxisScrollbar_t457958266 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
extern "C"  void InputAxisScrollbar_Update_m2874927048 (InputAxisScrollbar_t457958266 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
extern "C"  void InputAxisScrollbar_HandleInput_m921720287 (InputAxisScrollbar_t457958266 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputAxisScrollbar_HandleInput_m921720287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_axis_2();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_m1144576044(NULL /*static, unused*/, L_0, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(2.0f))), (float)(1.0f))), /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
extern "C"  void Joystick__ctor_m2282195716 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m2282195716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_MovementRange_2(((int32_t)100));
		__this->set_horizontalAxisName_4(_stringLiteral1828639942);
		__this->set_verticalAxisName_5(_stringLiteral2984908384);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
extern "C"  void Joystick_OnEnable_m1014768022 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	{
		Joystick_CreateVirtualAxes_m2739417166(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
extern "C"  void Joystick_Start_m1591099850 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		__this->set_m_StartPos_6(L_1);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void Joystick_UpdateVirtualAxes_m1439422241 (Joystick_t2204371675 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_UpdateVirtualAxes_m1439422241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_StartPos_6();
		Vector3_t3722313464  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		(&V_0)->set_y_2(((-L_3)));
		Vector3_t3722313464  L_4 = V_0;
		int32_t L_5 = __this->get_MovementRange_2();
		Vector3_t3722313464  L_6 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_4, (((float)((float)L_5))), /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = __this->get_m_UseX_7();
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		VirtualAxis_t4087348596 * L_8 = __this->get_m_HorizontalVirtualAxis_9();
		float L_9 = (&V_0)->get_x_1();
		NullCheck(L_8);
		VirtualAxis_Update_m1043809197(L_8, ((-L_9)), /*hidden argument*/NULL);
	}

IL_0048:
	{
		bool L_10 = __this->get_m_UseY_8();
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		VirtualAxis_t4087348596 * L_11 = __this->get_m_VerticalVirtualAxis_10();
		float L_12 = (&V_0)->get_y_2();
		NullCheck(L_11);
		VirtualAxis_Update_m1043809197(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
extern "C"  void Joystick_CreateVirtualAxes_m2739417166 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_CreateVirtualAxes_m2739417166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_t2204371675 * G_B2_0 = NULL;
	Joystick_t2204371675 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_t2204371675 * G_B3_1 = NULL;
	Joystick_t2204371675 * G_B5_0 = NULL;
	Joystick_t2204371675 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_t2204371675 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_axesToUse_3();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_3();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_7((bool)G_B3_0);
		int32_t L_2 = __this->get_axesToUse_3();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_3();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_8((bool)G_B6_0);
		bool L_4 = __this->get_m_UseX_7();
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = __this->get_horizontalAxisName_4();
		VirtualAxis_t4087348596 * L_6 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_9(L_6);
		VirtualAxis_t4087348596 * L_7 = __this->get_m_HorizontalVirtualAxis_9();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_8 = __this->get_m_UseY_8();
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = __this->get_verticalAxisName_5();
		VirtualAxis_t4087348596 * L_10 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_10(L_10);
		VirtualAxis_t4087348596 * L_11 = __this->get_m_VerticalVirtualAxis_10();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnDrag_m2237949000 (Joystick_t2204371675 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnDrag_m2237949000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_m_UseX_7();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		PointerEventData_t3807901092 * L_2 = ___data0;
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = PointerEventData_get_position_m437660275(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = (&V_2)->get_x_0();
		Vector3_t3722313464 * L_5 = __this->get_address_of_m_StartPos_6();
		float L_6 = L_5->get_x_1();
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)))));
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_MovementRange_2();
		int32_t L_9 = __this->get_MovementRange_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		(&V_0)->set_x_1((((float)((float)L_11))));
	}

IL_004a:
	{
		bool L_12 = __this->get_m_UseY_8();
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		PointerEventData_t3807901092 * L_13 = ___data0;
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = PointerEventData_get_position_m437660275(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_4)->get_y_1();
		Vector3_t3722313464 * L_16 = __this->get_address_of_m_StartPos_6();
		float L_17 = L_16->get_y_2();
		V_3 = (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17)))));
		int32_t L_18 = V_3;
		int32_t L_19 = __this->get_MovementRange_2();
		int32_t L_20 = __this->get_MovementRange_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_21 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_18, ((-L_19)), L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		int32_t L_22 = V_3;
		(&V_0)->set_y_2((((float)((float)L_22))));
	}

IL_008f:
	{
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_24 = __this->get_address_of_m_StartPos_6();
		float L_25 = L_24->get_x_1();
		float L_26 = (&V_0)->get_x_1();
		Vector3_t3722313464 * L_27 = __this->get_address_of_m_StartPos_6();
		float L_28 = L_27->get_y_2();
		float L_29 = (&V_0)->get_y_2();
		Vector3_t3722313464 * L_30 = __this->get_address_of_m_StartPos_6();
		float L_31 = L_30->get_z_3();
		float L_32 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m3353183577((&L_33), ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), ((float)il2cpp_codegen_add((float)L_28, (float)L_29)), ((float)il2cpp_codegen_add((float)L_31, (float)L_32)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_m3387557959(L_23, L_33, /*hidden argument*/NULL);
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		Joystick_UpdateVirtualAxes_m1439422241(__this, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerUp_m2911367878 (Joystick_t2204371675 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_m_StartPos_6();
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_m_StartPos_6();
		Joystick_UpdateVirtualAxes_m1439422241(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerDown_m538136489 (Joystick_t2204371675 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
extern "C"  void Joystick_OnDisable_m4045435458 (Joystick_t2204371675 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_UseX_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		VirtualAxis_t4087348596 * L_1 = __this->get_m_HorizontalVirtualAxis_9();
		NullCheck(L_1);
		VirtualAxis_Remove_m3159277484(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		bool L_2 = __this->get_m_UseY_8();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		VirtualAxis_t4087348596 * L_3 = __this->get_m_VerticalVirtualAxis_10();
		NullCheck(L_3);
		VirtualAxis_Remove_m3159277484(L_3, /*hidden argument*/NULL);
	}

IL_002c:
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
extern "C"  void MobileControlRig__ctor_m4012128667 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
extern "C"  void MobileControlRig_OnEnable_m2532484638 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_CheckEnableControlRig_m2194254892(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
extern "C"  void MobileControlRig_Start_m3940777587 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileControlRig_Start_m3940777587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventSystem_t1003666588 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_0 = Object_FindObjectOfType_TisEventSystem_t1003666588_m91970758(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisEventSystem_t1003666588_m91970758_RuntimeMethod_var);
		V_0 = L_0;
		EventSystem_t1003666588 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t1113636619 * L_3 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_3, _stringLiteral3534642813, /*hidden argument*/NULL);
		V_1 = L_3;
		GameObject_t1113636619 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_AddComponent_TisEventSystem_t1003666588_m1318992319(L_4, /*hidden argument*/GameObject_AddComponent_TisEventSystem_t1003666588_m1318992319_RuntimeMethod_var);
		GameObject_t1113636619 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_AddComponent_TisStandaloneInputModule_t2760469101_m928840512(L_5, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_t2760469101_m928840512_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
extern "C"  void MobileControlRig_CheckEnableControlRig_m2194254892 (MobileControlRig_t1964600252 * __this, const RuntimeMethod* method)
{
	{
		MobileControlRig_EnableControlRig_m2268035780(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
extern "C"  void MobileControlRig_EnableControlRig_m2268035780 (MobileControlRig_t1964600252 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileControlRig_EnableControlRig_m2268035780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			NullCheck(L_4);
			GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
			bool L_6 = ___enabled0;
			NullCheck(L_5);
			GameObject_SetActive_m796801857(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0029:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			RuntimeObject* L_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_10;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
extern "C"  void MobileInput__ctor_m1458281675 (MobileInput_t2025745297 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m132259715(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
extern "C"  void MobileInput_AddButton_m1457048403 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddButton_m1457048403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualButton_t2756566330 * L_1 = (VirtualButton_t2756566330 *)il2cpp_codegen_object_new(VirtualButton_t2756566330_il2cpp_TypeInfo_var);
		VirtualButton__ctor_m4196049871(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m1830161946(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
extern "C"  void MobileInput_AddAxes_m488652706 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_AddAxes_m488652706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		VirtualAxis_t4087348596 * L_1 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
extern "C"  float MobileInput_GetAxis_m2154000143 (MobileInput_t2025745297 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetAxis_m2154000143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = VirtualAxis_get_GetValue_m337417923(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
extern "C"  void MobileInput_SetButtonDown_m3216050691 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonDown_m3216050691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t2541822629 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t2756566330 * L_6 = Dictionary_2_get_Item_m572056520(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_m2977736877(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
extern "C"  void MobileInput_SetButtonUp_m157564634 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetButtonUp_m157564634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t2541822629 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t2756566330 * L_6 = Dictionary_2_get_Item_m572056520(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Released_m3633878926(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
extern "C"  void MobileInput_SetAxisPositive_m3252752591 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisPositive_m3252752591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
extern "C"  void MobileInput_SetAxisNegative_m2158886203 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisNegative_m2158886203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, (-1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
extern "C"  void MobileInput_SetAxisZero_m4114279636 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxisZero_m4114279636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
extern "C"  void MobileInput_SetAxis_m8177381 (MobileInput_t2025745297 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_SetAxis_m8177381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m488652706(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		Dictionary_2_t3872604895 * L_4 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualAxes_1();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_t4087348596 * L_6 = Dictionary_2_get_Item_m1067981918(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m1043809197(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
extern "C"  bool MobileInput_GetButtonDown_m504405365 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonDown_m504405365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t2756566330 * L_5 = Dictionary_2_get_Item_m572056520(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonDown_m2538225749(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t2541822629 * L_8 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t2756566330 * L_10 = Dictionary_2_get_Item_m572056520(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonDown_m2538225749(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
extern "C"  bool MobileInput_GetButtonUp_m2869453812 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButtonUp_m2869453812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t2756566330 * L_5 = Dictionary_2_get_Item_m572056520(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButtonUp_m3614711974(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t2541822629 * L_8 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t2756566330 * L_10 = Dictionary_2_get_Item_m572056520(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButtonUp_m3614711974(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
extern "C"  bool MobileInput_GetButton_m1481759253 (MobileInput_t2025745297 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileInput_GetButton_m1481759253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t2756566330 * L_5 = Dictionary_2_get_Item_m572056520(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = VirtualButton_get_GetButton_m426677553(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		String_t* L_7 = ___name0;
		MobileInput_AddButton_m1457048403(__this, L_7, /*hidden argument*/NULL);
		Dictionary_2_t2541822629 * L_8 = ((VirtualInput_t2597455733 *)__this)->get_m_VirtualButtons_2();
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t2756566330 * L_10 = Dictionary_2_get_Item_m572056520(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m572056520_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = VirtualButton_get_GetButton_m426677553(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
extern "C"  Vector3_t3722313464  MobileInput_MousePosition_m503980816 (MobileInput_t2025745297 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C"  void StandaloneInput__ctor_m1221073179 (StandaloneInput_t1343950252 * __this, const RuntimeMethod* method)
{
	{
		VirtualInput__ctor_m132259715(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern "C"  float StandaloneInput_GetAxis_m2410539728 (StandaloneInput_t1343950252 * __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetAxis_m2410539728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		bool L_0 = ___raw1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_3 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m4009438427(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern "C"  bool StandaloneInput_GetButton_m1835211858 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButton_m1835211858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButton_m2064261504(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern "C"  bool StandaloneInput_GetButtonDown_m3583403365 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonDown_m3583403365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern "C"  bool StandaloneInput_GetButtonUp_m3464108891 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_GetButtonUp_m3464108891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetButtonUp_m4007681079(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern "C"  void StandaloneInput_SetButtonDown_m3676829417 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonDown_m3676829417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern "C"  void StandaloneInput_SetButtonUp_m191088641 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetButtonUp_m191088641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern "C"  void StandaloneInput_SetAxisPositive_m3047996072 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisPositive_m3047996072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern "C"  void StandaloneInput_SetAxisNegative_m1888816296 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisNegative_m1888816296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern "C"  void StandaloneInput_SetAxisZero_m1274847735 (StandaloneInput_t1343950252 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxisZero_m1274847735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern "C"  void StandaloneInput_SetAxis_m55497828 (StandaloneInput_t1343950252 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_SetAxis_m55497828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral1111251549, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern "C"  Vector3_t3722313464  StandaloneInput_MousePosition_m3719131973 (StandaloneInput_t1343950252 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StandaloneInput_MousePosition_m3719131973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
extern "C"  void TiltInput__ctor_m684353858 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	{
		__this->set_fullTiltAngle_4((25.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
extern "C"  void TiltInput_OnEnable_m692757573 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltInput_OnEnable_m692757573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AxisMapping_t3982445645 * L_0 = __this->get_mapping_2();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_0();
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		AxisMapping_t3982445645 * L_2 = __this->get_mapping_2();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_axisName_1();
		VirtualAxis_t4087348596 * L_4 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_SteerAxis_6(L_4);
		VirtualAxis_t4087348596 * L_5 = __this->get_m_SteerAxis_6();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
extern "C"  void TiltInput_Update_m223364922 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TiltInput_Update_m223364922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_3 = __this->get_tiltAroundAxis_3();
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_009b;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_x_1();
		Vector3_t3722313464  L_8 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (&V_3)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->get_centreAngleOffset_5();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)(57.29578f))), (float)L_11));
		goto IL_009b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = (&V_4)->get_z_3();
		Vector3_t3722313464  L_14 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15 = (&V_5)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->get_centreAngleOffset_5();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(57.29578f))), (float)L_17));
		goto IL_009b;
	}

IL_009b:
	{
		float L_18 = __this->get_fullTiltAngle_4();
		float L_19 = __this->get_fullTiltAngle_4();
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, ((-L_18)), L_19, L_20, /*hidden argument*/NULL);
		V_6 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f)));
		AxisMapping_t3982445645 * L_22 = __this->get_mapping_2();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_type_0();
		V_7 = L_23;
		int32_t L_24 = V_7;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00e5;
			}
			case 1:
			{
				goto IL_00f7;
			}
			case 2:
			{
				goto IL_010a;
			}
			case 3:
			{
				goto IL_011d;
			}
		}
	}
	{
		goto IL_0130;
	}

IL_00e5:
	{
		VirtualAxis_t4087348596 * L_25 = __this->get_m_SteerAxis_6();
		float L_26 = V_6;
		NullCheck(L_25);
		VirtualAxis_Update_m1043809197(L_25, L_26, /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_00f7:
	{
		float L_27 = V_6;
		int32_t L_28 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m1649950270(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_27, (float)(((float)((float)L_28))))), /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_010a:
	{
		float L_29 = V_6;
		int32_t L_30 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m427631433(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_29, (float)(((float)((float)L_30))))), /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_011d:
	{
		float L_31 = V_6;
		int32_t L_32 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_m640530475(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_31, (float)(((float)((float)L_32))))), /*hidden argument*/NULL);
		goto IL_0130;
	}

IL_0130:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
extern "C"  void TiltInput_OnDisable_m1131217228 (TiltInput_t1639936653 * __this, const RuntimeMethod* method)
{
	{
		VirtualAxis_t4087348596 * L_0 = __this->get_m_SteerAxis_6();
		NullCheck(L_0);
		VirtualAxis_Remove_m3159277484(L_0, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
extern "C"  void AxisMapping__ctor_m715094701 (AxisMapping_t3982445645 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
extern "C"  void TouchPad__ctor_m1845169266 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad__ctor_m1845169266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_horizontalAxisName_4(_stringLiteral1828639942);
		__this->set_verticalAxisName_5(_stringLiteral2984908384);
		__this->set_Xsensitivity_6((1.0f));
		__this->set_Ysensitivity_7((1.0f));
		__this->set_m_Id_16((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
extern "C"  void TouchPad_OnEnable_m3972724317 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	{
		TouchPad_CreateVirtualAxes_m1112936150(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
extern "C"  void TouchPad_Start_m2936652414 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_Start_m2936652414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_m_Image_19(L_0);
		Image_t2670269651 * L_1 = __this->get_m_Image_19();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		__this->set_m_Center_18(L_3);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
extern "C"  void TouchPad_CreateVirtualAxes_m1112936150 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_CreateVirtualAxes_m1112936150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_t539039257 * G_B2_0 = NULL;
	TouchPad_t539039257 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_t539039257 * G_B3_1 = NULL;
	TouchPad_t539039257 * G_B5_0 = NULL;
	TouchPad_t539039257 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_t539039257 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_axesToUse_2();
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_axesToUse_2();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_UseX_11((bool)G_B3_0);
		int32_t L_2 = __this->get_axesToUse_2();
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = __this->get_axesToUse_2();
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_UseY_12((bool)G_B6_0);
		bool L_4 = __this->get_m_UseX_11();
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_5 = __this->get_horizontalAxisName_4();
		VirtualAxis_t4087348596 * L_6 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_HorizontalVirtualAxis_13(L_6);
		VirtualAxis_t4087348596 * L_7 = __this->get_m_HorizontalVirtualAxis_13();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0061:
	{
		bool L_8 = __this->get_m_UseY_12();
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_9 = __this->get_verticalAxisName_5();
		VirtualAxis_t4087348596 * L_10 = (VirtualAxis_t4087348596 *)il2cpp_codegen_object_new(VirtualAxis_t4087348596_il2cpp_TypeInfo_var);
		VirtualAxis__ctor_m1869943658(L_10, L_9, /*hidden argument*/NULL);
		__this->set_m_VerticalVirtualAxis_14(L_10);
		VirtualAxis_t4087348596 * L_11 = __this->get_m_VerticalVirtualAxis_14();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_m3479801628(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void TouchPad_UpdateVirtualAxes_m1567451020 (TouchPad_t539039257 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = Vector3_get_normalized_m2454957984((&___value0), /*hidden argument*/NULL);
		___value0 = L_0;
		bool L_1 = __this->get_m_UseX_11();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VirtualAxis_t4087348596 * L_2 = __this->get_m_HorizontalVirtualAxis_13();
		float L_3 = (&___value0)->get_x_1();
		NullCheck(L_2);
		VirtualAxis_Update_m1043809197(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		bool L_4 = __this->get_m_UseY_12();
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		VirtualAxis_t4087348596 * L_5 = __this->get_m_VerticalVirtualAxis_14();
		float L_6 = (&___value0)->get_y_2();
		NullCheck(L_5);
		VirtualAxis_Update_m1043809197(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchPad_OnPointerDown_m2573988246 (TouchPad_t539039257 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnPointerDown_m2573988246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Dragging_15((bool)1);
		PointerEventData_t3807901092 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = PointerEventData_get_pointerId_m1200356155(L_0, /*hidden argument*/NULL);
		__this->set_m_Id_16(L_1);
		int32_t L_2 = __this->get_controlStyle_3();
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		PointerEventData_t3807901092 * L_3 = ___data0;
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = PointerEventData_get_position_m437660275(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_m_Center_18(L_5);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
extern "C"  void TouchPad_Update_m4068717841 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_Update_m4068717841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = __this->get_m_Dragging_15();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_Id_16();
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_3 = __this->get_m_Id_16();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_4 = __this->get_controlStyle_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0062;
		}
	}
	{
		Vector2_t2156229523  L_5 = __this->get_m_PreviousTouchPos_17();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_m_Center_18(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_7 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_Id_16();
		NullCheck(L_7);
		Vector2_t2156229523  L_9 = Touch_get_position_m3109777936(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		__this->set_m_PreviousTouchPos_17(L_9);
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_10 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_m_Id_16();
		NullCheck(L_10);
		Vector2_t2156229523  L_12 = Touch_get_position_m3109777936(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
		V_2 = L_12;
		float L_13 = (&V_2)->get_x_0();
		Vector3_t3722313464 * L_14 = __this->get_address_of_m_Center_18();
		float L_15 = L_14->get_x_1();
		TouchU5BU5D_t1849554061* L_16 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_m_Id_16();
		NullCheck(L_16);
		Vector2_t2156229523  L_18 = Touch_get_position_m3109777936(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = (&V_3)->get_y_1();
		Vector3_t3722313464 * L_20 = __this->get_address_of_m_Center_18();
		float L_21 = L_20->get_y_2();
		Vector2__ctor_m3970636864((&V_1), ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), ((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_22 = Vector2_get_normalized_m2683665860((&V_1), /*hidden argument*/NULL);
		V_0 = L_22;
		Vector2_t2156229523 * L_23 = (&V_0);
		float L_24 = L_23->get_x_0();
		float L_25 = __this->get_Xsensitivity_6();
		L_23->set_x_0(((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)));
		Vector2_t2156229523 * L_26 = (&V_0);
		float L_27 = L_26->get_y_1();
		float L_28 = __this->get_Ysensitivity_7();
		L_26->set_y_1(((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)));
		float L_29 = (&V_0)->get_x_0();
		float L_30 = (&V_0)->get_y_1();
		Vector3_t3722313464  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector3__ctor_m3353183577((&L_31), L_29, L_30, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m1567451020(__this, L_31, /*hidden argument*/NULL);
	}

IL_0109:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchPad_OnPointerUp_m2465142363 (TouchPad_t539039257 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnPointerUp_m2465142363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Dragging_15((bool)0);
		__this->set_m_Id_16((-1));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m1567451020(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
extern "C"  void TouchPad_OnDisable_m3391228923 (TouchPad_t539039257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchPad_OnDisable_m3391228923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_horizontalAxisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_AxisExists_m365322552(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = __this->get_horizontalAxisName_4();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		String_t* L_3 = __this->get_verticalAxisName_5();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_4 = CrossPlatformInputManager_AxisExists_m365322552(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5 = __this->get_verticalAxisName_5();
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m2756471501(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0036:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C"  void VirtualInput__ctor_m132259715 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput__ctor_m132259715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = (Dictionary_2_t3872604895 *)il2cpp_codegen_object_new(Dictionary_2_t3872604895_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3611672568(L_0, /*hidden argument*/Dictionary_2__ctor_m3611672568_RuntimeMethod_var);
		__this->set_m_VirtualAxes_1(L_0);
		Dictionary_2_t2541822629 * L_1 = (Dictionary_2_t2541822629 *)il2cpp_codegen_object_new(Dictionary_2_t2541822629_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2614243156(L_1, /*hidden argument*/Dictionary_2__ctor_m2614243156_RuntimeMethod_var);
		__this->set_m_VirtualButtons_2(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_m_AlwaysUseVirtual_3(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C"  Vector3_t3722313464  VirtualInput_get_virtualMousePosition_m1530934210 (VirtualInput_t2597455733 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_U3CvirtualMousePositionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C"  void VirtualInput_set_virtualMousePosition_m308564020 (VirtualInput_t2597455733 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CvirtualMousePositionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C"  bool VirtualInput_AxisExists_m20278768 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_AxisExists_m20278768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C"  bool VirtualInput_ButtonExists_m3875122617 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_ButtonExists_m3875122617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C"  void VirtualInput_RegisterVirtualAxis_m2884529091 (VirtualInput_t2597455733 * __this, VirtualAxis_t4087348596 * ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualAxis_m2884529091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		VirtualAxis_t4087348596 * L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2 = VirtualAxis_get_name_m610059897(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m3309109471(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualAxis_t4087348596 * L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5 = VirtualAxis_get_name_m610059897(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1316003440, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t3872604895 * L_7 = __this->get_m_VirtualAxes_1();
		VirtualAxis_t4087348596 * L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9 = VirtualAxis_get_name_m610059897(L_8, /*hidden argument*/NULL);
		VirtualAxis_t4087348596 * L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m2550485437(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m2550485437_RuntimeMethod_var);
		VirtualAxis_t4087348596 * L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12 = VirtualAxis_get_matchWithInputManager_m2059598452(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualAxis_t4087348596 * L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15 = VirtualAxis_get_name_m610059897(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C"  void VirtualInput_RegisterVirtualButton_m3959785200 (VirtualInput_t2597455733 * __this, VirtualButton_t2756566330 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_RegisterVirtualButton_m3959785200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = __this->get_m_VirtualButtons_2();
		VirtualButton_t2756566330 * L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2 = VirtualButton_get_name_m3473382228(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m3760162225(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		VirtualButton_t2756566330 * L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5 = VirtualButton_get_name_m3473382228(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral341380797, L_5, _stringLiteral499939329, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_0035:
	{
		Dictionary_2_t2541822629 * L_7 = __this->get_m_VirtualButtons_2();
		VirtualButton_t2756566330 * L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9 = VirtualButton_get_name_m3473382228(L_8, /*hidden argument*/NULL);
		VirtualButton_t2756566330 * L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_m1118216421(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m1118216421_RuntimeMethod_var);
		VirtualButton_t2756566330 * L_11 = ___button0;
		NullCheck(L_11);
		bool L_12 = VirtualButton_get_matchWithInputManager_m2472937772(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0063;
		}
	}
	{
		List_1_t3319525431 * L_13 = __this->get_m_AlwaysUseVirtual_3();
		VirtualButton_t2756566330 * L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15 = VirtualButton_get_name_m3473382228(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m1685793073(L_13, L_15, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualAxis_m2956537171 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualAxis_m2956537171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t3872604895 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m2199267801(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m2199267801_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C"  void VirtualInput_UnRegisterVirtualButton_m3129182690 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_UnRegisterVirtualButton_m3129182690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2541822629 * L_0 = __this->get_m_VirtualButtons_2();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3760162225(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3760162225_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t2541822629 * L_3 = __this->get_m_VirtualButtons_2();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Dictionary_2_Remove_m2343242332(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m2343242332_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C"  VirtualAxis_t4087348596 * VirtualInput_VirtualAxisReference_m2155778560 (VirtualInput_t2597455733 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualInput_VirtualAxisReference_m2155778560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualAxis_t4087348596 * G_B3_0 = NULL;
	{
		Dictionary_2_t3872604895 * L_0 = __this->get_m_VirtualAxes_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3309109471(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3309109471_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t3872604895 * L_3 = __this->get_m_VirtualAxes_1();
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_t4087348596 * L_5 = Dictionary_2_get_Item_m1067981918(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m1067981918_RuntimeMethod_var);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((VirtualAxis_t4087348596 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionX_m1438630863 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = ___f0;
		Vector3_t3722313464  L_1 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_2();
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m308564020(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionY_m110408526 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		float L_2 = ___f0;
		Vector3_t3722313464  L_3 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m308564020(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C"  void VirtualInput_SetVirtualMousePositionZ_m414912069 (VirtualInput_t2597455733 * __this, float ___f0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_1();
		Vector3_t3722313464  L_2 = VirtualInput_get_virtualMousePosition_m1530934210(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		float L_4 = ___f0;
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m308564020(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
