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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ProBuilder.Examples.CameraControls
struct CameraControls_tC23566C2323FFF00F533939002902397F8EF4895;
// ProBuilder.Examples.CameraMotion
struct CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670;
// ProBuilder.Examples.CreatePolyShape
struct CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E;
// ProBuilder.Examples.Handles
struct Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8;
// ProBuilder.Examples.HighlightNearestFace
struct HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301;
// ProBuilder.Examples.MakePrimitiveEditable
struct MakePrimitiveEditable_t62F6D07EC61B2B25848A5373FBE2202D066003DC;
// ProBuilder.Examples.MeshEditor
struct MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1;
// ProBuilder.Examples.MeshEditor/DragState
struct DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545;
// ProBuilder.Examples.MeshEditor/MeshState
struct MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2;
// ProBuilder.Examples.SimpleGrid
struct SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7;
// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.ProBuilder.ProBuilderMesh>[]
struct SlotU5BU5D_t4EDE48C4B84DBD50FCF9ECBBBFB101AE2D04EF39;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E;
// System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>
struct IEnumerable_1_tF20756BA137BDAA09A9EA2932ACE6BC9DF003741;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct IEnumerable_1_t8521374FE63D83C6ABE2AE3F5CF673D885012240;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tCAA73A82B437741FD329C46E2FE82E7632CA29C7;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct IEqualityComparer_1_t895EC728CBCC42812EC3336582FD35D291F63064;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tF29E035126153F9F00537AA5AF6CF508765D3708;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>
struct IList_1_t4326FACD68C97480F4C1AF54249F2540501E23D5;
// System.Collections.Generic.IList`1<UnityEngine.Vector3>
struct IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ProBuilder.ActionResult
struct ActionResult_t3814DA82129D9B127F17B8002BBFF17E60A7C726;
// UnityEngine.ProBuilder.Edge[]
struct EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78;
// UnityEngine.ProBuilder.Face
struct Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852;
// UnityEngine.ProBuilder.Face[]
struct FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5;
// UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
struct MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086;
// UnityEngine.ProBuilder.MeshOperations.MeshImporter
struct MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC;
// UnityEngine.ProBuilder.ProBuilderMesh
struct ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F;
// UnityEngine.ProBuilder.SharedVertex[]
struct SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446;
// UnityEngine.ProBuilder.UnwrapParameters
struct UnwrapParameters_t51C9B402FCE4207336FFD5FFC069DF1C43375B13;
// UnityEngine.ProBuilder.Vertex[]
struct VertexU5BU5D_t53170A3C426A07D29BEBEC3655C9276B1C7D7480;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinMaterials_t33322CEC6B8B556941289D3AD69AC6FF622EA5C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD01C83C59758486D5526C37D5CCAFD76CE9C9B7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF20756BA137BDAA09A9EA2932ACE6BC9DF003741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t751A0FB21B5F966BB50A4C8E79507A5DDA8E4A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t4326FACD68C97480F4C1AF54249F2540501E23D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShapeGenerator_t39ED969F9845178E9684047EFFCD6E525F96E965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C;
IL2CPP_EXTERN_C String_t* _stringLiteral5689FEF74B59042A2CBCA5F61EBC2BD6BCA3DA88;
IL2CPP_EXTERN_C String_t* _stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31;
IL2CPP_EXTERN_C String_t* _stringLiteral71F30F86E6D287A36932E793E7CEAE00FDD3C6C3;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4FDE5B7BB6ECDDD2238D6A3E6AC6ABC48279AA;
IL2CPP_EXTERN_C String_t* _stringLiteral90D449DD5FBF1513279DF00CA83792DB62553DC5;
IL2CPP_EXTERN_C String_t* _stringLiteralB06F4A32AAC9DC9CA19B52903BFE73E7305681F3;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A4FA66791AFC45441C77028D93DAA97FFE3C53;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFC1F2E5BEEDFB22B78EB3052F10E017A7DF86B;
IL2CPP_EXTERN_C String_t* _stringLiteralF45BEFF09DA903CED5AABEB903D89D87215DED91;
IL2CPP_EXTERN_C String_t* _stringLiteralFB001DD30B958B38674700C55667685777D4898F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670_m7C58F5E0B561D41C7717E55414F9C924C1DE822E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mC2832BB83AC3F04B94E13C7D0A19FF4C39600473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m90FCA1BD9BAA79335B9B69FA10B77945A33B131C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m0EBF957C0024FE39BD01BD5D0585F98FEE7FA32D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m2A36D580488C76C3EB154F88581B059A8E1F5BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m43B15458020CAE5E6F134C11D70C7AEC364FA2F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mB8A5C989AC06C44519E2EB17F0D5CFE2184909F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mA6444014C12032BC5FFAD9021652A6E552AAB18E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m89F23152662FA8A337393D4EEEE11BFABB804C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshEditor_DrawSelection_m65EFC5610969A4C82BDF85092B30C6134DEB7065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m0210C608EEA89F5020B68BD78AB713FAC04086AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_Add_mAEDD7C60CC8FD95A2FFE1FC0E0D769DACF26FFF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_Remove_m5C7688138F38C3D3A2E446245CD5BC311FD75E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraControls_LateUpdate_m34603F672265D5D6F393E3C71A90F1D4E6F53313_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraControls_Start_m2D30F20784E153A9A2693D40D6274D2A09AB8B8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_Awake_m0BD83A61F2F8845B92B4163F690EF9A20E940028_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_CalcMinDistanceToBounds_mC4A1B0A1C3D50986B51EEC289089F70F71ADE768_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_CalcSignedMouseDelta_m65E2B18B7599165351CF73E4E507710561C43782_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_CalculateCameraPosition_m7093A872508081A1222A79A1CB8CFD9B97A2AF30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_CheckMouseOverGUI_mF4070CEF1587D344C6449FD3BCE41A910173344C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_DoLateUpdate_mE79EBF2633A67CB5860BC7A85FB753DA6B7D9D19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_Focus_m507450B006B76DB81A48FCA5CAC2ED21C559065F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_OnGUI_mB07C81883B53CC33B167418237B33417988E6460_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion_ScreenToWorldDistance_mAAD89338CF37BD16D2D759E9F956ECAA2F0F4FB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraMotion__ctor_mF3B0FB5C3D42667EFB625813875988B9606FCB10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CreatePolyShape_Rebuild_mAE639F62667767FCA110ECF650D88F164B72CE5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CreatePolyShape_Start_m49E18E75FFF3C9843CD5EF9F20DD0DA4DB47DBA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_Awake_mC91D3C8CBCE218B3149AAA71BB2E3686F696559E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_DrawLine_m6C9438C8D49A09F8E3A6A0C7C0E20BCF4EFE717C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_Draw_m7312E713FF797BA7EC27D54855F354F7B7EF7101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_Draw_m9A1F2998EFD52D7854E9910F7D2B96DD8B4C64F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_Init_mBDBBACB9AB8EBE21004EE2FA8DD1D1C9DB8AA5E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles__cctor_m1EFC11A9F578627B1EF08CFC02E86CE714DE2471_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_get_faceMaterial_mE0D9EAB40B2C0029F9B6E963C4D11A9065923392_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Handles_get_vertMaterial_m56207597901AB7FBBC05A15BE0086D560E3FCE8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HighlightNearestFace_FaceCenter_mFACDF10870C815E78AECF3CCEF8D45A17CDFFFE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HighlightNearestFace_Start_m3CFE30F45DB33017294B0CFD57A6F5E5163155A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HighlightNearestFace_Update_m13DE0AFAC997A2F0193C22441DDEFFFCFE7C72E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MakePrimitiveEditable_Start_m3AD2FE80276444941A5959C9ECE641F1E538312B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor_Awake_mCEEB2E6CAEEC81E93D3F04DB9DDB75B8D1657C4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor_BeginDrag_m0C262DA4E810FDDACF111075C6DD2A300323FB8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor_DrawSelection_m65EFC5610969A4C82BDF85092B30C6134DEB7065_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor_GetDragDistance_m8F25C0885FFC4372F5156B161B52A5A70D1BD463_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor_HandleInput_m7D4DF86F27101DBC65FEC16460827B94E1755BBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor_Start_mE14AFBE93769488269BB97665D8E18CB92127D1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor_UpdateDrag_m9BAEDC1F0B6EC4329A70C41FB8017AE27E531D69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditor__ctor_m97403EDBC1F35C5CDBF9450986D5123A8D69EF02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshState__ctor_m86FE69747C8DAFD9113D6E1E69642320948BA347_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selection_Add_mAEDD7C60CC8FD95A2FFE1FC0E0D769DACF26FFF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selection_Clear_m8F4F754E6857FA5104D3C385E9C4DC6970A0C69C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selection_Contains_m93A23E75CC243855FA435336EBE446AAEFD43706_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selection_Remove_m5C7688138F38C3D3A2E446245CD5BC311FD75E0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selection__cctor_mCE157AFA2A624E35C14B747B4570453BD29C6E42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selection_get_meshes_mC41C286D9AE558EA57ED62E9AD6B3416569D37C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleGrid_GridMesh_m393FC56D00DF98719C28B99B14C6A32B732029AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleGrid_Start_mAE368389CAA560BC1AB25AD64923268C125E4727_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_PickFace_m5A5C6BA199F31215A62B810DA882264CE36BCA51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_PickObject_m7E3BED93B6F2641AF8994631DD720F391F1FDABA_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3BFE1325F9F58849EE7A46965FE5CF27793D9A83 
{
public:

public:
};


// System.Object


// ProBuilder.Examples.MeshEditor_MeshState
struct  MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.MeshEditor_MeshState::mesh
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh_0;
	// UnityEngine.Vector3[] ProBuilder.Examples.MeshEditor_MeshState::vertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vertices_1;
	// UnityEngine.Vector3[] ProBuilder.Examples.MeshEditor_MeshState::origins
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___origins_2;
	// System.Collections.Generic.List`1<System.Int32> ProBuilder.Examples.MeshEditor_MeshState::indices
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___indices_3;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2, ___mesh_0)); }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * get_mesh_0() const { return ___mesh_0; }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2, ___vertices_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_vertices_1() const { return ___vertices_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___vertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_1), (void*)value);
	}

	inline static int32_t get_offset_of_origins_2() { return static_cast<int32_t>(offsetof(MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2, ___origins_2)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_origins_2() const { return ___origins_2; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_origins_2() { return &___origins_2; }
	inline void set_origins_2(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___origins_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origins_2), (void*)value);
	}

	inline static int32_t get_offset_of_indices_3() { return static_cast<int32_t>(offsetof(MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2, ___indices_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_indices_3() const { return ___indices_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_indices_3() { return &___indices_3; }
	inline void set_indices_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___indices_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indices_3), (void*)value);
	}
};


// ProBuilder.Examples.Selection
struct  Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F  : public RuntimeObject
{
public:

public:
};

struct Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh> ProBuilder.Examples.Selection::s_Selection
	HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * ___s_Selection_0;

public:
	inline static int32_t get_offset_of_s_Selection_0() { return static_cast<int32_t>(offsetof(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields, ___s_Selection_0)); }
	inline HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * get_s_Selection_0() const { return ___s_Selection_0; }
	inline HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B ** get_address_of_s_Selection_0() { return &___s_Selection_0; }
	inline void set_s_Selection_0(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * value)
	{
		___s_Selection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selection_0), (void*)value);
	}
};


// ProBuilder.Examples.Utility
struct  Utility_t99B5159A2872CF4B01881F63CE0B9FE2C5D7ADB0  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>
struct  HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t4EDE48C4B84DBD50FCF9ECBBBFB101AE2D04EF39* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____slots_8)); }
	inline SlotU5BU5D_t4EDE48C4B84DBD50FCF9ECBBBFB101AE2D04EF39* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t4EDE48C4B84DBD50FCF9ECBBBFB101AE2D04EF39** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t4EDE48C4B84DBD50FCF9ECBBBFB101AE2D04EF39* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct  ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.ProBuilder.MeshOperations.MeshImportSettings
struct  MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.ProBuilder.MeshOperations.MeshImportSettings::m_Quads
	bool ___m_Quads_0;
	// System.Boolean UnityEngine.ProBuilder.MeshOperations.MeshImportSettings::m_Smoothing
	bool ___m_Smoothing_1;
	// System.Single UnityEngine.ProBuilder.MeshOperations.MeshImportSettings::m_SmoothingThreshold
	float ___m_SmoothingThreshold_2;

public:
	inline static int32_t get_offset_of_m_Quads_0() { return static_cast<int32_t>(offsetof(MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086, ___m_Quads_0)); }
	inline bool get_m_Quads_0() const { return ___m_Quads_0; }
	inline bool* get_address_of_m_Quads_0() { return &___m_Quads_0; }
	inline void set_m_Quads_0(bool value)
	{
		___m_Quads_0 = value;
	}

	inline static int32_t get_offset_of_m_Smoothing_1() { return static_cast<int32_t>(offsetof(MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086, ___m_Smoothing_1)); }
	inline bool get_m_Smoothing_1() const { return ___m_Smoothing_1; }
	inline bool* get_address_of_m_Smoothing_1() { return &___m_Smoothing_1; }
	inline void set_m_Smoothing_1(bool value)
	{
		___m_Smoothing_1 = value;
	}

	inline static int32_t get_offset_of_m_SmoothingThreshold_2() { return static_cast<int32_t>(offsetof(MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086, ___m_SmoothingThreshold_2)); }
	inline float get_m_SmoothingThreshold_2() const { return ___m_SmoothingThreshold_2; }
	inline float* get_address_of_m_SmoothingThreshold_2() { return &___m_SmoothingThreshold_2; }
	inline void set_m_SmoothingThreshold_2(float value)
	{
		___m_SmoothingThreshold_2 = value;
	}
};


// UnityEngine.ProBuilder.MeshOperations.MeshImporter
struct  MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC  : public RuntimeObject
{
public:
	// UnityEngine.Mesh UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_SourceMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_SourceMesh_1;
	// UnityEngine.Material[] UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_SourceMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_SourceMaterials_2;
	// UnityEngine.ProBuilder.ProBuilderMesh UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_Destination
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___m_Destination_3;
	// UnityEngine.ProBuilder.Vertex[] UnityEngine.ProBuilder.MeshOperations.MeshImporter::m_Vertices
	VertexU5BU5D_t53170A3C426A07D29BEBEC3655C9276B1C7D7480* ___m_Vertices_4;

public:
	inline static int32_t get_offset_of_m_SourceMesh_1() { return static_cast<int32_t>(offsetof(MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC, ___m_SourceMesh_1)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_SourceMesh_1() const { return ___m_SourceMesh_1; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_SourceMesh_1() { return &___m_SourceMesh_1; }
	inline void set_m_SourceMesh_1(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_SourceMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceMaterials_2() { return static_cast<int32_t>(offsetof(MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC, ___m_SourceMaterials_2)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_SourceMaterials_2() const { return ___m_SourceMaterials_2; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_SourceMaterials_2() { return &___m_SourceMaterials_2; }
	inline void set_m_SourceMaterials_2(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_SourceMaterials_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceMaterials_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Destination_3() { return static_cast<int32_t>(offsetof(MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC, ___m_Destination_3)); }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * get_m_Destination_3() const { return ___m_Destination_3; }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F ** get_address_of_m_Destination_3() { return &___m_Destination_3; }
	inline void set_m_Destination_3(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * value)
	{
		___m_Destination_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Destination_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Vertices_4() { return static_cast<int32_t>(offsetof(MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC, ___m_Vertices_4)); }
	inline VertexU5BU5D_t53170A3C426A07D29BEBEC3655C9276B1C7D7480* get_m_Vertices_4() const { return ___m_Vertices_4; }
	inline VertexU5BU5D_t53170A3C426A07D29BEBEC3655C9276B1C7D7480** get_address_of_m_Vertices_4() { return &___m_Vertices_4; }
	inline void set_m_Vertices_4(VertexU5BU5D_t53170A3C426A07D29BEBEC3655C9276B1C7D7480* value)
	{
		___m_Vertices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Vertices_4), (void*)value);
	}
};

struct MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC_StaticFields
{
public:
	// UnityEngine.ProBuilder.MeshOperations.MeshImportSettings UnityEngine.ProBuilder.MeshOperations.MeshImporter::k_DefaultImportSettings
	MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086 * ___k_DefaultImportSettings_0;

public:
	inline static int32_t get_offset_of_k_DefaultImportSettings_0() { return static_cast<int32_t>(offsetof(MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC_StaticFields, ___k_DefaultImportSettings_0)); }
	inline MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086 * get_k_DefaultImportSettings_0() const { return ___k_DefaultImportSettings_0; }
	inline MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086 ** get_address_of_k_DefaultImportSettings_0() { return &___k_DefaultImportSettings_0; }
	inline void set_k_DefaultImportSettings_0(MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086 * value)
	{
		___k_DefaultImportSettings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_DefaultImportSettings_0), (void*)value);
	}
};


// ProBuilder.Examples.MeshAndFace
struct  MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 
{
public:
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.MeshAndFace::mesh
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh_0;
	// UnityEngine.ProBuilder.Face ProBuilder.Examples.MeshAndFace::face
	Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face_1;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37, ___mesh_0)); }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * get_mesh_0() const { return ___mesh_0; }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of_face_1() { return static_cast<int32_t>(offsetof(MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37, ___face_1)); }
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * get_face_1() const { return ___face_1; }
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 ** get_address_of_face_1() { return &___face_1; }
	inline void set_face_1(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * value)
	{
		___face_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___face_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ProBuilder.Examples.MeshAndFace
struct MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_pinvoke
{
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh_0;
	Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face_1;
};
// Native definition for COM marshalling of ProBuilder.Examples.MeshAndFace
struct MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_com
{
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh_0;
	Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face_1;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// ProBuilder.Examples.ViewTool
struct  ViewTool_t92BDF38A8C275BF30071463CF50CC5A0105DAD64 
{
public:
	// System.Int32 ProBuilder.Examples.ViewTool::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewTool_t92BDF38A8C275BF30071463CF50CC5A0105DAD64, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MeshTopology
struct  MeshTopology_t717F086F9A66000F22E1A30D7F2328BB96726C32 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshTopology_t717F086F9A66000F22E1A30D7F2328BB96726C32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ProBuilder.ActionResult_Status
struct  Status_t6D529C54789F4173A5F0E47A56C0063A50B2BA88 
{
public:
	// System.Int32 UnityEngine.ProBuilder.ActionResult_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t6D529C54789F4173A5F0E47A56C0063A50B2BA88, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.AutoUnwrapSettings_Anchor
struct  Anchor_tD6738A86A9AB593ADCCC6B915D1ADDE6D6E11707 
{
public:
	// System.Int32 UnityEngine.ProBuilder.AutoUnwrapSettings_Anchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Anchor_tD6738A86A9AB593ADCCC6B915D1ADDE6D6E11707, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.AutoUnwrapSettings_Fill
struct  Fill_t5DB80FE605B45CDDC6C3491B17A62542ED1BFDBD 
{
public:
	// System.Int32 UnityEngine.ProBuilder.AutoUnwrapSettings_Fill::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fill_t5DB80FE605B45CDDC6C3491B17A62542ED1BFDBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.Axis
struct  Axis_t727FB8A88A8F4F961C7ECED0BBDECFF52C3B152E 
{
public:
	// System.Int32 UnityEngine.ProBuilder.Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t727FB8A88A8F4F961C7ECED0BBDECFF52C3B152E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.ExtrudeMethod
struct  ExtrudeMethod_t48D850F47CD369FB6611BB75F34B3BED5E3544AD 
{
public:
	// System.Int32 UnityEngine.ProBuilder.ExtrudeMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtrudeMethod_t48D850F47CD369FB6611BB75F34B3BED5E3544AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.PivotLocation
struct  PivotLocation_t894E20C7995BFAF5D73B7D0551142A10E3B2AE52 
{
public:
	// System.Int32 UnityEngine.ProBuilder.PivotLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PivotLocation_t894E20C7995BFAF5D73B7D0551142A10E3B2AE52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.ProBuilderMesh_CacheValidState
struct  CacheValidState_t0CC170BC8079D1CF03639141D32A2D55FD4D1940 
{
public:
	// System.Byte UnityEngine.ProBuilder.ProBuilderMesh_CacheValidState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CacheValidState_t0CC170BC8079D1CF03639141D32A2D55FD4D1940, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.RefreshMask
struct  RefreshMask_t8928A775CC159B757CFB8778BE0CC6626323364B 
{
public:
	// System.Int32 UnityEngine.ProBuilder.RefreshMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RefreshMask_t8928A775CC159B757CFB8778BE0CC6626323364B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t217BE827C5994EDCA3FE70CE73578C2F729F9E69 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareFunction_t217BE827C5994EDCA3FE70CE73578C2F729F9E69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ProBuilder.Examples.MeshEditor_DragState
struct  DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545  : public RuntimeObject
{
public:
	// System.Boolean ProBuilder.Examples.MeshEditor_DragState::active
	bool ___active_0;
	// UnityEngine.Ray ProBuilder.Examples.MeshEditor_DragState::constraint
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___constraint_1;
	// System.Single ProBuilder.Examples.MeshEditor_DragState::offset
	float ___offset_2;
	// ProBuilder.Examples.MeshEditor_MeshState ProBuilder.Examples.MeshEditor_DragState::meshState
	MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * ___meshState_3;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_constraint_1() { return static_cast<int32_t>(offsetof(DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545, ___constraint_1)); }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  get_constraint_1() const { return ___constraint_1; }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * get_address_of_constraint_1() { return &___constraint_1; }
	inline void set_constraint_1(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  value)
	{
		___constraint_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545, ___offset_2)); }
	inline float get_offset_2() const { return ___offset_2; }
	inline float* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(float value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_meshState_3() { return static_cast<int32_t>(offsetof(DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545, ___meshState_3)); }
	inline MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * get_meshState_3() const { return ___meshState_3; }
	inline MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 ** get_address_of_meshState_3() { return &___meshState_3; }
	inline void set_meshState_3(MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * value)
	{
		___meshState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshState_3), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ProBuilder.ActionResult
struct  ActionResult_t3814DA82129D9B127F17B8002BBFF17E60A7C726  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.ActionResult_Status UnityEngine.ProBuilder.ActionResult::<status>k__BackingField
	int32_t ___U3CstatusU3Ek__BackingField_0;
	// System.String UnityEngine.ProBuilder.ActionResult::<notification>k__BackingField
	String_t* ___U3CnotificationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ActionResult_t3814DA82129D9B127F17B8002BBFF17E60A7C726, ___U3CstatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CstatusU3Ek__BackingField_0() const { return ___U3CstatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CstatusU3Ek__BackingField_0() { return &___U3CstatusU3Ek__BackingField_0; }
	inline void set_U3CstatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CstatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CnotificationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ActionResult_t3814DA82129D9B127F17B8002BBFF17E60A7C726, ___U3CnotificationU3Ek__BackingField_1)); }
	inline String_t* get_U3CnotificationU3Ek__BackingField_1() const { return ___U3CnotificationU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnotificationU3Ek__BackingField_1() { return &___U3CnotificationU3Ek__BackingField_1; }
	inline void set_U3CnotificationU3Ek__BackingField_1(String_t* value)
	{
		___U3CnotificationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnotificationU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.ProBuilder.AutoUnwrapSettings
struct  AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113 
{
public:
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_UseWorldSpace
	bool ___m_UseWorldSpace_0;
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_FlipU
	bool ___m_FlipU_1;
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_FlipV
	bool ___m_FlipV_2;
	// System.Boolean UnityEngine.ProBuilder.AutoUnwrapSettings::m_SwapUV
	bool ___m_SwapUV_3;
	// UnityEngine.ProBuilder.AutoUnwrapSettings_Fill UnityEngine.ProBuilder.AutoUnwrapSettings::m_Fill
	int32_t ___m_Fill_4;
	// UnityEngine.Vector2 UnityEngine.ProBuilder.AutoUnwrapSettings::m_Scale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Scale_5;
	// UnityEngine.Vector2 UnityEngine.ProBuilder.AutoUnwrapSettings::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_6;
	// System.Single UnityEngine.ProBuilder.AutoUnwrapSettings::m_Rotation
	float ___m_Rotation_7;
	// UnityEngine.ProBuilder.AutoUnwrapSettings_Anchor UnityEngine.ProBuilder.AutoUnwrapSettings::m_Anchor
	int32_t ___m_Anchor_8;

public:
	inline static int32_t get_offset_of_m_UseWorldSpace_0() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_UseWorldSpace_0)); }
	inline bool get_m_UseWorldSpace_0() const { return ___m_UseWorldSpace_0; }
	inline bool* get_address_of_m_UseWorldSpace_0() { return &___m_UseWorldSpace_0; }
	inline void set_m_UseWorldSpace_0(bool value)
	{
		___m_UseWorldSpace_0 = value;
	}

	inline static int32_t get_offset_of_m_FlipU_1() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_FlipU_1)); }
	inline bool get_m_FlipU_1() const { return ___m_FlipU_1; }
	inline bool* get_address_of_m_FlipU_1() { return &___m_FlipU_1; }
	inline void set_m_FlipU_1(bool value)
	{
		___m_FlipU_1 = value;
	}

	inline static int32_t get_offset_of_m_FlipV_2() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_FlipV_2)); }
	inline bool get_m_FlipV_2() const { return ___m_FlipV_2; }
	inline bool* get_address_of_m_FlipV_2() { return &___m_FlipV_2; }
	inline void set_m_FlipV_2(bool value)
	{
		___m_FlipV_2 = value;
	}

	inline static int32_t get_offset_of_m_SwapUV_3() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_SwapUV_3)); }
	inline bool get_m_SwapUV_3() const { return ___m_SwapUV_3; }
	inline bool* get_address_of_m_SwapUV_3() { return &___m_SwapUV_3; }
	inline void set_m_SwapUV_3(bool value)
	{
		___m_SwapUV_3 = value;
	}

	inline static int32_t get_offset_of_m_Fill_4() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_Fill_4)); }
	inline int32_t get_m_Fill_4() const { return ___m_Fill_4; }
	inline int32_t* get_address_of_m_Fill_4() { return &___m_Fill_4; }
	inline void set_m_Fill_4(int32_t value)
	{
		___m_Fill_4 = value;
	}

	inline static int32_t get_offset_of_m_Scale_5() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_Scale_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Scale_5() const { return ___m_Scale_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Scale_5() { return &___m_Scale_5; }
	inline void set_m_Scale_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Scale_5 = value;
	}

	inline static int32_t get_offset_of_m_Offset_6() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_Offset_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_6() const { return ___m_Offset_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_6() { return &___m_Offset_6; }
	inline void set_m_Offset_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_6 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_7() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_Rotation_7)); }
	inline float get_m_Rotation_7() const { return ___m_Rotation_7; }
	inline float* get_address_of_m_Rotation_7() { return &___m_Rotation_7; }
	inline void set_m_Rotation_7(float value)
	{
		___m_Rotation_7 = value;
	}

	inline static int32_t get_offset_of_m_Anchor_8() { return static_cast<int32_t>(offsetof(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113, ___m_Anchor_8)); }
	inline int32_t get_m_Anchor_8() const { return ___m_Anchor_8; }
	inline int32_t* get_address_of_m_Anchor_8() { return &___m_Anchor_8; }
	inline void set_m_Anchor_8(int32_t value)
	{
		___m_Anchor_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ProBuilder.AutoUnwrapSettings
struct AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113_marshaled_pinvoke
{
	int32_t ___m_UseWorldSpace_0;
	int32_t ___m_FlipU_1;
	int32_t ___m_FlipV_2;
	int32_t ___m_SwapUV_3;
	int32_t ___m_Fill_4;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Scale_5;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_6;
	float ___m_Rotation_7;
	int32_t ___m_Anchor_8;
};
// Native definition for COM marshalling of UnityEngine.ProBuilder.AutoUnwrapSettings
struct AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113_marshaled_com
{
	int32_t ___m_UseWorldSpace_0;
	int32_t ___m_FlipU_1;
	int32_t ___m_FlipV_2;
	int32_t ___m_SwapUV_3;
	int32_t ___m_Fill_4;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Scale_5;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_6;
	float ___m_Rotation_7;
	int32_t ___m_Anchor_8;
};

// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera_CameraCallback
struct  CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.ProBuilder.Face
struct  Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852  : public RuntimeObject
{
public:
	// System.Int32[] UnityEngine.ProBuilder.Face::m_Indexes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_Indexes_0;
	// System.Int32 UnityEngine.ProBuilder.Face::m_SmoothingGroup
	int32_t ___m_SmoothingGroup_1;
	// UnityEngine.ProBuilder.AutoUnwrapSettings UnityEngine.ProBuilder.Face::m_Uv
	AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113  ___m_Uv_2;
	// UnityEngine.Material UnityEngine.ProBuilder.Face::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_3;
	// System.Int32 UnityEngine.ProBuilder.Face::m_SubmeshIndex
	int32_t ___m_SubmeshIndex_4;
	// System.Boolean UnityEngine.ProBuilder.Face::m_ManualUV
	bool ___m_ManualUV_5;
	// System.Int32 UnityEngine.ProBuilder.Face::elementGroup
	int32_t ___elementGroup_6;
	// System.Int32 UnityEngine.ProBuilder.Face::m_TextureGroup
	int32_t ___m_TextureGroup_7;
	// System.Int32[] UnityEngine.ProBuilder.Face::m_DistinctIndexes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_DistinctIndexes_8;
	// UnityEngine.ProBuilder.Edge[] UnityEngine.ProBuilder.Face::m_Edges
	EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78* ___m_Edges_9;

public:
	inline static int32_t get_offset_of_m_Indexes_0() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_Indexes_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_Indexes_0() const { return ___m_Indexes_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_Indexes_0() { return &___m_Indexes_0; }
	inline void set_m_Indexes_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_Indexes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indexes_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SmoothingGroup_1() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_SmoothingGroup_1)); }
	inline int32_t get_m_SmoothingGroup_1() const { return ___m_SmoothingGroup_1; }
	inline int32_t* get_address_of_m_SmoothingGroup_1() { return &___m_SmoothingGroup_1; }
	inline void set_m_SmoothingGroup_1(int32_t value)
	{
		___m_SmoothingGroup_1 = value;
	}

	inline static int32_t get_offset_of_m_Uv_2() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_Uv_2)); }
	inline AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113  get_m_Uv_2() const { return ___m_Uv_2; }
	inline AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113 * get_address_of_m_Uv_2() { return &___m_Uv_2; }
	inline void set_m_Uv_2(AutoUnwrapSettings_t0B92FBE80B06C719A097344E6DF8A38904433113  value)
	{
		___m_Uv_2 = value;
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_Material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmeshIndex_4() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_SubmeshIndex_4)); }
	inline int32_t get_m_SubmeshIndex_4() const { return ___m_SubmeshIndex_4; }
	inline int32_t* get_address_of_m_SubmeshIndex_4() { return &___m_SubmeshIndex_4; }
	inline void set_m_SubmeshIndex_4(int32_t value)
	{
		___m_SubmeshIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_ManualUV_5() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_ManualUV_5)); }
	inline bool get_m_ManualUV_5() const { return ___m_ManualUV_5; }
	inline bool* get_address_of_m_ManualUV_5() { return &___m_ManualUV_5; }
	inline void set_m_ManualUV_5(bool value)
	{
		___m_ManualUV_5 = value;
	}

	inline static int32_t get_offset_of_elementGroup_6() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___elementGroup_6)); }
	inline int32_t get_elementGroup_6() const { return ___elementGroup_6; }
	inline int32_t* get_address_of_elementGroup_6() { return &___elementGroup_6; }
	inline void set_elementGroup_6(int32_t value)
	{
		___elementGroup_6 = value;
	}

	inline static int32_t get_offset_of_m_TextureGroup_7() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_TextureGroup_7)); }
	inline int32_t get_m_TextureGroup_7() const { return ___m_TextureGroup_7; }
	inline int32_t* get_address_of_m_TextureGroup_7() { return &___m_TextureGroup_7; }
	inline void set_m_TextureGroup_7(int32_t value)
	{
		___m_TextureGroup_7 = value;
	}

	inline static int32_t get_offset_of_m_DistinctIndexes_8() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_DistinctIndexes_8)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_DistinctIndexes_8() const { return ___m_DistinctIndexes_8; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_DistinctIndexes_8() { return &___m_DistinctIndexes_8; }
	inline void set_m_DistinctIndexes_8(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_DistinctIndexes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DistinctIndexes_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Edges_9() { return static_cast<int32_t>(offsetof(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852, ___m_Edges_9)); }
	inline EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78* get_m_Edges_9() const { return ___m_Edges_9; }
	inline EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78** get_address_of_m_Edges_9() { return &___m_Edges_9; }
	inline void set_m_Edges_9(EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78* value)
	{
		___m_Edges_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Edges_9), (void*)value);
	}
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// ProBuilder.Examples.CameraControls
struct  CameraControls_tC23566C2323FFF00F533939002902397F8EF4895  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single ProBuilder.Examples.CameraControls::orbitSpeed
	float ___orbitSpeed_9;
	// System.Single ProBuilder.Examples.CameraControls::zoomSpeed
	float ___zoomSpeed_10;
	// System.Single ProBuilder.Examples.CameraControls::idleRotation
	float ___idleRotation_11;
	// System.Single ProBuilder.Examples.CameraControls::m_Distance
	float ___m_Distance_12;
	// UnityEngine.Vector2 ProBuilder.Examples.CameraControls::m_LookDirection
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LookDirection_13;

public:
	inline static int32_t get_offset_of_orbitSpeed_9() { return static_cast<int32_t>(offsetof(CameraControls_tC23566C2323FFF00F533939002902397F8EF4895, ___orbitSpeed_9)); }
	inline float get_orbitSpeed_9() const { return ___orbitSpeed_9; }
	inline float* get_address_of_orbitSpeed_9() { return &___orbitSpeed_9; }
	inline void set_orbitSpeed_9(float value)
	{
		___orbitSpeed_9 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_10() { return static_cast<int32_t>(offsetof(CameraControls_tC23566C2323FFF00F533939002902397F8EF4895, ___zoomSpeed_10)); }
	inline float get_zoomSpeed_10() const { return ___zoomSpeed_10; }
	inline float* get_address_of_zoomSpeed_10() { return &___zoomSpeed_10; }
	inline void set_zoomSpeed_10(float value)
	{
		___zoomSpeed_10 = value;
	}

	inline static int32_t get_offset_of_idleRotation_11() { return static_cast<int32_t>(offsetof(CameraControls_tC23566C2323FFF00F533939002902397F8EF4895, ___idleRotation_11)); }
	inline float get_idleRotation_11() const { return ___idleRotation_11; }
	inline float* get_address_of_idleRotation_11() { return &___idleRotation_11; }
	inline void set_idleRotation_11(float value)
	{
		___idleRotation_11 = value;
	}

	inline static int32_t get_offset_of_m_Distance_12() { return static_cast<int32_t>(offsetof(CameraControls_tC23566C2323FFF00F533939002902397F8EF4895, ___m_Distance_12)); }
	inline float get_m_Distance_12() const { return ___m_Distance_12; }
	inline float* get_address_of_m_Distance_12() { return &___m_Distance_12; }
	inline void set_m_Distance_12(float value)
	{
		___m_Distance_12 = value;
	}

	inline static int32_t get_offset_of_m_LookDirection_13() { return static_cast<int32_t>(offsetof(CameraControls_tC23566C2323FFF00F533939002902397F8EF4895, ___m_LookDirection_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LookDirection_13() const { return ___m_LookDirection_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LookDirection_13() { return &___m_LookDirection_13; }
	inline void set_m_LookDirection_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LookDirection_13 = value;
	}
};


// ProBuilder.Examples.CameraMotion
struct  CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// ProBuilder.Examples.ViewTool ProBuilder.Examples.CameraMotion::<cameraState>k__BackingField
	int32_t ___U3CcameraStateU3Ek__BackingField_4;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::panCursor
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___panCursor_5;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::orbitCursor
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___orbitCursor_6;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::dollyCursor
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___dollyCursor_7;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::lookCursor
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___lookCursor_8;
	// UnityEngine.Texture2D ProBuilder.Examples.CameraMotion::m_CurrentCursor
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_CurrentCursor_9;
	// System.Single ProBuilder.Examples.CameraMotion::moveSpeed
	float ___moveSpeed_19;
	// System.Single ProBuilder.Examples.CameraMotion::lookSpeed
	float ___lookSpeed_20;
	// System.Single ProBuilder.Examples.CameraMotion::orbitSpeed
	float ___orbitSpeed_21;
	// System.Single ProBuilder.Examples.CameraMotion::scrollModifier
	float ___scrollModifier_22;
	// System.Single ProBuilder.Examples.CameraMotion::zoomSpeed
	float ___zoomSpeed_23;
	// System.Boolean ProBuilder.Examples.CameraMotion::m_UseEvent
	bool ___m_UseEvent_24;
	// UnityEngine.Camera ProBuilder.Examples.CameraMotion::m_CameraComponent
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_CameraComponent_25;
	// UnityEngine.Transform ProBuilder.Examples.CameraMotion::m_Transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_Transform_26;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_ScenePivot
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_ScenePivot_27;
	// System.Single ProBuilder.Examples.CameraMotion::m_DistanceToCamera
	float ___m_DistanceToCamera_28;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_PreviousMousePosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PreviousMousePosition_29;
	// UnityEngine.Rect ProBuilder.Examples.CameraMotion::m_MouseCursorRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_MouseCursorRect_30;
	// UnityEngine.Rect ProBuilder.Examples.CameraMotion::m_ScreenCenterRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_ScreenCenterRect_31;
	// System.Boolean ProBuilder.Examples.CameraMotion::m_CurrentActionValid
	bool ___m_CurrentActionValid_32;
	// System.Boolean ProBuilder.Examples.CameraMotion::m_Zooming
	bool ___m_Zooming_33;
	// System.Single ProBuilder.Examples.CameraMotion::m_ZoomProgress
	float ___m_ZoomProgress_34;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_PreviousPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PreviousPosition_35;
	// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::m_TargetPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_TargetPosition_36;

public:
	inline static int32_t get_offset_of_U3CcameraStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___U3CcameraStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CcameraStateU3Ek__BackingField_4() const { return ___U3CcameraStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcameraStateU3Ek__BackingField_4() { return &___U3CcameraStateU3Ek__BackingField_4; }
	inline void set_U3CcameraStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CcameraStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_panCursor_5() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___panCursor_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_panCursor_5() const { return ___panCursor_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_panCursor_5() { return &___panCursor_5; }
	inline void set_panCursor_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___panCursor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panCursor_5), (void*)value);
	}

	inline static int32_t get_offset_of_orbitCursor_6() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___orbitCursor_6)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_orbitCursor_6() const { return ___orbitCursor_6; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_orbitCursor_6() { return &___orbitCursor_6; }
	inline void set_orbitCursor_6(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___orbitCursor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orbitCursor_6), (void*)value);
	}

	inline static int32_t get_offset_of_dollyCursor_7() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___dollyCursor_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_dollyCursor_7() const { return ___dollyCursor_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_dollyCursor_7() { return &___dollyCursor_7; }
	inline void set_dollyCursor_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___dollyCursor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dollyCursor_7), (void*)value);
	}

	inline static int32_t get_offset_of_lookCursor_8() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___lookCursor_8)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_lookCursor_8() const { return ___lookCursor_8; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_lookCursor_8() { return &___lookCursor_8; }
	inline void set_lookCursor_8(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___lookCursor_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookCursor_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCursor_9() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_CurrentCursor_9)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_CurrentCursor_9() const { return ___m_CurrentCursor_9; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_CurrentCursor_9() { return &___m_CurrentCursor_9; }
	inline void set_m_CurrentCursor_9(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_CurrentCursor_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCursor_9), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_19() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___moveSpeed_19)); }
	inline float get_moveSpeed_19() const { return ___moveSpeed_19; }
	inline float* get_address_of_moveSpeed_19() { return &___moveSpeed_19; }
	inline void set_moveSpeed_19(float value)
	{
		___moveSpeed_19 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_20() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___lookSpeed_20)); }
	inline float get_lookSpeed_20() const { return ___lookSpeed_20; }
	inline float* get_address_of_lookSpeed_20() { return &___lookSpeed_20; }
	inline void set_lookSpeed_20(float value)
	{
		___lookSpeed_20 = value;
	}

	inline static int32_t get_offset_of_orbitSpeed_21() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___orbitSpeed_21)); }
	inline float get_orbitSpeed_21() const { return ___orbitSpeed_21; }
	inline float* get_address_of_orbitSpeed_21() { return &___orbitSpeed_21; }
	inline void set_orbitSpeed_21(float value)
	{
		___orbitSpeed_21 = value;
	}

	inline static int32_t get_offset_of_scrollModifier_22() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___scrollModifier_22)); }
	inline float get_scrollModifier_22() const { return ___scrollModifier_22; }
	inline float* get_address_of_scrollModifier_22() { return &___scrollModifier_22; }
	inline void set_scrollModifier_22(float value)
	{
		___scrollModifier_22 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_23() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___zoomSpeed_23)); }
	inline float get_zoomSpeed_23() const { return ___zoomSpeed_23; }
	inline float* get_address_of_zoomSpeed_23() { return &___zoomSpeed_23; }
	inline void set_zoomSpeed_23(float value)
	{
		___zoomSpeed_23 = value;
	}

	inline static int32_t get_offset_of_m_UseEvent_24() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_UseEvent_24)); }
	inline bool get_m_UseEvent_24() const { return ___m_UseEvent_24; }
	inline bool* get_address_of_m_UseEvent_24() { return &___m_UseEvent_24; }
	inline void set_m_UseEvent_24(bool value)
	{
		___m_UseEvent_24 = value;
	}

	inline static int32_t get_offset_of_m_CameraComponent_25() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_CameraComponent_25)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_CameraComponent_25() const { return ___m_CameraComponent_25; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_CameraComponent_25() { return &___m_CameraComponent_25; }
	inline void set_m_CameraComponent_25(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_CameraComponent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraComponent_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Transform_26() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_Transform_26)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_Transform_26() const { return ___m_Transform_26; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_Transform_26() { return &___m_Transform_26; }
	inline void set_m_Transform_26(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_Transform_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScenePivot_27() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_ScenePivot_27)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_ScenePivot_27() const { return ___m_ScenePivot_27; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_ScenePivot_27() { return &___m_ScenePivot_27; }
	inline void set_m_ScenePivot_27(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_ScenePivot_27 = value;
	}

	inline static int32_t get_offset_of_m_DistanceToCamera_28() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_DistanceToCamera_28)); }
	inline float get_m_DistanceToCamera_28() const { return ___m_DistanceToCamera_28; }
	inline float* get_address_of_m_DistanceToCamera_28() { return &___m_DistanceToCamera_28; }
	inline void set_m_DistanceToCamera_28(float value)
	{
		___m_DistanceToCamera_28 = value;
	}

	inline static int32_t get_offset_of_m_PreviousMousePosition_29() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_PreviousMousePosition_29)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PreviousMousePosition_29() const { return ___m_PreviousMousePosition_29; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PreviousMousePosition_29() { return &___m_PreviousMousePosition_29; }
	inline void set_m_PreviousMousePosition_29(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PreviousMousePosition_29 = value;
	}

	inline static int32_t get_offset_of_m_MouseCursorRect_30() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_MouseCursorRect_30)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_MouseCursorRect_30() const { return ___m_MouseCursorRect_30; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_MouseCursorRect_30() { return &___m_MouseCursorRect_30; }
	inline void set_m_MouseCursorRect_30(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_MouseCursorRect_30 = value;
	}

	inline static int32_t get_offset_of_m_ScreenCenterRect_31() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_ScreenCenterRect_31)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_ScreenCenterRect_31() const { return ___m_ScreenCenterRect_31; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_ScreenCenterRect_31() { return &___m_ScreenCenterRect_31; }
	inline void set_m_ScreenCenterRect_31(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_ScreenCenterRect_31 = value;
	}

	inline static int32_t get_offset_of_m_CurrentActionValid_32() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_CurrentActionValid_32)); }
	inline bool get_m_CurrentActionValid_32() const { return ___m_CurrentActionValid_32; }
	inline bool* get_address_of_m_CurrentActionValid_32() { return &___m_CurrentActionValid_32; }
	inline void set_m_CurrentActionValid_32(bool value)
	{
		___m_CurrentActionValid_32 = value;
	}

	inline static int32_t get_offset_of_m_Zooming_33() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_Zooming_33)); }
	inline bool get_m_Zooming_33() const { return ___m_Zooming_33; }
	inline bool* get_address_of_m_Zooming_33() { return &___m_Zooming_33; }
	inline void set_m_Zooming_33(bool value)
	{
		___m_Zooming_33 = value;
	}

	inline static int32_t get_offset_of_m_ZoomProgress_34() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_ZoomProgress_34)); }
	inline float get_m_ZoomProgress_34() const { return ___m_ZoomProgress_34; }
	inline float* get_address_of_m_ZoomProgress_34() { return &___m_ZoomProgress_34; }
	inline void set_m_ZoomProgress_34(float value)
	{
		___m_ZoomProgress_34 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPosition_35() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_PreviousPosition_35)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PreviousPosition_35() const { return ___m_PreviousPosition_35; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PreviousPosition_35() { return &___m_PreviousPosition_35; }
	inline void set_m_PreviousPosition_35(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PreviousPosition_35 = value;
	}

	inline static int32_t get_offset_of_m_TargetPosition_36() { return static_cast<int32_t>(offsetof(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670, ___m_TargetPosition_36)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_TargetPosition_36() const { return ___m_TargetPosition_36; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_TargetPosition_36() { return &___m_TargetPosition_36; }
	inline void set_m_TargetPosition_36(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_TargetPosition_36 = value;
	}
};


// ProBuilder.Examples.CreatePolyShape
struct  CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single ProBuilder.Examples.CreatePolyShape::m_RadiusMin
	float ___m_RadiusMin_4;
	// System.Single ProBuilder.Examples.CreatePolyShape::m_RadiusMax
	float ___m_RadiusMax_5;
	// System.Single ProBuilder.Examples.CreatePolyShape::m_Height
	float ___m_Height_6;
	// System.Boolean ProBuilder.Examples.CreatePolyShape::m_FlipNormals
	bool ___m_FlipNormals_7;
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.CreatePolyShape::m_Mesh
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___m_Mesh_8;

public:
	inline static int32_t get_offset_of_m_RadiusMin_4() { return static_cast<int32_t>(offsetof(CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E, ___m_RadiusMin_4)); }
	inline float get_m_RadiusMin_4() const { return ___m_RadiusMin_4; }
	inline float* get_address_of_m_RadiusMin_4() { return &___m_RadiusMin_4; }
	inline void set_m_RadiusMin_4(float value)
	{
		___m_RadiusMin_4 = value;
	}

	inline static int32_t get_offset_of_m_RadiusMax_5() { return static_cast<int32_t>(offsetof(CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E, ___m_RadiusMax_5)); }
	inline float get_m_RadiusMax_5() const { return ___m_RadiusMax_5; }
	inline float* get_address_of_m_RadiusMax_5() { return &___m_RadiusMax_5; }
	inline void set_m_RadiusMax_5(float value)
	{
		___m_RadiusMax_5 = value;
	}

	inline static int32_t get_offset_of_m_Height_6() { return static_cast<int32_t>(offsetof(CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E, ___m_Height_6)); }
	inline float get_m_Height_6() const { return ___m_Height_6; }
	inline float* get_address_of_m_Height_6() { return &___m_Height_6; }
	inline void set_m_Height_6(float value)
	{
		___m_Height_6 = value;
	}

	inline static int32_t get_offset_of_m_FlipNormals_7() { return static_cast<int32_t>(offsetof(CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E, ___m_FlipNormals_7)); }
	inline bool get_m_FlipNormals_7() const { return ___m_FlipNormals_7; }
	inline bool* get_address_of_m_FlipNormals_7() { return &___m_FlipNormals_7; }
	inline void set_m_FlipNormals_7(bool value)
	{
		___m_FlipNormals_7 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_8() { return static_cast<int32_t>(offsetof(CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E, ___m_Mesh_8)); }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * get_m_Mesh_8() const { return ___m_Mesh_8; }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F ** get_address_of_m_Mesh_8() { return &___m_Mesh_8; }
	inline void set_m_Mesh_8(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * value)
	{
		___m_Mesh_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_8), (void*)value);
	}
};


// ProBuilder.Examples.Handles
struct  Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_FaceHighlight
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___m_FaceHighlight_6;
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_LineBillboard
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___m_LineBillboard_7;
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_PointBillboard
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___m_PointBillboard_8;
	// UnityEngine.Shader ProBuilder.Examples.Handles::m_VertexShader
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___m_VertexShader_9;

public:
	inline static int32_t get_offset_of_m_FaceHighlight_6() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8, ___m_FaceHighlight_6)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_m_FaceHighlight_6() const { return ___m_FaceHighlight_6; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_m_FaceHighlight_6() { return &___m_FaceHighlight_6; }
	inline void set_m_FaceHighlight_6(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___m_FaceHighlight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FaceHighlight_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_LineBillboard_7() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8, ___m_LineBillboard_7)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_m_LineBillboard_7() const { return ___m_LineBillboard_7; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_m_LineBillboard_7() { return &___m_LineBillboard_7; }
	inline void set_m_LineBillboard_7(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___m_LineBillboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LineBillboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointBillboard_8() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8, ___m_PointBillboard_8)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_m_PointBillboard_8() const { return ___m_PointBillboard_8; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_m_PointBillboard_8() { return &___m_PointBillboard_8; }
	inline void set_m_PointBillboard_8(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___m_PointBillboard_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointBillboard_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertexShader_9() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8, ___m_VertexShader_9)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_m_VertexShader_9() const { return ___m_VertexShader_9; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_m_VertexShader_9() { return &___m_VertexShader_9; }
	inline void set_m_VertexShader_9(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___m_VertexShader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VertexShader_9), (void*)value);
	}
};

struct Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields
{
public:
	// ProBuilder.Examples.Handles ProBuilder.Examples.Handles::s_Instance
	Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * ___s_Instance_4;
	// System.Boolean ProBuilder.Examples.Handles::s_Initialized
	bool ___s_Initialized_5;
	// UnityEngine.Material ProBuilder.Examples.Handles::s_EdgeMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_EdgeMaterial_10;
	// UnityEngine.Material ProBuilder.Examples.Handles::s_VertMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_VertMaterial_11;
	// UnityEngine.Material ProBuilder.Examples.Handles::s_FaceMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_FaceMaterial_12;
	// UnityEngine.ProBuilder.Face[] ProBuilder.Examples.Handles::s_FaceArray
	FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* ___s_FaceArray_13;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields, ___s_Instance_4)); }
	inline Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_5() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields, ___s_Initialized_5)); }
	inline bool get_s_Initialized_5() const { return ___s_Initialized_5; }
	inline bool* get_address_of_s_Initialized_5() { return &___s_Initialized_5; }
	inline void set_s_Initialized_5(bool value)
	{
		___s_Initialized_5 = value;
	}

	inline static int32_t get_offset_of_s_EdgeMaterial_10() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields, ___s_EdgeMaterial_10)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_EdgeMaterial_10() const { return ___s_EdgeMaterial_10; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_EdgeMaterial_10() { return &___s_EdgeMaterial_10; }
	inline void set_s_EdgeMaterial_10(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_EdgeMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EdgeMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertMaterial_11() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields, ___s_VertMaterial_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_VertMaterial_11() const { return ___s_VertMaterial_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_VertMaterial_11() { return &___s_VertMaterial_11; }
	inline void set_s_VertMaterial_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_VertMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_FaceMaterial_12() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields, ___s_FaceMaterial_12)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_FaceMaterial_12() const { return ___s_FaceMaterial_12; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_FaceMaterial_12() { return &___s_FaceMaterial_12; }
	inline void set_s_FaceMaterial_12(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_FaceMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FaceMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_FaceArray_13() { return static_cast<int32_t>(offsetof(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields, ___s_FaceArray_13)); }
	inline FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* get_s_FaceArray_13() const { return ___s_FaceArray_13; }
	inline FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5** get_address_of_s_FaceArray_13() { return &___s_FaceArray_13; }
	inline void set_s_FaceArray_13(FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* value)
	{
		___s_FaceArray_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FaceArray_13), (void*)value);
	}
};


// ProBuilder.Examples.HighlightNearestFace
struct  HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single ProBuilder.Examples.HighlightNearestFace::travel
	float ___travel_4;
	// System.Single ProBuilder.Examples.HighlightNearestFace::speed
	float ___speed_5;
	// UnityEngine.ProBuilder.ProBuilderMesh ProBuilder.Examples.HighlightNearestFace::target
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___target_6;
	// UnityEngine.ProBuilder.Face ProBuilder.Examples.HighlightNearestFace::nearest
	Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___nearest_7;

public:
	inline static int32_t get_offset_of_travel_4() { return static_cast<int32_t>(offsetof(HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301, ___travel_4)); }
	inline float get_travel_4() const { return ___travel_4; }
	inline float* get_address_of_travel_4() { return &___travel_4; }
	inline void set_travel_4(float value)
	{
		___travel_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301, ___target_6)); }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * get_target_6() const { return ___target_6; }
	inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_6), (void*)value);
	}

	inline static int32_t get_offset_of_nearest_7() { return static_cast<int32_t>(offsetof(HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301, ___nearest_7)); }
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * get_nearest_7() const { return ___nearest_7; }
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 ** get_address_of_nearest_7() { return &___nearest_7; }
	inline void set_nearest_7(Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * value)
	{
		___nearest_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nearest_7), (void*)value);
	}
};


// ProBuilder.Examples.MakePrimitiveEditable
struct  MakePrimitiveEditable_t62F6D07EC61B2B25848A5373FBE2202D066003DC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// ProBuilder.Examples.MeshEditor
struct  MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera ProBuilder.Examples.MeshEditor::m_SceneCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_SceneCamera_4;
	// ProBuilder.Examples.CameraMotion ProBuilder.Examples.MeshEditor::m_CameraMotion
	CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * ___m_CameraMotion_5;
	// ProBuilder.Examples.MeshAndFace ProBuilder.Examples.MeshEditor::m_Selection
	MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  ___m_Selection_6;
	// ProBuilder.Examples.MeshEditor_DragState ProBuilder.Examples.MeshEditor::m_DragState
	DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * ___m_DragState_7;

public:
	inline static int32_t get_offset_of_m_SceneCamera_4() { return static_cast<int32_t>(offsetof(MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1, ___m_SceneCamera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_SceneCamera_4() const { return ___m_SceneCamera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_SceneCamera_4() { return &___m_SceneCamera_4; }
	inline void set_m_SceneCamera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_SceneCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraMotion_5() { return static_cast<int32_t>(offsetof(MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1, ___m_CameraMotion_5)); }
	inline CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * get_m_CameraMotion_5() const { return ___m_CameraMotion_5; }
	inline CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 ** get_address_of_m_CameraMotion_5() { return &___m_CameraMotion_5; }
	inline void set_m_CameraMotion_5(CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * value)
	{
		___m_CameraMotion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraMotion_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Selection_6() { return static_cast<int32_t>(offsetof(MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1, ___m_Selection_6)); }
	inline MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  get_m_Selection_6() const { return ___m_Selection_6; }
	inline MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * get_address_of_m_Selection_6() { return &___m_Selection_6; }
	inline void set_m_Selection_6(MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  value)
	{
		___m_Selection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Selection_6))->___mesh_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Selection_6))->___face_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DragState_7() { return static_cast<int32_t>(offsetof(MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1, ___m_DragState_7)); }
	inline DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * get_m_DragState_7() const { return ___m_DragState_7; }
	inline DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 ** get_address_of_m_DragState_7() { return &___m_DragState_7; }
	inline void set_m_DragState_7(DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * value)
	{
		___m_DragState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragState_7), (void*)value);
	}
};


// ProBuilder.Examples.SimpleGrid
struct  SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 ProBuilder.Examples.SimpleGrid::lines
	int32_t ___lines_4;
	// System.Single ProBuilder.Examples.SimpleGrid::scale
	float ___scale_5;

public:
	inline static int32_t get_offset_of_lines_4() { return static_cast<int32_t>(offsetof(SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7, ___lines_4)); }
	inline int32_t get_lines_4() const { return ___lines_4; }
	inline int32_t* get_address_of_lines_4() { return &___lines_4; }
	inline void set_lines_4(int32_t value)
	{
		___lines_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7, ___scale_5)); }
	inline float get_scale_5() const { return ___scale_5; }
	inline float* get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(float value)
	{
		___scale_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.ProBuilder.ProBuilderMesh
struct  ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 UnityEngine.ProBuilder.ProBuilderMesh::m_MeshFormatVersion
	int32_t ___m_MeshFormatVersion_9;
	// UnityEngine.ProBuilder.Face[] UnityEngine.ProBuilder.ProBuilderMesh::m_Faces
	FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* ___m_Faces_10;
	// UnityEngine.ProBuilder.SharedVertex[] UnityEngine.ProBuilder.ProBuilderMesh::m_SharedVertices
	SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446* ___m_SharedVertices_11;
	// UnityEngine.ProBuilder.ProBuilderMesh_CacheValidState UnityEngine.ProBuilder.ProBuilderMesh::m_CacheValid
	uint8_t ___m_CacheValid_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SharedVertexLookup
	Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * ___m_SharedVertexLookup_13;
	// UnityEngine.ProBuilder.SharedVertex[] UnityEngine.ProBuilder.ProBuilderMesh::m_SharedTextures
	SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446* ___m_SharedTextures_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SharedTextureLookup
	Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * ___m_SharedTextureLookup_15;
	// UnityEngine.Vector3[] UnityEngine.ProBuilder.ProBuilderMesh::m_Positions
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Positions_16;
	// UnityEngine.Vector2[] UnityEngine.ProBuilder.ProBuilderMesh::m_Textures0
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_Textures0_17;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.ProBuilder.ProBuilderMesh::m_Textures2
	List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___m_Textures2_18;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.ProBuilder.ProBuilderMesh::m_Textures3
	List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___m_Textures3_19;
	// UnityEngine.Vector4[] UnityEngine.ProBuilder.ProBuilderMesh::m_Tangents
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___m_Tangents_20;
	// UnityEngine.Vector3[] UnityEngine.ProBuilder.ProBuilderMesh::m_Normals
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Normals_21;
	// UnityEngine.Color[] UnityEngine.ProBuilder.ProBuilderMesh::m_Colors
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* ___m_Colors_22;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::<userCollisions>k__BackingField
	bool ___U3CuserCollisionsU3Ek__BackingField_23;
	// UnityEngine.ProBuilder.UnwrapParameters UnityEngine.ProBuilder.ProBuilderMesh::m_UnwrapParameters
	UnwrapParameters_t51C9B402FCE4207336FFD5FFC069DF1C43375B13 * ___m_UnwrapParameters_24;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::m_PreserveMeshAssetOnDestroy
	bool ___m_PreserveMeshAssetOnDestroy_25;
	// System.String UnityEngine.ProBuilder.ProBuilderMesh::assetGuid
	String_t* ___assetGuid_26;
	// UnityEngine.Mesh UnityEngine.ProBuilder.ProBuilderMesh::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_27;
	// UnityEngine.MeshRenderer UnityEngine.ProBuilder.ProBuilderMesh::m_MeshRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___m_MeshRenderer_28;
	// UnityEngine.MeshFilter UnityEngine.ProBuilder.ProBuilderMesh::m_MeshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_MeshFilter_29;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::m_IsSelectable
	bool ___m_IsSelectable_35;
	// System.Int32[] UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedFaces
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_SelectedFaces_36;
	// UnityEngine.ProBuilder.Edge[] UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedEdges
	EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78* ___m_SelectedEdges_37;
	// System.Int32[] UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedVertices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_SelectedVertices_38;
	// System.Boolean UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedCacheDirty
	bool ___m_SelectedCacheDirty_39;
	// System.Int32 UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedSharedVerticesCount
	int32_t ___m_SelectedSharedVerticesCount_40;
	// System.Int32 UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedCoincidentVertexCount
	int32_t ___m_SelectedCoincidentVertexCount_41;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedSharedVertices
	HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * ___m_SelectedSharedVertices_42;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::m_SelectedCoincidentVertices
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_SelectedCoincidentVertices_43;

public:
	inline static int32_t get_offset_of_m_MeshFormatVersion_9() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_MeshFormatVersion_9)); }
	inline int32_t get_m_MeshFormatVersion_9() const { return ___m_MeshFormatVersion_9; }
	inline int32_t* get_address_of_m_MeshFormatVersion_9() { return &___m_MeshFormatVersion_9; }
	inline void set_m_MeshFormatVersion_9(int32_t value)
	{
		___m_MeshFormatVersion_9 = value;
	}

	inline static int32_t get_offset_of_m_Faces_10() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Faces_10)); }
	inline FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* get_m_Faces_10() const { return ___m_Faces_10; }
	inline FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5** get_address_of_m_Faces_10() { return &___m_Faces_10; }
	inline void set_m_Faces_10(FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* value)
	{
		___m_Faces_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Faces_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedVertices_11() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SharedVertices_11)); }
	inline SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446* get_m_SharedVertices_11() const { return ___m_SharedVertices_11; }
	inline SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446** get_address_of_m_SharedVertices_11() { return &___m_SharedVertices_11; }
	inline void set_m_SharedVertices_11(SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446* value)
	{
		___m_SharedVertices_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedVertices_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheValid_12() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_CacheValid_12)); }
	inline uint8_t get_m_CacheValid_12() const { return ___m_CacheValid_12; }
	inline uint8_t* get_address_of_m_CacheValid_12() { return &___m_CacheValid_12; }
	inline void set_m_CacheValid_12(uint8_t value)
	{
		___m_CacheValid_12 = value;
	}

	inline static int32_t get_offset_of_m_SharedVertexLookup_13() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SharedVertexLookup_13)); }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * get_m_SharedVertexLookup_13() const { return ___m_SharedVertexLookup_13; }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 ** get_address_of_m_SharedVertexLookup_13() { return &___m_SharedVertexLookup_13; }
	inline void set_m_SharedVertexLookup_13(Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * value)
	{
		___m_SharedVertexLookup_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedVertexLookup_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedTextures_14() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SharedTextures_14)); }
	inline SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446* get_m_SharedTextures_14() const { return ___m_SharedTextures_14; }
	inline SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446** get_address_of_m_SharedTextures_14() { return &___m_SharedTextures_14; }
	inline void set_m_SharedTextures_14(SharedVertexU5BU5D_tA8759E8A317FD9C936172CD0D97F0EB294D6B446* value)
	{
		___m_SharedTextures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedTextures_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedTextureLookup_15() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SharedTextureLookup_15)); }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * get_m_SharedTextureLookup_15() const { return ___m_SharedTextureLookup_15; }
	inline Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 ** get_address_of_m_SharedTextureLookup_15() { return &___m_SharedTextureLookup_15; }
	inline void set_m_SharedTextureLookup_15(Dictionary_2_tFE2A3F3BDE1290B85039D74816BB1FE1109BE0F8 * value)
	{
		___m_SharedTextureLookup_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedTextureLookup_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Positions_16() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Positions_16)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Positions_16() const { return ___m_Positions_16; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Positions_16() { return &___m_Positions_16; }
	inline void set_m_Positions_16(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Positions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Textures0_17() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Textures0_17)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_Textures0_17() const { return ___m_Textures0_17; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_Textures0_17() { return &___m_Textures0_17; }
	inline void set_m_Textures0_17(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_Textures0_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Textures0_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Textures2_18() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Textures2_18)); }
	inline List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * get_m_Textures2_18() const { return ___m_Textures2_18; }
	inline List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 ** get_address_of_m_Textures2_18() { return &___m_Textures2_18; }
	inline void set_m_Textures2_18(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * value)
	{
		___m_Textures2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Textures2_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Textures3_19() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Textures3_19)); }
	inline List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * get_m_Textures3_19() const { return ___m_Textures3_19; }
	inline List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 ** get_address_of_m_Textures3_19() { return &___m_Textures3_19; }
	inline void set_m_Textures3_19(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * value)
	{
		___m_Textures3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Textures3_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_20() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Tangents_20)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get_m_Tangents_20() const { return ___m_Tangents_20; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of_m_Tangents_20() { return &___m_Tangents_20; }
	inline void set_m_Tangents_20(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		___m_Tangents_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_21() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Normals_21)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Normals_21() const { return ___m_Normals_21; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Normals_21() { return &___m_Normals_21; }
	inline void set_m_Normals_21(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Normals_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_22() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Colors_22)); }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* get_m_Colors_22() const { return ___m_Colors_22; }
	inline ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399** get_address_of_m_Colors_22() { return &___m_Colors_22; }
	inline void set_m_Colors_22(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* value)
	{
		___m_Colors_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuserCollisionsU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___U3CuserCollisionsU3Ek__BackingField_23)); }
	inline bool get_U3CuserCollisionsU3Ek__BackingField_23() const { return ___U3CuserCollisionsU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CuserCollisionsU3Ek__BackingField_23() { return &___U3CuserCollisionsU3Ek__BackingField_23; }
	inline void set_U3CuserCollisionsU3Ek__BackingField_23(bool value)
	{
		___U3CuserCollisionsU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_m_UnwrapParameters_24() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_UnwrapParameters_24)); }
	inline UnwrapParameters_t51C9B402FCE4207336FFD5FFC069DF1C43375B13 * get_m_UnwrapParameters_24() const { return ___m_UnwrapParameters_24; }
	inline UnwrapParameters_t51C9B402FCE4207336FFD5FFC069DF1C43375B13 ** get_address_of_m_UnwrapParameters_24() { return &___m_UnwrapParameters_24; }
	inline void set_m_UnwrapParameters_24(UnwrapParameters_t51C9B402FCE4207336FFD5FFC069DF1C43375B13 * value)
	{
		___m_UnwrapParameters_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnwrapParameters_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreserveMeshAssetOnDestroy_25() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_PreserveMeshAssetOnDestroy_25)); }
	inline bool get_m_PreserveMeshAssetOnDestroy_25() const { return ___m_PreserveMeshAssetOnDestroy_25; }
	inline bool* get_address_of_m_PreserveMeshAssetOnDestroy_25() { return &___m_PreserveMeshAssetOnDestroy_25; }
	inline void set_m_PreserveMeshAssetOnDestroy_25(bool value)
	{
		___m_PreserveMeshAssetOnDestroy_25 = value;
	}

	inline static int32_t get_offset_of_assetGuid_26() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___assetGuid_26)); }
	inline String_t* get_assetGuid_26() const { return ___assetGuid_26; }
	inline String_t** get_address_of_assetGuid_26() { return &___assetGuid_26; }
	inline void set_assetGuid_26(String_t* value)
	{
		___assetGuid_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetGuid_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mesh_27() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_Mesh_27)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_27() const { return ___m_Mesh_27; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_27() { return &___m_Mesh_27; }
	inline void set_m_Mesh_27(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_MeshRenderer_28() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_MeshRenderer_28)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_m_MeshRenderer_28() const { return ___m_MeshRenderer_28; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_m_MeshRenderer_28() { return &___m_MeshRenderer_28; }
	inline void set_m_MeshRenderer_28(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___m_MeshRenderer_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshRenderer_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_MeshFilter_29() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_MeshFilter_29)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_MeshFilter_29() const { return ___m_MeshFilter_29; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_MeshFilter_29() { return &___m_MeshFilter_29; }
	inline void set_m_MeshFilter_29(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_MeshFilter_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshFilter_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsSelectable_35() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_IsSelectable_35)); }
	inline bool get_m_IsSelectable_35() const { return ___m_IsSelectable_35; }
	inline bool* get_address_of_m_IsSelectable_35() { return &___m_IsSelectable_35; }
	inline void set_m_IsSelectable_35(bool value)
	{
		___m_IsSelectable_35 = value;
	}

	inline static int32_t get_offset_of_m_SelectedFaces_36() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedFaces_36)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_SelectedFaces_36() const { return ___m_SelectedFaces_36; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_SelectedFaces_36() { return &___m_SelectedFaces_36; }
	inline void set_m_SelectedFaces_36(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_SelectedFaces_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedFaces_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedEdges_37() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedEdges_37)); }
	inline EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78* get_m_SelectedEdges_37() const { return ___m_SelectedEdges_37; }
	inline EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78** get_address_of_m_SelectedEdges_37() { return &___m_SelectedEdges_37; }
	inline void set_m_SelectedEdges_37(EdgeU5BU5D_t2C102803B5388F44CCD07298D563760AC30BAA78* value)
	{
		___m_SelectedEdges_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedEdges_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedVertices_38() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedVertices_38)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_SelectedVertices_38() const { return ___m_SelectedVertices_38; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_SelectedVertices_38() { return &___m_SelectedVertices_38; }
	inline void set_m_SelectedVertices_38(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_SelectedVertices_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedVertices_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedCacheDirty_39() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedCacheDirty_39)); }
	inline bool get_m_SelectedCacheDirty_39() const { return ___m_SelectedCacheDirty_39; }
	inline bool* get_address_of_m_SelectedCacheDirty_39() { return &___m_SelectedCacheDirty_39; }
	inline void set_m_SelectedCacheDirty_39(bool value)
	{
		___m_SelectedCacheDirty_39 = value;
	}

	inline static int32_t get_offset_of_m_SelectedSharedVerticesCount_40() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedSharedVerticesCount_40)); }
	inline int32_t get_m_SelectedSharedVerticesCount_40() const { return ___m_SelectedSharedVerticesCount_40; }
	inline int32_t* get_address_of_m_SelectedSharedVerticesCount_40() { return &___m_SelectedSharedVerticesCount_40; }
	inline void set_m_SelectedSharedVerticesCount_40(int32_t value)
	{
		___m_SelectedSharedVerticesCount_40 = value;
	}

	inline static int32_t get_offset_of_m_SelectedCoincidentVertexCount_41() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedCoincidentVertexCount_41)); }
	inline int32_t get_m_SelectedCoincidentVertexCount_41() const { return ___m_SelectedCoincidentVertexCount_41; }
	inline int32_t* get_address_of_m_SelectedCoincidentVertexCount_41() { return &___m_SelectedCoincidentVertexCount_41; }
	inline void set_m_SelectedCoincidentVertexCount_41(int32_t value)
	{
		___m_SelectedCoincidentVertexCount_41 = value;
	}

	inline static int32_t get_offset_of_m_SelectedSharedVertices_42() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedSharedVertices_42)); }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * get_m_SelectedSharedVertices_42() const { return ___m_SelectedSharedVertices_42; }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E ** get_address_of_m_SelectedSharedVertices_42() { return &___m_SelectedSharedVertices_42; }
	inline void set_m_SelectedSharedVertices_42(HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * value)
	{
		___m_SelectedSharedVertices_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSharedVertices_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedCoincidentVertices_43() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F, ___m_SelectedCoincidentVertices_43)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_SelectedCoincidentVertices_43() const { return ___m_SelectedCoincidentVertices_43; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_SelectedCoincidentVertices_43() { return &___m_SelectedCoincidentVertices_43; }
	inline void set_m_SelectedCoincidentVertices_43(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_SelectedCoincidentVertices_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedCoincidentVertices_43), (void*)value);
	}
};

struct ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_StaticFields
{
public:
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::meshWillBeDestroyed
	Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * ___meshWillBeDestroyed_30;
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::componentWillBeDestroyed
	Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * ___componentWillBeDestroyed_31;
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::componentHasBeenReset
	Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * ___componentHasBeenReset_32;
	// System.Action`1<UnityEngine.ProBuilder.ProBuilderMesh> UnityEngine.ProBuilder.ProBuilderMesh::elementSelectionChanged
	Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * ___elementSelectionChanged_33;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::s_CachedHashSet
	HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * ___s_CachedHashSet_34;

public:
	inline static int32_t get_offset_of_meshWillBeDestroyed_30() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_StaticFields, ___meshWillBeDestroyed_30)); }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * get_meshWillBeDestroyed_30() const { return ___meshWillBeDestroyed_30; }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B ** get_address_of_meshWillBeDestroyed_30() { return &___meshWillBeDestroyed_30; }
	inline void set_meshWillBeDestroyed_30(Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * value)
	{
		___meshWillBeDestroyed_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWillBeDestroyed_30), (void*)value);
	}

	inline static int32_t get_offset_of_componentWillBeDestroyed_31() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_StaticFields, ___componentWillBeDestroyed_31)); }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * get_componentWillBeDestroyed_31() const { return ___componentWillBeDestroyed_31; }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B ** get_address_of_componentWillBeDestroyed_31() { return &___componentWillBeDestroyed_31; }
	inline void set_componentWillBeDestroyed_31(Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * value)
	{
		___componentWillBeDestroyed_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentWillBeDestroyed_31), (void*)value);
	}

	inline static int32_t get_offset_of_componentHasBeenReset_32() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_StaticFields, ___componentHasBeenReset_32)); }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * get_componentHasBeenReset_32() const { return ___componentHasBeenReset_32; }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B ** get_address_of_componentHasBeenReset_32() { return &___componentHasBeenReset_32; }
	inline void set_componentHasBeenReset_32(Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * value)
	{
		___componentHasBeenReset_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentHasBeenReset_32), (void*)value);
	}

	inline static int32_t get_offset_of_elementSelectionChanged_33() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_StaticFields, ___elementSelectionChanged_33)); }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * get_elementSelectionChanged_33() const { return ___elementSelectionChanged_33; }
	inline Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B ** get_address_of_elementSelectionChanged_33() { return &___elementSelectionChanged_33; }
	inline void set_elementSelectionChanged_33(Action_1_t23688F04CC667E0008B3CFBC95A082E300FCA92B * value)
	{
		___elementSelectionChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementSelectionChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_CachedHashSet_34() { return static_cast<int32_t>(offsetof(ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_StaticFields, ___s_CachedHashSet_34)); }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * get_s_CachedHashSet_34() const { return ___s_CachedHashSet_34; }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E ** get_address_of_s_CachedHashSet_34() { return &___s_CachedHashSet_34; }
	inline void set_s_CachedHashSet_34(HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * value)
	{
		___s_CachedHashSet_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CachedHashSet_34), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ProBuilder.Face[]
struct FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * m_Items[1];

public:
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73_gshared (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * __this, const RuntimeMethod* method);
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358_gshared (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0210C608EEA89F5020B68BD78AB713FAC04086AF_gshared (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Enumerable_ToArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mC2832BB83AC3F04B94E13C7D0A19FF4C39600473_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m263AF496E7EB4748C16C752FDFB519059869BA6A_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m0029A36C8D86E932630BC33564C35D215CD25761_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m5E23D87996E72EB5D7B135B05E6697D62D3F7511_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m0F485B0073414C5DB3166F7FCB2C0BFA9517251E_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB30D7275D69D9EFB8C6645D8D4494778FF64AEE7_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Normalize_m99A2CC6E4CB65C1B9231F898D5B7A12B6D72E722 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mA36E513B2931F17ACBF26D928674D3DDEDF5C810 (float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// ProBuilder.Examples.ViewTool ProBuilder.Examples.CameraMotion::get_cameraState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t CameraMotion_get_cameraState_mD18E2DC5B6FDA656DB71942DE74D5C7E6A20684F_inline (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mB477DFECD5D4110B1F654CCC1F3AF22924B92C14 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___image1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m6E12F740DD96F03F15AC324D6426C475A48506D0 (EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean ProBuilder.Examples.CameraMotion::CheckMouseOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_CheckMouseOverGUI_mF4070CEF1587D344C6449FD3BCE41A910173344C (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::set_cameraState(ProBuilder.Examples.ViewTool)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F_inline (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::CalcSignedMouseDelta(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcSignedMouseDelta_m65E2B18B7599165351CF73E4E507710561C43782 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m5072228CE6251E7C754F227BA330F9ADA95C1495 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::CalculateCameraPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraMotion_CalculateCameraPosition_m7093A872508081A1222A79A1CB8CFD9B97A2AF30 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::ScreenToWorldDistance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_ScreenToWorldDistance_mAAD89338CF37BD16D2D759E9F956ECAA2F0F4FB7 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, float ___screenDistance0, float ___distanceFromCamera1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::CalcMinDistanceToBounds(UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcMinDistanceToBounds_mC4A1B0A1C3D50986B51EEC289089F70F71ADE768 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam0, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_mD9CD5A2BB6B63D576FB0D1DFA45B5EFEEABD1308 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target0, float ___distance1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.CameraMotion::CopySign(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CopySign_m4659966370DD7857957720DE49B6AC0F86B14D57 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.ProBuilder.ProBuilderMesh>()
inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * GameObject_AddComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m90FCA1BD9BAA79335B9B69FA10B77945A33B131C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// UnityEngine.ProBuilder.ActionResult UnityEngine.ProBuilder.MeshOperations.AppendElements::CreateShapeFromPolygon(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IList`1<UnityEngine.Vector3>,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionResult_t3814DA82129D9B127F17B8002BBFF17E60A7C726 * AppendElements_CreateShapeFromPolygon_m83B3235E9A605F4CE93B24DC4B5317B1D1D94ECA (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, RuntimeObject* ___points1, float ___extrude2, bool ___flipNormals3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.BuiltinMaterials::get_geometryShadersSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinMaterials_get_geometryShadersSupported_m4FB89A31A7C6D581A16BF3CC772C88700E0A16B5 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Init_mBDBBACB9AB8EBE21004EE2FA8DD1D1C9DB8AA5E0 (const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m7312E713FF797BA7EC27D54855F354F7B7EF7101 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, RuntimeObject* ___faces1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method);
// UnityEngine.Material ProBuilder.Examples.Handles::get_faceMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Handles_get_faceMaterial_mE0D9EAB40B2C0029F9B6E963C4D11A9065923392 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_m4BE0A8FCBF158C83522AA2F69118A2FE33683918 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___pass0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mE47A23F3A906899E88AC525FFE2C3C2BD834DFF9 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m9A48BD6A2DA850D54250EF638DF5EC61F83E293C (int32_t ___mode0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<UnityEngine.Vector3> UnityEngine.ProBuilder.ProBuilderMesh::get_positions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProBuilderMesh_get_positions_mD7DC4E56D757FE47C79C136D07370DDE3C77D93B (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> UnityEngine.ProBuilder.Face::get_indexes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * Face_get_indexes_m893AE969377981492B98539BB9A216DD037B9924 (Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73 (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73_gshared)(__this, method);
}
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32)
inline int32_t ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358 (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 *, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m7EDEB843BD9F7E00BD838FDE074B4688C55C0755 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_mCAA6BC17D97358A4BC329E789AF2CA26C1204112 (const RuntimeMethod* method);
// UnityEngine.Material ProBuilder.Examples.Handles::get_edgeMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550 (const RuntimeMethod* method);
// UnityEngine.ProBuilder.ProBuilderMesh UnityEngine.ProBuilder.ShapeGenerator::GeneratePlane(UnityEngine.ProBuilder.PivotLocation,System.Single,System.Single,System.Int32,System.Int32,UnityEngine.ProBuilder.Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ShapeGenerator_GeneratePlane_m61DE53DC441D351AC2DC6C206FE304948FBC831C (int32_t ___pivotType0, float ___width1, float ___height2, int32_t ___widthCuts3, int32_t ___heightCuts4, int32_t ___axis5, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::ToMesh(UnityEngine.MeshTopology)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_ToMesh_m6122B859032D461E94A5D74537492B3D94AD08B4 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * __this, int32_t ___preferredTopology0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::Refresh(UnityEngine.ProBuilder.RefreshMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_Refresh_m078963E6C4A55F9F0CB4A9D6C383096497A1B414 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * __this, int32_t ___mask0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::SetFaceColor(UnityEngine.ProBuilder.Face,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_SetFaceColor_m5DDF1A3FC94595A7D40E574B0D86820A42ADE5BA (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * __this, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color1, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> UnityEngine.ProBuilder.ProBuilderMesh::get_faces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProBuilderMesh_get_faces_mC886B29752D3A4A627B3DA665CC1255B0DF5FD2B (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 ProBuilder.Examples.HighlightNearestFace::FaceCenter(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  HighlightNearestFace_FaceCenter_mFACDF10870C815E78AECF3CCEF8D45A17CDFFFE6 (HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301 * __this, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___pb0, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> UnityEngine.ProBuilder.Face::get_distinctIndexes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * Face_get_distinctIndexes_mB2C9FA6A49FA179AEDF46C4A7568211B958EE027 (Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0210C608EEA89F5020B68BD78AB713FAC04086AF (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0210C608EEA89F5020B68BD78AB713FAC04086AF_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.MeshOperations.MeshImporter::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshImporter__ctor_mF01E229ADA6407ED0D06E6C824345AED5C97BDD7 (MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.MeshOperations.MeshImporter::Import(UnityEngine.ProBuilder.MeshOperations.MeshImportSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshImporter_Import_mB0D7F5A0C599169ADC77BE6E67EFF0734727949D (MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC * __this, MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086 * ___importSettings0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m3AEBC82AB71D4F9498F6E254174BEBA8372834B4 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_mFE8D12C35148063EB287951C7BFFB0328AAA7C5D (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ProBuilder.ProBuilderMesh>()
inline ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * GameObject_GetComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m0EBF957C0024FE39BD01BD5D0585F98FEE7FA32D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.ProBuilder.Face[] UnityEngine.ProBuilder.MeshOperations.ExtrudeElements::Extrude(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>,UnityEngine.ProBuilder.ExtrudeMethod,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* ExtrudeElements_Extrude_m1A071AA63489BACB870B7E6794EBC88BD8FC1C65 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, RuntimeObject* ___faces1, int32_t ___method2, float ___distance3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ProBuilder.Examples.CameraMotion>()
inline CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * Component_GetComponent_TisCameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670_m7C58F5E0B561D41C7717E55414F9C924C1DE822E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m7CAE962B355F00AB2868577DC302A1FA80939C50 (CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// ProBuilder.Examples.MeshAndFace ProBuilder.Examples.Utility::PickFace(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  Utility_PickFace_m5A5C6BA199F31215A62B810DA882264CE36BCA51 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mousePosition1, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_HandleInput_m7D4DF86F27101DBC65FEC16460827B94E1755BBF (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method);
// System.Boolean ProBuilder.Examples.CameraMotion::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_get_active_m4369179355B546F18C9C9555248BA47039BA1B3F (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m9A1F2998EFD52D7854E9910F7D2B96DD8B4C64F6 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// System.Void ProBuilder.Examples.Handles::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_DrawLine_m6C9438C8D49A09F8E3A6A0C7C0E20BCF4EFE717C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::DoLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_DoLateUpdate_mE79EBF2633A67CB5860BC7A85FB753DA6B7D9D19 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::BeginDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_BeginDrag_m0C262DA4E810FDDACF111075C6DD2A300323FB8F (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::EndDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_EndDrag_mE93C48D15326020720726D08C71209B989F58CBF (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor::UpdateDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_UpdateDrag_m9BAEDC1F0B6EC4329A70C41FB8017AE27E531D69 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193 (int32_t ___key0, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_m507450B006B76DB81A48FCA5CAC2ED21C559065F (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::Average(System.Collections.Generic.IList`1<UnityEngine.Vector3>,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Math_Average_mFF77E5EB5FADED069F28C2AE70534B8D327F0B51 (RuntimeObject* ___array0, RuntimeObject* ___indexes1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::Normal(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Math_Normal_mE3EAC434A22AAD5A4F5648730C004B336CE3ABBE (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor/MeshState::.ctor(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshState__ctor_m86FE69747C8DAFD9113D6E1E69642320948BA347 (MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * __this, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, RuntimeObject* ___selectedIndices1, const RuntimeMethod* method);
// System.Single ProBuilder.Examples.MeshEditor::GetDragDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshEditor_GetDragDistance_m8F25C0885FFC4372F5156B161B52A5A70D1BD463 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformDirection_m6F0513F2EC19C204F2077E3C68DD1D45317CB5F2 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.ProBuilder.ProBuilderMesh::set_positions(System.Collections.Generic.IList`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProBuilderMesh_set_positions_mEB1534FC7C52F217685A2DFEFF114627A980038E (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ProBuilder.Math::GetNearestPointRayRay(UnityEngine.Ray,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Math_GetNearestPointRayRay_mD0BB8AECE3792FD2345353646FDE7B2F61CD55F1 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___a0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Math::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_m2BC1E60FB868E64FEF4B034CF052AC276BB0D5AB (float ___value0, const RuntimeMethod* method);
// System.Void ProBuilder.Examples.MeshEditor/DragState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragState__ctor_mE96546FB42F03DE84CE17FA005307BFA14E8BCF5 (DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Enumerable_ToArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mC2832BB83AC3F04B94E13C7D0A19FF4C39600473 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mC2832BB83AC3F04B94E13C7D0A19FF4C39600473_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<System.Int32> UnityEngine.ProBuilder.ProBuilderMesh::GetCoincidentVertices(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ProBuilderMesh_GetCoincidentVertices_mD8055F764A941DEBC3E312657363F1334017FCAE (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * __this, RuntimeObject* ___vertices0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Add(!0)
inline bool HashSet_1_Add_m2A36D580488C76C3EB154F88581B059A8E1F5BFB (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * __this, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B *, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F *, const RuntimeMethod*))HashSet_1_Add_m263AF496E7EB4748C16C752FDFB519059869BA6A_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Contains(!0)
inline bool HashSet_1_Contains_mB8A5C989AC06C44519E2EB17F0D5CFE2184909F8 (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * __this, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B *, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F *, const RuntimeMethod*))HashSet_1_Contains_m0029A36C8D86E932630BC33564C35D215CD25761_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Remove(!0)
inline bool HashSet_1_Remove_mA6444014C12032BC5FFAD9021652A6E552AAB18E (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * __this, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B *, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F *, const RuntimeMethod*))HashSet_1_Remove_m5E23D87996E72EB5D7B135B05E6697D62D3F7511_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::Clear()
inline void HashSet_1_Clear_m43B15458020CAE5E6F134C11D70C7AEC364FA2F4 (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B *, const RuntimeMethod*))HashSet_1_Clear_m0F485B0073414C5DB3166F7FCB2C0BFA9517251E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.ProBuilderMesh>::.ctor()
inline void HashSet_1__ctor_m89F23152662FA8A337393D4EEEE11BFABB804C19 (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B *, const RuntimeMethod*))HashSet_1__ctor_mB30D7275D69D9EFB8C6645D8D4494778FF64AEE7_gshared)(__this, method);
}
// UnityEngine.Mesh ProBuilder.Examples.SimpleGrid::GridMesh(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * SimpleGrid_GridMesh_m393FC56D00DF98719C28B99B14C6A32B732029AD (SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7 * __this, int32_t ___lineCount0, float ___scale1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m4054D319A67DAAA25A794D67AD37278A84406589 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_mAD794C2BB87790EAE979561B799ADD2EE1C65593 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m18C0006CF36C43FF16B1917099E2970C2D4145BD (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m56E4B52315669FBDA89DC9C550AC89EEE8A4E7C8 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject ProBuilder.Examples.Utility::PickObject(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Utility_PickObject_m7E3BED93B6F2641AF8994631DD720F391F1FDABA (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mousePosition1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Face UnityEngine.ProBuilder.SelectionPicker::PickFace(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * SelectionPicker_PickFace_m9380B19D017667BCC9ED56D385339AFA4E4F8481 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mousePosition1, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___pickable2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void ProBuilder.Examples.CameraControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls_Start_m2D30F20784E153A9A2693D40D6274D2A09AB8B8F (CameraControls_tC23566C2323FFF00F533939002902397F8EF4895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraControls_Start_m2D30F20784E153A9A2693D40D6274D2A09AB8B8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Distance = Vector3.Distance(transform.position, Vector3.zero);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_3 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_Distance_12(L_3);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraControls::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls_LateUpdate_m34603F672265D5D6F393E3C71A90F1D4E6F53313 (CameraControls_tC23566C2323FFF00F533939002902397F8EF4895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraControls_LateUpdate_m34603F672265D5D6F393E3C71A90F1D4E6F53313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// Vector3 eulerRotation = transform.localRotation.eulerAngles;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// eulerRotation.z = 0f;
		(&V_0)->set_z_4((0.0f));
		// if( Input.GetMouseButton(0) )
		bool L_3 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008a;
		}
	}
	{
		// float rot_x = Input.GetAxis(k_InputMouseHorizontal);
		float L_4 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		V_2 = L_4;
		// float rot_y = -Input.GetAxis(k_InputMouseVertical);
		float L_5 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		V_3 = ((-L_5));
		// eulerRotation.x += rot_y * orbitSpeed;
		float* L_6 = (&V_0)->get_address_of_x_2();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = V_3;
		float L_10 = __this->get_orbitSpeed_9();
		*((float*)L_7) = (float)((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10))));
		// eulerRotation.y += rot_x * orbitSpeed;
		float* L_11 = (&V_0)->get_address_of_y_3();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = V_2;
		float L_15 = __this->get_orbitSpeed_9();
		*((float*)L_12) = (float)((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15))));
		// m_LookDirection.x = rot_x;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_16 = __this->get_address_of_m_LookDirection_13();
		float L_17 = V_2;
		L_16->set_x_0(L_17);
		// m_LookDirection.y = rot_y;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_18 = __this->get_address_of_m_LookDirection_13();
		float L_19 = V_3;
		L_18->set_y_1(L_19);
		// m_LookDirection.Normalize();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_20 = __this->get_address_of_m_LookDirection_13();
		Vector2_Normalize_m99A2CC6E4CB65C1B9231F898D5B7A12B6D72E722((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_20, /*hidden argument*/NULL);
		// }
		goto IL_00e0;
	}

IL_008a:
	{
		// eulerRotation.y += Time.deltaTime * idleRotation * m_LookDirection.x;
		float* L_21 = (&V_0)->get_address_of_y_3();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_25 = __this->get_idleRotation_11();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_26 = __this->get_address_of_m_LookDirection_13();
		float L_27 = L_26->get_x_0();
		*((float*)L_22) = (float)((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), (float)L_27))));
		// eulerRotation.x += Time.deltaTime * Mathf.PerlinNoise(Time.time, 0f) * idleRotation * m_LookDirection.y;
		float* L_28 = (&V_0)->get_address_of_x_2();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_32 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_33 = Mathf_PerlinNoise_mA36E513B2931F17ACBF26D928674D3DDEDF5C810(L_32, (0.0f), /*hidden argument*/NULL);
		float L_34 = __this->get_idleRotation_11();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_35 = __this->get_address_of_m_LookDirection_13();
		float L_36 = L_35->get_y_1();
		*((float*)L_29) = (float)((float)il2cpp_codegen_add((float)L_30, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_33)), (float)L_34)), (float)L_36))));
	}

IL_00e0:
	{
		// transform.localRotation = Quaternion.Euler( eulerRotation );
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_37, L_39, /*hidden argument*/NULL);
		// transform.position = transform.localRotation * (Vector3.forward * -m_Distance);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		float L_44 = __this->get_m_Distance_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_43, ((-L_44)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_42, L_45, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_40, L_46, /*hidden argument*/NULL);
		// if( Input.GetAxis(k_InputMouseScroll) != 0f )
		float L_47 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31, /*hidden argument*/NULL);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_01b3;
		}
	}
	{
		// float delta = Input.GetAxis(k_InputMouseScroll);
		float L_48 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31, /*hidden argument*/NULL);
		V_4 = L_48;
		// m_Distance -= delta * (m_Distance/k_MaxCameraDistance) * (zoomSpeed * 1000) * Time.deltaTime;
		float L_49 = __this->get_m_Distance_12();
		float L_50 = V_4;
		float L_51 = __this->get_m_Distance_12();
		float L_52 = __this->get_zoomSpeed_10();
		float L_53 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_m_Distance_12(((float)il2cpp_codegen_subtract((float)L_49, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_50, (float)((float)((float)L_51/(float)(40.0f))))), (float)((float)il2cpp_codegen_multiply((float)L_52, (float)(1000.0f))))), (float)L_53)))));
		// m_Distance = Mathf.Clamp(m_Distance, k_MinCameraDistance, k_MaxCameraDistance);
		float L_54 = __this->get_m_Distance_12();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_55 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_54, (10.0f), (40.0f), /*hidden argument*/NULL);
		__this->set_m_Distance_12(L_55);
		// transform.position = transform.localRotation * (Vector3.forward * -m_Distance);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_58 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		float L_60 = __this->get_m_Distance_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_59, ((-L_60)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_58, L_61, /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_56, L_62, /*hidden argument*/NULL);
	}

IL_01b3:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControls__ctor_m4DE8DD4FEB0CDA7AB03F2338585CDA1B4C4CECD4 (CameraControls_tC23566C2323FFF00F533939002902397F8EF4895 * __this, const RuntimeMethod* method)
{
	{
		// public float orbitSpeed = 6f;
		__this->set_orbitSpeed_9((6.0f));
		// public float zoomSpeed = .8f;
		__this->set_zoomSpeed_10((0.8f));
		// public float idleRotation = 1f;
		__this->set_idleRotation_11((1.0f));
		// Vector2 m_LookDirection = new Vector2(.8f, .2f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.8f), (0.2f), /*hidden argument*/NULL);
		__this->set_m_LookDirection_13(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// ProBuilder.Examples.ViewTool ProBuilder.Examples.CameraMotion::get_cameraState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraMotion_get_cameraState_mD18E2DC5B6FDA656DB71942DE74D5C7E6A20684F (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = __this->get_U3CcameraStateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::set_cameraState(ProBuilder.Examples.ViewTool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcameraStateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Awake_m0BD83A61F2F8845B92B4163F690EF9A20E940028 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_Awake_m0BD83A61F2F8845B92B4163F690EF9A20E940028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CameraComponent = GetComponent<Camera>();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var);
		__this->set_m_CameraComponent_25(L_0);
		// m_Transform = GetComponent<Transform>();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075(__this, /*hidden argument*/Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075_RuntimeMethod_var);
		__this->set_m_Transform_26(L_1);
		// m_ScenePivot = m_Transform.forward * m_DistanceToCamera;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_m_Transform_26();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_m_DistanceToCamera_28();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_5);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_OnGUI_mB07C81883B53CC33B167418237B33417988E6460 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_OnGUI_mB07C81883B53CC33B167418237B33417988E6460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float screenHeight = Screen.height;
		int32_t L_0 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		V_0 = (((float)((float)L_0)));
		// m_MouseCursorRect.x = Input.mousePosition.x - 16;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_1 = __this->get_address_of_m_MouseCursorRect_30();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_1, ((float)il2cpp_codegen_subtract((float)L_3, (float)(16.0f))), /*hidden argument*/NULL);
		// m_MouseCursorRect.y = (screenHeight - Input.mousePosition.y) - 16;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_4 = __this->get_address_of_m_MouseCursorRect_30();
		float L_5 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_4, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)(16.0f))), /*hidden argument*/NULL);
		// m_ScreenCenterRect.x = Screen.width/2-32;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_8 = __this->get_address_of_m_ScreenCenterRect_31();
		int32_t L_9 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_8, (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)((int32_t)32)))))), /*hidden argument*/NULL);
		// m_ScreenCenterRect.y = screenHeight/2-32;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_10 = __this->get_address_of_m_ScreenCenterRect_31();
		float L_11 = V_0;
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_10, ((float)il2cpp_codegen_subtract((float)((float)((float)L_11/(float)(2.0f))), (float)(32.0f))), /*hidden argument*/NULL);
		// Cursor.visible = cameraState == ViewTool.None;
		int32_t L_12 = CameraMotion_get_cameraState_mD18E2DC5B6FDA656DB71942DE74D5C7E6A20684F_inline(__this, /*hidden argument*/NULL);
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if(cameraState != ViewTool.None)
		int32_t L_13 = CameraMotion_get_cameraState_mD18E2DC5B6FDA656DB71942DE74D5C7E6A20684F_inline(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ea;
		}
	}
	{
		// switch(cameraState)
		int32_t L_14 = CameraMotion_get_cameraState_mD18E2DC5B6FDA656DB71942DE74D5C7E6A20684F_inline(__this, /*hidden argument*/NULL);
		V_1 = L_14;
		int32_t L_15 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00a3;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00c7;
			}
			case 3:
			{
				goto IL_00d9;
			}
		}
	}
	{
		return;
	}

IL_00a3:
	{
		// GUI.Label(m_MouseCursorRect, orbitCursor);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_16 = __this->get_m_MouseCursorRect_30();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_17 = __this->get_orbitCursor_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_mB477DFECD5D4110B1F654CCC1F3AF22924B92C14(L_16, L_17, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b5:
	{
		// GUI.Label(m_MouseCursorRect, panCursor);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_18 = __this->get_m_MouseCursorRect_30();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = __this->get_panCursor_5();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_mB477DFECD5D4110B1F654CCC1F3AF22924B92C14(L_18, L_19, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c7:
	{
		// GUI.Label(m_MouseCursorRect, dollyCursor);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_20 = __this->get_m_MouseCursorRect_30();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = __this->get_dollyCursor_7();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_mB477DFECD5D4110B1F654CCC1F3AF22924B92C14(L_20, L_21, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00d9:
	{
		// GUI.Label(m_MouseCursorRect, lookCursor);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_22 = __this->get_m_MouseCursorRect_30();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_23 = __this->get_lookCursor_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_mB477DFECD5D4110B1F654CCC1F3AF22924B92C14(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Boolean ProBuilder.Examples.CameraMotion::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_get_active_m4369179355B546F18C9C9555248BA47039BA1B3F (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	{
		// get { return cameraState != ViewTool.None || m_UseEvent || Input.GetKey(KeyCode.LeftAlt); }
		int32_t L_0 = CameraMotion_get_cameraState_mD18E2DC5B6FDA656DB71942DE74D5C7E6A20684F_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->get_m_UseEvent_24();
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)308), /*hidden argument*/NULL);
		return L_2;
	}

IL_001b:
	{
		return (bool)1;
	}
}
// System.Boolean ProBuilder.Examples.CameraMotion::CheckMouseOverGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMotion_CheckMouseOverGUI_mF4070CEF1587D344C6449FD3BCE41A910173344C (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_CheckMouseOverGUI_mF4070CEF1587D344C6449FD3BCE41A910173344C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return EventSystem.current == null || !EventSystem.current.IsPointerOverGameObject();
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_2 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = EventSystem_IsPointerOverGameObject_m6E12F740DD96F03F15AC324D6426C475A48506D0(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001b:
	{
		return (bool)1;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::DoLateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_DoLateUpdate_mE79EBF2633A67CB5860BC7A85FB753DA6B7D9D19 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_DoLateUpdate_mE79EBF2633A67CB5860BC7A85FB753DA6B7D9D19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if(Input.GetMouseButtonUp(0) || Input.GetMouseButtonUp(1) || Input.GetMouseButtonUp(2))
		bool L_0 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(2, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		// m_CurrentActionValid = true;
		__this->set_m_CurrentActionValid_32((bool)1);
		// m_UseEvent = false;
		__this->set_m_UseEvent_24((bool)0);
		// }
		goto IL_004c;
	}

IL_0028:
	{
		// else if(Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1) || Input.GetMouseButtonDown(2))
		bool L_3 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		bool L_4 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		bool L_5 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(2, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}

IL_0040:
	{
		// m_CurrentActionValid = CheckMouseOverGUI();
		bool L_6 = CameraMotion_CheckMouseOverGUI_mF4070CEF1587D344C6449FD3BCE41A910173344C(__this, /*hidden argument*/NULL);
		__this->set_m_CurrentActionValid_32(L_6);
	}

IL_004c:
	{
		// cameraState = ViewTool.None;
		CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F_inline(__this, 0, /*hidden argument*/NULL);
		// if(m_Zooming)
		bool L_7 = __this->get_m_Zooming_33();
		if (!L_7)
		{
			goto IL_00b7;
		}
	}
	{
		// transform.position = Vector3.Lerp(m_PreviousPosition, m_TargetPosition, (m_ZoomProgress += Time.deltaTime)/zoomSpeed);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = __this->get_m_PreviousPosition_35();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_m_TargetPosition_36();
		float L_11 = __this->get_m_ZoomProgress_34();
		float L_12 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_13 = ((float)il2cpp_codegen_add((float)L_11, (float)L_12));
		V_1 = L_13;
		__this->set_m_ZoomProgress_34(L_13);
		float L_14 = V_1;
		float L_15 = __this->get_zoomSpeed_23();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_9, L_10, ((float)((float)L_14/(float)L_15)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_8, L_16, /*hidden argument*/NULL);
		// if( Vector3.Distance(transform.position, m_TargetPosition) < .1f) m_Zooming = false;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = __this->get_m_TargetPosition_36();
		float L_20 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_18, L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) < ((float)(0.1f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// if( Vector3.Distance(transform.position, m_TargetPosition) < .1f) m_Zooming = false;
		__this->set_m_Zooming_33((bool)0);
	}

IL_00b7:
	{
		// if( (Input.GetAxis(k_InputMouseScrollwheel) != 0f || (Input.GetMouseButton(k_RightMouse) && Input.GetKey(KeyCode.LeftAlt))) && CheckMouseOverGUI())
		float L_21 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31, /*hidden argument*/NULL);
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_00e2;
		}
	}
	{
		bool L_22 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_019b;
		}
	}
	{
		bool L_23 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)308), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_019b;
		}
	}

IL_00e2:
	{
		bool L_24 = CameraMotion_CheckMouseOverGUI_mF4070CEF1587D344C6449FD3BCE41A910173344C(__this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_019b;
		}
	}
	{
		// float delta = Input.GetAxis(k_InputMouseScrollwheel);
		float L_25 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31, /*hidden argument*/NULL);
		V_2 = L_25;
		// if( Mathf.Approximately(delta, 0f) )
		float L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_27 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_26, (0.0f), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0127;
		}
	}
	{
		// cameraState = ViewTool.Dolly;
		CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F_inline(__this, 3, /*hidden argument*/NULL);
		// delta = CalcSignedMouseDelta(Input.mousePosition, m_PreviousMousePosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = __this->get_m_PreviousMousePosition_29();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_30, /*hidden argument*/NULL);
		float L_32 = CameraMotion_CalcSignedMouseDelta_m65E2B18B7599165351CF73E4E507710561C43782(L_29, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
	}

IL_0127:
	{
		// m_DistanceToCamera -= delta * (m_DistanceToCamera/k_MaxCameraDistance) * scrollModifier;
		float L_33 = __this->get_m_DistanceToCamera_28();
		float L_34 = V_2;
		float L_35 = __this->get_m_DistanceToCamera_28();
		float L_36 = __this->get_scrollModifier_22();
		__this->set_m_DistanceToCamera_28(((float)il2cpp_codegen_subtract((float)L_33, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_34, (float)((float)((float)L_35/(float)(100.0f))))), (float)L_36)))));
		// m_DistanceToCamera = Mathf.Clamp(m_DistanceToCamera, k_MinCameraDistance, k_MaxCameraDistance);
		float L_37 = __this->get_m_DistanceToCamera_28();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_38 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_37, (1.0f), (100.0f), /*hidden argument*/NULL);
		__this->set_m_DistanceToCamera_28(L_38);
		// m_Transform.position = m_Transform.localRotation * (Vector3.forward * -m_DistanceToCamera) + m_ScenePivot;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = __this->get_m_Transform_26();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = __this->get_m_Transform_26();
		NullCheck(L_40);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		float L_43 = __this->get_m_DistanceToCamera_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_42, ((-L_43)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_41, L_44, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = __this->get_m_ScenePivot_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_39, L_47, /*hidden argument*/NULL);
	}

IL_019b:
	{
		// bool viewTool = true;
		V_0 = (bool)1;
		//             if (!m_CurrentActionValid || (viewTool
		// #if !CONTROLLER
		//                                         && !Input.GetMouseButton(k_LeftMouse)
		//                                         && !Input.GetMouseButton(k_RightMouse)
		//                                         && !Input.GetMouseButton(k_MiddleMouse)
		//                                         && !Input.GetKey(KeyCode.LeftAlt)
		// #endif
		//                 ))
		bool L_48 = __this->get_m_CurrentActionValid_32();
		if (!L_48)
		{
			goto IL_01cc;
		}
	}
	{
		bool L_49 = V_0;
		if (!L_49)
		{
			goto IL_0203;
		}
	}
	{
		bool L_50 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0203;
		}
	}
	{
		bool L_51 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0203;
		}
	}
	{
		bool L_52 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(2, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0203;
		}
	}
	{
		bool L_53 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)308), /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0203;
		}
	}

IL_01cc:
	{
		// Rect screen = new Rect(0, 0, Screen.width, Screen.height);
		int32_t L_54 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_55 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), (0.0f), (0.0f), (((float)((float)L_54))), (((float)((float)L_55))), /*hidden argument*/NULL);
		// if (screen.Contains(Input.mousePosition))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		bool L_57 = Rect_Contains_m5072228CE6251E7C754F227BA330F9ADA95C1495((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_0202;
		}
	}
	{
		// m_PreviousMousePosition = Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		__this->set_m_PreviousMousePosition_29(L_58);
	}

IL_0202:
	{
		// return;
		return;
	}

IL_0203:
	{
		// if (Input.GetMouseButton(k_RightMouse) && !Input.GetKey(KeyCode.LeftAlt)
		// ) 
		bool L_59 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0392;
		}
	}
	{
		bool L_60 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)308), /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_0392;
		}
	}
	{
		// cameraState = ViewTool.Look;
		CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F_inline(__this, 4, /*hidden argument*/NULL);
		// m_UseEvent = true;
		__this->set_m_UseEvent_24((bool)1);
		// float rotX = Input.GetAxis(k_InputMouseHorizontal);
		float L_61 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		V_4 = L_61;
		// float rotY = Input.GetAxis(k_InputMouseVertical);
		float L_62 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		V_5 = L_62;
		// Vector3 eulerRotation = m_Transform.localRotation.eulerAngles;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_63 = __this->get_m_Transform_26();
		NullCheck(L_63);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_64 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_63, /*hidden argument*/NULL);
		V_8 = L_64;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_8), /*hidden argument*/NULL);
		V_6 = L_65;
		// eulerRotation.x -= rotY * lookSpeed;
		float* L_66 = (&V_6)->get_address_of_x_2();
		float* L_67 = L_66;
		float L_68 = *((float*)L_67);
		float L_69 = V_5;
		float L_70 = __this->get_lookSpeed_20();
		*((float*)L_67) = (float)((float)il2cpp_codegen_subtract((float)L_68, (float)((float)il2cpp_codegen_multiply((float)L_69, (float)L_70))));
		// eulerRotation.y += rotX * lookSpeed;
		float* L_71 = (&V_6)->get_address_of_y_3();
		float* L_72 = L_71;
		float L_73 = *((float*)L_72);
		float L_74 = V_4;
		float L_75 = __this->get_lookSpeed_20();
		*((float*)L_72) = (float)((float)il2cpp_codegen_add((float)L_73, (float)((float)il2cpp_codegen_multiply((float)L_74, (float)L_75))));
		// eulerRotation.z = 0f;
		(&V_6)->set_z_4((0.0f));
		// m_Transform.localRotation = Quaternion.Euler(eulerRotation);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_76 = __this->get_m_Transform_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_77 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_78 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_76, L_78, /*hidden argument*/NULL);
		// float speed = moveSpeed * Time.deltaTime;
		float L_79 = __this->get_moveSpeed_19();
		float L_80 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_multiply((float)L_79, (float)L_80));
		// m_Transform.position += m_Transform.forward * speed * Input.GetAxis("Vertical");
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_81 = __this->get_m_Transform_26();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_82 = L_81;
		NullCheck(L_82);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_82, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = __this->get_m_Transform_26();
		NullCheck(L_84);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_84, /*hidden argument*/NULL);
		float L_86 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_85, L_86, /*hidden argument*/NULL);
		float L_88 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_87, L_88, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_83, L_89, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_82, L_90, /*hidden argument*/NULL);
		// m_Transform.position += m_Transform.right * speed * Input.GetAxis("Horizontal");
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_91 = __this->get_m_Transform_26();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_92 = L_91;
		NullCheck(L_92);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_92, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_94 = __this->get_m_Transform_26();
		NullCheck(L_94);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_94, /*hidden argument*/NULL);
		float L_96 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_95, L_96, /*hidden argument*/NULL);
		float L_98 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_97, L_98, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_93, L_99, /*hidden argument*/NULL);
		NullCheck(L_92);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_92, L_100, /*hidden argument*/NULL);
	}

IL_031b:
	try
	{ // begin try (depth: 1)
		// m_Transform.position += m_Transform.up * speed * Input.GetAxis("CameraUp");
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_101 = __this->get_m_Transform_26();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_102 = L_101;
		NullCheck(L_102);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_102, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_104 = __this->get_m_Transform_26();
		NullCheck(L_104);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_105 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_104, /*hidden argument*/NULL);
		float L_106 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_105, L_106, /*hidden argument*/NULL);
		float L_108 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral7B4FDE5B7BB6ECDDD2238D6A3E6AC6ABC48279AA, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_107, L_108, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_103, L_109, /*hidden argument*/NULL);
		NullCheck(L_102);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_102, L_110, /*hidden argument*/NULL);
		// }
		goto IL_0361;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0354;
		throw e;
	}

CATCH_0354:
	{ // begin catch(System.Object)
		// catch
		// Debug.LogWarning(
		//     "CameraUp input is not configured.  Open \"Edit/Project Settings/Input\" and add an input named \"CameraUp\", mapping q and e to Negative and Positive buttons.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralFB001DD30B958B38674700C55667685777D4898F, /*hidden argument*/NULL);
		// }
		goto IL_0361;
	} // end catch (depth: 1)

IL_0361:
	{
		// m_ScenePivot = transform.position + transform.forward * m_DistanceToCamera;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_111 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_111);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_112 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_111, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_113 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_113);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_114 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_113, /*hidden argument*/NULL);
		float L_115 = __this->get_m_DistanceToCamera_28();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_116 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_114, L_115, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_112, L_116, /*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_117);
		// }
		goto IL_0577;
	}

IL_0392:
	{
		// else if(Input.GetKey(KeyCode.LeftAlt) && Input.GetMouseButton(k_LeftMouse))
		bool L_118 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)308), /*hidden argument*/NULL);
		if (!L_118)
		{
			goto IL_048a;
		}
	}
	{
		bool L_119 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		if (!L_119)
		{
			goto IL_048a;
		}
	}
	{
		// cameraState = ViewTool.Orbit;
		CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F_inline(__this, 1, /*hidden argument*/NULL);
		// m_UseEvent = true;
		__this->set_m_UseEvent_24((bool)1);
		// float rotX = Input.GetAxis(k_InputMouseHorizontal);
		float L_120 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		V_9 = L_120;
		// float rotY = -Input.GetAxis(k_InputMouseVertical);
		float L_121 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		V_10 = ((-L_121));
		// Vector3 eulerRotation = transform.localRotation.eulerAngles;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_122 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_122);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_123 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_122, /*hidden argument*/NULL);
		V_8 = L_123;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_8), /*hidden argument*/NULL);
		V_11 = L_124;
		// if ((Mathf.Approximately(eulerRotation.x, 90f) && rotY > 0f) ||
		//     (Mathf.Approximately(eulerRotation.x, 270f) && rotY < 0f))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125 = V_11;
		float L_126 = L_125.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_127 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_126, (90.0f), /*hidden argument*/NULL);
		if (!L_127)
		{
			goto IL_0405;
		}
	}
	{
		float L_128 = V_10;
		if ((((float)L_128) > ((float)(0.0f))))
		{
			goto IL_0421;
		}
	}

IL_0405:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_129 = V_11;
		float L_130 = L_129.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_131 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_130, (270.0f), /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_0428;
		}
	}
	{
		float L_132 = V_10;
		if ((!(((float)L_132) < ((float)(0.0f)))))
		{
			goto IL_0428;
		}
	}

IL_0421:
	{
		// rotY = 0f;
		V_10 = (0.0f);
	}

IL_0428:
	{
		// eulerRotation.x += rotY * orbitSpeed;
		float* L_133 = (&V_11)->get_address_of_x_2();
		float* L_134 = L_133;
		float L_135 = *((float*)L_134);
		float L_136 = V_10;
		float L_137 = __this->get_orbitSpeed_21();
		*((float*)L_134) = (float)((float)il2cpp_codegen_add((float)L_135, (float)((float)il2cpp_codegen_multiply((float)L_136, (float)L_137))));
		// eulerRotation.y += rotX * orbitSpeed;
		float* L_138 = (&V_11)->get_address_of_y_3();
		float* L_139 = L_138;
		float L_140 = *((float*)L_139);
		float L_141 = V_9;
		float L_142 = __this->get_orbitSpeed_21();
		*((float*)L_139) = (float)((float)il2cpp_codegen_add((float)L_140, (float)((float)il2cpp_codegen_multiply((float)L_141, (float)L_142))));
		// eulerRotation.z = 0f;
		(&V_11)->set_z_4((0.0f));
		// transform.localRotation = Quaternion.Euler(eulerRotation);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_143 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_145 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_144, /*hidden argument*/NULL);
		NullCheck(L_143);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_143, L_145, /*hidden argument*/NULL);
		// transform.position = CalculateCameraPosition(m_ScenePivot);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_146 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_147 = __this->get_m_ScenePivot_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_148 = CameraMotion_CalculateCameraPosition_m7093A872508081A1222A79A1CB8CFD9B97A2AF30(__this, L_147, /*hidden argument*/NULL);
		NullCheck(L_146);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_146, L_148, /*hidden argument*/NULL);
		// }
		goto IL_0577;
	}

IL_048a:
	{
		// else if(Input.GetMouseButton(k_MiddleMouse) || (Input.GetMouseButton(k_LeftMouse) && viewTool ) )
		bool L_149 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(2, /*hidden argument*/NULL);
		if (L_149)
		{
			goto IL_049f;
		}
	}
	{
		bool L_150 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		bool L_151 = V_0;
		if (!((int32_t)((int32_t)L_150&(int32_t)L_151)))
		{
			goto IL_0577;
		}
	}

IL_049f:
	{
		// cameraState = ViewTool.Pan;
		CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F_inline(__this, 2, /*hidden argument*/NULL);
		// Vector2 delta = Input.mousePosition - m_PreviousMousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_153 = __this->get_m_PreviousMousePosition_29();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_154 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_152, L_153, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_155 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_154, /*hidden argument*/NULL);
		V_12 = L_155;
		// delta.x = ScreenToWorldDistance(delta.x, m_DistanceToCamera);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_156 = V_12;
		float L_157 = L_156.get_x_0();
		float L_158 = __this->get_m_DistanceToCamera_28();
		float L_159 = CameraMotion_ScreenToWorldDistance_mAAD89338CF37BD16D2D759E9F956ECAA2F0F4FB7(__this, L_157, L_158, /*hidden argument*/NULL);
		(&V_12)->set_x_0(L_159);
		// delta.y = ScreenToWorldDistance(delta.y, m_DistanceToCamera);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_160 = V_12;
		float L_161 = L_160.get_y_1();
		float L_162 = __this->get_m_DistanceToCamera_28();
		float L_163 = CameraMotion_ScreenToWorldDistance_mAAD89338CF37BD16D2D759E9F956ECAA2F0F4FB7(__this, L_161, L_162, /*hidden argument*/NULL);
		(&V_12)->set_y_1(L_163);
		// m_Transform.position -= m_Transform.right * delta.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_164 = __this->get_m_Transform_26();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_165 = L_164;
		NullCheck(L_165);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_166 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_165, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_167 = __this->get_m_Transform_26();
		NullCheck(L_167);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_168 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_167, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_169 = V_12;
		float L_170 = L_169.get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_171 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_168, L_170, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_172 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_166, L_171, /*hidden argument*/NULL);
		NullCheck(L_165);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_165, L_172, /*hidden argument*/NULL);
		// m_Transform.position -= m_Transform.up * delta.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_173 = __this->get_m_Transform_26();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_174 = L_173;
		NullCheck(L_174);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_175 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_174, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_176 = __this->get_m_Transform_26();
		NullCheck(L_176);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_177 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_176, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_178 = V_12;
		float L_179 = L_178.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_180 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_177, L_179, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_181 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_175, L_180, /*hidden argument*/NULL);
		NullCheck(L_174);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_174, L_181, /*hidden argument*/NULL);
		// m_ScenePivot = m_Transform.position + m_Transform.forward * m_DistanceToCamera;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_182 = __this->get_m_Transform_26();
		NullCheck(L_182);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_182, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_184 = __this->get_m_Transform_26();
		NullCheck(L_184);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_185 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_184, /*hidden argument*/NULL);
		float L_186 = __this->get_m_DistanceToCamera_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_187 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_185, L_186, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_183, L_187, /*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_188);
	}

IL_0577:
	{
		// m_PreviousMousePosition = Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		__this->set_m_PreviousMousePosition_29(L_189);
		// }
		return;
	}
}
// UnityEngine.Vector3 ProBuilder.Examples.CameraMotion::CalculateCameraPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraMotion_CalculateCameraPosition_m7093A872508081A1222A79A1CB8CFD9B97A2AF30 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_CalculateCameraPosition_m7093A872508081A1222A79A1CB8CFD9B97A2AF30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return transform.localRotation * (Vector3.forward * -m_DistanceToCamera) + target;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		float L_3 = __this->get_m_DistanceToCamera_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_2, ((-L_3)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_1, L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___target0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_m507450B006B76DB81A48FCA5CAC2ED21C559065F (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_Focus_m507450B006B76DB81A48FCA5CAC2ED21C559065F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * V_1 = NULL;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector3 center = target.transform.position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___target0;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Renderer renderer = target.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___target0;
		NullCheck(L_3);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		V_1 = L_4;
		// Bounds bounds = renderer != null ? renderer.bounds : new Bounds(center, Vector3.one * 10f);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, (10.0f), /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((&L_10), L_7, L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
		goto IL_0039;
	}

IL_0033:
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_11 = V_1;
		NullCheck(L_11);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_12 = Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5(L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
	}

IL_0039:
	{
		V_2 = G_B3_0;
		// m_DistanceToCamera = CalcMinDistanceToBounds(m_CameraComponent, bounds) + 2f;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_13 = __this->get_m_CameraComponent_25();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_14 = V_2;
		float L_15 = CameraMotion_CalcMinDistanceToBounds_mC4A1B0A1C3D50986B51EEC289089F70F71ADE768(L_13, L_14, /*hidden argument*/NULL);
		__this->set_m_DistanceToCamera_28(((float)il2cpp_codegen_add((float)L_15, (float)(2.0f))));
		// m_DistanceToCamera += m_DistanceToCamera;
		float L_16 = __this->get_m_DistanceToCamera_28();
		float L_17 = __this->get_m_DistanceToCamera_28();
		__this->set_m_DistanceToCamera_28(((float)il2cpp_codegen_add((float)L_16, (float)L_17)));
		// center = bounds.center;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_18;
		// Focus(center, m_DistanceToCamera);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		float L_20 = __this->get_m_DistanceToCamera_28();
		CameraMotion_Focus_mD9CD5A2BB6B63D576FB0D1DFA45B5EFEEABD1308(__this, L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CameraMotion::Focus(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion_Focus_mD9CD5A2BB6B63D576FB0D1DFA45B5EFEEABD1308 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target0, float ___distance1, const RuntimeMethod* method)
{
	{
		// m_ScenePivot = target;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___target0;
		__this->set_m_ScenePivot_27(L_0);
		// m_DistanceToCamera = distance;
		float L_1 = ___distance1;
		__this->set_m_DistanceToCamera_28(L_1);
		// m_PreviousPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		__this->set_m_PreviousPosition_35(L_3);
		// m_TargetPosition = CalculateCameraPosition( m_ScenePivot );
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_m_ScenePivot_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = CameraMotion_CalculateCameraPosition_m7093A872508081A1222A79A1CB8CFD9B97A2AF30(__this, L_4, /*hidden argument*/NULL);
		__this->set_m_TargetPosition_36(L_5);
		// m_ZoomProgress = 0f;
		__this->set_m_ZoomProgress_34((0.0f));
		// m_Zooming = true;
		__this->set_m_Zooming_33((bool)1);
		// }
		return;
	}
}
// System.Single ProBuilder.Examples.CameraMotion::ScreenToWorldDistance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_ScreenToWorldDistance_mAAD89338CF37BD16D2D759E9F956ECAA2F0F4FB7 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, float ___screenDistance0, float ___distanceFromCamera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_ScreenToWorldDistance_mAAD89338CF37BD16D2D759E9F956ECAA2F0F4FB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 start = m_CameraComponent.ScreenToWorldPoint(Vector3.forward * distanceFromCamera);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_m_CameraComponent_25();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		float L_2 = ___distanceFromCamera1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 end = m_CameraComponent.ScreenToWorldPoint( new Vector3(screenDistance, 0f, distanceFromCamera));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = __this->get_m_CameraComponent_25();
		float L_6 = ___screenDistance0;
		float L_7 = ___distanceFromCamera1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), L_6, (0.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_5, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// return CopySign(Vector3.Distance(start, end), screenDistance);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		float L_12 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_10, L_11, /*hidden argument*/NULL);
		float L_13 = ___screenDistance0;
		float L_14 = CameraMotion_CopySign_m4659966370DD7857957720DE49B6AC0F86B14D57(__this, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Single ProBuilder.Examples.CameraMotion::CalcSignedMouseDelta(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcSignedMouseDelta_m65E2B18B7599165351CF73E4E507710561C43782 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_CalcSignedMouseDelta_m65E2B18B7599165351CF73E4E507710561C43782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	{
		// float delta = Vector2.Distance(lhs, rhs);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___lhs0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_2 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float scale = 1f / Mathf.Min(Screen.width, Screen.height);
		int32_t L_3 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((float)((float)(1.0f)/(float)(((float)((float)L_5)))));
		// if( Mathf.Abs(lhs.x - rhs.x) > Mathf.Abs(lhs.y - rhs.y) )
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___lhs0;
		float L_7 = L_6.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = ___rhs1;
		float L_9 = L_8.get_x_0();
		float L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = ___lhs0;
		float L_12 = L_11.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = ___rhs1;
		float L_14 = L_13.get_y_1();
		float L_15 = fabsf(((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)));
		if ((!(((float)L_10) > ((float)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		// return delta * scale * ( (lhs.x-rhs.x) > 0f ? 1f : -1f );
		float L_16 = V_0;
		float L_17 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = ___lhs0;
		float L_19 = L_18.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = ___rhs1;
		float L_21 = L_20.get_x_0();
		G_B2_0 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17));
		if ((((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21))) > ((float)(0.0f))))
		{
			G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17));
			goto IL_0063;
		}
	}
	{
		G_B4_0 = (-1.0f);
		G_B4_1 = G_B2_0;
		goto IL_0068;
	}

IL_0063:
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B3_0;
	}

IL_0068:
	{
		return ((float)il2cpp_codegen_multiply((float)G_B4_1, (float)G_B4_0));
	}

IL_006a:
	{
		// return delta * scale * ( (lhs.y-rhs.y) > 0f ? 1f : -1f );
		float L_22 = V_0;
		float L_23 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = ___lhs0;
		float L_25 = L_24.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = ___rhs1;
		float L_27 = L_26.get_y_1();
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23));
		if ((((float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_27))) > ((float)(0.0f))))
		{
			G_B7_0 = ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23));
			goto IL_0088;
		}
	}
	{
		G_B8_0 = (-1.0f);
		G_B8_1 = G_B6_0;
		goto IL_008d;
	}

IL_0088:
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B7_0;
	}

IL_008d:
	{
		return ((float)il2cpp_codegen_multiply((float)G_B8_1, (float)G_B8_0));
	}
}
// System.Single ProBuilder.Examples.CameraMotion::CalcMinDistanceToBounds(UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CalcMinDistanceToBounds_mC4A1B0A1C3D50986B51EEC289089F70F71ADE768 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam0, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion_CalcMinDistanceToBounds_mC4A1B0A1C3D50986B51EEC289089F70F71ADE768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float frustumHeight = Mathf.Max(Mathf.Max(bounds.size.x, bounds.size.y), bounds.size.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&___bounds1), /*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&___bounds1), /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_1, L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&___bounds1), /*hidden argument*/NULL);
		float L_6 = L_5.get_z_4();
		float L_7 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_4, L_6, /*hidden argument*/NULL);
		// float distance = frustumHeight * .5f / Mathf.Tan(cam.fieldOfView * .5f * Mathf.Deg2Rad);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = ___cam0;
		NullCheck(L_8);
		float L_9 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_8, /*hidden argument*/NULL);
		float L_10 = tanf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(0.5f))), (float)(0.0174532924f))));
		// return distance;
		return ((float)((float)((float)il2cpp_codegen_multiply((float)L_7, (float)(0.5f)))/(float)L_10));
	}
}
// System.Single ProBuilder.Examples.CameraMotion::CopySign(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMotion_CopySign_m4659966370DD7857957720DE49B6AC0F86B14D57 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		// if(x < 0f && y < 0f || x > 0f && y > 0f || x == 0f || y == 0f)
		float L_0 = ___x0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___y1;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}

IL_0010:
	{
		float L_2 = ___x0;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		float L_3 = ___y1;
		if ((((float)L_3) > ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		float L_4 = ___x0;
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		float L_5 = ___y1;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}

IL_0030:
	{
		// return x;
		float L_6 = ___x0;
		return L_6;
	}

IL_0032:
	{
		// return -x;
		float L_7 = ___x0;
		return ((-L_7));
	}
}
// System.Void ProBuilder.Examples.CameraMotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMotion__ctor_mF3B0FB5C3D42667EFB625813875988B9606FCB10 (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMotion__ctor_mF3B0FB5C3D42667EFB625813875988B9606FCB10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float moveSpeed = 15f;
		__this->set_moveSpeed_19((15.0f));
		// public float lookSpeed = 5f;
		__this->set_lookSpeed_20((5.0f));
		// public float orbitSpeed = 7f;
		__this->set_orbitSpeed_21((7.0f));
		// public float scrollModifier = 100f;
		__this->set_scrollModifier_22((100.0f));
		// public float zoomSpeed = .1f;
		__this->set_zoomSpeed_23((0.1f));
		// Vector3 m_ScenePivot = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_ScenePivot_27(L_0);
		// float m_DistanceToCamera = 10f;
		__this->set_m_DistanceToCamera_28((10.0f));
		// Vector3 m_PreviousMousePosition = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_PreviousMousePosition_29(L_1);
		// Rect m_MouseCursorRect = new Rect(0, 0, k_CursorIconSize, k_CursorIconSize);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_2), (0.0f), (0.0f), (64.0f), (64.0f), /*hidden argument*/NULL);
		__this->set_m_MouseCursorRect_30(L_2);
		// Rect m_ScreenCenterRect = new Rect(0, 0, k_CursorIconSize, k_CursorIconSize);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (64.0f), (64.0f), /*hidden argument*/NULL);
		__this->set_m_ScreenCenterRect_31(L_3);
		// bool m_CurrentActionValid = true;
		__this->set_m_CurrentActionValid_32((bool)1);
		// Vector3 m_PreviousPosition = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_PreviousPosition_35(L_4);
		// Vector3 m_TargetPosition = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_TargetPosition_36(L_5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.CreatePolyShape::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePolyShape_Start_m49E18E75FFF3C9843CD5EF9F20DD0DA4DB47DBA3 (CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreatePolyShape_Start_m49E18E75FFF3C9843CD5EF9F20DD0DA4DB47DBA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// var go = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// m_Mesh = go.gameObject.AddComponent<ProBuilderMesh>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_3 = GameObject_AddComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m90FCA1BD9BAA79335B9B69FA10B77945A33B131C(L_2, /*hidden argument*/GameObject_AddComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m90FCA1BD9BAA79335B9B69FA10B77945A33B131C_RuntimeMethod_var);
		__this->set_m_Mesh_8(L_3);
		// InvokeRepeating("Rebuild", 0f, .1f);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteralF45BEFF09DA903CED5AABEB903D89D87215DED91, (0.0f), (0.1f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CreatePolyShape::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePolyShape_Rebuild_mAE639F62667767FCA110ECF650D88F164B72CE5A (CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreatePolyShape_Rebuild_mAE639F62667767FCA110ECF650D88F164B72CE5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// Vector3[] points = new Vector3[32];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		// for (int i = 0, c = points.Length; i < c; i++)
		V_1 = 0;
		// for (int i = 0, c = points.Length; i < c; i++)
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = V_0;
		NullCheck(L_1);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		goto IL_0059;
	}

IL_0010:
	{
		// float angle = Mathf.Deg2Rad * ((i / (float)c) * 360f);
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_3))))), (float)(360.0f)))));
		// points[i] = new Vector3(Mathf.Cos(angle), 0f, Mathf.Sin(angle)) * Random.Range(m_RadiusMin, m_RadiusMax);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		int32_t L_5 = V_1;
		float L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = cosf(L_6);
		float L_8 = V_3;
		float L_9 = sinf(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), L_7, (0.0f), L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_m_RadiusMin_4();
		float L_12 = __this->get_m_RadiusMax_5();
		float L_13 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_11, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_14);
		// for (int i = 0, c = points.Length; i < c; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = 0, c = points.Length; i < c; i++)
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		// m_Mesh.CreateShapeFromPolygon(points, m_Height, m_FlipNormals);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_18 = __this->get_m_Mesh_8();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = V_0;
		float L_20 = __this->get_m_Height_6();
		bool L_21 = __this->get_m_FlipNormals_7();
		AppendElements_CreateShapeFromPolygon_m83B3235E9A605F4CE93B24DC4B5317B1D1D94ECA(L_18, (RuntimeObject*)(RuntimeObject*)L_19, L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.CreatePolyShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePolyShape__ctor_m1A408072A40E8CEC502BB41A726FED76AC634FA9 (CreatePolyShape_tE2487A61796FAFCFB25DB2AFD54C43C3C486F23E * __this, const RuntimeMethod* method)
{
	{
		// public float m_RadiusMin = 1.5f;
		__this->set_m_RadiusMin_4((1.5f));
		// public float m_RadiusMax = 2f;
		__this->set_m_RadiusMax_5((2.0f));
		// public float m_Height = 1f;
		__this->set_m_Height_6((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.Handles::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Awake_mC91D3C8CBCE218B3149AAA71BB2E3686F696559E (Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_Awake_mC91D3C8CBCE218B3149AAA71BB2E3686F696559E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->set_s_Instance_4(__this);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Init_mBDBBACB9AB8EBE21004EE2FA8DD1D1C9DB8AA5E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_Init_mBDBBACB9AB8EBE21004EE2FA8DD1D1C9DB8AA5E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * V_0 = NULL;
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * G_B7_0 = NULL;
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * G_B10_0 = NULL;
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * L_0 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("No Handles object found in scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral90D449DD5FBF1513279DF00CA83792DB62553DC5, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		bool L_2 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_Initialized_5();
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// s_Initialized = true;
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->set_s_Initialized_5((bool)1);
		// var lineShader = BuiltinMaterials.geometryShadersSupported ? s_Instance.m_LineBillboard : s_Instance.m_FaceHighlight;
		IL2CPP_RUNTIME_CLASS_INIT(BuiltinMaterials_t33322CEC6B8B556941289D3AD69AC6FF622EA5C4_il2cpp_TypeInfo_var);
		bool L_3 = BuiltinMaterials_get_geometryShadersSupported_m4FB89A31A7C6D581A16BF3CC772C88700E0A16B5(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * L_4 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_Instance_4();
		NullCheck(L_4);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_5 = L_4->get_m_FaceHighlight_6();
		G_B7_0 = L_5;
		goto IL_0042;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * L_6 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_Instance_4();
		NullCheck(L_6);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_7 = L_6->get_m_LineBillboard_7();
		G_B7_0 = L_7;
	}

IL_0042:
	{
		V_0 = G_B7_0;
		// var vertShader = BuiltinMaterials.geometryShadersSupported ? s_Instance.m_PointBillboard : s_Instance.m_VertexShader;
		IL2CPP_RUNTIME_CLASS_INIT(BuiltinMaterials_t33322CEC6B8B556941289D3AD69AC6FF622EA5C4_il2cpp_TypeInfo_var);
		bool L_8 = BuiltinMaterials_get_geometryShadersSupported_m4FB89A31A7C6D581A16BF3CC772C88700E0A16B5(/*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * L_9 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_Instance_4();
		NullCheck(L_9);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_10 = L_9->get_m_VertexShader_9();
		G_B10_0 = L_10;
		goto IL_0060;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * L_11 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_Instance_4();
		NullCheck(L_11);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_12 = L_11->get_m_PointBillboard_8();
		G_B10_0 = L_12;
	}

IL_0060:
	{
		// s_EdgeMaterial = new Material(lineShader);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_13 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->set_s_EdgeMaterial_10(L_14);
		// s_VertMaterial = new Material(vertShader);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_15, G_B10_0, /*hidden argument*/NULL);
		((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->set_s_VertMaterial_11(L_15);
		// s_FaceMaterial = new Material(s_Instance.m_FaceHighlight);
		Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * L_16 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_Instance_4();
		NullCheck(L_16);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_17 = L_16->get_m_FaceHighlight_6();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_18 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_18, L_17, /*hidden argument*/NULL);
		((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->set_s_FaceMaterial_12(L_18);
		// s_FaceMaterial.SetFloat("_Dither", 1f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_FaceMaterial_12();
		NullCheck(L_19);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_19, _stringLiteral5689FEF74B59042A2CBCA5F61EBC2BD6BCA3DA88, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Material ProBuilder.Examples.Handles::get_edgeMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_Init_mBDBBACB9AB8EBE21004EE2FA8DD1D1C9DB8AA5E0(/*hidden argument*/NULL);
		// return s_EdgeMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_EdgeMaterial_10();
		return L_0;
	}
}
// UnityEngine.Material ProBuilder.Examples.Handles::get_vertMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Handles_get_vertMaterial_m56207597901AB7FBBC05A15BE0086D560E3FCE8A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_get_vertMaterial_m56207597901AB7FBBC05A15BE0086D560E3FCE8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_Init_mBDBBACB9AB8EBE21004EE2FA8DD1D1C9DB8AA5E0(/*hidden argument*/NULL);
		// return s_VertMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_VertMaterial_11();
		return L_0;
	}
}
// UnityEngine.Material ProBuilder.Examples.Handles::get_faceMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Handles_get_faceMaterial_mE0D9EAB40B2C0029F9B6E963C4D11A9065923392 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_get_faceMaterial_mE0D9EAB40B2C0029F9B6E963C4D11A9065923392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_Init_mBDBBACB9AB8EBE21004EE2FA8DD1D1C9DB8AA5E0(/*hidden argument*/NULL);
		// return s_FaceMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_FaceMaterial_12();
		return L_0;
	}
}
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m9A1F2998EFD52D7854E9910F7D2B96DD8B4C64F6 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_Draw_m9A1F2998EFD52D7854E9910F7D2B96DD8B4C64F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_FaceArray[0] = face;
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* L_0 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_FaceArray_13();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_1 = ___face1;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 *)L_1);
		// Draw(mesh, s_FaceArray, color);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_2 = ___mesh0;
		FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* L_3 = ((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->get_s_FaceArray_13();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = ___color2;
		Handles_Draw_m7312E713FF797BA7EC27D54855F354F7B7EF7101(L_2, (RuntimeObject*)(RuntimeObject*)L_3, L_4, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::Draw(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_Draw_m7312E713FF797BA7EC27D54855F354F7B7EF7101 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, RuntimeObject* ___faces1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_Draw_m7312E713FF797BA7EC27D54855F354F7B7EF7101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * V_2 = NULL;
	ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (mesh == null)
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// faceMaterial.SetColor("_Color", color);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = Handles_get_faceMaterial_mE0D9EAB40B2C0029F9B6E963C4D11A9065923392(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___color2;
		NullCheck(L_2);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_2, _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, L_3, /*hidden argument*/NULL);
		// faceMaterial.SetInt("_HandleZTest", (int) compareFunction);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = Handles_get_faceMaterial_mE0D9EAB40B2C0029F9B6E963C4D11A9065923392(/*hidden argument*/NULL);
		int32_t L_5 = ___compareFunction3;
		NullCheck(L_4);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_4, _stringLiteralB06F4A32AAC9DC9CA19B52903BFE73E7305681F3, L_5, /*hidden argument*/NULL);
		// if (!faceMaterial.SetPass(0))
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = Handles_get_faceMaterial_mE0D9EAB40B2C0029F9B6E963C4D11A9065923392(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = Material_SetPass_m4BE0A8FCBF158C83522AA2F69118A2FE33683918(L_6, 0, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		// return;
		return;
	}

IL_0038:
	{
		// GL.PushMatrix();
		GL_PushMatrix_mE47A23F3A906899E88AC525FFE2C3C2BD834DFF9(/*hidden argument*/NULL);
		// GL.Begin(GL.TRIANGLES);
		GL_Begin_m9A48BD6A2DA850D54250EF638DF5EC61F83E293C(4, /*hidden argument*/NULL);
		// GL.MultMatrix(mesh.transform.localToWorldMatrix);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_8 = ___mesh0;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_10 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_9, /*hidden argument*/NULL);
		GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753(L_10, /*hidden argument*/NULL);
		// var positions = mesh.positions;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_11 = ___mesh0;
		NullCheck(L_11);
		RuntimeObject* L_12 = ProBuilderMesh_get_positions_mD7DC4E56D757FE47C79C136D07370DDE3C77D93B(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// foreach (var face in faces)
		RuntimeObject* L_13 = ___faces1;
		NullCheck(L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face>::GetEnumerator() */, IEnumerable_1_tF20756BA137BDAA09A9EA2932ACE6BC9DF003741_il2cpp_TypeInfo_var, L_13);
		V_1 = L_14;
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ca;
		}

IL_0063:
		{
			// foreach (var face in faces)
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_16 = InterfaceFuncInvoker0< Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.Face>::get_Current() */, IEnumerator_1_t751A0FB21B5F966BB50A4C8E79507A5DDA8E4A82_il2cpp_TypeInfo_var, L_15);
			V_2 = L_16;
			// if (face == null)
			Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_17 = V_2;
			if (!L_17)
			{
				goto IL_00ca;
			}
		}

IL_006d:
		{
			// var indices = face.indexes;
			Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_18 = V_2;
			NullCheck(L_18);
			ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_19 = Face_get_indexes_m893AE969377981492B98539BB9A216DD037B9924(L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			V_4 = 0;
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_20 = V_3;
			NullCheck(L_20);
			int32_t L_21 = ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73(L_20, /*hidden argument*/ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73_RuntimeMethod_var);
			V_5 = L_21;
			goto IL_00c4;
		}

IL_0081:
		{
			// GL.Vertex(positions[indices[i+0]]);
			RuntimeObject* L_22 = V_0;
			ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_23 = V_3;
			int32_t L_24 = V_4;
			NullCheck(L_23);
			int32_t L_25 = ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358(L_23, L_24, /*hidden argument*/ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358_RuntimeMethod_var);
			NullCheck(L_22);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = InterfaceFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37_il2cpp_TypeInfo_var, L_22, L_25);
			GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_26, /*hidden argument*/NULL);
			// GL.Vertex(positions[indices[i+1]]);
			RuntimeObject* L_27 = V_0;
			ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_28 = V_3;
			int32_t L_29 = V_4;
			NullCheck(L_28);
			int32_t L_30 = ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358_RuntimeMethod_var);
			NullCheck(L_27);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = InterfaceFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37_il2cpp_TypeInfo_var, L_27, L_30);
			GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_31, /*hidden argument*/NULL);
			// GL.Vertex(positions[indices[i+2]]);
			RuntimeObject* L_32 = V_0;
			ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)2)), /*hidden argument*/ReadOnlyCollection_1_get_Item_m1124D9F3E991D8C5B859045A162EBD0AAB098358_RuntimeMethod_var);
			NullCheck(L_32);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = InterfaceFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37_il2cpp_TypeInfo_var, L_32, L_35);
			GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_36, /*hidden argument*/NULL);
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			int32_t L_37 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)3));
		}

IL_00c4:
		{
			// for (int i = 0, c = indices.Count; i < c; i += 3)
			int32_t L_38 = V_4;
			int32_t L_39 = V_5;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_0081;
			}
		}

IL_00ca:
		{
			// foreach (var face in faces)
			RuntimeObject* L_40 = V_1;
			NullCheck(L_40);
			bool L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_0063;
			}
		}

IL_00d2:
		{
			IL2CPP_LEAVE(0xDE, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_1;
			if (!L_42)
			{
				goto IL_00dd;
			}
		}

IL_00d7:
		{
			RuntimeObject* L_43 = V_1;
			NullCheck(L_43);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_43);
		}

IL_00dd:
		{
			IL2CPP_END_FINALLY(212)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
	}

IL_00de:
	{
		// GL.End();
		GL_End_m7EDEB843BD9F7E00BD838FDE074B4688C55C0755(/*hidden argument*/NULL);
		// GL.PopMatrix();
		GL_PopMatrix_mCAA6BC17D97358A4BC329E789AF2CA26C1204112(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles_DrawLine_m6C9438C8D49A09F8E3A6A0C7C0E20BCF4EFE717C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, int32_t ___compareFunction3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles_DrawLine_m6C9438C8D49A09F8E3A6A0C7C0E20BCF4EFE717C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// edgeMaterial.SetColor("_Color", color);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___color2;
		NullCheck(L_0);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_0, _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, L_1, /*hidden argument*/NULL);
		// edgeMaterial.SetInt("_HandleZTest", (int) compareFunction);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550(/*hidden argument*/NULL);
		int32_t L_3 = ___compareFunction3;
		NullCheck(L_2);
		Material_SetInt_m1FCBDBB985E6A299AE11C3D8AF29BB4D7C7DF278(L_2, _stringLiteralB06F4A32AAC9DC9CA19B52903BFE73E7305681F3, L_3, /*hidden argument*/NULL);
		// if (BuiltinMaterials.geometryShadersSupported)
		IL2CPP_RUNTIME_CLASS_INIT(BuiltinMaterials_t33322CEC6B8B556941289D3AD69AC6FF622EA5C4_il2cpp_TypeInfo_var);
		bool L_4 = BuiltinMaterials_get_geometryShadersSupported_m4FB89A31A7C6D581A16BF3CC772C88700E0A16B5(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// edgeMaterial.SetFloat("_Scale", .2f);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550(/*hidden argument*/NULL);
		NullCheck(L_5);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_5, _stringLiteralB4A4FA66791AFC45441C77028D93DAA97FFE3C53, (0.2f), /*hidden argument*/NULL);
	}

IL_003b:
	{
		// if (!edgeMaterial.SetPass(0))
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = Handles_get_edgeMaterial_m0B890104565209136722CC807A3620A93192E550(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = Material_SetPass_m4BE0A8FCBF158C83522AA2F69118A2FE33683918(L_6, 0, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// GL.PushMatrix();
		GL_PushMatrix_mE47A23F3A906899E88AC525FFE2C3C2BD834DFF9(/*hidden argument*/NULL);
		// GL.Begin(GL.LINES);
		GL_Begin_m9A48BD6A2DA850D54250EF638DF5EC61F83E293C(1, /*hidden argument*/NULL);
		// GL.Vertex(a);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___a0;
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_8, /*hidden argument*/NULL);
		// GL.Vertex(b);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___b1;
		GL_Vertex_mCDF99057939B414F44F9ECF9E8C592E123EAC41A(L_9, /*hidden argument*/NULL);
		// GL.End();
		GL_End_m7EDEB843BD9F7E00BD838FDE074B4688C55C0755(/*hidden argument*/NULL);
		// GL.PopMatrix();
		GL_PopMatrix_mCAA6BC17D97358A4BC329E789AF2CA26C1204112(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles__ctor_m601E42A0A3D009FFF8269F9DE4FDAF0772FDE078 (Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProBuilder.Examples.Handles::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handles__cctor_m1EFC11A9F578627B1EF08CFC02E86CE714DE2471 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Handles__cctor_m1EFC11A9F578627B1EF08CFC02E86CE714DE2471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Face[] s_FaceArray = new Face[1];
		FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5* L_0 = (FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5*)(FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5*)SZArrayNew(FaceU5BU5D_t5CCA45276798A3D80117A41C831C021492AB52E5_il2cpp_TypeInfo_var, (uint32_t)1);
		((Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_StaticFields*)il2cpp_codegen_static_fields_for(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var))->set_s_FaceArray_13(L_0);
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
// System.Void ProBuilder.Examples.HighlightNearestFace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightNearestFace_Start_m3CFE30F45DB33017294B0CFD57A6F5E5163155A4 (HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightNearestFace_Start_m3CFE30F45DB33017294B0CFD57A6F5E5163155A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = ShapeGenerator.GeneratePlane(PivotLocation.Center, travel, travel, 25, 25, Axis.Up);
		float L_0 = __this->get_travel_4();
		float L_1 = __this->get_travel_4();
		IL2CPP_RUNTIME_CLASS_INIT(ShapeGenerator_t39ED969F9845178E9684047EFFCD6E525F96E965_il2cpp_TypeInfo_var);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_2 = ShapeGenerator_GeneratePlane_m61DE53DC441D351AC2DC6C206FE304948FBC831C(0, L_0, L_1, ((int32_t)25), ((int32_t)25), 2, /*hidden argument*/NULL);
		__this->set_target_6(L_2);
		// target.transform.position = new Vector3(travel * .5f, 0f, travel * .5f);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_3 = __this->get_target_6();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_travel_4();
		float L_6 = __this->get_travel_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), ((float)il2cpp_codegen_multiply((float)L_5, (float)(0.5f))), (0.0f), ((float)il2cpp_codegen_multiply((float)L_6, (float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_4, L_7, /*hidden argument*/NULL);
		// target.ToMesh();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_8 = __this->get_target_6();
		NullCheck(L_8);
		ProBuilderMesh_ToMesh_m6122B859032D461E94A5D74537492B3D94AD08B4(L_8, 0, /*hidden argument*/NULL);
		// target.Refresh();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_9 = __this->get_target_6();
		NullCheck(L_9);
		ProBuilderMesh_Refresh_m078963E6C4A55F9F0CB4A9D6C383096497A1B414(L_9, ((int32_t)31), /*hidden argument*/NULL);
		// Camera cam = Camera.main;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		// cam.transform.position = new Vector3(25f, 40f, 0f);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = L_10;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (25.0f), (40.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_12, L_13, /*hidden argument*/NULL);
		// cam.transform.localRotation = Quaternion.Euler(new Vector3(65f, 0f, 0f));
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), (65.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_14, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.HighlightNearestFace::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightNearestFace_Update_m13DE0AFAC997A2F0193C22441DDEFFFCFE7C72E6 (HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightNearestFace_Update_m13DE0AFAC997A2F0193C22441DDEFFFCFE7C72E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		// float time = Time.time * speed;
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = __this->get_speed_5();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// Vector3 position = new Vector3(
		//     Mathf.PerlinNoise(time, time) * travel,
		//     2,
		//     Mathf.PerlinNoise(time + 1f, time + 1f) * travel
		// );
		float L_2 = V_0;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_PerlinNoise_mA36E513B2931F17ACBF26D928674D3DDEDF5C810(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_travel_4();
		float L_6 = V_0;
		float L_7 = V_0;
		float L_8 = Mathf_PerlinNoise_mA36E513B2931F17ACBF26D928674D3DDEDF5C810(((float)il2cpp_codegen_add((float)L_6, (float)(1.0f))), ((float)il2cpp_codegen_add((float)L_7, (float)(1.0f))), /*hidden argument*/NULL);
		float L_9 = __this->get_travel_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (2.0f), ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		// transform.position = position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		NullCheck(L_10);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_10, L_11, /*hidden argument*/NULL);
		// if (target == null)
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_12 = __this->get_target_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// Debug.LogWarning("Missing the ProBuilder Mesh target!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral71F30F86E6D287A36932E793E7CEAE00FDD3C6C3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0066:
	{
		// Vector3 pbRelativePosition = target.transform.InverseTransformPoint(transform.position);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_14 = __this->get_target_6();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_15, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// if (nearest != null)
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_19 = __this->get_nearest_7();
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		// target.SetFaceColor(nearest, Color.white);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_20 = __this->get_target_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_21 = __this->get_nearest_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_22 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_20);
		ProBuilderMesh_SetFaceColor_m5DDF1A3FC94595A7D40E574B0D86820A42ADE5BA(L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// int faceCount = target.faces.Count;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_23 = __this->get_target_6();
		NullCheck(L_23);
		RuntimeObject* L_24 = ProBuilderMesh_get_faces_mC886B29752D3A4A627B3DA665CC1255B0DF5FD2B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Face>::get_Count() */, ICollection_1_tD01C83C59758486D5526C37D5CCAFD76CE9C9B7A_il2cpp_TypeInfo_var, L_24);
		V_3 = L_25;
		// float smallestDistance = Mathf.Infinity;
		V_4 = (std::numeric_limits<float>::infinity());
		// nearest = target.faces[0];
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_26 = __this->get_target_6();
		NullCheck(L_26);
		RuntimeObject* L_27 = ProBuilderMesh_get_faces_mC886B29752D3A4A627B3DA665CC1255B0DF5FD2B(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_28 = InterfaceFuncInvoker1< Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>::get_Item(System.Int32) */, IList_1_t4326FACD68C97480F4C1AF54249F2540501E23D5_il2cpp_TypeInfo_var, L_27, 0);
		__this->set_nearest_7(L_28);
		// for (int i = 0; i < faceCount; i++)
		V_5 = 0;
		goto IL_0122;
	}

IL_00d4:
	{
		// float distance = Vector3.Distance(pbRelativePosition, FaceCenter(target, target.faces[i]));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_2;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_30 = __this->get_target_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_31 = __this->get_target_6();
		NullCheck(L_31);
		RuntimeObject* L_32 = ProBuilderMesh_get_faces_mC886B29752D3A4A627B3DA665CC1255B0DF5FD2B(L_31, /*hidden argument*/NULL);
		int32_t L_33 = V_5;
		NullCheck(L_32);
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_34 = InterfaceFuncInvoker1< Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>::get_Item(System.Int32) */, IList_1_t4326FACD68C97480F4C1AF54249F2540501E23D5_il2cpp_TypeInfo_var, L_32, L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = HighlightNearestFace_FaceCenter_mFACDF10870C815E78AECF3CCEF8D45A17CDFFFE6(__this, L_30, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_36 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_29, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		// if (distance < smallestDistance)
		float L_37 = V_6;
		float L_38 = V_4;
		if ((!(((float)L_37) < ((float)L_38))))
		{
			goto IL_011c;
		}
	}
	{
		// smallestDistance = distance;
		float L_39 = V_6;
		V_4 = L_39;
		// nearest = target.faces[i];
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_40 = __this->get_target_6();
		NullCheck(L_40);
		RuntimeObject* L_41 = ProBuilderMesh_get_faces_mC886B29752D3A4A627B3DA665CC1255B0DF5FD2B(L_40, /*hidden argument*/NULL);
		int32_t L_42 = V_5;
		NullCheck(L_41);
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_43 = InterfaceFuncInvoker1< Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face>::get_Item(System.Int32) */, IList_1_t4326FACD68C97480F4C1AF54249F2540501E23D5_il2cpp_TypeInfo_var, L_41, L_42);
		__this->set_nearest_7(L_43);
	}

IL_011c:
	{
		// for (int i = 0; i < faceCount; i++)
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0122:
	{
		// for (int i = 0; i < faceCount; i++)
		int32_t L_45 = V_5;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00d4;
		}
	}
	{
		// target.SetFaceColor(nearest, Color.blue);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_47 = __this->get_target_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_48 = __this->get_nearest_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_49 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_47);
		ProBuilderMesh_SetFaceColor_m5DDF1A3FC94595A7D40E574B0D86820A42ADE5BA(L_47, L_48, L_49, /*hidden argument*/NULL);
		// target.Refresh(RefreshMask.Colors);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_50 = __this->get_target_6();
		NullCheck(L_50);
		ProBuilderMesh_Refresh_m078963E6C4A55F9F0CB4A9D6C383096497A1B414(L_50, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ProBuilder.Examples.HighlightNearestFace::FaceCenter(UnityEngine.ProBuilder.ProBuilderMesh,UnityEngine.ProBuilder.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  HighlightNearestFace_FaceCenter_mFACDF10870C815E78AECF3CCEF8D45A17CDFFFE6 (HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301 * __this, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___pb0, Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * ___face1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighlightNearestFace_FaceCenter_mFACDF10870C815E78AECF3CCEF8D45A17CDFFFE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var vertices = pb.positions;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_0 = ___pb0;
		NullCheck(L_0);
		RuntimeObject* L_1 = ProBuilderMesh_get_positions_mD7DC4E56D757FE47C79C136D07370DDE3C77D93B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 average = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_2;
		// foreach (int index in face.distinctIndexes)
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_3 = ___face1;
		NullCheck(L_3);
		ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_4 = Face_get_distinctIndexes_mB2C9FA6A49FA179AEDF46C4A7568211B958EE027(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = ReadOnlyCollection_1_GetEnumerator_m0210C608EEA89F5020B68BD78AB713FAC04086AF(L_4, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m0210C608EEA89F5020B68BD78AB713FAC04086AF_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_001b:
		{
			// foreach (int index in face.distinctIndexes)
			RuntimeObject* L_6 = V_3;
			NullCheck(L_6);
			int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var, L_6);
			V_4 = L_7;
			// average.x += vertices[index].x;
			float* L_8 = (&V_1)->get_address_of_x_2();
			float* L_9 = L_8;
			float L_10 = *((float*)L_9);
			RuntimeObject* L_11 = V_0;
			int32_t L_12 = V_4;
			NullCheck(L_11);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = InterfaceFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37_il2cpp_TypeInfo_var, L_11, L_12);
			float L_14 = L_13.get_x_2();
			*((float*)L_9) = (float)((float)il2cpp_codegen_add((float)L_10, (float)L_14));
			// average.y += vertices[index].y;
			float* L_15 = (&V_1)->get_address_of_y_3();
			float* L_16 = L_15;
			float L_17 = *((float*)L_16);
			RuntimeObject* L_18 = V_0;
			int32_t L_19 = V_4;
			NullCheck(L_18);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = InterfaceFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37_il2cpp_TypeInfo_var, L_18, L_19);
			float L_21 = L_20.get_y_3();
			*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)L_21));
			// average.z += vertices[index].z;
			float* L_22 = (&V_1)->get_address_of_z_4();
			float* L_23 = L_22;
			float L_24 = *((float*)L_23);
			RuntimeObject* L_25 = V_0;
			int32_t L_26 = V_4;
			NullCheck(L_25);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = InterfaceFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IList_1_t248C1AD0E5604F8020A64DED81AC65671E740C37_il2cpp_TypeInfo_var, L_25, L_26);
			float L_28 = L_27.get_z_4();
			*((float*)L_23) = (float)((float)il2cpp_codegen_add((float)L_24, (float)L_28));
		}

IL_006b:
		{
			// foreach (int index in face.distinctIndexes)
			RuntimeObject* L_29 = V_3;
			NullCheck(L_29);
			bool L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_001b;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_3;
			if (!L_31)
			{
				goto IL_007e;
			}
		}

IL_0078:
		{
			RuntimeObject* L_32 = V_3;
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_32);
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
	}

IL_007f:
	{
		// float len = (float) face.distinctIndexes.Count;
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_33 = ___face1;
		NullCheck(L_33);
		ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_34 = Face_get_distinctIndexes_mB2C9FA6A49FA179AEDF46C4A7568211B958EE027(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_35 = ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73(L_34, /*hidden argument*/ReadOnlyCollection_1_get_Count_mD6D072B9423799CCD21C77BC34E99F61177A5D73_RuntimeMethod_var);
		V_2 = (((float)((float)L_35)));
		// average.x /= len;
		float* L_36 = (&V_1)->get_address_of_x_2();
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		float L_39 = V_2;
		*((float*)L_37) = (float)((float)((float)L_38/(float)L_39));
		// average.y /= len;
		float* L_40 = (&V_1)->get_address_of_y_3();
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		float L_43 = V_2;
		*((float*)L_41) = (float)((float)((float)L_42/(float)L_43));
		// average.z /= len;
		float* L_44 = (&V_1)->get_address_of_z_4();
		float* L_45 = L_44;
		float L_46 = *((float*)L_45);
		float L_47 = V_2;
		*((float*)L_45) = (float)((float)((float)L_46/(float)L_47));
		// return average;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_1;
		return L_48;
	}
}
// System.Void ProBuilder.Examples.HighlightNearestFace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightNearestFace__ctor_m9B0DF62C4BD8FA16D1626F59EAC2B7132AE0E45F (HighlightNearestFace_t0B9F0AC4000DEC5101C810DCCCDF835F9C894301 * __this, const RuntimeMethod* method)
{
	{
		// public float travel = 50f;
		__this->set_travel_4((50.0f));
		// public float speed = .2f;
		__this->set_speed_5((0.2f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.MakePrimitiveEditable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakePrimitiveEditable_Start_m3AD2FE80276444941A5959C9ECE641F1E538312B (MakePrimitiveEditable_t62F6D07EC61B2B25848A5373FBE2202D066003DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MakePrimitiveEditable_Start_m3AD2FE80276444941A5959C9ECE641F1E538312B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var importer = new MeshImporter(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC * L_1 = (MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC *)il2cpp_codegen_object_new(MeshImporter_t0C50C6962FF7E661B8B5CA9FFC689ECBB9DE30BC_il2cpp_TypeInfo_var);
		MeshImporter__ctor_mF01E229ADA6407ED0D06E6C824345AED5C97BDD7(L_1, L_0, /*hidden argument*/NULL);
		// importer.Import();
		NullCheck(L_1);
		MeshImporter_Import_mB0D7F5A0C599169ADC77BE6E67EFF0734727949D(L_1, (MeshImportSettings_tE99E697FA9CFD08822CBD759F5898E909B096086 *)NULL, /*hidden argument*/NULL);
		// var filter = GetComponent<MeshFilter>();
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var);
		// filter.sharedMesh = new Mesh();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)il2cpp_codegen_object_new(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C_il2cpp_TypeInfo_var);
		Mesh__ctor_m3AEBC82AB71D4F9498F6E254174BEBA8372834B4(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MeshFilter_set_sharedMesh_mFE8D12C35148063EB287951C7BFFB0328AAA7C5D(L_2, L_3, /*hidden argument*/NULL);
		// var mesh = gameObject.GetComponent<ProBuilderMesh>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_5 = GameObject_GetComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m0EBF957C0024FE39BD01BD5D0585F98FEE7FA32D(L_4, /*hidden argument*/GameObject_GetComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m0EBF957C0024FE39BD01BD5D0585F98FEE7FA32D_RuntimeMethod_var);
		// mesh.Extrude(mesh.faces, ExtrudeMethod.IndividualFaces, .25f);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_6 = L_5;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_7 = L_6;
		NullCheck(L_7);
		RuntimeObject* L_8 = ProBuilderMesh_get_faces_mC886B29752D3A4A627B3DA665CC1255B0DF5FD2B(L_7, /*hidden argument*/NULL);
		ExtrudeElements_Extrude_m1A071AA63489BACB870B7E6794EBC88BD8FC1C65(L_7, L_8, 0, (0.25f), /*hidden argument*/NULL);
		// mesh.ToMesh();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_9 = L_6;
		NullCheck(L_9);
		ProBuilderMesh_ToMesh_m6122B859032D461E94A5D74537492B3D94AD08B4(L_9, 0, /*hidden argument*/NULL);
		// mesh.Refresh();
		NullCheck(L_9);
		ProBuilderMesh_Refresh_m078963E6C4A55F9F0CB4A9D6C383096497A1B414(L_9, ((int32_t)31), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MakePrimitiveEditable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MakePrimitiveEditable__ctor_mCF7EF53D0F8C77CC9C78C68240DE64559FA835A8 (MakePrimitiveEditable_t62F6D07EC61B2B25848A5373FBE2202D066003DC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshal_pinvoke(const MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37& unmarshaled, MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
IL2CPP_EXTERN_C void MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshal_pinvoke_back(const MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_pinvoke& marshaled, MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37& unmarshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshal_pinvoke_cleanup(MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshal_com(const MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37& unmarshaled, MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_com& marshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
IL2CPP_EXTERN_C void MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshal_com_back(const MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_com& marshaled, MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37& unmarshaled)
{
	Exception_t* ___mesh_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mesh' of type 'MeshAndFace': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mesh_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ProBuilder.Examples.MeshAndFace
IL2CPP_EXTERN_C void MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshal_com_cleanup(MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProBuilder.Examples.MeshEditor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_Awake_mCEEB2E6CAEEC81E93D3F04DB9DDB75B8D1657C4C (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor_Awake_mCEEB2E6CAEEC81E93D3F04DB9DDB75B8D1657C4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SceneCamera = Camera.main;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		__this->set_m_SceneCamera_4(L_0);
		// m_CameraMotion = m_SceneCamera.GetComponent<CameraMotion>();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = __this->get_m_SceneCamera_4();
		NullCheck(L_1);
		CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * L_2 = Component_GetComponent_TisCameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670_m7C58F5E0B561D41C7717E55414F9C924C1DE822E(L_1, /*hidden argument*/Component_GetComponent_TisCameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670_m7C58F5E0B561D41C7717E55414F9C924C1DE822E_RuntimeMethod_var);
		__this->set_m_CameraMotion_5(L_2);
		// Camera.onPostRender += DrawSelection;
		CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * L_3 = ((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_il2cpp_TypeInfo_var))->get_onPostRender_6();
		CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * L_4 = (CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 *)il2cpp_codegen_object_new(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0_il2cpp_TypeInfo_var);
		CameraCallback__ctor_m7CAE962B355F00AB2868577DC302A1FA80939C50(L_4, __this, (intptr_t)((intptr_t)MeshEditor_DrawSelection_m65EFC5610969A4C82BDF85092B30C6134DEB7065_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_il2cpp_TypeInfo_var))->set_onPostRender_6(((CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 *)CastclassSealed((RuntimeObject*)L_5, CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_Start_mE14AFBE93769488269BB97665D8E18CB92127D1A (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor_Start_mE14AFBE93769488269BB97665D8E18CB92127D1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CameraMotion.Focus(Vector3.zero, 10f);
		CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * L_0 = __this->get_m_CameraMotion_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_0);
		CameraMotion_Focus_mD9CD5A2BB6B63D576FB0D1DFA45B5EFEEABD1308(L_0, L_1, (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_Update_mA5D0DB0616E5DB6F254B03EEFA57945D3F225E19 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	{
		// if(!m_DragState.active)
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_0 = __this->get_m_DragState_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_active_0();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// m_Selection = Utility.PickFace(m_SceneCamera, Input.mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = __this->get_m_SceneCamera_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  L_4 = Utility_PickFace_m5A5C6BA199F31215A62B810DA882264CE36BCA51(L_2, L_3, /*hidden argument*/NULL);
		__this->set_m_Selection_6(L_4);
	}

IL_0023:
	{
		// HandleInput();
		MeshEditor_HandleInput_m7D4DF86F27101DBC65FEC16460827B94E1755BBF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::DrawSelection(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_DrawSelection_m65EFC5610969A4C82BDF85092B30C6134DEB7065 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor_DrawSelection_m65EFC5610969A4C82BDF85092B30C6134DEB7065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_CameraMotion.active)
		CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * L_0 = __this->get_m_CameraMotion_5();
		NullCheck(L_0);
		bool L_1 = CameraMotion_get_active_m4369179355B546F18C9C9555248BA47039BA1B3F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Handles.Draw(m_Selection.mesh, m_Selection.face, Color.cyan);
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_2 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_3 = L_2->get_mesh_0();
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_4 = __this->get_address_of_m_Selection_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_5 = L_4->get_face_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_Draw_m9A1F2998EFD52D7854E9910F7D2B96DD8B4C64F6(L_3, L_5, L_6, /*hidden argument*/NULL);
		// if (m_DragState.active)
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_7 = __this->get_m_DragState_7();
		NullCheck(L_7);
		bool L_8 = L_7->get_active_0();
		if (!L_8)
		{
			goto IL_008a;
		}
	}
	{
		// var o = m_DragState.constraint.origin;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_9 = __this->get_m_DragState_7();
		NullCheck(L_9);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * L_10 = L_9->get_address_of_constraint_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// var d = m_DragState.constraint.direction;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_12 = __this->get_m_DragState_7();
		NullCheck(L_12);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * L_13 = L_12->get_address_of_constraint_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// Handles.DrawLine(o - d * 100f, o + d * 1000f, Color.green);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_16, (100.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_15, L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_20, (1000.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_19, L_21, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_23 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Handles_t5189914CDA1ADF1AC42271EFE06B43463315AEB8_il2cpp_TypeInfo_var);
		Handles_DrawLine_m6C9438C8D49A09F8E3A6A0C7C0E20BCF4EFE717C(L_18, L_22, L_23, 4, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_LateUpdate_mA991071851A6362FAA94977EC5D3A8AA2EB1F808 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	{
		// if (!m_DragState.active)
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_0 = __this->get_m_DragState_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_active_0();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// m_CameraMotion.DoLateUpdate();
		CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * L_2 = __this->get_m_CameraMotion_5();
		NullCheck(L_2);
		CameraMotion_DoLateUpdate_mE79EBF2633A67CB5860BC7A85FB753DA6B7D9D19(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_HandleInput_m7D4DF86F27101DBC65FEC16460827B94E1755BBF (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor_HandleInput_m7D4DF86F27101DBC65FEC16460827B94E1755BBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CameraMotion.active)
		CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * L_0 = __this->get_m_CameraMotion_5();
		NullCheck(L_0);
		bool L_1 = CameraMotion_get_active_m4369179355B546F18C9C9555248BA47039BA1B3F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Input.GetMouseButtonDown(0) && m_Selection.face != null)
		bool L_2 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_3 = __this->get_address_of_m_Selection_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_4 = L_3->get_face_1();
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// BeginDrag();
		MeshEditor_BeginDrag_m0C262DA4E810FDDACF111075C6DD2A300323FB8F(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002a:
	{
		// else if (Input.GetMouseButtonUp(0))
		bool L_5 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// EndDrag();
		MeshEditor_EndDrag_mE93C48D15326020720726D08C71209B989F58CBF(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// else if (m_DragState.active && Input.GetMouseButton(0))
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_6 = __this->get_m_DragState_7();
		NullCheck(L_6);
		bool L_7 = L_6->get_active_0();
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		bool L_8 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// UpdateDrag();
		MeshEditor_UpdateDrag_m9BAEDC1F0B6EC4329A70C41FB8017AE27E531D69(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0055:
	{
		// else if (Input.GetKeyUp(KeyCode.F))
		bool L_9 = Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193(((int32_t)102), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a2;
		}
	}
	{
		// if (m_Selection.mesh != null)
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_10 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_11 = L_10->get_mesh_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		// m_CameraMotion.Focus(m_Selection.mesh.gameObject);
		CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * L_13 = __this->get_m_CameraMotion_5();
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_14 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_15 = L_14->get_mesh_0();
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		CameraMotion_Focus_m507450B006B76DB81A48FCA5CAC2ED21C559065F(L_13, L_16, /*hidden argument*/NULL);
		return;
	}

IL_008d:
	{
		// m_CameraMotion.Focus(Vector3.zero, 10f);
		CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * L_17 = __this->get_m_CameraMotion_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_17);
		CameraMotion_Focus_mD9CD5A2BB6B63D576FB0D1DFA45B5EFEEABD1308(L_17, L_18, (10.0f), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::BeginDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_BeginDrag_m0C262DA4E810FDDACF111075C6DD2A300323FB8F (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor_BeginDrag_m0C262DA4E810FDDACF111075C6DD2A300323FB8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_DragState.active || m_Selection.mesh == null || m_Selection.face == null)
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_0 = __this->get_m_DragState_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_active_0();
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_2 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_3 = L_2->get_mesh_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_5 = __this->get_address_of_m_Selection_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_6 = L_5->get_face_1();
		if (L_6)
		{
			goto IL_002e;
		}
	}

IL_002d:
	{
		// return;
		return;
	}

IL_002e:
	{
		// m_DragState.active = true;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_7 = __this->get_m_DragState_7();
		NullCheck(L_7);
		L_7->set_active_0((bool)1);
		// var trs = m_Selection.mesh.transform;
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_8 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_9 = L_8->get_mesh_0();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_9, /*hidden argument*/NULL);
		// var origin = trs.TransformPoint(PMath.Average(m_Selection.mesh.positions, m_Selection.face.indexes));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = L_10;
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_12 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_13 = L_12->get_mesh_0();
		NullCheck(L_13);
		RuntimeObject* L_14 = ProBuilderMesh_get_positions_mD7DC4E56D757FE47C79C136D07370DDE3C77D93B(L_13, /*hidden argument*/NULL);
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_15 = __this->get_address_of_m_Selection_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_16 = L_15->get_face_1();
		NullCheck(L_16);
		ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_17 = Face_get_indexes_m893AE969377981492B98539BB9A216DD037B9924(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Math_Average_mFF77E5EB5FADED069F28C2AE70534B8D327F0B51(L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_11, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// var direction = trs.TransformDirection(PMath.Normal(m_Selection.mesh, m_Selection.face));
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_20 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_21 = L_20->get_mesh_0();
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_22 = __this->get_address_of_m_Selection_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_23 = L_22->get_face_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Math_Normal_mE3EAC434A22AAD5A4F5648730C004B336CE3ABBE(L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_11, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// m_DragState.constraint = new Ray(origin, direction);
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_26 = __this->get_m_DragState_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_29), L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_constraint_1(L_29);
		// m_DragState.meshState = new MeshState(m_Selection.mesh, m_Selection.face.distinctIndexes);
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_30 = __this->get_m_DragState_7();
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_31 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_32 = L_31->get_mesh_0();
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_33 = __this->get_address_of_m_Selection_6();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_34 = L_33->get_face_1();
		NullCheck(L_34);
		ReadOnlyCollection_1_tDC7E0CAFB7FB0329174E17C2BBE70564A1D8EF10 * L_35 = Face_get_distinctIndexes_mB2C9FA6A49FA179AEDF46C4A7568211B958EE027(L_34, /*hidden argument*/NULL);
		MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * L_36 = (MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 *)il2cpp_codegen_object_new(MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2_il2cpp_TypeInfo_var);
		MeshState__ctor_m86FE69747C8DAFD9113D6E1E69642320948BA347(L_36, L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_meshState_3(L_36);
		// m_DragState.offset = GetDragDistance();
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_37 = __this->get_m_DragState_7();
		float L_38 = MeshEditor_GetDragDistance_m8F25C0885FFC4372F5156B161B52A5A70D1BD463(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		L_37->set_offset_2(L_38);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::EndDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_EndDrag_mE93C48D15326020720726D08C71209B989F58CBF (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	{
		// m_DragState.active = false;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_0 = __this->get_m_DragState_7();
		NullCheck(L_0);
		L_0->set_active_0((bool)0);
		// }
		return;
	}
}
// System.Void ProBuilder.Examples.MeshEditor::UpdateDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor_UpdateDrag_m9BAEDC1F0B6EC4329A70C41FB8017AE27E531D69 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor_UpdateDrag_m9BAEDC1F0B6EC4329A70C41FB8017AE27E531D69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * V_1 = NULL;
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_2 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_3 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_4 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var distance = GetDragDistance() - m_DragState.offset;
		float L_0 = MeshEditor_GetDragDistance_m8F25C0885FFC4372F5156B161B52A5A70D1BD463(__this, /*hidden argument*/NULL);
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_1 = __this->get_m_DragState_7();
		NullCheck(L_1);
		float L_2 = L_1->get_offset_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_2));
		// var mesh = m_Selection.mesh;
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 * L_3 = __this->get_address_of_m_Selection_6();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_4 = L_3->get_mesh_0();
		V_1 = L_4;
		// var indices = m_DragState.meshState.indices;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_5 = __this->get_m_DragState_7();
		NullCheck(L_5);
		MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * L_6 = L_5->get_meshState_3();
		NullCheck(L_6);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = L_6->get_indices_3();
		V_2 = L_7;
		// var vertices = m_DragState.meshState.vertices;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_8 = __this->get_m_DragState_7();
		NullCheck(L_8);
		MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * L_9 = L_8->get_meshState_3();
		NullCheck(L_9);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = L_9->get_vertices_1();
		V_3 = L_10;
		// var origins = m_DragState.meshState.origins;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_11 = __this->get_m_DragState_7();
		NullCheck(L_11);
		MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * L_12 = L_11->get_meshState_3();
		NullCheck(L_12);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = L_12->get_origins_2();
		V_4 = L_13;
		// var direction = mesh.transform.InverseTransformDirection(m_DragState.constraint.direction);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_14 = V_1;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_16 = __this->get_m_DragState_7();
		NullCheck(L_16);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * L_17 = L_16->get_address_of_constraint_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_InverseTransformDirection_m6F0513F2EC19C204F2077E3C68DD1D45317CB5F2(L_15, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		// for (int i = 0, c = indices.Count; i < c; i++)
		V_6 = 0;
		// for (int i = 0, c = indices.Count; i < c; i++)
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_20, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		V_7 = L_21;
		goto IL_00a7;
	}

IL_007d:
	{
		// vertices[indices[i]] = origins[i] + direction * distance;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_22 = V_3;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_23 = V_2;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		int32_t L_25 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_26 = V_4;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_5;
		float L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_30, L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_33);
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00a7:
	{
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_35 = V_6;
		int32_t L_36 = V_7;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_007d;
		}
	}
	{
		// mesh.positions = vertices;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_37 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_38 = V_3;
		NullCheck(L_37);
		ProBuilderMesh_set_positions_mEB1534FC7C52F217685A2DFEFF114627A980038E(L_37, (RuntimeObject*)(RuntimeObject*)L_38, /*hidden argument*/NULL);
		// mesh.ToMesh();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_39 = V_1;
		NullCheck(L_39);
		ProBuilderMesh_ToMesh_m6122B859032D461E94A5D74537492B3D94AD08B4(L_39, 0, /*hidden argument*/NULL);
		// mesh.Refresh();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_40 = V_1;
		NullCheck(L_40);
		ProBuilderMesh_Refresh_m078963E6C4A55F9F0CB4A9D6C383096497A1B414(L_40, ((int32_t)31), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single ProBuilder.Examples.MeshEditor::GetDragDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshEditor_GetDragDistance_m8F25C0885FFC4372F5156B161B52A5A70D1BD463 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor_GetDragDistance_m8F25C0885FFC4372F5156B161B52A5A70D1BD463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Ray constraint = m_DragState.constraint;
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_0 = __this->get_m_DragState_7();
		NullCheck(L_0);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_1 = L_0->get_constraint_1();
		V_0 = L_1;
		// Ray mouse = m_SceneCamera.ScreenPointToRay(Input.mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = __this->get_m_SceneCamera_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_4 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 nearestPoint = PMath.GetNearestPointRayRay(constraint, mouse);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_5 = V_0;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_6 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Math_GetNearestPointRayRay_mD0BB8AECE3792FD2345353646FDE7B2F61CD55F1(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// float sign = System.Math.Sign(Vector3.Dot(nearestPoint - constraint.origin, constraint.direction));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_8, L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/NULL);
		float L_12 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_13 = Math_Sign_m2BC1E60FB868E64FEF4B034CF052AC276BB0D5AB(L_12, /*hidden argument*/NULL);
		V_3 = (((float)((float)L_13)));
		// return Vector3.Distance(constraint.origin, nearestPoint) * sign;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_14, L_15, /*hidden argument*/NULL);
		float L_17 = V_3;
		return ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17));
	}
}
// System.Void ProBuilder.Examples.MeshEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditor__ctor_m97403EDBC1F35C5CDBF9450986D5123A8D69EF02 (MeshEditor_t4337DAC9008D19B00A2CC5E0810A249820847EF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditor__ctor_m97403EDBC1F35C5CDBF9450986D5123A8D69EF02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DragState m_DragState = new DragState();
		DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * L_0 = (DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 *)il2cpp_codegen_object_new(DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545_il2cpp_TypeInfo_var);
		DragState__ctor_mE96546FB42F03DE84CE17FA005307BFA14E8BCF5(L_0, /*hidden argument*/NULL);
		__this->set_m_DragState_7(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.MeshEditor_DragState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragState__ctor_mE96546FB42F03DE84CE17FA005307BFA14E8BCF5 (DragState_t017ED9EF67791E3D2B4E9F17B318475F36872545 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Examples.MeshEditor_MeshState::.ctor(UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshState__ctor_m86FE69747C8DAFD9113D6E1E69642320948BA347 (MeshState_t189873BD7D71CCB214B19FB1EA2D28CA3145E1A2 * __this, ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, RuntimeObject* ___selectedIndices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshState__ctor_m86FE69747C8DAFD9113D6E1E69642320948BA347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public MeshState(ProBuilderMesh mesh, IList<int> selectedIndices)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_0 = ___mesh0;
		__this->set_mesh_0(L_0);
		// vertices = mesh.positions.ToArray();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_1 = ___mesh0;
		NullCheck(L_1);
		RuntimeObject* L_2 = ProBuilderMesh_get_positions_mD7DC4E56D757FE47C79C136D07370DDE3C77D93B(L_1, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = Enumerable_ToArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mC2832BB83AC3F04B94E13C7D0A19FF4C39600473(L_2, /*hidden argument*/Enumerable_ToArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mC2832BB83AC3F04B94E13C7D0A19FF4C39600473_RuntimeMethod_var);
		__this->set_vertices_1(L_3);
		// indices = mesh.GetCoincidentVertices(selectedIndices);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_4 = ___mesh0;
		RuntimeObject* L_5 = ___selectedIndices1;
		NullCheck(L_4);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_6 = ProBuilderMesh_GetCoincidentVertices_mD8055F764A941DEBC3E312657363F1334017FCAE(L_4, L_5, /*hidden argument*/NULL);
		__this->set_indices_3(L_6);
		// origins = new Vector3[indices.Count];
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = __this->get_indices_3();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_7, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_origins_2(L_9);
		// for (int i = 0, c = indices.Count; i < c; i++)
		V_0 = 0;
		// for (int i = 0, c = indices.Count; i < c; i++)
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_10 = __this->get_indices_3();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_10, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		V_1 = L_11;
		goto IL_0078;
	}

IL_0051:
	{
		// origins[i] = vertices[indices[i]];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_12 = __this->get_origins_2();
		int32_t L_13 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = __this->get_vertices_1();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_15 = __this->get_indices_3();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_18 = L_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_19);
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0078:
	{
		// for (int i = 0, c = indices.Count; i < c; i++)
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0051;
		}
	}
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
// System.Boolean ProBuilder.Examples.Selection::Add(UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Selection_Add_mAEDD7C60CC8FD95A2FFE1FC0E0D769DACF26FFF0 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Selection_Add_mAEDD7C60CC8FD95A2FFE1FC0E0D769DACF26FFF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mesh == null)
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("mesh");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Selection_Add_mAEDD7C60CC8FD95A2FFE1FC0E0D769DACF26FFF0_RuntimeMethod_var);
	}

IL_0014:
	{
		// return s_Selection.Add(mesh);
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var);
		HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * L_3 = ((Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_4 = ___mesh0;
		NullCheck(L_3);
		bool L_5 = HashSet_1_Add_m2A36D580488C76C3EB154F88581B059A8E1F5BFB(L_3, L_4, /*hidden argument*/HashSet_1_Add_m2A36D580488C76C3EB154F88581B059A8E1F5BFB_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void ProBuilder.Examples.Selection::Remove(UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_Remove_m5C7688138F38C3D3A2E446245CD5BC311FD75E0B (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Selection_Remove_m5C7688138F38C3D3A2E446245CD5BC311FD75E0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mesh == null)
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("mesh");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral52DA7846E396FF38CD6729BEC21B6F9159F9BD1C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Selection_Remove_m5C7688138F38C3D3A2E446245CD5BC311FD75E0B_RuntimeMethod_var);
	}

IL_0014:
	{
		// if(s_Selection.Contains(mesh))
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var);
		HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * L_3 = ((Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_4 = ___mesh0;
		NullCheck(L_3);
		bool L_5 = HashSet_1_Contains_mB8A5C989AC06C44519E2EB17F0D5CFE2184909F8(L_3, L_4, /*hidden argument*/HashSet_1_Contains_mB8A5C989AC06C44519E2EB17F0D5CFE2184909F8_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// s_Selection.Remove(mesh);
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var);
		HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * L_6 = ((Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_7 = ___mesh0;
		NullCheck(L_6);
		HashSet_1_Remove_mA6444014C12032BC5FFAD9021652A6E552AAB18E(L_6, L_7, /*hidden argument*/HashSet_1_Remove_mA6444014C12032BC5FFAD9021652A6E552AAB18E_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Boolean ProBuilder.Examples.Selection::Contains(UnityEngine.ProBuilder.ProBuilderMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Selection_Contains_m93A23E75CC243855FA435336EBE446AAEFD43706 (ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Selection_Contains_m93A23E75CC243855FA435336EBE446AAEFD43706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_Selection.Contains(mesh);
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var);
		HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * L_0 = ((Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var))->get_s_Selection_0();
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_1 = ___mesh0;
		NullCheck(L_0);
		bool L_2 = HashSet_1_Contains_mB8A5C989AC06C44519E2EB17F0D5CFE2184909F8(L_0, L_1, /*hidden argument*/HashSet_1_Contains_mB8A5C989AC06C44519E2EB17F0D5CFE2184909F8_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void ProBuilder.Examples.Selection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_Clear_m8F4F754E6857FA5104D3C385E9C4DC6970A0C69C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Selection_Clear_m8F4F754E6857FA5104D3C385E9C4DC6970A0C69C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Selection.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var);
		HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * L_0 = ((Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var))->get_s_Selection_0();
		NullCheck(L_0);
		HashSet_1_Clear_m43B15458020CAE5E6F134C11D70C7AEC364FA2F4(L_0, /*hidden argument*/HashSet_1_Clear_m43B15458020CAE5E6F134C11D70C7AEC364FA2F4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.ProBuilderMesh> ProBuilder.Examples.Selection::get_meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Selection_get_meshes_mC41C286D9AE558EA57ED62E9AD6B3416569D37C4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Selection_get_meshes_mC41C286D9AE558EA57ED62E9AD6B3416569D37C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Selection; }
		IL2CPP_RUNTIME_CLASS_INIT(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var);
		HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * L_0 = ((Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var))->get_s_Selection_0();
		return L_0;
	}
}
// System.Void ProBuilder.Examples.Selection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection__cctor_mCE157AFA2A624E35C14B747B4570453BD29C6E42 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Selection__cctor_mCE157AFA2A624E35C14B747B4570453BD29C6E42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static HashSet<ProBuilderMesh> s_Selection = new HashSet<ProBuilderMesh>();
		HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B * L_0 = (HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B *)il2cpp_codegen_object_new(HashSet_1_t4902309D50F40C68244CB1DBF9A39072BADF376B_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m89F23152662FA8A337393D4EEEE11BFABB804C19(L_0, /*hidden argument*/HashSet_1__ctor_m89F23152662FA8A337393D4EEEE11BFABB804C19_RuntimeMethod_var);
		((Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_StaticFields*)il2cpp_codegen_static_fields_for(Selection_t04773D259CF70915B2756609CACEDC38F0F71C2F_il2cpp_TypeInfo_var))->set_s_Selection_0(L_0);
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
// System.Void ProBuilder.Examples.SimpleGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleGrid_Start_mAE368389CAA560BC1AB25AD64923268C125E4727 (SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleGrid_Start_mAE368389CAA560BC1AB25AD64923268C125E4727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshFilter>().sharedMesh = GridMesh(lines, scale);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var);
		int32_t L_1 = __this->get_lines_4();
		float L_2 = __this->get_scale_5();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = SimpleGrid_GridMesh_m393FC56D00DF98719C28B99B14C6A32B732029AD(__this, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshFilter_set_sharedMesh_mFE8D12C35148063EB287951C7BFFB0328AAA7C5D(L_0, L_3, /*hidden argument*/NULL);
		// transform.position = Vector3.zero;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh ProBuilder.Examples.SimpleGrid::GridMesh(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * SimpleGrid_GridMesh_m393FC56D00DF98719C28B99B14C6A32B732029AD (SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7 * __this, int32_t ___lineCount0, float ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleGrid_GridMesh_m393FC56D00DF98719C28B99B14C6A32B732029AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_1 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_3 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B3_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B2_1 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	int32_t G_B4_1 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B5_1 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	int32_t G_B7_1 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B8_1 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	int32_t G_B10_1 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B10_2 = NULL;
	int32_t G_B12_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B11_1 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	int32_t G_B13_1 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* G_B13_2 = NULL;
	{
		// float half = (lineCount / 2f) * scale;
		int32_t L_0 = ___lineCount0;
		float L_1 = ___scale1;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_0)))/(float)(2.0f))), (float)L_1));
		// lineCount++;
		int32_t L_2 = ___lineCount0;
		___lineCount0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		// Vector3[] lines = new Vector3[lineCount * 4];
		int32_t L_3 = ___lineCount0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)4)));
		V_1 = L_4;
		// Vector3[] normals = new Vector3[lineCount * 4];
		int32_t L_5 = ___lineCount0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)4)));
		V_2 = L_6;
		// Vector2[] uv = new Vector2[lineCount * 4];
		int32_t L_7 = ___lineCount0;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_8 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)4)));
		V_3 = L_8;
		// int[] indices = new int[lineCount * 4];
		int32_t L_9 = ___lineCount0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)));
		V_4 = L_10;
		// int n = 0;
		V_5 = 0;
		// for (int y = 0; y < lineCount; y++)
		V_6 = 0;
		goto IL_014c;
	}

IL_0040:
	{
		// indices[n] = n;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = V_4;
		int32_t L_12 = V_5;
		int32_t L_13 = V_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_13);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_14 = V_3;
		int32_t L_15 = V_5;
		int32_t L_16 = V_6;
		G_B2_0 = L_15;
		G_B2_1 = L_14;
		if (!((int32_t)((int32_t)L_16%(int32_t)((int32_t)10))))
		{
			G_B3_0 = L_15;
			G_B3_1 = L_14;
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		G_B4_0 = L_17;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_005d;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED(/*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_005d:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )G_B4_0);
		// lines[n++] = new Vector3(y * scale - half, 0f, -half);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = V_1;
		int32_t L_20 = V_5;
		int32_t L_21 = L_20;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		int32_t L_22 = V_6;
		float L_23 = ___scale1;
		float L_24 = V_0;
		float L_25 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_22))), (float)L_23)), (float)L_24)), (0.0f), ((-L_25)), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_26);
		// indices[n] = n;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_30 = V_3;
		int32_t L_31 = V_5;
		int32_t L_32 = V_6;
		G_B5_0 = L_31;
		G_B5_1 = L_30;
		if (!((int32_t)((int32_t)L_32%(int32_t)((int32_t)10))))
		{
			G_B6_0 = L_31;
			G_B6_1 = L_30;
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		G_B7_0 = L_33;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_009f;
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED(/*hidden argument*/NULL);
		G_B7_0 = L_34;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_009f:
	{
		NullCheck(G_B7_2);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )G_B7_0);
		// lines[n++] = new Vector3(y * scale - half, 0f, half);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_35 = V_1;
		int32_t L_36 = V_5;
		int32_t L_37 = L_36;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		int32_t L_38 = V_6;
		float L_39 = ___scale1;
		float L_40 = V_0;
		float L_41 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_42), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_38))), (float)L_39)), (float)L_40)), (0.0f), L_41, /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_42);
		// indices[n] = n;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_43 = V_4;
		int32_t L_44 = V_5;
		int32_t L_45 = V_5;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)L_45);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_46 = V_3;
		int32_t L_47 = V_5;
		int32_t L_48 = V_6;
		G_B8_0 = L_47;
		G_B8_1 = L_46;
		if (!((int32_t)((int32_t)L_48%(int32_t)((int32_t)10))))
		{
			G_B9_0 = L_47;
			G_B9_1 = L_46;
			goto IL_00db;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		G_B10_0 = L_49;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00e0;
	}

IL_00db:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_50 = Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED(/*hidden argument*/NULL);
		G_B10_0 = L_50;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00e0:
	{
		NullCheck(G_B10_2);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )G_B10_0);
		// lines[n++] = new Vector3(-half, 0f, y * scale - half);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_51 = V_1;
		int32_t L_52 = V_5;
		int32_t L_53 = L_52;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		float L_54 = V_0;
		int32_t L_55 = V_6;
		float L_56 = ___scale1;
		float L_57 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_58), ((-L_54)), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_55))), (float)L_56)), (float)L_57)), /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_58);
		// indices[n] = n;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = V_4;
		int32_t L_60 = V_5;
		int32_t L_61 = V_5;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (int32_t)L_61);
		// uv[n] = y % 10 == 0 ? Vector2.one : Vector2.zero;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_62 = V_3;
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		G_B11_0 = L_63;
		G_B11_1 = L_62;
		if (!((int32_t)((int32_t)L_64%(int32_t)((int32_t)10))))
		{
			G_B12_0 = L_63;
			G_B12_1 = L_62;
			goto IL_011d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_65 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		G_B13_0 = L_65;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0122;
	}

IL_011d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_66 = Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED(/*hidden argument*/NULL);
		G_B13_0 = L_66;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0122:
	{
		NullCheck(G_B13_2);
		(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )G_B13_0);
		// lines[n++] = new Vector3(half, 0f, y * scale - half);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_67 = V_1;
		int32_t L_68 = V_5;
		int32_t L_69 = L_68;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		float L_70 = V_0;
		int32_t L_71 = V_6;
		float L_72 = ___scale1;
		float L_73 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_74), L_70, (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_71))), (float)L_72)), (float)L_73)), /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_74);
		// for (int y = 0; y < lineCount; y++)
		int32_t L_75 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_014c:
	{
		// for (int y = 0; y < lineCount; y++)
		int32_t L_76 = V_6;
		int32_t L_77 = ___lineCount0;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0040;
		}
	}
	{
		// for (int i = 0; i < lines.Length; i++)
		V_7 = 0;
		goto IL_016c;
	}

IL_0159:
	{
		// normals[i] = Vector3.up;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_78 = V_2;
		int32_t L_79 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_80);
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_81 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_016c:
	{
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_82 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_83 = V_1;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))))
		{
			goto IL_0159;
		}
	}
	{
		// Mesh tm = new Mesh();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_84 = (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)il2cpp_codegen_object_new(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C_il2cpp_TypeInfo_var);
		Mesh__ctor_m3AEBC82AB71D4F9498F6E254174BEBA8372834B4(L_84, /*hidden argument*/NULL);
		// tm.name = "GridMesh";
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_85 = L_84;
		NullCheck(L_85);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_85, _stringLiteralBEFC1F2E5BEEDFB22B78EB3052F10E017A7DF86B, /*hidden argument*/NULL);
		// tm.vertices = lines;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_86 = L_85;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_87 = V_1;
		NullCheck(L_86);
		Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6(L_86, L_87, /*hidden argument*/NULL);
		// tm.normals = normals;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_88 = L_86;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_89 = V_2;
		NullCheck(L_88);
		Mesh_set_normals_m4054D319A67DAAA25A794D67AD37278A84406589(L_88, L_89, /*hidden argument*/NULL);
		// tm.subMeshCount = 1;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_90 = L_88;
		NullCheck(L_90);
		Mesh_set_subMeshCount_mAD794C2BB87790EAE979561B799ADD2EE1C65593(L_90, 1, /*hidden argument*/NULL);
		// tm.SetIndices(indices, MeshTopology.Lines, 0);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_91 = L_90;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_92 = V_4;
		NullCheck(L_91);
		Mesh_SetIndices_m18C0006CF36C43FF16B1917099E2970C2D4145BD(L_91, L_92, 3, 0, /*hidden argument*/NULL);
		// tm.uv = uv;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_93 = L_91;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_94 = V_3;
		NullCheck(L_93);
		Mesh_set_uv_m56E4B52315669FBDA89DC9C550AC89EEE8A4E7C8(L_93, L_94, /*hidden argument*/NULL);
		// return tm;
		return L_93;
	}
}
// System.Void ProBuilder.Examples.SimpleGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleGrid__ctor_mF9D77406A6592CC8C0D2FB7744E54A1C6B0C6498 (SimpleGrid_t70BA435CCB1F23B8ED645C270D0D0675844B71F7 * __this, const RuntimeMethod* method)
{
	{
		// public int lines = 10;
		__this->set_lines_4(((int32_t)10));
		// public float scale = 1f;
		__this->set_scale_5((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject ProBuilder.Examples.Utility::PickObject(UnityEngine.Camera,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Utility_PickObject_m7E3BED93B6F2641AF8994631DD720F391F1FDABA (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mousePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_PickObject_m7E3BED93B6F2641AF8994631DD720F391F1FDABA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var ray = camera.ScreenPointToRay(mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___camera0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___mousePosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_3 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_0, L_2, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_4 = Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495(L_3, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return hit.collider.gameObject;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_5 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0022:
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// ProBuilder.Examples.MeshAndFace ProBuilder.Examples.Utility::PickFace(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  Utility_PickFace_m5A5C6BA199F31215A62B810DA882264CE36BCA51 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mousePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_PickFace_m5A5C6BA199F31215A62B810DA882264CE36BCA51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * V_2 = NULL;
	{
		// var res = new MeshAndFace();
		il2cpp_codegen_initobj((&V_0), sizeof(MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37 ));
		// var go = PickObject(camera, mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___camera0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___mousePosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Utility_PickObject_m7E3BED93B6F2641AF8994631DD720F391F1FDABA(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (go == null || !(res.mesh = go.GetComponent<ProBuilderMesh>()))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_1;
		NullCheck(L_6);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_7 = GameObject_GetComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m0EBF957C0024FE39BD01BD5D0585F98FEE7FA32D(L_6, /*hidden argument*/GameObject_GetComponent_TisProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F_m0EBF957C0024FE39BD01BD5D0585F98FEE7FA32D_RuntimeMethod_var);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_8 = L_7;
		V_2 = L_8;
		(&V_0)->set_mesh_0(L_8);
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0037;
		}
	}

IL_0035:
	{
		// return res;
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  L_11 = V_0;
		return L_11;
	}

IL_0037:
	{
		// res.face = SelectionPicker.PickFace(camera, mousePosition, res.mesh);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_12 = ___camera0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___mousePosition1;
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  L_14 = V_0;
		ProBuilderMesh_t2C732C5E27EE2A11FE46A1158F971A7F1347464F * L_15 = L_14.get_mesh_0();
		Face_tF8A1BC4BF5CDE25DE551FA0296F89C800C53B852 * L_16 = SelectionPicker_PickFace_m9380B19D017667BCC9ED56D385339AFA4E4F8481(L_12, L_13, L_15, /*hidden argument*/NULL);
		(&V_0)->set_face_1(L_16);
		// return res;
		MeshAndFace_t02E724967ACAC7B3ECB1D69D8B3577CB48EF7D37  L_17 = V_0;
		return L_17;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t CameraMotion_get_cameraState_mD18E2DC5B6FDA656DB71942DE74D5C7E6A20684F_inline (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = __this->get_U3CcameraStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraMotion_set_cameraState_mC954B2FB29F8592BB0B864E1E0F3415C2D72326F_inline (CameraMotion_tBD2B097469D7F1D57D36A019F4DAD41B22727670 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ViewTool cameraState { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcameraStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
