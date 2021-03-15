﻿#include "il2cpp-config.h"

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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tFF77EB203CF12E843446A71A6581145AB929D681;
// System.Collections.Generic.IComparer`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IComparer_1_tFE7E1B8A799A350306B3E6EC0FD1C5FBA057E8C8;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tC6EB38083371E9C00CC441AE4ADB4A3100BEB721;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct IEnumerable_1_t9DBD45E62654D66C33B763BAE4BDDF2AB6B520CD;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>
struct IEnumerable_1_t2D0EFB6A75E437CEA7F1BF378D07B382FE0CD3C8;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IEnumerable_1_tFEAA257033459AC3B62F6CADC36F0F62CE32E85E;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_tE205FF055203E22F3B44CD6ABFFED46565288600;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct IList_1_t34E5F27EB4A09756D14060BA9B6E2EFCB1B30C84;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>
struct IList_1_t60526566CB3820B1EC1744939DEC75933FBE8429;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerable
struct IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
struct AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
struct DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint[]
struct DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
struct DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle[]
struct DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282;
// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
struct U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB;
// UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
struct PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D;
// UnityEngine.ProBuilder.Poly2Tri.Polygon
struct Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586;
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
struct PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9;
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[]
struct PolygonPointU5BU5D_t661578CCDE92AF1A45580A269617A8A1075D79EF;
// UnityEngine.ProBuilder.Poly2Tri.Polygon[]
struct PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526;
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable
struct Triangulatable_tF8775F589F4D34BBC1BCDAE884553C2ED7FFD7D5;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
struct TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
struct TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint[]
struct TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D;

IL2CPP_EXTERN_C RuntimeClass* AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t92843E4EA2556341F10194C266099018B17E94A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC6EB38083371E9C00CC441AE4ADB4A3100BEB721_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t60526566CB3820B1EC1744939DEC75933FBE8429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangulatable_tF8775F589F4D34BBC1BCDAE884553C2ED7FFD7D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
IL2CPP_EXTERN_C String_t* _stringLiteral214151CB8C6D960F6004C5214F63B8B14566FEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral2D8CDF068945B09295470CC500D55DB55ED55C9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4C944ED59FB7B35811B15294F39E7EB7EF1CA737;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral52D5D92C9473C1EE1EDAEC140A224AF1905D5B39;
IL2CPP_EXTERN_C String_t* _stringLiteral55CA8173E83F776306409B1B0D4550B22DAB54E1;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral5C1713771585148A45296FC2A28E0D9B64B3C607;
IL2CPP_EXTERN_C String_t* _stringLiteral6B8BDD37D6A5FE9BFD9CE2C3B38104FB717F3F22;
IL2CPP_EXTERN_C String_t* _stringLiteral7620EDABDDDAFB81E95BC1FC24BC4F3743805320;
IL2CPP_EXTERN_C String_t* _stringLiteral819F41F058379EB51168FF0AD732BE993FA49610;
IL2CPP_EXTERN_C String_t* _stringLiteral934A8634676AE734B407BD874197C4B7D163657A;
IL2CPP_EXTERN_C String_t* _stringLiteral96EC874110F5674A57DEAEF286694579880D9F61;
IL2CPP_EXTERN_C String_t* _stringLiteralAAA3B7B7215230DE4A5C3EC9062090231C301B8D;
IL2CPP_EXTERN_C String_t* _stringLiteralB413A83B8F8509B21B9D4D5A32AC41B8569496CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC0C735C8692D6230EDF64759042851401DD2747C;
IL2CPP_EXTERN_C String_t* _stringLiteralD00D8ACAB6BB5D12333254CE4465D6E7E54ACBCD;
IL2CPP_EXTERN_C String_t* _stringLiteralD20A0F77DDD400F8F60D1A62659E79FB37FFBC5D;
IL2CPP_EXTERN_C String_t* _stringLiteralD41CE9D92FC14809009CE1633171C1438F0A9211;
IL2CPP_EXTERN_C String_t* _stringLiteralD48D17293DB4E60C62C562DBF905942D8BA25C1A;
IL2CPP_EXTERN_C String_t* _stringLiteralF5611CA4C60AE11A4DAC3B1722205A0FC0D9C9D9;
IL2CPP_EXTERN_C String_t* _stringLiteralF61C965BA01AE4E9DBE21527FEB268879D862A44;
IL2CPP_EXTERN_C const RuntimeMethod* AdvancingFront_LocatePoint_m20E58E4C6D84EB573087AE94085DF3C0B5D4408F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisTriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D_mEACC936F27FE9F1B054147C71C3936E465AB4681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisPolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9_m1EE166E10CEB289CCFD66C958988815F503A1928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m57F75A7771C43788AFB2A997766490AE8B3E293D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mABE0450BD7896734A750E7434E75473043A90F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAECD9E3E206D54E1795675777EC1A5D5668F098F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m483F65B30DFD9B154F1AB2B1EA0224D310A3C9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B23BC5EC794E42DE0D86BBB2E7FC44FA05CD0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFA7973F7DBA060DEB216CE7678BB0340318C1C45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m691E606DB5E20CEF856B9DD1F4F4D6AAB68A8575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7347BF6714A4BBD747AC33A34181566B1DBA8D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDA655D1BD487CB7785F2CA8A3E8717E645EA2021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Clear_m84E83CA44572720872962DA54C9149719A32C7A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Contains_m989F76062991CF4E316D89FC5184BB1D33470B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mE8361ABB827B9F8C4A9D54FB269F03E6036586E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m298D8B742EE79A4E757105B256972C50B359480F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5D5A46A70DC5551221237CF0D0E10433D7044400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE23DCF76145267A908E4838A246D932339B22822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6B0D549DE65AFE6C52EF75B68BA302ACC40B94D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6F14B6E00C48AF3F5E85F0DEF5D19E04B98F571F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m78A6F8E216A32929C8FE7E97C480DFCF7660E475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m8DADC91FE1E6B1EC9B4AAE94D838F59236E6743A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m9813CB128EDD4C8F8492549D1BA4E083B3527480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1E8B3FAD48752BB5B27E1E9030C66BE3C69ED179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m367A7A864E0FD4762BC11C1FD623B733739D84B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m556B44F481C2F0F211428476F25C2A02D07B5DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m643435A2B66C4E7D1CEEBCF079CCD01C2D9833BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C37730941C3E22EAF2BF642AE05D477A1BF821C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Polygon__ctor_m270D6CEC54E1B91FA19C2C4D039636E475EF2105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_mF7E53F235FF9681103F337D328F8B2D5FE9921BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AdvancingFront_LocatePoint_m20E58E4C6D84EB573087AE94085DF3C0B5D4408F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdvancingFront_ToString_mF5E18C06D97F5A52E1FB00186F1B47D20F2AE588_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_Clear_mC8577A333D0C2F508FBB833E4C829F9B164C7DA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_CreateAdvancingFront_m8E1E2DFB78D51CF12340835CEDF72172A29A4D67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_FinalizeTriangulation_mB72F54E49BAB7BFB3DB20F9B6F601C699F7C54AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_MeshCleanReq_m49C6D0E2932A44BEA90E524928F8F479E26DECB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_NewConstraint_mEDE58C6509A659A99CD377614E008CAFC2B3749D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_PrepareTriangulation_m276AD1D1E4FBBAEF3FAF4E0DF147FE4C307DA09C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext_RemoveFromList_m32173CBF8B9506E9598C9B897B6B51D01BBD6EE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepContext__ctor_mAAC4DFADAD551C53E1C90E2B40033EB319098F13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepDebugContext_set_ActiveConstraint_m418CFFB54544323CFCDDF05A1EA185B61C1683BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepDebugContext_set_ActivePoint_m1F2A670990D0582DF9CC2E93C180570B17EB152B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweepDebugContext_set_SecondaryTriangle_m3574DE99A897AB99A533D776F46D8026C61E9295_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_BasinAngle_m10EFCC9A02B6125BB3597EEFB035B616FFAA64F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_EdgeEvent_m4D97133EF5CE89599B70AA0723C9D4AF866746F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillBasinReq_m56BFD87CE522F8D5F9178A8DD9AEF03BC40A9378_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillBasin_m35041B29CD2BBCA61C982F5A011F9C7B37C60883_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillLeftAboveEdgeEvent_m60C7E59CB4133C56009FB98E9DA683C6E5CA2B14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillLeftBelowEdgeEvent_m2E0E2713B192599343BBA829FF97405272FC72BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillLeftConcaveEdgeEvent_m80BF4E08F731DFF15B3B37355900FE7CC744BEF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillLeftConvexEdgeEvent_m4F06AE3BC50459577A56BC8693269ADADB7A2C93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillRightAboveEdgeEvent_mCE4F2DFC8ED785ADF058EC23DB53550F26B5600A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillRightBelowEdgeEvent_mE48E6FC6CA1C2771C861BA954FE732641C8D6900_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillRightConcaveEdgeEvent_mCA32CBD2D17BCBE53410E577318F354FF12190B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FillRightConvexEdgeEvent_mA91731D66F7966D8F838CE2383C161CA37B513C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_HoleAngle_m9FA809DA54C5DFC4A1B36614B9E5085FB56F63E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_IsEdgeSideOfTriangle_m8B542B36D363584165BF898E1444AA3DB35079E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_NewFrontTriangle_m67315DC674E0AAC4AED41EE087CF1B19F6FFC8C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_PointEvent_m8EEA26BE914D0E62FFE5E85DA05A3F70FF1189FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_Sweep_m4AE80536E2CF530EEBD92F003F3D277C2DEEC1AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DTSweep_TurnAdvancingFrontConvex_m74087ACFF216EA2771D4B8D21558F06C8A34263E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_Legalize_m74AA7660F67F48CD93BA5C081518272DC78123E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_RotateCW_m89343D647B63AE562CDD2593F752982EC7F28FCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle_ToString_m8118E7BA7404DB70DE38CD53C94E7FE6EA88CC4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DelaunayTriangle__ctor_mFBBC9E9E6CCFCDF571C82E9A24152615053068D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FixedBitArray3_Enumerate_m8B13F021334E6D1CA067C0513B3C6B010167A4FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FixedBitArray3_GetEnumerator_m63A8B70E76AAA02DEA1CF7A57C16AB85361F6662_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Polygon_AddHole_mF55835C0A8EFDA3DB0526215554949F20135602A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Polygon_AddTriangle_m90F0A658E4E0C6D24B5D5A36A006E9AEA84E1626_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Polygon_AddTriangles_m4BBA351D9A74C8265C53F1A663FB0179D499504D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Polygon_Prepare_mF8988ECE495B9338C8372D9FC868D5E5BEB2A835_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Polygon__ctor_m270D6CEC54E1B91FA19C2C4D039636E475EF2105_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Polygon__ctor_mAC6E1D7FBBA4DF180D23212F0127A54766E5BB18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationContext_Clear_m5E94C79284C9887B58548A696413300157867EFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationContext_PrepareTriangulation_mD4A6BAA5F582902E37DFEEA3BAF00C18EE28C5C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationContext__ctor_m3A3D59F35FC48D89C87E8270952DFD0E95778936_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationPoint_AddEdge_m012E25660FDE3069E1271B1163775F011BAE8603_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationPoint_ToString_mAC0409A5859212207C9E352784DE6D7020E0C092_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TriangulationUtil__cctor_mE12C6B477ADE39E0005D18129F754A211D135B18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m37C17EB66EF15E9E21B59372491B3985106DFB65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_mF7E53F235FF9681103F337D328F8B2D5FE9921BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CEnumerateU3Ed__10_System_Collections_IEnumerator_get_Current_m2F66114EF1AB433F739346FEBD0622751953D525_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct PolygonPointU5BU5D_t661578CCDE92AF1A45580A269617A8A1075D79EF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t08E83D00CE8C3099C45641C54240A2CF7663C504 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct  List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822, ____items_1)); }
	inline DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A* get__items_1() const { return ____items_1; }
	inline DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822_StaticFields, ____emptyArray_5)); }
	inline DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DTSweepConstraintU5BU5D_t50F6073F177E8D9A98F324B2B02C35EBE800806A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct  List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48, ____items_1)); }
	inline DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282* get__items_1() const { return ____items_1; }
	inline DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48_StaticFields, ____emptyArray_5)); }
	inline DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DelaunayTriangleU5BU5D_tC7F9C816DA282576D0CA4627FBDF44538EDE4282* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct  List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE, ____items_1)); }
	inline PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526* get__items_1() const { return ____items_1; }
	inline PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE_StaticFields, ____emptyArray_5)); }
	inline PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PolygonU5BU5D_t513B61A3A397895032578DC2FF0988E1F674E526* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct  List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7, ____items_1)); }
	inline TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D* get__items_1() const { return ____items_1; }
	inline TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7_StaticFields, ____emptyArray_5)); }
	inline TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TriangulationPointU5BU5D_t8DD934F131CAE836CF0049C2A54AA8E6250F2D5D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
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

// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
struct  AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Head
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___Head_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Tail
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___Tail_1;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Search
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___Search_2;

public:
	inline static int32_t get_offset_of_Head_0() { return static_cast<int32_t>(offsetof(AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8, ___Head_0)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_Head_0() const { return ___Head_0; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_Head_0() { return &___Head_0; }
	inline void set_Head_0(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___Head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Head_0), (void*)value);
	}

	inline static int32_t get_offset_of_Tail_1() { return static_cast<int32_t>(offsetof(AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8, ___Tail_1)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_Tail_1() const { return ___Tail_1; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_Tail_1() { return &___Tail_1; }
	inline void set_Tail_1(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___Tail_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tail_1), (void*)value);
	}

	inline static int32_t get_offset_of_Search_2() { return static_cast<int32_t>(offsetof(AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8, ___Search_2)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_Search_2() const { return ___Search_2; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_Search_2() { return &___Search_2; }
	inline void set_Search_2(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___Search_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Search_2), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
struct  AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Next
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___Next_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Prev
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___Prev_1;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Value
	double ___Value_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Point
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___Point_3;
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Triangle
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___Triangle_4;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE, ___Next_0)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_Next_0() const { return ___Next_0; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___Next_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_0), (void*)value);
	}

	inline static int32_t get_offset_of_Prev_1() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE, ___Prev_1)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_Prev_1() const { return ___Prev_1; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_Prev_1() { return &___Prev_1; }
	inline void set_Prev_1(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___Prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prev_1), (void*)value);
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE, ___Value_2)); }
	inline double get_Value_2() const { return ___Value_2; }
	inline double* get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(double value)
	{
		___Value_2 = value;
	}

	inline static int32_t get_offset_of_Point_3() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE, ___Point_3)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_Point_3() const { return ___Point_3; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_Point_3() { return &___Point_3; }
	inline void set_Point_3(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___Point_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Point_3), (void*)value);
	}

	inline static int32_t get_offset_of_Triangle_4() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE, ___Triangle_4)); }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * get_Triangle_4() const { return ___Triangle_4; }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA ** get_address_of_Triangle_4() { return &___Triangle_4; }
	inline void set_Triangle_4(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * value)
	{
		___Triangle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triangle_4), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweep
struct  DTSweep_t3D749477FE979BC0C2A9ADC02EC0F693387AE57C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
struct  DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::leftNode
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___leftNode_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::bottomNode
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___bottomNode_1;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::rightNode
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___rightNode_2;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::width
	double ___width_3;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::leftHighest
	bool ___leftHighest_4;

public:
	inline static int32_t get_offset_of_leftNode_0() { return static_cast<int32_t>(offsetof(DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66, ___leftNode_0)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_leftNode_0() const { return ___leftNode_0; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_leftNode_0() { return &___leftNode_0; }
	inline void set_leftNode_0(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___leftNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftNode_0), (void*)value);
	}

	inline static int32_t get_offset_of_bottomNode_1() { return static_cast<int32_t>(offsetof(DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66, ___bottomNode_1)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_bottomNode_1() const { return ___bottomNode_1; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_bottomNode_1() { return &___bottomNode_1; }
	inline void set_bottomNode_1(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___bottomNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_rightNode_2() { return static_cast<int32_t>(offsetof(DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66, ___rightNode_2)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get_rightNode_2() const { return ___rightNode_2; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of_rightNode_2() { return &___rightNode_2; }
	inline void set_rightNode_2(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		___rightNode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightNode_2), (void*)value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66, ___width_3)); }
	inline double get_width_3() const { return ___width_3; }
	inline double* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(double value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_leftHighest_4() { return static_cast<int32_t>(offsetof(DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66, ___leftHighest_4)); }
	inline bool get_leftHighest_4() const { return ___leftHighest_4; }
	inline bool* get_address_of_leftHighest_4() { return &___leftHighest_4; }
	inline void set_leftHighest_4(bool value)
	{
		___leftHighest_4 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
struct  DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::ConstrainedEdge
	DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___ConstrainedEdge_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::Right
	bool ___Right_1;

public:
	inline static int32_t get_offset_of_ConstrainedEdge_0() { return static_cast<int32_t>(offsetof(DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2, ___ConstrainedEdge_0)); }
	inline DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * get_ConstrainedEdge_0() const { return ___ConstrainedEdge_0; }
	inline DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC ** get_address_of_ConstrainedEdge_0() { return &___ConstrainedEdge_0; }
	inline void set_ConstrainedEdge_0(DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * value)
	{
		___ConstrainedEdge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstrainedEdge_0), (void*)value);
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2, ___Right_1)); }
	inline bool get_Right_1() const { return ___Right_1; }
	inline bool* get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(bool value)
	{
		___Right_1 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
struct  DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9  : public RuntimeObject
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.Polygon
struct  Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.Polygon::_points
	List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * ____points_0;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.Polygon::_steinerPoints
	List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * ____steinerPoints_1;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> UnityEngine.ProBuilder.Poly2Tri.Polygon::_holes
	List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * ____holes_2;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.Polygon::_triangles
	List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * ____triangles_3;

public:
	inline static int32_t get_offset_of__points_0() { return static_cast<int32_t>(offsetof(Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586, ____points_0)); }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * get__points_0() const { return ____points_0; }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 ** get_address_of__points_0() { return &____points_0; }
	inline void set__points_0(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * value)
	{
		____points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____points_0), (void*)value);
	}

	inline static int32_t get_offset_of__steinerPoints_1() { return static_cast<int32_t>(offsetof(Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586, ____steinerPoints_1)); }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * get__steinerPoints_1() const { return ____steinerPoints_1; }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 ** get_address_of__steinerPoints_1() { return &____steinerPoints_1; }
	inline void set__steinerPoints_1(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * value)
	{
		____steinerPoints_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____steinerPoints_1), (void*)value);
	}

	inline static int32_t get_offset_of__holes_2() { return static_cast<int32_t>(offsetof(Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586, ____holes_2)); }
	inline List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * get__holes_2() const { return ____holes_2; }
	inline List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE ** get_address_of__holes_2() { return &____holes_2; }
	inline void set__holes_2(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * value)
	{
		____holes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____holes_2), (void*)value);
	}

	inline static int32_t get_offset_of__triangles_3() { return static_cast<int32_t>(offsetof(Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586, ____triangles_3)); }
	inline List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * get__triangles_3() const { return ____triangles_3; }
	inline List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 ** get_address_of__triangles_3() { return &____triangles_3; }
	inline void set__triangles_3(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * value)
	{
		____triangles_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____triangles_3), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
struct  TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::P
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___P_0;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::Q
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___Q_1;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329, ___P_0)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_P_0() const { return ___P_0; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_0), (void*)value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329, ___Q_1)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_Q_1() const { return ___Q_1; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_1), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
struct  TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::_tcx
	TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * ____tcx_0;

public:
	inline static int32_t get_offset_of__tcx_0() { return static_cast<int32_t>(offsetof(TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859, ____tcx_0)); }
	inline TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * get__tcx_0() const { return ____tcx_0; }
	inline TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A ** get_address_of__tcx_0() { return &____tcx_0; }
	inline void set__tcx_0(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * value)
	{
		____tcx_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcx_0), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
struct  TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::<Edges>k__BackingField
	List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * ___U3CEdgesU3Ek__BackingField_0;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::X
	double ___X_1;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::Y
	double ___Y_2;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::Index
	int32_t ___Index_3;

public:
	inline static int32_t get_offset_of_U3CEdgesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D, ___U3CEdgesU3Ek__BackingField_0)); }
	inline List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * get_U3CEdgesU3Ek__BackingField_0() const { return ___U3CEdgesU3Ek__BackingField_0; }
	inline List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 ** get_address_of_U3CEdgesU3Ek__BackingField_0() { return &___U3CEdgesU3Ek__BackingField_0; }
	inline void set_U3CEdgesU3Ek__BackingField_0(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * value)
	{
		___U3CEdgesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEdgesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D, ___X_1)); }
	inline double get_X_1() const { return ___X_1; }
	inline double* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(double value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D, ___Y_2)); }
	inline double get_Y_2() const { return ___Y_2; }
	inline double* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(double value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Index_3() { return static_cast<int32_t>(offsetof(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D, ___Index_3)); }
	inline int32_t get_Index_3() const { return ___Index_3; }
	inline int32_t* get_address_of_Index_3() { return &___Index_3; }
	inline void set_Index_3(int32_t value)
	{
		___Index_3 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
struct  TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797  : public RuntimeObject
{
public:

public:
};

struct TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_StaticFields
{
public:
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::EPSILON
	double ___EPSILON_0;

public:
	inline static int32_t get_offset_of_EPSILON_0() { return static_cast<int32_t>(offsetof(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_StaticFields, ___EPSILON_0)); }
	inline double get_EPSILON_0() const { return ___EPSILON_0; }
	inline double* get_address_of_EPSILON_0() { return &___EPSILON_0; }
	inline void set_EPSILON_0(double value)
	{
		___EPSILON_0 = value;
	}
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct  Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB, ___list_0)); }
	inline List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * get_list_0() const { return ___list_0; }
	inline List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB, ___current_3)); }
	inline DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * get_current_3() const { return ___current_3; }
	inline DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct  Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC, ___list_0)); }
	inline List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * get_list_0() const { return ___list_0; }
	inline List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC, ___current_3)); }
	inline Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * get_current_3() const { return ___current_3; }
	inline Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct  Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C, ___list_0)); }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * get_list_0() const { return ___list_0; }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C, ___current_3)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_current_3() const { return ___current_3; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
struct  DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC  : public TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
struct  DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A  : public TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_primaryTriangle
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ____primaryTriangle_1;
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_secondaryTriangle
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ____secondaryTriangle_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activePoint
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ____activePoint_3;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activeNode
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ____activeNode_4;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activeConstraint
	DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ____activeConstraint_5;

public:
	inline static int32_t get_offset_of__primaryTriangle_1() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A, ____primaryTriangle_1)); }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * get__primaryTriangle_1() const { return ____primaryTriangle_1; }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA ** get_address_of__primaryTriangle_1() { return &____primaryTriangle_1; }
	inline void set__primaryTriangle_1(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * value)
	{
		____primaryTriangle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryTriangle_1), (void*)value);
	}

	inline static int32_t get_offset_of__secondaryTriangle_2() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A, ____secondaryTriangle_2)); }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * get__secondaryTriangle_2() const { return ____secondaryTriangle_2; }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA ** get_address_of__secondaryTriangle_2() { return &____secondaryTriangle_2; }
	inline void set__secondaryTriangle_2(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * value)
	{
		____secondaryTriangle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____secondaryTriangle_2), (void*)value);
	}

	inline static int32_t get_offset_of__activePoint_3() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A, ____activePoint_3)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get__activePoint_3() const { return ____activePoint_3; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of__activePoint_3() { return &____activePoint_3; }
	inline void set__activePoint_3(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		____activePoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activePoint_3), (void*)value);
	}

	inline static int32_t get_offset_of__activeNode_4() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A, ____activeNode_4)); }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * get__activeNode_4() const { return ____activeNode_4; }
	inline AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE ** get_address_of__activeNode_4() { return &____activeNode_4; }
	inline void set__activeNode_4(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * value)
	{
		____activeNode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeNode_4), (void*)value);
	}

	inline static int32_t get_offset_of__activeConstraint_5() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A, ____activeConstraint_5)); }
	inline DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * get__activeConstraint_5() const { return ____activeConstraint_5; }
	inline DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC ** get_address_of__activeConstraint_5() { return &____activeConstraint_5; }
	inline void set__activeConstraint_5(DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * value)
	{
		____activeConstraint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeConstraint_5), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>
struct  FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B 
{
public:
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	RuntimeObject * ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	RuntimeObject * ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	RuntimeObject * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B, ____0_0)); }
	inline RuntimeObject * get__0_0() const { return ____0_0; }
	inline RuntimeObject ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(RuntimeObject * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B, ____1_1)); }
	inline RuntimeObject * get__1_1() const { return ____1_1; }
	inline RuntimeObject ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(RuntimeObject * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B, ____2_2)); }
	inline RuntimeObject * get__2_2() const { return ____2_2; }
	inline RuntimeObject ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(RuntimeObject * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct  FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 
{
public:
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12, ____0_0)); }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * get__0_0() const { return ____0_0; }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12, ____1_1)); }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * get__1_1() const { return ____1_1; }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12, ____2_2)); }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * get__2_2() const { return ____2_2; }
	inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct  FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 
{
public:
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125, ____0_0)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get__0_0() const { return ____0_0; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125, ____1_1)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get__1_1() const { return ____1_1; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125, ____2_2)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get__2_2() const { return ____2_2; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct  FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B 
{
public:
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_0
	bool ____0_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_1
	bool ____1_1;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_2
	bool ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B, ____0_0)); }
	inline bool get__0_0() const { return ____0_0; }
	inline bool* get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(bool value)
	{
		____0_0 = value;
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B, ____1_1)); }
	inline bool get__1_1() const { return ____1_1; }
	inline bool* get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(bool value)
	{
		____1_1 = value;
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B, ____2_2)); }
	inline bool get__2_2() const { return ____2_2; }
	inline bool* get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(bool value)
	{
		____2_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_pinvoke
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
};
// Native definition for COM marshalling of UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_com
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
};

// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
struct  PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9  : public TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D
{
public:

public:
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

// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
struct  DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Points
	FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125  ___Points_0;
	// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Neighbors
	FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12  ___Neighbors_1;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIsConstrained
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  ___EdgeIsConstrained_2;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIsDelaunay
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  ___EdgeIsDelaunay_3;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::<IsInterior>k__BackingField
	bool ___U3CIsInteriorU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Points_0() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA, ___Points_0)); }
	inline FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125  get_Points_0() const { return ___Points_0; }
	inline FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * get_address_of_Points_0() { return &___Points_0; }
	inline void set_Points_0(FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125  value)
	{
		___Points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____1_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____2_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Neighbors_1() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA, ___Neighbors_1)); }
	inline FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12  get_Neighbors_1() const { return ___Neighbors_1; }
	inline FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * get_address_of_Neighbors_1() { return &___Neighbors_1; }
	inline void set_Neighbors_1(FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12  value)
	{
		___Neighbors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____1_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____2_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_EdgeIsConstrained_2() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA, ___EdgeIsConstrained_2)); }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  get_EdgeIsConstrained_2() const { return ___EdgeIsConstrained_2; }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * get_address_of_EdgeIsConstrained_2() { return &___EdgeIsConstrained_2; }
	inline void set_EdgeIsConstrained_2(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  value)
	{
		___EdgeIsConstrained_2 = value;
	}

	inline static int32_t get_offset_of_EdgeIsDelaunay_3() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA, ___EdgeIsDelaunay_3)); }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  get_EdgeIsDelaunay_3() const { return ___EdgeIsDelaunay_3; }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * get_address_of_EdgeIsDelaunay_3() { return &___EdgeIsDelaunay_3; }
	inline void set_EdgeIsDelaunay_3(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  value)
	{
		___EdgeIsDelaunay_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsInteriorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA, ___U3CIsInteriorU3Ek__BackingField_4)); }
	inline bool get_U3CIsInteriorU3Ek__BackingField_4() const { return ___U3CIsInteriorU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsInteriorU3Ek__BackingField_4() { return &___U3CIsInteriorU3Ek__BackingField_4; }
	inline void set_U3CIsInteriorU3Ek__BackingField_4(bool value)
	{
		___U3CIsInteriorU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10
struct  U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::<>2__current
	bool ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::<>4__this
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  ___U3CU3E4__this_3;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::<>3__<>4__this
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::<i>5__2
	int32_t ___U3CiU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB, ___U3CU3E2__current_1)); }
	inline bool get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline bool* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(bool value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB, ___U3CU3E4__this_3)); }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  value)
	{
		___U3CU3E4__this_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB, ___U3CU3E3__U3CU3E4__this_4)); }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  get_U3CU3E3__U3CU3E4__this_4() const { return ___U3CU3E3__U3CU3E4__this_4; }
	inline FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * get_address_of_U3CU3E3__U3CU3E4__this_4() { return &___U3CU3E3__U3CU3E4__this_4; }
	inline void set_U3CU3E3__U3CU3E4__this_4(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  value)
	{
		___U3CU3E3__U3CU3E4__this_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB, ___U3CiU3E5__2_5)); }
	inline int32_t get_U3CiU3E5__2_5() const { return ___U3CiU3E5__2_5; }
	inline int32_t* get_address_of_U3CiU3E5__2_5() { return &___U3CiU3E5__2_5; }
	inline void set_U3CiU3E5__2_5(int32_t value)
	{
		___U3CiU3E5__2_5 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.Orientation
struct  Orientation_t33C4681834818A983D540AC565843C7F9BEAF1EF 
{
public:
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t33C4681834818A983D540AC565843C7F9BEAF1EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode
struct  TriangulationMode_t1624190A57B1740ED36C18030137CAE7EFDEE0B6 
{
public:
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriangulationMode_t1624190A57B1740ED36C18030137CAE7EFDEE0B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
struct  TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<DebugContext>k__BackingField
	TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * ___U3CDebugContextU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Triangles
	List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * ___Triangles_1;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Points
	List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * ___Points_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<TriangulationMode>k__BackingField
	int32_t ___U3CTriangulationModeU3Ek__BackingField_3;
	// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<Triangulatable>k__BackingField
	RuntimeObject* ___U3CTriangulatableU3Ek__BackingField_4;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<StepCount>k__BackingField
	int32_t ___U3CStepCountU3Ek__BackingField_5;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<IsDebugEnabled>k__BackingField
	bool ___U3CIsDebugEnabledU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDebugContextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A, ___U3CDebugContextU3Ek__BackingField_0)); }
	inline TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * get_U3CDebugContextU3Ek__BackingField_0() const { return ___U3CDebugContextU3Ek__BackingField_0; }
	inline TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 ** get_address_of_U3CDebugContextU3Ek__BackingField_0() { return &___U3CDebugContextU3Ek__BackingField_0; }
	inline void set_U3CDebugContextU3Ek__BackingField_0(TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * value)
	{
		___U3CDebugContextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDebugContextU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_Triangles_1() { return static_cast<int32_t>(offsetof(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A, ___Triangles_1)); }
	inline List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * get_Triangles_1() const { return ___Triangles_1; }
	inline List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 ** get_address_of_Triangles_1() { return &___Triangles_1; }
	inline void set_Triangles_1(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * value)
	{
		___Triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_Points_2() { return static_cast<int32_t>(offsetof(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A, ___Points_2)); }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * get_Points_2() const { return ___Points_2; }
	inline List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 ** get_address_of_Points_2() { return &___Points_2; }
	inline void set_Points_2(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * value)
	{
		___Points_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Points_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriangulationModeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A, ___U3CTriangulationModeU3Ek__BackingField_3)); }
	inline int32_t get_U3CTriangulationModeU3Ek__BackingField_3() const { return ___U3CTriangulationModeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTriangulationModeU3Ek__BackingField_3() { return &___U3CTriangulationModeU3Ek__BackingField_3; }
	inline void set_U3CTriangulationModeU3Ek__BackingField_3(int32_t value)
	{
		___U3CTriangulationModeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTriangulatableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A, ___U3CTriangulatableU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CTriangulatableU3Ek__BackingField_4() const { return ___U3CTriangulatableU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CTriangulatableU3Ek__BackingField_4() { return &___U3CTriangulatableU3Ek__BackingField_4; }
	inline void set_U3CTriangulatableU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CTriangulatableU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriangulatableU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStepCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A, ___U3CStepCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CStepCountU3Ek__BackingField_5() const { return ___U3CStepCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStepCountU3Ek__BackingField_5() { return &___U3CStepCountU3Ek__BackingField_5; }
	inline void set_U3CStepCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CStepCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsDebugEnabledU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A, ___U3CIsDebugEnabledU3Ek__BackingField_6)); }
	inline bool get_U3CIsDebugEnabledU3Ek__BackingField_6() const { return ___U3CIsDebugEnabledU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsDebugEnabledU3Ek__BackingField_6() { return &___U3CIsDebugEnabledU3Ek__BackingField_6; }
	inline void set_U3CIsDebugEnabledU3Ek__BackingField_6(bool value)
	{
		___U3CIsDebugEnabledU3Ek__BackingField_6 = value;
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


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
struct  DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D  : public TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A
{
public:
	// System.Single UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::ALPHA
	float ___ALPHA_7;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Front
	AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * ___Front_8;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::<Head>k__BackingField
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___U3CHeadU3Ek__BackingField_9;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::<Tail>k__BackingField
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___U3CTailU3Ek__BackingField_10;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Basin
	DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * ___Basin_11;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::EdgeEvent
	DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * ___EdgeEvent_12;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::_comparator
	DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * ____comparator_13;

public:
	inline static int32_t get_offset_of_ALPHA_7() { return static_cast<int32_t>(offsetof(DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D, ___ALPHA_7)); }
	inline float get_ALPHA_7() const { return ___ALPHA_7; }
	inline float* get_address_of_ALPHA_7() { return &___ALPHA_7; }
	inline void set_ALPHA_7(float value)
	{
		___ALPHA_7 = value;
	}

	inline static int32_t get_offset_of_Front_8() { return static_cast<int32_t>(offsetof(DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D, ___Front_8)); }
	inline AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * get_Front_8() const { return ___Front_8; }
	inline AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 ** get_address_of_Front_8() { return &___Front_8; }
	inline void set_Front_8(AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * value)
	{
		___Front_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Front_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D, ___U3CHeadU3Ek__BackingField_9)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_U3CHeadU3Ek__BackingField_9() const { return ___U3CHeadU3Ek__BackingField_9; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_U3CHeadU3Ek__BackingField_9() { return &___U3CHeadU3Ek__BackingField_9; }
	inline void set_U3CHeadU3Ek__BackingField_9(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___U3CHeadU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTailU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D, ___U3CTailU3Ek__BackingField_10)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_U3CTailU3Ek__BackingField_10() const { return ___U3CTailU3Ek__BackingField_10; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_U3CTailU3Ek__BackingField_10() { return &___U3CTailU3Ek__BackingField_10; }
	inline void set_U3CTailU3Ek__BackingField_10(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___U3CTailU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTailU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_Basin_11() { return static_cast<int32_t>(offsetof(DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D, ___Basin_11)); }
	inline DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * get_Basin_11() const { return ___Basin_11; }
	inline DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 ** get_address_of_Basin_11() { return &___Basin_11; }
	inline void set_Basin_11(DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * value)
	{
		___Basin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Basin_11), (void*)value);
	}

	inline static int32_t get_offset_of_EdgeEvent_12() { return static_cast<int32_t>(offsetof(DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D, ___EdgeEvent_12)); }
	inline DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * get_EdgeEvent_12() const { return ___EdgeEvent_12; }
	inline DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 ** get_address_of_EdgeEvent_12() { return &___EdgeEvent_12; }
	inline void set_EdgeEvent_12(DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * value)
	{
		___EdgeEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EdgeEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of__comparator_13() { return static_cast<int32_t>(offsetof(DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D, ____comparator_13)); }
	inline DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * get__comparator_13() const { return ____comparator_13; }
	inline DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 ** get_address_of__comparator_13() { return &____comparator_13; }
	inline void set__comparator_13(DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * value)
	{
		____comparator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparator_13), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
struct  PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D  : public NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::A
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___A_17;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::B
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___B_18;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::C
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___C_19;

public:
	inline static int32_t get_offset_of_A_17() { return static_cast<int32_t>(offsetof(PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D, ___A_17)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_A_17() const { return ___A_17; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_A_17() { return &___A_17; }
	inline void set_A_17(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___A_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___A_17), (void*)value);
	}

	inline static int32_t get_offset_of_B_18() { return static_cast<int32_t>(offsetof(PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D, ___B_18)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_B_18() const { return ___B_18; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_B_18() { return &___B_18; }
	inline void set_B_18(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___B_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___B_18), (void*)value);
	}

	inline static int32_t get_offset_of_C_19() { return static_cast<int32_t>(offsetof(PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D, ___C_19)); }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * get_C_19() const { return ___C_19; }
	inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D ** get_address_of_C_19() { return &___C_19; }
	inline void set_C_19(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * value)
	{
		___C_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___C_19), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[]
struct PolygonPointU5BU5D_t661578CCDE92AF1A45580A269617A8A1075D79EF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * m_Items[1];

public:
	inline PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FixedArray3_1_get_Item_m6BF002DD4ED13CCC0C35D87269857297C9305F25_gshared (FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_Clear_mA0100355C162E33D166438475392484D8FCF4BE8_gshared (FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m451B69C90D32CACBC53CEFBD0D499AF2747CBC46_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_set_Item_mCEF298F8FDFDF76F4C1294DB34337477406ECE0D_gshared (FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedArray3_1_IndexOf_m07C8C21EF9622D3B09B75E9BAD9790995C9640FE_gshared (FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedArray3_1_Contains_m14F7A43C59218A0E85B98B6017766DBECB30B8CE_gshared (FixedArray3_1_tB157CBF2F7264601FABB6B0AE59EDA43D9204D7B * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_m0343A227B31BEB205D569F05AEAE761094FB1B34_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m2DAC1E992E9DD8502297958F0F6F3DA8D209BDC6 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m10760E535FD1CA969C25C37E350296ADC6CC7544 (StringBuilder_t * __this, double ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_LocateNode_mA22F5EDD29A04A8591A14EF0208E52929DD0C544 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, double ___x0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_FindSearchNode_m3D3C37960239EA5CF71303BC1F3479E954BAFC4F_inline (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, double ___x0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_m8E1E2DFB78D51CF12340835CEDF72172A29A4D67 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m4AE80536E2CF530EEBD92F003F3D277C2DEEC1AD (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_m953D5E9DF9F986C03CC0B59CFF7684568063A4C3_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_m3C27D368F884C700EACA5F1ADBA68632FB0C7803 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_m921EC80BF5F9AB83B7534FDE692A2AF94D0BA06B (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_m7B283B98D208A9256B9583B02CE8B52E378D778C (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * (*) (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * DTSweep_PointEvent_m8EEA26BE914D0E62FFE5E85DA05A3F70FF1189FD (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_m4894178A3DB02870533CC09D659C2C24E97C25F8 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * TriangulationPoint_get_Edges_m57ECE2E2D4D360DA4D7A0A732885150A559C677A_inline (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::GetEnumerator()
inline Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB  List_1_GetEnumerator_m6B0D549DE65AFE6C52EF75B68BA302ACC40B94D7 (List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB  (*) (List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::get_Current()
inline DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * Enumerator_get_Current_m7347BF6714A4BBD747AC33A34181566B1DBA8D24_inline (Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB * __this, const RuntimeMethod* method)
{
	return ((  DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * (*) (Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m418CFFB54544323CFCDDF05A1EA185B61C1683BC (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_m4D97133EF5CE89599B70AA0723C9D4AF866746F7 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::MoveNext()
inline bool Enumerator_MoveNext_m483F65B30DFD9B154F1AB2B1EA0224D310A3C9EB (Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::Dispose()
inline void Enumerator_Dispose_m57F75A7771C43788AFB2A997766490AE8B3E293D (Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Count()
inline int32_t List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_inline (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_m74087ACFF216EA2771D4B8D21558F06C8A34263E (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___b1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___c2, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DelaunayTriangle_OppositePoint_mF44DC9F0078C3BE2EF760A170FE5B9BE75BA196C (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p1, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___ot2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___op3, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m32173CBF8B9506E9598C9B897B6B51D01BBD6EE6 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mB72F54E49BAB7BFB3DB20F9B6F601C699F7C54AB (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.Orientation UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pa0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pb1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pc2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_mF2FA104B63292FE48C19045E923AFC33C9CBB1A1 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_m88CC47A266E25B43AA5A10510367FAA0341E8176 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * DTSweepContext_LocateNode_m9E03D688CBDF397C6871C5A5FBA24FE761C40BE9 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * DTSweep_NewFrontTriangle_m67315DC674E0AAC4AED41EE087CF1B19F6FFC8C3 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_mD8D7B0CF7FB78B76DED5531DFFE0540605B4A607 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_m791C05428DE377F0883D5FAEF77257D5FDE64FC5 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___n1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_mFBBC9E9E6CCFCDF571C82E9A24152615053068D5 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p32, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Add(!0)
inline void List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0 (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_m74B63505CBB4582BA23B00D64BCC40DB386B15E1 (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99 (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_m8B542B36D363584165BF898E1444AA3DB35079E0 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_mD687A606DA28EDE2E3D2091B6A657A0D017D966B (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle3, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point4, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_mCE4F2DFC8ED785ADF058EC23DB53550F26B5600A (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_m60C7E59CB4133C56009FB98E9DA683C6E5CA2B14 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_mCA32CBD2D17BCBE53410E577318F354FF12190B4 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_mA91731D66F7966D8F838CE2383C161CA37B513C7 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_mE48E6FC6CA1C2771C861BA954FE732641C8D6900 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_m80BF4E08F731DFF15B3B37355900FE7CC744BEF5 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m4F06AE3BC50459577A56BC8693269ADADB7A2C93 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_m2E0E2713B192599343BBA829FF97405272FC72BF (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method);
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m877C203B9027322C1964B6175F79A99AEA0E78E2 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::get_Item(System.Int32)
inline DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5 (FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * (*) (FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_m6BF002DD4ED13CCC0C35D87269857297C9305F25_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m1C797822F982588021F1E7A2FAE4B6BC096B83A3 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___q1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::.ctor(System.String,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_m1548AEC8F2DBCF463AC8C016FBA632464A1D9048 (PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D * __this, String_t* ___message0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___a1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___b2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___c3, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t3, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p4, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_m3574DE99A897AB99A533D776F46D8026C61E9295 (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_mE851390EF57E22B31ECB916E31BD40F13CCEA64A (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pa0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pb1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pc2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pd3, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820 (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.Orientation,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DTSweep_NextFlipTriangle_m8B423E3B85BDCD3977BA00301B80A28C60B89D5C (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, int32_t ___o1, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___ot3, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p4, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___op5, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq1, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___ot2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___op3, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___flipTriangle3, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t4, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p5, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90 (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_m7BA5F500516DD2D9FF20855DAC52E1C285F510ED (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method);
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m9FA809DA54C5DFC4A1B36614B9E5085FB56F63E8 (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_mCE5167AFC30C68A854A9AA3D76CFF3FB463B6B6B (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_mC924C6A0091193BC55B9FF17E1477A0BF682ECCF (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * __this, const RuntimeMethod* method);
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_m10EFCC9A02B6125BB3597EEFB035B616FFAA64F3 (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_m35041B29CD2BBCA61C982F5A011F9C7B37C60883 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_m56BFD87CE522F8D5F9178A8DD9AEF03BC40A9378 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_m531AF6A067015513D52AEEA74E2ED7E246FC5F4A (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_mB4217D8F1E0F9CA71500635A3E3DE0EF0FC7BB6D (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728 (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * (*) (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_m6BF002DD4ED13CCC0C35D87269857297C9305F25_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m6F1EFF2BEF0D4EFDC62F8ABE4475E0D5D32B4BA2 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pa0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pb1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pc2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pd3, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_m74B07D2D17B191D7B0DF1FF27DA14EFF24D4F147 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_mF35D5D5F1337F022F902BEE97E0F365A00F10860 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m976989BB88DC8356F4EEBCA2705E9153D41BBE59 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_m74AA7660F67F48CD93BA5C081518272DC78123E0 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___oPoint0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___nPoint1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_m29BF86A8ED0489AEFB6480EFE1518ABADA71213A (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_mA9E2AC6FC6E19343DEC875AAE50F8D92292A1A88 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_mD3B158A54AE96B41AFE9C75D9E53D26C412541CF (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_mEDE8C683E174014F72BF55854BD18E43F1FC4690 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear()
inline void FixedArray3_1_Clear_m84E83CA44572720872962DA54C9149719A32C7A7 (FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * __this, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *, const RuntimeMethod*))FixedArray3_1_Clear_mA0100355C162E33D166438475392484D8FCF4BE8_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_mDD9672F55C0D07D0A9CA68DBC59CE0D3C2CE0F97 (TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m012E25660FDE3069E1271B1163775F011BAE8603 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___e0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_m362EF51EA75072CED76CFEC65788A0A27C4C7F13 (DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_mB40C30A62007E3E9FA06BDE31653EED75BEDCAA6 (DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_m44CF5D543B3040E92F2CBA6EEF865D25BA907FFB (DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_m3A3D59F35FC48D89C87E8270952DFD0E95778936 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mCDD6855413BF9AD16A60E324EF139E9BD5D03C6A_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Remove(!0)
inline bool List_1_Remove_m8DADC91FE1E6B1EC9B4AAE94D838F59236E6743A (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m49C6D0E2932A44BEA90E524928F8F479E26DECB0 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m3DB4D5C7827DFF63C17D6C68590C88A83EC92E95_inline (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_mFC3828D676B96D130781E36112C420A401F52F3D_inline (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mF170B610538AFCBA884A7C7AD6EB2FDBBA29C7E5_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m5E94C79284C9887B58548A696413300157867EFC (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear()
inline void List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62 (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m9CCC0A702BA1BC0987F0C2F045407496F177AE0E (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_LocateNode_m96DEC37C37993F2AEBC6806457BCB1AEF0893618 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweepContext_get_Tail_mC329CB371C2725059077E1844B1CC26D3A8EC690_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweepContext_get_Head_mB0BF0EDC682AC7D97C4F2250BE65ACEECF8F4428_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::.ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_mAE2567A3BDF9F26A87EA328DD0D6EC00A254F823 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___head0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___tail1, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_LocatePoint_m20E58E4C6D84EB573087AE94085DF3C0B5D4408F (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_mD4A6BAA5F582902E37DFEEA3BAF00C18EE28C5C2 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, RuntimeObject* ___t0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::GetEnumerator()
inline Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C  List_1_GetEnumerator_m6F14B6E00C48AF3F5E85F0DEF5D19E04B98F571F (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C  (*) (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Current()
inline TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * Enumerator_get_Current_mDA655D1BD487CB7785F2CA8A3E8717E645EA2021_inline (Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C * __this, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * (*) (Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::MoveNext()
inline bool Enumerator_MoveNext_mFA7973F7DBA060DEB216CE7678BB0340318C1C45 (Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Dispose()
inline void Enumerator_Dispose_mABE0450BD7896734A750E7434E75473043A90F4B (Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m7147AF71666B9301CDE139279BCB0B3FC0663069 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mB530C73F2D5F939C4E56FCE4575A0D3F636BCE4C_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m4C5FFA8C80D2F4D898A895E4752DDFE9C1B18D79_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Sort(System.Collections.Generic.IComparer`1<!0>)
inline void List_1_Sort_m9813CB128EDD4C8F8492549D1BA4E083B3527480 (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m451B69C90D32CACBC53CEFBD0D499AF2747CBC46_gshared)(__this, ___comparer0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m5CDB699A19D761824EC476CF8F50E94B95F83D28 (DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_m1F2A670990D0582DF9CC2E93C180570B17EB152B (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67 (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * __this, int32_t ___index0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *, int32_t, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *, const RuntimeMethod*))FixedArray3_1_set_Item_mCEF298F8FDFDF76F4C1294DB34337477406ECE0D_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::IndexOf(T)
inline int32_t FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310 (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *, const RuntimeMethod*))FixedArray3_1_IndexOf_m07C8C21EF9622D3B09B75E9BAD9790995C9640FE_gshared)(__this, ___value0, method);
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Contains(T)
inline bool FixedArray3_1_Contains_m989F76062991CF4E316D89FC5184BB1D33470B42 (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *, const RuntimeMethod*))FixedArray3_1_Contains_m14F7A43C59218A0E85B98B6017766DBECB30B8CE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869 (FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * __this, int32_t ___index0, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *, int32_t, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *, const RuntimeMethod*))FixedArray3_1_set_Item_mCEF298F8FDFDF76F4C1294DB34337477406ECE0D_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m89343D647B63AE562CDD2593F752982EC7F28FCB (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_m3ECE1A590C0A1D6B947DD2165060A1B3E431B4E7 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1 (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10__ctor_mDD85E046B4F21D06D9AA5C18B765BA5AB4B4E6D2 (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_m8B13F021334E6D1CA067C0513B3C6B010167A4FA (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_m63A8B70E76AAA02DEA1CF7A57C16AB85361F6662 (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m4F112BD72DFB8E003A5B9E86F9274AC65F30B5E4 (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m37C17EB66EF15E9E21B59372491B3985106DFB65 (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::.ctor()
inline void List_1__ctor_m8C37730941C3E22EAF2BF642AE05D477A1BF821C (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D_mEACC936F27FE9F1B054147C71C3936E465AB4681 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m1D60B8691728928CBD2559D4696E2AED74E86B2D_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>(System.Collections.Generic.IEnumerable`1<!!0>)
inline PolygonPointU5BU5D_t661578CCDE92AF1A45580A269617A8A1075D79EF* Enumerable_ToArray_TisPolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9_m1EE166E10CEB289CCFD66C958988815F503A1928 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  PolygonPointU5BU5D_t661578CCDE92AF1A45580A269617A8A1075D79EF* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m0343A227B31BEB205D569F05AEAE761094FB1B34_gshared)(___source0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m270D6CEC54E1B91FA19C2C4D039636E475EF2105 (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, RuntimeObject* ___points0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::.ctor()
inline void List_1__ctor_m643435A2B66C4E7D1CEEBCF079CCD01C2D9833BC (List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::Add(!0)
inline void List_1_Add_m298D8B742EE79A4E757105B256972C50B359480F (List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * __this, Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE *, Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mE8361ABB827B9F8C4A9D54FB269F03E6036586E3 (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::.ctor(System.Int32)
inline void List_1__ctor_m367A7A864E0FD4762BC11C1FD623B733739D84B3 (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::GetEnumerator()
inline Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC  List_1_GetEnumerator_m78A6F8E216A32929C8FE7E97C480DFCF7660E475 (List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC  (*) (List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::get_Current()
inline Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * Enumerator_get_Current_m691E606DB5E20CEF856B9DD1F4F4D6AAB68A8575_inline (Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC * __this, const RuntimeMethod* method)
{
	return ((  Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * (*) (Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::MoveNext()
inline bool Enumerator_MoveNext_m8B23BC5EC794E42DE0D86BBB2E7FC44FA05CD0C7 (Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::Dispose()
inline void Enumerator_Dispose_mAECD9E3E206D54E1795675777EC1A5D5668F098F (Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_mBE86D6A51BACFC441434301769C5E65D12A59EDF_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m76276A313719E357210CDE131C502DDA171A5D23_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_m228DB8DA07E50F849E9A2262535767EB7A32FF1E_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m62BDACA1CBE9BE9345F70A568F0527109B6D6776_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Clear()
inline void List_1_Clear_mE23DCF76145267A908E4838A246D932339B22822 (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * TriangulationContext_get_DebugContext_m37382985F166584A1842EC5E91276DFD51997632_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::.ctor()
inline void List_1__ctor_m1E8B3FAD48752BB5B27E1E9030C66BE3C69ED179 (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::.ctor()
inline void List_1__ctor_m556B44F481C2F0F211428476F25C2A02D07B5DC6 (List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m190FFB192FF3FDE813C35E5289755A346C489D4B_inline (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::Add(!0)
inline void List_1_Add_m5D5A46A70DC5551221237CF0D0E10433D7044400 (List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * __this, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 *, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::.ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_mAE2567A3BDF9F26A87EA328DD0D6EC00A254F823 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___head0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___tail1, const RuntimeMethod* method)
{
	{
		// public AdvancingFront( AdvancingFrontNode head, AdvancingFrontNode tail ) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Head = head;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___head0;
		__this->set_Head_0(L_0);
		// this.Tail = tail;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = ___tail1;
		__this->set_Tail_1(L_1);
		// this.Search = head;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = ___head0;
		__this->set_Search_2(L_2);
		// AddNode(head);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___head0;
		AdvancingFront_AddNode_m2DAC1E992E9DD8502297958F0F6F3DA8D209BDC6(__this, L_3, /*hidden argument*/NULL);
		// AddNode(tail);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = ___tail1;
		AdvancingFront_AddNode_m2DAC1E992E9DD8502297958F0F6F3DA8D209BDC6(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m2DAC1E992E9DD8502297958F0F6F3DA8D209BDC6 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method)
{
	{
		// public void AddNode( AdvancingFrontNode node ) { }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m9CCC0A702BA1BC0987F0C2F045407496F177AE0E (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method)
{
	{
		// public void RemoveNode( AdvancingFrontNode node ) { }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvancingFront_ToString_mF5E18C06D97F5A52E1FB00186F1B47D20F2AE588 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdvancingFront_ToString_mF5E18C06D97F5A52E1FB00186F1B47D20F2AE588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_1 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// AdvancingFrontNode node = Head;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = __this->get_Head_0();
		V_1 = L_1;
		goto IL_0032;
	}

IL_000f:
	{
		// sb.Append(node.Point.X).Append("->");
		StringBuilder_t * L_2 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = V_1;
		NullCheck(L_3);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = L_3->get_Point_3();
		NullCheck(L_4);
		double L_5 = L_4->get_X_1();
		NullCheck(L_2);
		StringBuilder_t * L_6 = StringBuilder_Append_m10760E535FD1CA969C25C37E350296ADC6CC7544(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_6, _stringLiteral6B8BDD37D6A5FE9BFD9CE2C3B38104FB717F3F22, /*hidden argument*/NULL);
		// node = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = V_1;
		NullCheck(L_7);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = L_7->get_Next_0();
		V_1 = L_8;
	}

IL_0032:
	{
		// while (node != Tail) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_9 = V_1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = __this->get_Tail_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_9) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_10))))
		{
			goto IL_000f;
		}
	}
	{
		// sb.Append(Tail.Point.X);
		StringBuilder_t * L_11 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_12 = __this->get_Tail_1();
		NullCheck(L_12);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = L_12->get_Point_3();
		NullCheck(L_13);
		double L_14 = L_13->get_X_1();
		NullCheck(L_11);
		StringBuilder_Append_m10760E535FD1CA969C25C37E350296ADC6CC7544(L_11, L_14, /*hidden argument*/NULL);
		// return sb.ToString();
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_FindSearchNode_m3D3C37960239EA5CF71303BC1F3479E954BAFC4F (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		// return Search;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = __this->get_Search_2();
		return L_0;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_LocateNode_m96DEC37C37993F2AEBC6806457BCB1AEF0893618 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	{
		// return LocateNode(point.X);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___point0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = AdvancingFront_LocateNode_mA22F5EDD29A04A8591A14EF0208E52929DD0C544(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_LocateNode_mA22F5EDD29A04A8591A14EF0208E52929DD0C544 (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, double ___x0, const RuntimeMethod* method)
{
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_0 = NULL;
	{
		// AdvancingFrontNode node = FindSearchNode(x);
		double L_0 = ___x0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = AdvancingFront_FindSearchNode_m3D3C37960239EA5CF71303BC1F3479E954BAFC4F_inline(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (x < node.Value) {
		double L_2 = ___x0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = V_0;
		NullCheck(L_3);
		double L_4 = L_3->get_Value_2();
		if ((!(((double)L_2) < ((double)L_4))))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0025;
	}

IL_0013:
	{
		// if (x >= node.Value) {
		double L_5 = ___x0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_6 = V_0;
		NullCheck(L_6);
		double L_7 = L_6->get_Value_2();
		if ((!(((double)L_5) >= ((double)L_7))))
		{
			goto IL_0025;
		}
	}
	{
		// Search = node;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = V_0;
		__this->set_Search_2(L_8);
		// return node;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_9 = V_0;
		return L_9;
	}

IL_0025:
	{
		// while ((node = node.Prev) != null)
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = V_0;
		NullCheck(L_10);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = L_10->get_Prev_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_12 = L_11;
		V_0 = L_12;
		if (L_12)
		{
			goto IL_0013;
		}
	}
	{
		// } else {
		goto IL_0057;
	}

IL_0031:
	{
		// if (x < node.Value) {
		double L_13 = ___x0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = V_0;
		NullCheck(L_14);
		double L_15 = L_14->get_Value_2();
		if ((!(((double)L_13) < ((double)L_15))))
		{
			goto IL_004d;
		}
	}
	{
		// Search = node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = V_0;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Prev_1();
		__this->set_Search_2(L_17);
		// return node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = V_0;
		NullCheck(L_18);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = L_18->get_Prev_1();
		return L_19;
	}

IL_004d:
	{
		// while ((node = node.Next) != null)
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = V_0;
		NullCheck(L_20);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = L_20->get_Next_0();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = L_21;
		V_0 = L_22;
		if (L_22)
		{
			goto IL_0031;
		}
	}

IL_0057:
	{
		// return null;
		return (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)NULL;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_LocatePoint_m20E58E4C6D84EB573087AE94085DF3C0B5D4408F (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdvancingFront_LocatePoint_m20E58E4C6D84EB573087AE94085DF3C0B5D4408F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_1 = NULL;
	double V_2 = 0.0;
	{
		// double px = point.X;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___point0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		V_0 = L_1;
		// AdvancingFrontNode node = FindSearchNode(px);
		double L_2 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = AdvancingFront_FindSearchNode_m3D3C37960239EA5CF71303BC1F3479E954BAFC4F_inline(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// double nx = node.Point.X;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = V_1;
		NullCheck(L_4);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_5 = L_4->get_Point_3();
		NullCheck(L_5);
		double L_6 = L_5->get_X_1();
		V_2 = L_6;
		// if (px == nx) {
		double L_7 = V_0;
		double L_8 = V_2;
		if ((!(((double)L_7) == ((double)L_8))))
		{
			goto IL_0061;
		}
	}
	{
		// if (point != node.Point) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ___point0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = V_1;
		NullCheck(L_10);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = L_10->get_Point_3();
		if ((((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_9) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_11)))
		{
			goto IL_008f;
		}
	}
	{
		// if (point == node.Prev.Point) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = ___point0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = V_1;
		NullCheck(L_13);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = L_13->get_Prev_1();
		NullCheck(L_14);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = L_14->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_12) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_15))))
		{
			goto IL_003f;
		}
	}
	{
		// node = node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = V_1;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Prev_1();
		V_1 = L_17;
		// } else if (point == node.Next.Point) {
		goto IL_008f;
	}

IL_003f:
	{
		// } else if (point == node.Next.Point) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = ___point0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = V_1;
		NullCheck(L_19);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_21 = L_20->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_18) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_21))))
		{
			goto IL_0056;
		}
	}
	{
		// node = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = V_1;
		NullCheck(L_22);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = L_22->get_Next_0();
		V_1 = L_23;
		// } else {
		goto IL_008f;
	}

IL_0056:
	{
		// throw new Exception("Failed to find Node for given afront point");
		Exception_t * L_24 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_24, _stringLiteral934A8634676AE734B407BD874197C4B7D163657A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, AdvancingFront_LocatePoint_m20E58E4C6D84EB573087AE94085DF3C0B5D4408F_RuntimeMethod_var);
	}

IL_0061:
	{
		// } else if (px < nx) {
		double L_25 = V_0;
		double L_26 = V_2;
		if ((!(((double)L_25) < ((double)L_26))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0070;
	}

IL_0067:
	{
		// while ((node = node.Prev) != null) if (point == node.Point) break;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_27 = ___point0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_28 = V_1;
		NullCheck(L_28);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_29 = L_28->get_Point_3();
		if ((((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_27) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_29)))
		{
			goto IL_008f;
		}
	}

IL_0070:
	{
		// while ((node = node.Prev) != null) if (point == node.Point) break;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_30 = V_1;
		NullCheck(L_30);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_31 = L_30->get_Prev_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_32 = L_31;
		V_1 = L_32;
		if (L_32)
		{
			goto IL_0067;
		}
	}
	{
		// } else {
		goto IL_008f;
	}

IL_007c:
	{
		// while ((node = node.Next) != null) if (point == node.Point) break;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_33 = ___point0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_34 = V_1;
		NullCheck(L_34);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_35 = L_34->get_Point_3();
		if ((((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_33) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_35)))
		{
			goto IL_008f;
		}
	}

IL_0085:
	{
		// while ((node = node.Next) != null) if (point == node.Point) break;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_36 = V_1;
		NullCheck(L_36);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_37 = L_36->get_Next_0();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_38 = L_37;
		V_1 = L_38;
		if (L_38)
		{
			goto IL_007c;
		}
	}

IL_008f:
	{
		// Search = node;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_39 = V_1;
		__this->set_Search_2(L_39);
		// return node;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_40 = V_1;
		return L_40;
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_m74B63505CBB4582BA23B00D64BCC40DB386B15E1 (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	{
		// public AdvancingFrontNode(TriangulationPoint point) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Point = point;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___point0;
		__this->set_Point_3(L_0);
		// Value = point.X;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___point0;
		NullCheck(L_1);
		double L_2 = L_1->get_X_1();
		__this->set_Value_2(L_2);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_mCE5167AFC30C68A854A9AA3D76CFF3FB463B6B6B (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * __this, const RuntimeMethod* method)
{
	{
		// public bool HasNext { get { return Next != null; } }
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = __this->get_Next_0();
		return (bool)((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_mC924C6A0091193BC55B9FF17E1477A0BF682ECCF (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * __this, const RuntimeMethod* method)
{
	{
		// public bool HasPrev { get { return Prev != null; } }
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = __this->get_Prev_1();
		return (bool)((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Triangulate(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Triangulate_mC795A28EFC24193977B7D7E1E245B404100712DD (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, const RuntimeMethod* method)
{
	{
		// tcx.CreateAdvancingFront();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepContext_CreateAdvancingFront_m8E1E2DFB78D51CF12340835CEDF72172A29A4D67(L_0, /*hidden argument*/NULL);
		// Sweep(tcx);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_1 = ___tcx0;
		DTSweep_Sweep_m4AE80536E2CF530EEBD92F003F3D277C2DEEC1AD(L_1, /*hidden argument*/NULL);
		// if (tcx.TriangulationMode == TriangulationMode.Polygon) {
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_2 = ___tcx0;
		NullCheck(L_2);
		int32_t L_3 = TriangulationContext_get_TriangulationMode_m953D5E9DF9F986C03CC0B59CFF7684568063A4C3_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		// FinalizationPolygon(tcx);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_4 = ___tcx0;
		DTSweep_FinalizationPolygon_m3C27D368F884C700EACA5F1ADBA68632FB0C7803(L_4, /*hidden argument*/NULL);
		// } else {
		goto IL_0023;
	}

IL_001d:
	{
		// FinalizationConvexHull(tcx);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_5 = ___tcx0;
		DTSweep_FinalizationConvexHull_m921EC80BF5F9AB83B7534FDE692A2AF94D0BA06B(L_5, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// tcx.Done();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_6 = ___tcx0;
		NullCheck(L_6);
		TriangulationContext_Done_m7B283B98D208A9256B9583B02CE8B52E378D778C(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m4AE80536E2CF530EEBD92F003F3D277C2DEEC1AD (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_Sweep_m4AE80536E2CF530EEBD92F003F3D277C2DEEC1AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * V_0 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_1 = NULL;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB  V_4;
	memset((&V_4), 0, sizeof(V_4));
	DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var points = tcx.Points;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_1 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)L_0)->get_Points_2();
		V_0 = L_1;
		// for (int i = 1; i < points.Count; i++) {
		V_3 = 1;
		goto IL_007d;
	}

IL_000b:
	{
		// point = points[i];
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_2 = V_0;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		V_1 = L_4;
		// node = PointEvent(tcx, point);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_5 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = V_1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = DTSweep_PointEvent_m8EEA26BE914D0E62FFE5E85DA05A3F70FF1189FD(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = TriangulationPoint_get_HasEdges_m4894178A3DB02870533CC09D659C2C24E97C25F8(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = V_1;
		NullCheck(L_10);
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_11 = TriangulationPoint_get_Edges_m57ECE2E2D4D360DA4D7A0A732885150A559C677A_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB  L_12 = List_1_GetEnumerator_m6B0D549DE65AFE6C52EF75B68BA302ACC40B94D7(L_11, /*hidden argument*/List_1_GetEnumerator_m6B0D549DE65AFE6C52EF75B68BA302ACC40B94D7_RuntimeMethod_var);
		V_4 = L_12;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0032:
		{
			// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_13 = Enumerator_get_Current_m7347BF6714A4BBD747AC33A34181566B1DBA8D24_inline((Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB *)(&V_4), /*hidden argument*/Enumerator_get_Current_m7347BF6714A4BBD747AC33A34181566B1DBA8D24_RuntimeMethod_var);
			V_5 = L_13;
			// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveConstraint = e;
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_14 = ___tcx0;
			NullCheck(L_14);
			bool L_15 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_14);
			if (!L_15)
			{
				goto IL_0050;
			}
		}

IL_0043:
		{
			// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveConstraint = e;
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_16 = ___tcx0;
			NullCheck(L_16);
			DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_17 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_16, /*hidden argument*/NULL);
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_18 = V_5;
			NullCheck(L_17);
			DTSweepDebugContext_set_ActiveConstraint_m418CFFB54544323CFCDDF05A1EA185B61C1683BC(L_17, L_18, /*hidden argument*/NULL);
		}

IL_0050:
		{
			// EdgeEvent(tcx, e, node);
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_19 = ___tcx0;
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_20 = V_5;
			AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = V_2;
			DTSweep_EdgeEvent_m4D97133EF5CE89599B70AA0723C9D4AF866746F7(L_19, L_20, L_21, /*hidden argument*/NULL);
		}

IL_0059:
		{
			// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
			bool L_22 = Enumerator_MoveNext_m483F65B30DFD9B154F1AB2B1EA0224D310A3C9EB((Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m483F65B30DFD9B154F1AB2B1EA0224D310A3C9EB_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0032;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m57F75A7771C43788AFB2A997766490AE8B3E293D((Enumerator_t4D9B7BE0F3972DD074314BD243C5DDE0AEBACBDB *)(&V_4), /*hidden argument*/Enumerator_Dispose_m57F75A7771C43788AFB2A997766490AE8B3E293D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
	}

IL_0072:
	{
		// tcx.Update(null);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_23 = ___tcx0;
		NullCheck(L_23);
		TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0(L_23, (String_t*)NULL, /*hidden argument*/NULL);
		// for (int i = 1; i < points.Count; i++) {
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_007d:
	{
		// for (int i = 1; i < points.Count; i++) {
		int32_t L_25 = V_3;
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_inline(L_26, /*hidden argument*/List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_m921EC80BF5F9AB83B7534FDE692A2AF94D0BA06B (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, const RuntimeMethod* method)
{
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_0 = NULL;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_1 = NULL;
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_2 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_3 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_4 = NULL;
	{
		// n1 = tcx.Front.Head.Next;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_1 = L_0->get_Front_8();
		NullCheck(L_1);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = L_1->get_Head_0();
		NullCheck(L_2);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = L_2->get_Next_0();
		V_0 = L_3;
		// n2 = n1.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = V_0;
		NullCheck(L_4);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = L_4->get_Next_0();
		V_1 = L_5;
		// first = n1.Point;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_6 = V_0;
		NullCheck(L_6);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = L_6->get_Point_3();
		V_3 = L_7;
		// TurnAdvancingFrontConvex(tcx, n1, n2);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_8 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_9 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = V_1;
		DTSweep_TurnAdvancingFrontConvex_m74087ACFF216EA2771D4B8D21558F06C8A34263E(L_8, L_9, L_10, /*hidden argument*/NULL);
		// n1 = tcx.Front.Tail.Prev;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_11 = ___tcx0;
		NullCheck(L_11);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_12 = L_11->get_Front_8();
		NullCheck(L_12);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = L_12->get_Tail_1();
		NullCheck(L_13);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = L_13->get_Prev_1();
		V_0 = L_14;
		// if (n1.Triangle.Contains(n1.Next.Point) && n1.Triangle.Contains(n1.Prev.Point)) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = V_0;
		NullCheck(L_15);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_16 = L_15->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = V_0;
		NullCheck(L_17);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = L_17->get_Next_0();
		NullCheck(L_18);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_19 = L_18->get_Point_3();
		NullCheck(L_16);
		bool L_20 = DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592(L_16, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = V_0;
		NullCheck(L_21);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_22 = L_21->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = V_0;
		NullCheck(L_23);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_24 = L_23->get_Prev_1();
		NullCheck(L_24);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_25 = L_24->get_Point_3();
		NullCheck(L_22);
		bool L_26 = DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592(L_22, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		// t1 = n1.Triangle.NeighborAcrossFrom(n1.Point);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_27 = V_0;
		NullCheck(L_27);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_28 = L_27->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = V_0;
		NullCheck(L_29);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_30 = L_29->get_Point_3();
		NullCheck(L_28);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_31 = DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE(L_28, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		// RotateTrianglePair(n1.Triangle, n1.Point, t1, t1.OppositePoint(n1.Triangle, n1.Point));
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_32 = V_0;
		NullCheck(L_32);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = L_32->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_34 = V_0;
		NullCheck(L_34);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_35 = L_34->get_Point_3();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_36 = V_2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_37 = V_2;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_38 = V_0;
		NullCheck(L_38);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_39 = L_38->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_40 = V_0;
		NullCheck(L_40);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_41 = L_40->get_Point_3();
		NullCheck(L_37);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_42 = DelaunayTriangle_OppositePoint_mF44DC9F0078C3BE2EF760A170FE5B9BE75BA196C(L_37, L_39, L_41, /*hidden argument*/NULL);
		DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298(L_33, L_35, L_36, L_42, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(n1.Triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_43 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_44 = V_0;
		NullCheck(L_44);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_45 = L_44->get_Triangle_4();
		NullCheck(L_43);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_43, L_45, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(t1);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_46 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_47 = V_2;
		NullCheck(L_46);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_46, L_47, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// n1 = tcx.Front.Head.Next;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_48 = ___tcx0;
		NullCheck(L_48);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_49 = L_48->get_Front_8();
		NullCheck(L_49);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_50 = L_49->get_Head_0();
		NullCheck(L_50);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_51 = L_50->get_Next_0();
		V_0 = L_51;
		// if (n1.Triangle.Contains(n1.Prev.Point) && n1.Triangle.Contains(n1.Next.Point)) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_52 = V_0;
		NullCheck(L_52);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_53 = L_52->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_54 = V_0;
		NullCheck(L_54);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_55 = L_54->get_Prev_1();
		NullCheck(L_55);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_56 = L_55->get_Point_3();
		NullCheck(L_53);
		bool L_57 = DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592(L_53, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_013b;
		}
	}
	{
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_58 = V_0;
		NullCheck(L_58);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_59 = L_58->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_60 = V_0;
		NullCheck(L_60);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_61 = L_60->get_Next_0();
		NullCheck(L_61);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_62 = L_61->get_Point_3();
		NullCheck(L_59);
		bool L_63 = DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592(L_59, L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_013b;
		}
	}
	{
		// t1 = n1.Triangle.NeighborAcrossFrom(n1.Point);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_64 = V_0;
		NullCheck(L_64);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_65 = L_64->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_66 = V_0;
		NullCheck(L_66);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_67 = L_66->get_Point_3();
		NullCheck(L_65);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_68 = DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE(L_65, L_67, /*hidden argument*/NULL);
		V_2 = L_68;
		// RotateTrianglePair(n1.Triangle, n1.Point, t1, t1.OppositePoint(n1.Triangle, n1.Point));
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_69 = V_0;
		NullCheck(L_69);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_70 = L_69->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_71 = V_0;
		NullCheck(L_71);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_72 = L_71->get_Point_3();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_73 = V_2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_74 = V_2;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_75 = V_0;
		NullCheck(L_75);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_76 = L_75->get_Triangle_4();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_77 = V_0;
		NullCheck(L_77);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_78 = L_77->get_Point_3();
		NullCheck(L_74);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_79 = DelaunayTriangle_OppositePoint_mF44DC9F0078C3BE2EF760A170FE5B9BE75BA196C(L_74, L_76, L_78, /*hidden argument*/NULL);
		DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298(L_70, L_72, L_73, L_79, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(n1.Triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_80 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_81 = V_0;
		NullCheck(L_81);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_82 = L_81->get_Triangle_4();
		NullCheck(L_80);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_80, L_82, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(t1);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_83 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_84 = V_2;
		NullCheck(L_83);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_83, L_84, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// first = tcx.Front.Head.Point;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_85 = ___tcx0;
		NullCheck(L_85);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_86 = L_85->get_Front_8();
		NullCheck(L_86);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_87 = L_86->get_Head_0();
		NullCheck(L_87);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_88 = L_87->get_Point_3();
		V_3 = L_88;
		// n2 = tcx.Front.Tail.Prev;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_89 = ___tcx0;
		NullCheck(L_89);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_90 = L_89->get_Front_8();
		NullCheck(L_90);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_91 = L_90->get_Tail_1();
		NullCheck(L_91);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_92 = L_91->get_Prev_1();
		V_1 = L_92;
		// t1 = n2.Triangle;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_93 = V_1;
		NullCheck(L_93);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_94 = L_93->get_Triangle_4();
		V_2 = L_94;
		// p1 = n2.Point;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_95 = V_1;
		NullCheck(L_95);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_96 = L_95->get_Point_3();
		V_4 = L_96;
	}

IL_016c:
	{
		// tcx.RemoveFromList(t1);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_97 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_98 = V_2;
		NullCheck(L_97);
		DTSweepContext_RemoveFromList_m32173CBF8B9506E9598C9B897B6B51D01BBD6EE6(L_97, L_98, /*hidden argument*/NULL);
		// p1 = t1.PointCCWFrom(p1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_99 = V_2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_100 = V_4;
		NullCheck(L_99);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_101 = DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE(L_99, L_100, /*hidden argument*/NULL);
		V_4 = L_101;
		// if (p1 == first) break;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_102 = V_4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_103 = V_3;
		if ((((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_102) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_103)))
		{
			goto IL_018d;
		}
	}
	{
		// t1 = t1.NeighborCCWFrom(p1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_104 = V_2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_105 = V_4;
		NullCheck(L_104);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_106 = DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E(L_104, L_105, /*hidden argument*/NULL);
		V_2 = L_106;
		// } while (true);
		goto IL_016c;
	}

IL_018d:
	{
		// first = tcx.Front.Head.Next.Point;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_107 = ___tcx0;
		NullCheck(L_107);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_108 = L_107->get_Front_8();
		NullCheck(L_108);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_109 = L_108->get_Head_0();
		NullCheck(L_109);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_110 = L_109->get_Next_0();
		NullCheck(L_110);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_111 = L_110->get_Point_3();
		V_3 = L_111;
		// p1 = t1.PointCWFrom(tcx.Front.Head.Point);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_112 = V_2;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_113 = ___tcx0;
		NullCheck(L_113);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_114 = L_113->get_Front_8();
		NullCheck(L_114);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_115 = L_114->get_Head_0();
		NullCheck(L_115);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_116 = L_115->get_Point_3();
		NullCheck(L_112);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_117 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_112, L_116, /*hidden argument*/NULL);
		V_4 = L_117;
		// t1 = t1.NeighborCWFrom(tcx.Front.Head.Point);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_118 = V_2;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_119 = ___tcx0;
		NullCheck(L_119);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_120 = L_119->get_Front_8();
		NullCheck(L_120);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_121 = L_120->get_Head_0();
		NullCheck(L_121);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_122 = L_121->get_Point_3();
		NullCheck(L_118);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_123 = DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B(L_118, L_122, /*hidden argument*/NULL);
		V_2 = L_123;
	}

IL_01d2:
	{
		// tcx.RemoveFromList(t1);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_124 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_125 = V_2;
		NullCheck(L_124);
		DTSweepContext_RemoveFromList_m32173CBF8B9506E9598C9B897B6B51D01BBD6EE6(L_124, L_125, /*hidden argument*/NULL);
		// p1 = t1.PointCCWFrom(p1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_126 = V_2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_127 = V_4;
		NullCheck(L_126);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_128 = DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE(L_126, L_127, /*hidden argument*/NULL);
		V_4 = L_128;
		// t1 = t1.NeighborCCWFrom(p1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_129 = V_2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_130 = V_4;
		NullCheck(L_129);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_131 = DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E(L_129, L_130, /*hidden argument*/NULL);
		V_2 = L_131;
		// } while (p1 != first);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_132 = V_4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_133 = V_3;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_132) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_133))))
		{
			goto IL_01d2;
		}
	}
	{
		// tcx.FinalizeTriangulation();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_134 = ___tcx0;
		NullCheck(L_134);
		DTSweepContext_FinalizeTriangulation_mB72F54E49BAB7BFB3DB20F9B6F601C699F7C54AB(L_134, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_m74087ACFF216EA2771D4B8D21558F06C8A34263E (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___b1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___c2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_TurnAdvancingFrontConvex_m74087ACFF216EA2771D4B8D21558F06C8A34263E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_0 = NULL;
	{
		// AdvancingFrontNode first = b;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___b1;
		V_0 = L_0;
		goto IL_008a;
	}

IL_0007:
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = c;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_1 = ___tcx0;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_1);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = c;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_3 = ___tcx0;
		NullCheck(L_3);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_4 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_3, /*hidden argument*/NULL);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = ___c2;
		NullCheck(L_4);
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// if (TriangulationUtil.Orient2d(b.Point, c.Point, c.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_6 = ___b1;
		NullCheck(L_6);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = L_6->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = ___c2;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = L_8->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = ___c2;
		NullCheck(L_10);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = L_10->get_Next_0();
		NullCheck(L_11);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = L_11->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_13 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_7, L_9, L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// Fill(tcx, c);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_14 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___c2;
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_14, L_15, /*hidden argument*/NULL);
		// c = c.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___c2;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Next_0();
		___c2 = L_17;
		// } else {
		goto IL_008a;
	}

IL_004b:
	{
		// if (b != first && TriangulationUtil.Orient2d(b.Prev.Point, b.Point, c.Point) == Orientation.CCW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = ___b1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = V_0;
		if ((((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_18) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_19)))
		{
			goto IL_007f;
		}
	}
	{
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = ___b1;
		NullCheck(L_20);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = L_20->get_Prev_1();
		NullCheck(L_21);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = L_21->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = ___b1;
		NullCheck(L_23);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = L_23->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_25 = ___c2;
		NullCheck(L_25);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_26 = L_25->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_27 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_22, L_24, L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_007f;
		}
	}
	{
		// Fill(tcx, b);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_28 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = ___b1;
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_28, L_29, /*hidden argument*/NULL);
		// b = b.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_30 = ___b1;
		NullCheck(L_30);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_31 = L_30->get_Prev_1();
		___b1 = L_31;
		// } else {
		goto IL_008a;
	}

IL_007f:
	{
		// b = c;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_32 = ___c2;
		___b1 = L_32;
		// c = c.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_33 = ___c2;
		NullCheck(L_33);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_34 = L_33->get_Next_0();
		___c2 = L_34;
	}

IL_008a:
	{
		// while (c != tcx.Front.Tail) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_35 = ___c2;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_36 = ___tcx0;
		NullCheck(L_36);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_37 = L_36->get_Front_8();
		NullCheck(L_37);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_38 = L_37->get_Tail_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_35) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_38))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_m3C27D368F884C700EACA5F1ADBA68632FB0C7803 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, const RuntimeMethod* method)
{
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_0 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_1 = NULL;
	{
		// DelaunayTriangle t = tcx.Front.Head.Next.Triangle;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_1 = L_0->get_Front_8();
		NullCheck(L_1);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = L_1->get_Head_0();
		NullCheck(L_2);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = L_2->get_Next_0();
		NullCheck(L_3);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = L_3->get_Triangle_4();
		V_0 = L_4;
		// TriangulationPoint p = tcx.Front.Head.Next.Point;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_5 = ___tcx0;
		NullCheck(L_5);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_6 = L_5->get_Front_8();
		NullCheck(L_6);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = L_6->get_Head_0();
		NullCheck(L_7);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = L_8->get_Point_3();
		V_1 = L_9;
		goto IL_0036;
	}

IL_002e:
	{
		// while (!t.GetConstrainedEdgeCW(p)) t = t.NeighborCCWFrom(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_10 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = V_1;
		NullCheck(L_10);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_12 = DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0036:
	{
		// while (!t.GetConstrainedEdgeCW(p)) t = t.NeighborCCWFrom(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = V_1;
		NullCheck(L_13);
		bool L_15 = DelaunayTriangle_GetConstrainedEdgeCW_mF2FA104B63292FE48C19045E923AFC33C9CBB1A1(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_002e;
		}
	}
	{
		// tcx.MeshClean(t);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_16 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_17 = V_0;
		NullCheck(L_16);
		DTSweepContext_MeshClean_m88CC47A266E25B43AA5A10510367FAA0341E8176(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * DTSweep_PointEvent_m8EEA26BE914D0E62FFE5E85DA05A3F70FF1189FD (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_PointEvent_m8EEA26BE914D0E62FFE5E85DA05A3F70FF1189FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_0 = NULL;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_1 = NULL;
	{
		// node = tcx.LocateNode(point);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___point1;
		NullCheck(L_0);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = DTSweepContext_LocateNode_m9E03D688CBDF397C6871C5A5FBA24FE761C40BE9(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_3 = ___tcx0;
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_3);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_5 = ___tcx0;
		NullCheck(L_5);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_6 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_5, /*hidden argument*/NULL);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = V_0;
		NullCheck(L_6);
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(L_6, L_7, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// newNode = NewFrontTriangle(tcx, point, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_8 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ___point1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = DTSweep_NewFrontTriangle_m67315DC674E0AAC4AED41EE087CF1B19F6FFC8C3(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (point.X <= node.Point.X + TriangulationUtil.EPSILON) Fill(tcx, node);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = ___point1;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = V_0;
		NullCheck(L_14);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = L_14->get_Point_3();
		NullCheck(L_15);
		double L_16 = L_15->get_X_1();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		double L_17 = ((TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_13) <= ((double)((double)il2cpp_codegen_add((double)L_16, (double)L_17))))))
		{
			goto IL_0045;
		}
	}
	{
		// if (point.X <= node.Point.X + TriangulationUtil.EPSILON) Fill(tcx, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_18 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = V_0;
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// tcx.AddNode(newNode);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_20 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = V_1;
		NullCheck(L_20);
		DTSweepContext_AddNode_mD8D7B0CF7FB78B76DED5531DFFE0540605B4A607(L_20, L_21, /*hidden argument*/NULL);
		// FillAdvancingFront(tcx, newNode);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_22 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = V_1;
		DTSweep_FillAdvancingFront_m791C05428DE377F0883D5FAEF77257D5FDE64FC5(L_22, L_23, /*hidden argument*/NULL);
		// return newNode;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_24 = V_1;
		return L_24;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * DTSweep_NewFrontTriangle_m67315DC674E0AAC4AED41EE087CF1B19F6FFC8C3 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_NewFrontTriangle_m67315DC674E0AAC4AED41EE087CF1B19F6FFC8C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_0 = NULL;
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_1 = NULL;
	{
		// triangle = new DelaunayTriangle(point, node.Point, node.Next.Point);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___point1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = ___node2;
		NullCheck(L_1);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_5 = L_4->get_Point_3();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_6 = (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *)il2cpp_codegen_object_new(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mFBBC9E9E6CCFCDF571C82E9A24152615053068D5(L_6, L_0, L_2, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// triangle.MarkNeighbor(node.Triangle);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_7 = V_1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = ___node2;
		NullCheck(L_8);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_9 = L_8->get_Triangle_4();
		NullCheck(L_7);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_7, L_9, /*hidden argument*/NULL);
		// tcx.Triangles.Add(triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_10 = ___tcx0;
		NullCheck(L_10);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_11 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)L_10)->get_Triangles_1();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0(L_11, L_12, /*hidden argument*/List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0_RuntimeMethod_var);
		// newNode = new AdvancingFrontNode(point);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = ___point1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)il2cpp_codegen_object_new(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m74B63505CBB4582BA23B00D64BCC40DB386B15E1(L_14, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// newNode.Next = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Next_0();
		NullCheck(L_15);
		L_15->set_Next_0(L_17);
		// newNode.Prev = node;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = ___node2;
		NullCheck(L_18);
		L_18->set_Prev_1(L_19);
		// node.Next.Prev = newNode;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = ___node2;
		NullCheck(L_20);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = L_20->get_Next_0();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = V_0;
		NullCheck(L_21);
		L_21->set_Prev_1(L_22);
		// node.Next = newNode;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = ___node2;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_24 = V_0;
		NullCheck(L_23);
		L_23->set_Next_0(L_24);
		// tcx.AddNode(newNode); 
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_25 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = V_0;
		NullCheck(L_25);
		DTSweepContext_AddNode_mD8D7B0CF7FB78B76DED5531DFFE0540605B4A607(L_25, L_26, /*hidden argument*/NULL);
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = newNode;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_27 = ___tcx0;
		NullCheck(L_27);
		bool L_28 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_27);
		if (!L_28)
		{
			goto IL_0078;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = newNode;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_29 = ___tcx0;
		NullCheck(L_29);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_30 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_29, /*hidden argument*/NULL);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_31 = V_0;
		NullCheck(L_30);
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(L_30, L_31, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_32 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = V_1;
		bool L_34 = DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_32, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0088;
		}
	}
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_35 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_36 = V_1;
		NullCheck(L_35);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_35, L_36, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// return newNode;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_37 = V_0;
		return L_37;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_m4D97133EF5CE89599B70AA0723C9D4AF866746F7 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_EdgeEvent_m4D97133EF5CE89599B70AA0723C9D4AF866746F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// tcx.EdgeEvent.ConstrainedEdge = edge;
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
			NullCheck(L_0);
			DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * L_1 = L_0->get_EdgeEvent_12();
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_2 = ___edge1;
			NullCheck(L_1);
			L_1->set_ConstrainedEdge_0(L_2);
			// tcx.EdgeEvent.Right = edge.P.X > edge.Q.X;
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_3 = ___tcx0;
			NullCheck(L_3);
			DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * L_4 = L_3->get_EdgeEvent_12();
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_5 = ___edge1;
			NullCheck(L_5);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_5)->get_P_0();
			NullCheck(L_6);
			double L_7 = L_6->get_X_1();
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_8 = ___edge1;
			NullCheck(L_8);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_8)->get_Q_1();
			NullCheck(L_9);
			double L_10 = L_9->get_X_1();
			NullCheck(L_4);
			L_4->set_Right_1((bool)((((double)L_7) > ((double)L_10))? 1 : 0));
			// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.PrimaryTriangle = node.Triangle; }
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_11 = ___tcx0;
			NullCheck(L_11);
			bool L_12 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_11);
			if (!L_12)
			{
				goto IL_0048;
			}
		}

IL_0037:
		{
			// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.PrimaryTriangle = node.Triangle; }
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_13 = ___tcx0;
			NullCheck(L_13);
			DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_14 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_13, /*hidden argument*/NULL);
			AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___node2;
			NullCheck(L_15);
			DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_16 = L_15->get_Triangle_4();
			NullCheck(L_14);
			DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99(L_14, L_16, /*hidden argument*/NULL);
		}

IL_0048:
		{
			// if (IsEdgeSideOfTriangle(node.Triangle, edge.P, edge.Q))
			AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = ___node2;
			NullCheck(L_17);
			DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_18 = L_17->get_Triangle_4();
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_19 = ___edge1;
			NullCheck(L_19);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_19)->get_P_0();
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_21 = ___edge1;
			NullCheck(L_21);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_21)->get_Q_1();
			bool L_23 = DTSweep_IsEdgeSideOfTriangle_m8B542B36D363584165BF898E1444AA3DB35079E0(L_18, L_20, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_0063;
			}
		}

IL_0061:
		{
			// return;
			goto IL_008e;
		}

IL_0063:
		{
			// FillEdgeEvent(tcx, edge, node);
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_24 = ___tcx0;
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_25 = ___edge1;
			AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = ___node2;
			DTSweep_FillEdgeEvent_mD687A606DA28EDE2E3D2091B6A657A0D017D966B(L_24, L_25, L_26, /*hidden argument*/NULL);
			// EdgeEvent(tcx, edge.P, edge.Q, node.Triangle, edge.Q);
			DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_27 = ___tcx0;
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_28 = ___edge1;
			NullCheck(L_28);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_29 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_28)->get_P_0();
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_30 = ___edge1;
			NullCheck(L_30);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_31 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_30)->get_Q_1();
			AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_32 = ___node2;
			NullCheck(L_32);
			DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = L_32->get_Triangle_4();
			DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_34 = ___edge1;
			NullCheck(L_34);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_35 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_34)->get_Q_1();
			DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D(L_27, L_29, L_31, L_33, L_35, /*hidden argument*/NULL);
			// }
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008b;
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Object)
		// catch { }
		// catch { }
		goto IL_008e;
	} // end catch (depth: 1)

IL_008e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_mD687A606DA28EDE2E3D2091B6A657A0D017D966B (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	{
		// if (tcx.EdgeEvent.Right) {
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * L_1 = L_0->get_EdgeEvent_12();
		NullCheck(L_1);
		bool L_2 = L_1->get_Right_1();
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// FillRightAboveEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_3 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_4 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = ___node2;
		DTSweep_FillRightAboveEdgeEvent_mCE4F2DFC8ED785ADF058EC23DB53550F26B5600A(L_3, L_4, L_5, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0016:
	{
		// FillLeftAboveEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_6 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_7 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = ___node2;
		DTSweep_FillLeftAboveEdgeEvent_m60C7E59CB4133C56009FB98E9DA683C6E5CA2B14(L_6, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_mCA32CBD2D17BCBE53410E577318F354FF12190B4 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillRightConcaveEdgeEvent_mCA32CBD2D17BCBE53410E577318F354FF12190B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fill(tcx, node.Next);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = ___node2;
		NullCheck(L_1);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = L_1->get_Next_0();
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_0, L_2, /*hidden argument*/NULL);
		// if (node.Next.Point != edge.P) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_5 = L_4->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_6 = ___edge1;
		NullCheck(L_6);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_6)->get_P_0();
		if ((((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_5) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_7)))
		{
			goto IL_006f;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Next.Point, edge.P) == Orientation.CCW) {
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_8)->get_Q_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = ___node2;
		NullCheck(L_10);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = L_10->get_Next_0();
		NullCheck(L_11);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = L_11->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_13 = ___edge1;
		NullCheck(L_13);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_13)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_15 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_9, L_12, L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node2;
		NullCheck(L_16);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = L_16->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = L_18->get_Next_0();
		NullCheck(L_19);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = L_19->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = ___node2;
		NullCheck(L_21);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = L_21->get_Next_0();
		NullCheck(L_22);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = L_22->get_Next_0();
		NullCheck(L_23);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = L_23->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_25 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_17, L_20, L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_26 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_27 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_28 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_mCA32CBD2D17BCBE53410E577318F354FF12190B4(L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_mA91731D66F7966D8F838CE2383C161CA37B513C7 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillRightConvexEdgeEvent_mA91731D66F7966D8F838CE2383C161CA37B513C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Next.Point, node.Next.Next.Point, node.Next.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___node2;
		NullCheck(L_0);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = L_0->get_Next_0();
		NullCheck(L_1);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = L_4->get_Next_0();
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = L_5->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_9 = L_8->get_Next_0();
		NullCheck(L_9);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = L_9->get_Next_0();
		NullCheck(L_10);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = L_10->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_12 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_2, L_6, L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node.Next);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_13 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_14 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___node2;
		NullCheck(L_15);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = L_15->get_Next_0();
		DTSweep_FillRightConcaveEdgeEvent_mCA32CBD2D17BCBE53410E577318F354FF12190B4(L_13, L_14, L_16, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0046:
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Next.Next.Point, edge.P) == Orientation.CCW) {
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_17 = ___edge1;
		NullCheck(L_17);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_17)->get_Q_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = L_20->get_Next_0();
		NullCheck(L_21);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = L_21->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_23)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_25 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_18, L_22, L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		// FillRightConvexEdgeEvent(tcx, edge, node.Next);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_26 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_27 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_28 = ___node2;
		NullCheck(L_28);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = L_28->get_Next_0();
		DTSweep_FillRightConvexEdgeEvent_mA91731D66F7966D8F838CE2383C161CA37B513C7(L_26, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_mE48E6FC6CA1C2771C861BA954FE732641C8D6900 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillRightBelowEdgeEvent_mE48E6FC6CA1C2771C861BA954FE732641C8D6900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_3 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (node.Point.X < edge.P.X) { 
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = ___node2;
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_1();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_8)->get_P_0();
		NullCheck(L_9);
		double L_10 = L_9->get_X_1();
		if ((!(((double)L_7) < ((double)L_10))))
		{
			goto IL_006e;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = ___node2;
		NullCheck(L_11);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = L_11->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = ___node2;
		NullCheck(L_13);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = L_13->get_Next_0();
		NullCheck(L_14);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = L_14->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Next_0();
		NullCheck(L_17);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = L_17->get_Next_0();
		NullCheck(L_18);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_19 = L_18->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_20 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_12, L_15, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_21 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_22 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_mCA32CBD2D17BCBE53410E577318F354FF12190B4(L_21, L_22, L_23, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_005e:
	{
		// FillRightConvexEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_24 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_25 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = ___node2;
		DTSweep_FillRightConvexEdgeEvent_mA91731D66F7966D8F838CE2383C161CA37B513C7(L_24, L_25, L_26, /*hidden argument*/NULL);
		// FillRightBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_27 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_28 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_mE48E6FC6CA1C2771C861BA954FE732641C8D6900(L_27, L_28, L_29, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_mCE4F2DFC8ED785ADF058EC23DB53550F26B5600A (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillRightAboveEdgeEvent_mCE4F2DFC8ED785ADF058EC23DB53550F26B5600A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0047;
	}

IL_0002:
	{
		// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.ActiveNode = node; }
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.ActiveNode = node; }
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_3 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// Orientation o1 = TriangulationUtil.Orient2d(edge.Q, node.Next.Point, edge.P);
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_5 = ___edge1;
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_5)->get_Q_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = L_8->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_10 = ___edge1;
		NullCheck(L_10);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_10)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_12 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_6, L_9, L_11, /*hidden argument*/NULL);
		// if (o1 == Orientation.CCW) {
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		// FillRightBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_13 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_14 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_mE48E6FC6CA1C2771C861BA954FE732641C8D6900(L_13, L_14, L_15, /*hidden argument*/NULL);
		// } else {
		goto IL_0047;
	}

IL_003f:
	{
		// node = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Next_0();
		___node2 = L_17;
	}

IL_0047:
	{
		// while (node.Next.Point.X < edge.P.X) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = L_18->get_Next_0();
		NullCheck(L_19);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = L_19->get_Point_3();
		NullCheck(L_20);
		double L_21 = L_20->get_X_1();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_22 = ___edge1;
		NullCheck(L_22);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_23 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_22)->get_P_0();
		NullCheck(L_23);
		double L_24 = L_23->get_X_1();
		if ((((double)L_21) < ((double)L_24)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m4F06AE3BC50459577A56BC8693269ADADB7A2C93 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillLeftConvexEdgeEvent_m4F06AE3BC50459577A56BC8693269ADADB7A2C93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Prev.Point, node.Prev.Prev.Point, node.Prev.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___node2;
		NullCheck(L_0);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = L_0->get_Prev_1();
		NullCheck(L_1);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = L_3->get_Prev_1();
		NullCheck(L_4);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = L_4->get_Prev_1();
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = L_5->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = L_7->get_Prev_1();
		NullCheck(L_8);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_9 = L_8->get_Prev_1();
		NullCheck(L_9);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = L_9->get_Prev_1();
		NullCheck(L_10);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = L_10->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_12 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_2, L_6, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0045;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node.Prev);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_13 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_14 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___node2;
		NullCheck(L_15);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = L_15->get_Prev_1();
		DTSweep_FillLeftConcaveEdgeEvent_m80BF4E08F731DFF15B3B37355900FE7CC744BEF5(L_13, L_14, L_16, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0045:
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Prev.Prev.Point, edge.P) == Orientation.CW) {
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_17 = ___edge1;
		NullCheck(L_17);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_17)->get_Q_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = L_19->get_Prev_1();
		NullCheck(L_20);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = L_20->get_Prev_1();
		NullCheck(L_21);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = L_21->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_23)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_25 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_18, L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0075;
		}
	}
	{
		// FillLeftConvexEdgeEvent(tcx, edge, node.Prev);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_26 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_27 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_28 = ___node2;
		NullCheck(L_28);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = L_28->get_Prev_1();
		DTSweep_FillLeftConvexEdgeEvent_m4F06AE3BC50459577A56BC8693269ADADB7A2C93(L_26, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_m80BF4E08F731DFF15B3B37355900FE7CC744BEF5 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillLeftConcaveEdgeEvent_m80BF4E08F731DFF15B3B37355900FE7CC744BEF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fill(tcx, node.Prev);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = ___node2;
		NullCheck(L_1);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = L_1->get_Prev_1();
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_0, L_2, /*hidden argument*/NULL);
		// if (node.Prev.Point != edge.P) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = L_3->get_Prev_1();
		NullCheck(L_4);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_5 = L_4->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_6 = ___edge1;
		NullCheck(L_6);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_6)->get_P_0();
		if ((((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_5) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_7)))
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Prev.Point, edge.P) == Orientation.CW) {
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_8)->get_Q_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = ___node2;
		NullCheck(L_10);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = L_10->get_Prev_1();
		NullCheck(L_11);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = L_11->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_13 = ___edge1;
		NullCheck(L_13);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_13)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_15 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_9, L_12, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node2;
		NullCheck(L_16);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = L_16->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = L_18->get_Prev_1();
		NullCheck(L_19);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = L_19->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = ___node2;
		NullCheck(L_21);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = L_21->get_Prev_1();
		NullCheck(L_22);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = L_22->get_Prev_1();
		NullCheck(L_23);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = L_23->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_25 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_17, L_20, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_006d;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_26 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_27 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_28 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_m80BF4E08F731DFF15B3B37355900FE7CC744BEF5(L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_m2E0E2713B192599343BBA829FF97405272FC72BF (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillLeftBelowEdgeEvent_m2E0E2713B192599343BBA829FF97405272FC72BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_3 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (node.Point.X > edge.P.X) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = ___node2;
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_1();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_8)->get_P_0();
		NullCheck(L_9);
		double L_10 = L_9->get_X_1();
		if ((!(((double)L_7) > ((double)L_10))))
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = ___node2;
		NullCheck(L_11);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = L_11->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = ___node2;
		NullCheck(L_13);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = L_13->get_Prev_1();
		NullCheck(L_14);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = L_14->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Prev_1();
		NullCheck(L_17);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = L_17->get_Prev_1();
		NullCheck(L_18);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_19 = L_18->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_20 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_12, L_15, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_005d;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_21 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_22 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_m80BF4E08F731DFF15B3B37355900FE7CC744BEF5(L_21, L_22, L_23, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_005d:
	{
		// FillLeftConvexEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_24 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_25 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = ___node2;
		DTSweep_FillLeftConvexEdgeEvent_m4F06AE3BC50459577A56BC8693269ADADB7A2C93(L_24, L_25, L_26, /*hidden argument*/NULL);
		// FillLeftBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_27 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_28 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_m2E0E2713B192599343BBA829FF97405272FC72BF(L_27, L_28, L_29, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_m60C7E59CB4133C56009FB98E9DA683C6E5CA2B14 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___edge1, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillLeftAboveEdgeEvent_m60C7E59CB4133C56009FB98E9DA683C6E5CA2B14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0046;
	}

IL_0002:
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_3 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// Orientation o1 = TriangulationUtil.Orient2d(edge.Q, node.Prev.Point, edge.P);
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_5 = ___edge1;
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_5)->get_Q_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = L_7->get_Prev_1();
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = L_8->get_Point_3();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_10 = ___edge1;
		NullCheck(L_10);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_10)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_12 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_6, L_9, L_11, /*hidden argument*/NULL);
		// if (o1 == Orientation.CW) {
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
		// FillLeftBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_13 = ___tcx0;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_14 = ___edge1;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_m2E0E2713B192599343BBA829FF97405272FC72BF(L_13, L_14, L_15, /*hidden argument*/NULL);
		// } else {
		goto IL_0046;
	}

IL_003e:
	{
		// node = node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Prev_1();
		___node2 = L_17;
	}

IL_0046:
	{
		// while (node.Prev.Point.X > edge.P.X) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = L_18->get_Prev_1();
		NullCheck(L_19);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = L_19->get_Point_3();
		NullCheck(L_20);
		double L_21 = L_20->get_X_1();
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_22 = ___edge1;
		NullCheck(L_22);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_23 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_22)->get_P_0();
		NullCheck(L_23);
		double L_24 = L_23->get_X_1();
		if ((((double)L_21) > ((double)L_24)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_m8B542B36D363584165BF898E1444AA3DB35079E0 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_IsEdgeSideOfTriangle_m8B542B36D363584165BF898E1444AA3DB35079E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = triangle.EdgeIndex(ep, eq);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___triangle0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___eq2;
		NullCheck(L_0);
		int32_t L_3 = DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if ( index == -1 ) return false;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		// if ( index == -1 ) return false;
		return (bool)0;
	}

IL_000f:
	{
		// triangle.MarkConstrainedEdge(index);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_5 = ___triangle0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		DelaunayTriangle_MarkConstrainedEdge_m877C203B9027322C1964B6175F79A99AEA0E78E2(L_5, L_6, /*hidden argument*/NULL);
		// triangle = triangle.Neighbors[index];
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_7 = ___triangle0;
		NullCheck(L_7);
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_8 = L_7->get_address_of_Neighbors_1();
		int32_t L_9 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_10 = FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_8, L_9, /*hidden argument*/FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var);
		___triangle0 = L_10;
		// if (triangle != null) triangle.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_11 = ___triangle0;
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// if (triangle != null) triangle.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_12 = ___triangle0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ___eq2;
		NullCheck(L_12);
		DelaunayTriangle_MarkConstrainedEdge_m1C797822F982588021F1E7A2FAE4B6BC096B83A3(L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle3, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_0 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.PrimaryTriangle=triangle;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.PrimaryTriangle=triangle;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_3 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_2, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = ___triangle3;
		NullCheck(L_3);
		DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (IsEdgeSideOfTriangle(triangle, ep, eq)) return;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_5 = ___triangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = ___eq2;
		bool L_8 = DTSweep_IsEdgeSideOfTriangle_m8B542B36D363584165BF898E1444AA3DB35079E0(L_5, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		// if (IsEdgeSideOfTriangle(triangle, ep, eq)) return;
		return;
	}

IL_001f:
	{
		// p1 = triangle.PointCCWFrom(point);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_9 = ___triangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = ___point4;
		NullCheck(L_9);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// Orientation o1 = TriangulationUtil.Orient2d(eq, p1, ep);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = ___eq2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_15 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// if (o1 == Orientation.Collinear) {
		int32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		// throw new PointOnEdgeException("EdgeEvent - Point on constrained edge not supported yet",eq,p1,ep);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = ___eq2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_19 = ___ep1;
		PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D * L_20 = (PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D *)il2cpp_codegen_object_new(PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D_il2cpp_TypeInfo_var);
		PointOnEdgeException__ctor_m1548AEC8F2DBCF463AC8C016FBA632464A1D9048(L_20, _stringLiteral5C1713771585148A45296FC2A28E0D9B64B3C607, L_17, L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D_RuntimeMethod_var);
	}

IL_0043:
	{
		// p2 = triangle.PointCWFrom(point);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_21 = ___triangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = ___point4;
		NullCheck(L_21);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_23 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		// Orientation o2 = TriangulationUtil.Orient2d(eq, p2, ep);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = ___eq2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_25 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_26 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_27 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_24, L_25, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		// if (o2 == Orientation.Collinear) {
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0067;
		}
	}
	{
		// throw new PointOnEdgeException("EdgeEvent - Point on constrained edge not supported yet",eq,p2,ep);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_29 = ___eq2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_30 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_31 = ___ep1;
		PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D * L_32 = (PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D *)il2cpp_codegen_object_new(PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D_il2cpp_TypeInfo_var);
		PointOnEdgeException__ctor_m1548AEC8F2DBCF463AC8C016FBA632464A1D9048(L_32, _stringLiteral5C1713771585148A45296FC2A28E0D9B64B3C607, L_29, L_30, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D_RuntimeMethod_var);
	}

IL_0067:
	{
		// if (o1 == o2) {
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0090;
		}
	}
	{
		// if (o1 == Orientation.CW) {
		int32_t L_35 = V_2;
		if (L_35)
		{
			goto IL_007a;
		}
	}
	{
		// triangle = triangle.NeighborCCWFrom(point);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_36 = ___triangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_37 = ___point4;
		NullCheck(L_36);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_38 = DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E(L_36, L_37, /*hidden argument*/NULL);
		___triangle3 = L_38;
		// } else {
		goto IL_0084;
	}

IL_007a:
	{
		// triangle = triangle.NeighborCWFrom(point);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_39 = ___triangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_40 = ___point4;
		NullCheck(L_39);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_41 = DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B(L_39, L_40, /*hidden argument*/NULL);
		___triangle3 = L_41;
	}

IL_0084:
	{
		// EdgeEvent(tcx, ep, eq, triangle, point);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_42 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_43 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_44 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_45 = ___triangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_46 = ___point4;
		DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D(L_42, L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0090:
	{
		// FlipEdgeEvent(tcx, ep, eq, triangle, point);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_47 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_48 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_49 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_50 = ___triangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_51 = ___point4;
		DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD(L_47, L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t3, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_0 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_1 = NULL;
	int32_t V_2 = 0;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_3 = NULL;
	{
		// DelaunayTriangle ot = t.NeighborAcrossFrom(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p4;
		NullCheck(L_0);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_2 = DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// TriangulationPoint op = ot.OppositePoint(t, p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_3 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_5 = ___p4;
		NullCheck(L_3);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = DelaunayTriangle_OppositePoint_mF44DC9F0078C3BE2EF760A170FE5B9BE75BA196C(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (ot == null) {
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_7 = V_0;
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		// throw new InvalidOperationException("[BUG:FIXME] FLIP failed due to missing triangle");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_8 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_8, _stringLiteral2D8CDF068945B09295470CC500D55DB55ED55C9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD_RuntimeMethod_var);
	}

IL_0021:
	{
		// if (tcx.IsDebugEnabled) {
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_9 = ___tcx0;
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		// tcx.DTDebugContext.PrimaryTriangle   = t;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_12 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_11, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = ___t3;
		NullCheck(L_12);
		DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99(L_12, L_13, /*hidden argument*/NULL);
		// tcx.DTDebugContext.SecondaryTriangle = ot;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_14 = ___tcx0;
		NullCheck(L_14);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_15 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_14, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_16 = V_0;
		NullCheck(L_15);
		DTSweepDebugContext_set_SecondaryTriangle_m3574DE99A897AB99A533D776F46D8026C61E9295(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// bool inScanArea = TriangulationUtil.InScanArea(p, t.PointCCWFrom(p), t.PointCWFrom(p), op);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = ___p4;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_18 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_19 = ___p4;
		NullCheck(L_18);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE(L_18, L_19, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_21 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = ___p4;
		NullCheck(L_21);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_23 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_21, L_22, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		bool L_25 = TriangulationUtil_InScanArea_mE851390EF57E22B31ECB916E31BD40F13CCEA64A(L_17, L_20, L_23, L_24, /*hidden argument*/NULL);
		// if (inScanArea) {
		if (!L_25)
		{
			goto IL_0120;
		}
	}
	{
		// RotateTrianglePair(t, p, ot, op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_26 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_27 = ___p4;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_28 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_29 = V_1;
		DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298(L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(t);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_30 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_31 = ___t3;
		NullCheck(L_30);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_30, L_31, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(ot);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_32 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = V_0;
		NullCheck(L_32);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_32, L_33, /*hidden argument*/NULL);
		// if (p == eq && op == ep) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_34 = ___p4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_35 = ___eq2;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_34) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_35))))
		{
			goto IL_00eb;
		}
	}
	{
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_36 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_37 = ___ep1;
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_36) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_37))))
		{
			goto IL_00eb;
		}
	}
	{
		// if (eq == tcx.EdgeEvent.ConstrainedEdge.Q
		//     && ep == tcx.EdgeEvent.ConstrainedEdge.P) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_38 = ___eq2;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_39 = ___tcx0;
		NullCheck(L_39);
		DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * L_40 = L_39->get_EdgeEvent_12();
		NullCheck(L_40);
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_41 = L_40->get_ConstrainedEdge_0();
		NullCheck(L_41);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_42 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_41)->get_Q_1();
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_38) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_42))))
		{
			goto IL_00d8;
		}
	}
	{
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_43 = ___ep1;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_44 = ___tcx0;
		NullCheck(L_44);
		DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * L_45 = L_44->get_EdgeEvent_12();
		NullCheck(L_45);
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_46 = L_45->get_ConstrainedEdge_0();
		NullCheck(L_46);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_47 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)L_46)->get_P_0();
		if ((!(((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_43) == ((RuntimeObject*)(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)L_47))))
		{
			goto IL_00d8;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - constrained edge done"); 
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_48 = ___tcx0;
		NullCheck(L_48);
		bool L_49 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_48);
		if (!L_49)
		{
			goto IL_00b7;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - constrained edge done"); 
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(_stringLiteralD48D17293DB4E60C62C562DBF905942D8BA25C1A, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		// t.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_50 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_51 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_52 = ___eq2;
		NullCheck(L_50);
		DelaunayTriangle_MarkConstrainedEdge_m1C797822F982588021F1E7A2FAE4B6BC096B83A3(L_50, L_51, L_52, /*hidden argument*/NULL);
		// ot.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_53 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_54 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_55 = ___eq2;
		NullCheck(L_53);
		DelaunayTriangle_MarkConstrainedEdge_m1C797822F982588021F1E7A2FAE4B6BC096B83A3(L_53, L_54, L_55, /*hidden argument*/NULL);
		// Legalize(tcx, t);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_56 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_57 = ___t3;
		DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_56, L_57, /*hidden argument*/NULL);
		// Legalize(tcx, ot);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_58 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_59 = V_0;
		DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_58, L_59, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00d8:
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - subedge done"); 
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_60 = ___tcx0;
		NullCheck(L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_60);
		if (!L_61)
		{
			goto IL_0140;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - subedge done"); 
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(_stringLiteral52D5D92C9473C1EE1EDAEC140A224AF1905D5B39, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00eb:
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - flipping and continuing with triangle still crossing edge"); 
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_62 = ___tcx0;
		NullCheck(L_62);
		bool L_63 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_62);
		if (!L_63)
		{
			goto IL_00fd;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - flipping and continuing with triangle still crossing edge"); 
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(_stringLiteral214151CB8C6D960F6004C5214F63B8B14566FEEC, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		// Orientation o = TriangulationUtil.Orient2d(eq, op, ep);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_64 = ___eq2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_65 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_66 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_67 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_64, L_65, L_66, /*hidden argument*/NULL);
		V_2 = L_67;
		// t = NextFlipTriangle(tcx, o, t, ot, p, op);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_68 = ___tcx0;
		int32_t L_69 = V_2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_70 = ___t3;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_71 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_72 = ___p4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_73 = V_1;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_74 = DTSweep_NextFlipTriangle_m8B423E3B85BDCD3977BA00301B80A28C60B89D5C(L_68, L_69, L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
		___t3 = L_74;
		// FlipEdgeEvent(tcx, ep, eq, t, p);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_75 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_76 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_77 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_78 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_79 = ___p4;
		DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD(L_75, L_76, L_77, L_78, L_79, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0120:
	{
		// TriangulationPoint newP = NextFlipPoint(ep, eq, ot, op);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_80 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_81 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_82 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_83 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_84 = DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5(L_80, L_81, L_82, L_83, /*hidden argument*/NULL);
		V_3 = L_84;
		// FlipScanEdgeEvent(tcx, ep, eq, t, ot, newP);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_85 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_86 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_87 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_88 = ___t3;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_89 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_90 = V_3;
		DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D(L_85, L_86, L_87, L_88, L_89, L_90, /*hidden argument*/NULL);
		// EdgeEvent(tcx, ep, eq, t, p);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_91 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_92 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_93 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_94 = ___t3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_95 = ___p4;
		DTSweep_EdgeEvent_mC2B7FFFA8E4E6CB0A23DB740BB93B33EE5E2F65D(L_91, L_92, L_93, L_94, L_95, /*hidden argument*/NULL);
	}

IL_0140:
	{
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq1, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___ot2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___op3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Orientation o2d = TriangulationUtil.Orient2d(eq, op, ep);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___eq1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___op3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___ep0;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_3 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// switch ( o2d ) {
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_001d:
	{
		// case Orientation.CW: return ot.PointCCWFrom(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_5 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ___op3;
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0025:
	{
		// case Orientation.CCW: return ot.PointCWFrom(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_8 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = ___op3;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002d:
	{
		// throw new PointOnEdgeException("Point on constrained edge not supported yet",eq,op,ep);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = ___eq1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = ___op3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = ___ep0;
		PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D * L_14 = (PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D *)il2cpp_codegen_object_new(PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D_il2cpp_TypeInfo_var);
		PointOnEdgeException__ctor_m1548AEC8F2DBCF463AC8C016FBA632464A1D9048(L_14, _stringLiteralAAA3B7B7215230DE4A5C3EC9062090231C301B8D, L_11, L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5_RuntimeMethod_var);
	}

IL_003b:
	{
		// throw new NotImplementedException("Orientation not handled");
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_15 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_15, _stringLiteralD00D8ACAB6BB5D12333254CE4465D6E7E54ACBCD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5_RuntimeMethod_var);
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.Orientation,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DTSweep_NextFlipTriangle_m8B423E3B85BDCD3977BA00301B80A28C60B89D5C (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, int32_t ___o1, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___ot3, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p4, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___op5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (o == Orientation.CCW) {
		int32_t L_0 = ___o1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// edgeIndex = ot.EdgeIndex(p, op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_1 = ___ot3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___p4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = ___op5;
		NullCheck(L_1);
		int32_t L_4 = DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// ot.EdgeIsDelaunay[edgeIndex] = true;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_5 = ___ot3;
		NullCheck(L_5);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_6 = L_5->get_address_of_EdgeIsDelaunay_3();
		int32_t L_7 = V_0;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_6, L_7, (bool)1, /*hidden argument*/NULL);
		// Legalize(tcx, ot);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_8 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_9 = ___ot3;
		DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_8, L_9, /*hidden argument*/NULL);
		// ot.EdgeIsDelaunay.Clear();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_10 = ___ot3;
		NullCheck(L_10);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_11 = L_10->get_address_of_EdgeIsDelaunay_3();
		FixedBitArray3_Clear_m7BA5F500516DD2D9FF20855DAC52E1C285F510ED((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_11, /*hidden argument*/NULL);
		// return t;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_12 = ___t2;
		return L_12;
	}

IL_0031:
	{
		// edgeIndex = t.EdgeIndex(p, op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = ___t2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ___p4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = ___op5;
		NullCheck(L_13);
		int32_t L_16 = DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82(L_13, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// t.EdgeIsDelaunay[edgeIndex] = true;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_17 = ___t2;
		NullCheck(L_17);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_18 = L_17->get_address_of_EdgeIsDelaunay_3();
		int32_t L_19 = V_0;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_18, L_19, (bool)1, /*hidden argument*/NULL);
		// Legalize(tcx, t);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_20 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_21 = ___t2;
		DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_20, L_21, /*hidden argument*/NULL);
		// t.EdgeIsDelaunay.Clear();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_22 = ___t2;
		NullCheck(L_22);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_23 = L_22->get_address_of_EdgeIsDelaunay_3();
		FixedBitArray3_Clear_m7BA5F500516DD2D9FF20855DAC52E1C285F510ED((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_23, /*hidden argument*/NULL);
		// return ot;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_24 = ___ot3;
		return L_24;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___ep1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___eq2, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___flipTriangle3, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t4, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_0 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_1 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_2 = NULL;
	{
		// ot = t.NeighborAcrossFrom(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___t4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p5;
		NullCheck(L_0);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_2 = DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// op = ot.OppositePoint(t, p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_3 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = ___t4;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_5 = ___p5;
		NullCheck(L_3);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = DelaunayTriangle_OppositePoint_mF44DC9F0078C3BE2EF760A170FE5B9BE75BA196C(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (ot == null) {
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_7 = V_0;
		if (L_7)
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("[BUG:FIXME] FLIP failed due to missing triangle");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_8, _stringLiteral2D8CDF068945B09295470CC500D55DB55ED55C9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D_RuntimeMethod_var);
	}

IL_0023:
	{
		// if (tcx.IsDebugEnabled) {
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_9 = ___tcx0;
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// Console.WriteLine("[FLIP:SCAN] - scan next point"); 
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(_stringLiteral7620EDABDDDAFB81E95BC1FC24BC4F3743805320, /*hidden argument*/NULL);
		// tcx.DTDebugContext.PrimaryTriangle = t;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_12 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_11, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = ___t4;
		NullCheck(L_12);
		DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99(L_12, L_13, /*hidden argument*/NULL);
		// tcx.DTDebugContext.SecondaryTriangle = ot;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_14 = ___tcx0;
		NullCheck(L_14);
		DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * L_15 = TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380(L_14, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_16 = V_0;
		NullCheck(L_15);
		DTSweepDebugContext_set_SecondaryTriangle_m3574DE99A897AB99A533D776F46D8026C61E9295(L_15, L_16, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// inScanArea = TriangulationUtil.InScanArea(eq, flipTriangle.PointCCWFrom(eq), flipTriangle.PointCWFrom(eq), op);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_18 = ___flipTriangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_19 = ___eq2;
		NullCheck(L_18);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE(L_18, L_19, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_21 = ___flipTriangle3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = ___eq2;
		NullCheck(L_21);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_23 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_21, L_22, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		bool L_25 = TriangulationUtil_InScanArea_mE851390EF57E22B31ECB916E31BD40F13CCEA64A(L_17, L_20, L_23, L_24, /*hidden argument*/NULL);
		// if (inScanArea) {
		if (!L_25)
		{
			goto IL_0070;
		}
	}
	{
		// FlipEdgeEvent(tcx, eq, op, ot, op);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_26 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_27 = ___eq2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_28 = V_1;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_29 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_30 = V_1;
		DTSweep_FlipEdgeEvent_m93D1BBA3E91EFB81F0171B16C2A073E50351FDDD(L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0070:
	{
		// newP = NextFlipPoint(ep, eq, ot, op);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_31 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_32 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_34 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_35 = DTSweep_NextFlipPoint_m6FA67E7DC22E1E1E0FC56AF191F88DC86D8F38A5(L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		// FlipScanEdgeEvent(tcx, ep, eq, flipTriangle, ot, newP);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_36 = ___tcx0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_37 = ___ep1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_38 = ___eq2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_39 = ___flipTriangle3;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_40 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_41 = V_2;
		DTSweep_FlipScanEdgeEvent_m4A9B502AF56933508776AADA2B7586CE60AF6A2D(L_36, L_37, L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_m791C05428DE377F0883D5FAEF77257D5FDE64FC5 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___n1, const RuntimeMethod* method)
{
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_0 = NULL;
	double V_1 = 0.0;
	{
		// node = n.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___n1;
		NullCheck(L_0);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = L_0->get_Next_0();
		V_0 = L_1;
		goto IL_0036;
	}

IL_0009:
	{
		// angle = HoleAngle(node);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = V_0;
		double L_3 = DTSweep_HoleAngle_m9FA809DA54C5DFC4A1B36614B9E5085FB56F63E8(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (angle > PI_div2 || angle < -PI_div2) break;
		double L_4 = V_1;
		if ((((double)L_4) > ((double)(1.5707963267948966))))
		{
			goto IL_003e;
		}
	}
	{
		double L_5 = V_1;
		if ((((double)L_5) < ((double)(-1.5707963267948966))))
		{
			goto IL_003e;
		}
	}
	{
		// Fill(tcx, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_6 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = V_0;
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_6, L_7, /*hidden argument*/NULL);
		// node = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = V_0;
		NullCheck(L_8);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_9 = L_8->get_Next_0();
		V_0 = L_9;
	}

IL_0036:
	{
		// while (node.HasNext) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = AdvancingFrontNode_get_HasNext_mCE5167AFC30C68A854A9AA3D76CFF3FB463B6B6B(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0009;
		}
	}

IL_003e:
	{
		// node = n.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_12 = ___n1;
		NullCheck(L_12);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = L_12->get_Prev_1();
		V_0 = L_13;
		goto IL_0074;
	}

IL_0047:
	{
		// angle = HoleAngle(node);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = V_0;
		double L_15 = DTSweep_HoleAngle_m9FA809DA54C5DFC4A1B36614B9E5085FB56F63E8(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// if (angle > PI_div2 || angle < -PI_div2) break;
		double L_16 = V_1;
		if ((((double)L_16) > ((double)(1.5707963267948966))))
		{
			goto IL_007c;
		}
	}
	{
		double L_17 = V_1;
		if ((((double)L_17) < ((double)(-1.5707963267948966))))
		{
			goto IL_007c;
		}
	}
	{
		// Fill(tcx, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_18 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = V_0;
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_18, L_19, /*hidden argument*/NULL);
		// node = node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = V_0;
		NullCheck(L_20);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = L_20->get_Prev_1();
		V_0 = L_21;
	}

IL_0074:
	{
		// while (node.HasPrev) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = V_0;
		NullCheck(L_22);
		bool L_23 = AdvancingFrontNode_get_HasPrev_mC924C6A0091193BC55B9FF17E1477A0BF682ECCF(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0047;
		}
	}

IL_007c:
	{
		// if (n.HasNext && n.Next.HasNext) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_24 = ___n1;
		NullCheck(L_24);
		bool L_25 = AdvancingFrontNode_get_HasNext_mCE5167AFC30C68A854A9AA3D76CFF3FB463B6B6B(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = ___n1;
		NullCheck(L_26);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_27 = L_26->get_Next_0();
		NullCheck(L_27);
		bool L_28 = AdvancingFrontNode_get_HasNext_mCE5167AFC30C68A854A9AA3D76CFF3FB463B6B6B(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ab;
		}
	}
	{
		// angle = BasinAngle(n);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = ___n1;
		double L_30 = DTSweep_BasinAngle_m10EFCC9A02B6125BB3597EEFB035B616FFAA64F3(L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		// if (angle < PI_3div4) FillBasin(tcx, n);
		double L_31 = V_1;
		if ((!(((double)L_31) < ((double)(2.3561944901923448)))))
		{
			goto IL_00ab;
		}
	}
	{
		// if (angle < PI_3div4) FillBasin(tcx, n);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_32 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_33 = ___n1;
		DTSweep_FillBasin_m35041B29CD2BBCA61C982F5A011F9C7B37C60883(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_m35041B29CD2BBCA61C982F5A011F9C7B37C60883 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillBasin_m35041B29CD2BBCA61C982F5A011F9C7B37C60883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___node1;
		NullCheck(L_0);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = L_0->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = ___node1;
		NullCheck(L_2);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = L_2->get_Next_0();
		NullCheck(L_3);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = L_3->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_6 = L_5->get_Next_0();
		NullCheck(L_6);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = L_6->get_Next_0();
		NullCheck(L_7);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_8 = L_7->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_9 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_1, L_4, L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// tcx.Basin.leftNode = node;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_10 = ___tcx0;
		NullCheck(L_10);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_11 = L_10->get_Basin_11();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_12 = ___node1;
		NullCheck(L_11);
		L_11->set_leftNode_0(L_12);
		// } else {
		goto IL_0048;
	}

IL_0037:
	{
		// tcx.Basin.leftNode = node.Next;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_13 = ___tcx0;
		NullCheck(L_13);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_14 = L_13->get_Basin_11();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___node1;
		NullCheck(L_15);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = L_15->get_Next_0();
		NullCheck(L_14);
		L_14->set_leftNode_0(L_16);
	}

IL_0048:
	{
		// tcx.Basin.bottomNode = tcx.Basin.leftNode;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_17 = ___tcx0;
		NullCheck(L_17);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_18 = L_17->get_Basin_11();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_19 = ___tcx0;
		NullCheck(L_19);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_20 = L_19->get_Basin_11();
		NullCheck(L_20);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = L_20->get_leftNode_0();
		NullCheck(L_18);
		L_18->set_bottomNode_1(L_21);
		goto IL_007b;
	}

IL_0060:
	{
		// while (tcx.Basin.bottomNode.HasNext && tcx.Basin.bottomNode.Point.Y >= tcx.Basin.bottomNode.Next.Point.Y) tcx.Basin.bottomNode = tcx.Basin.bottomNode.Next;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_22 = ___tcx0;
		NullCheck(L_22);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_23 = L_22->get_Basin_11();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_24 = ___tcx0;
		NullCheck(L_24);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_25 = L_24->get_Basin_11();
		NullCheck(L_25);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = L_25->get_bottomNode_1();
		NullCheck(L_26);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_27 = L_26->get_Next_0();
		NullCheck(L_23);
		L_23->set_bottomNode_1(L_27);
	}

IL_007b:
	{
		// while (tcx.Basin.bottomNode.HasNext && tcx.Basin.bottomNode.Point.Y >= tcx.Basin.bottomNode.Next.Point.Y) tcx.Basin.bottomNode = tcx.Basin.bottomNode.Next;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_28 = ___tcx0;
		NullCheck(L_28);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_29 = L_28->get_Basin_11();
		NullCheck(L_29);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_30 = L_29->get_bottomNode_1();
		NullCheck(L_30);
		bool L_31 = AdvancingFrontNode_get_HasNext_mCE5167AFC30C68A854A9AA3D76CFF3FB463B6B6B(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_32 = ___tcx0;
		NullCheck(L_32);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_33 = L_32->get_Basin_11();
		NullCheck(L_33);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_34 = L_33->get_bottomNode_1();
		NullCheck(L_34);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_35 = L_34->get_Point_3();
		NullCheck(L_35);
		double L_36 = L_35->get_Y_2();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_37 = ___tcx0;
		NullCheck(L_37);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_38 = L_37->get_Basin_11();
		NullCheck(L_38);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_39 = L_38->get_bottomNode_1();
		NullCheck(L_39);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_40 = L_39->get_Next_0();
		NullCheck(L_40);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_41 = L_40->get_Point_3();
		NullCheck(L_41);
		double L_42 = L_41->get_Y_2();
		if ((((double)L_36) >= ((double)L_42)))
		{
			goto IL_0060;
		}
	}

IL_00be:
	{
		// if (tcx.Basin.bottomNode == tcx.Basin.leftNode) return; 
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_43 = ___tcx0;
		NullCheck(L_43);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_44 = L_43->get_Basin_11();
		NullCheck(L_44);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_45 = L_44->get_bottomNode_1();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_46 = ___tcx0;
		NullCheck(L_46);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_47 = L_46->get_Basin_11();
		NullCheck(L_47);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_48 = L_47->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_45) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_48))))
		{
			goto IL_00d7;
		}
	}
	{
		// if (tcx.Basin.bottomNode == tcx.Basin.leftNode) return; 
		return;
	}

IL_00d7:
	{
		// tcx.Basin.rightNode = tcx.Basin.bottomNode;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_49 = ___tcx0;
		NullCheck(L_49);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_50 = L_49->get_Basin_11();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_51 = ___tcx0;
		NullCheck(L_51);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_52 = L_51->get_Basin_11();
		NullCheck(L_52);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_53 = L_52->get_bottomNode_1();
		NullCheck(L_50);
		L_50->set_rightNode_2(L_53);
		goto IL_010a;
	}

IL_00ef:
	{
		// while (tcx.Basin.rightNode.HasNext && tcx.Basin.rightNode.Point.Y < tcx.Basin.rightNode.Next.Point.Y) tcx.Basin.rightNode = tcx.Basin.rightNode.Next;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_54 = ___tcx0;
		NullCheck(L_54);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_55 = L_54->get_Basin_11();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_56 = ___tcx0;
		NullCheck(L_56);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_57 = L_56->get_Basin_11();
		NullCheck(L_57);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_58 = L_57->get_rightNode_2();
		NullCheck(L_58);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_59 = L_58->get_Next_0();
		NullCheck(L_55);
		L_55->set_rightNode_2(L_59);
	}

IL_010a:
	{
		// while (tcx.Basin.rightNode.HasNext && tcx.Basin.rightNode.Point.Y < tcx.Basin.rightNode.Next.Point.Y) tcx.Basin.rightNode = tcx.Basin.rightNode.Next;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_60 = ___tcx0;
		NullCheck(L_60);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_61 = L_60->get_Basin_11();
		NullCheck(L_61);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_62 = L_61->get_rightNode_2();
		NullCheck(L_62);
		bool L_63 = AdvancingFrontNode_get_HasNext_mCE5167AFC30C68A854A9AA3D76CFF3FB463B6B6B(L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_014d;
		}
	}
	{
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_64 = ___tcx0;
		NullCheck(L_64);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_65 = L_64->get_Basin_11();
		NullCheck(L_65);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_66 = L_65->get_rightNode_2();
		NullCheck(L_66);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_67 = L_66->get_Point_3();
		NullCheck(L_67);
		double L_68 = L_67->get_Y_2();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_69 = ___tcx0;
		NullCheck(L_69);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_70 = L_69->get_Basin_11();
		NullCheck(L_70);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_71 = L_70->get_rightNode_2();
		NullCheck(L_71);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_72 = L_71->get_Next_0();
		NullCheck(L_72);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_73 = L_72->get_Point_3();
		NullCheck(L_73);
		double L_74 = L_73->get_Y_2();
		if ((((double)L_68) < ((double)L_74)))
		{
			goto IL_00ef;
		}
	}

IL_014d:
	{
		// if (tcx.Basin.rightNode == tcx.Basin.bottomNode) return; 
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_75 = ___tcx0;
		NullCheck(L_75);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_76 = L_75->get_Basin_11();
		NullCheck(L_76);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_77 = L_76->get_rightNode_2();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_78 = ___tcx0;
		NullCheck(L_78);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_79 = L_78->get_Basin_11();
		NullCheck(L_79);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_80 = L_79->get_bottomNode_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_77) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_80))))
		{
			goto IL_0166;
		}
	}
	{
		// if (tcx.Basin.rightNode == tcx.Basin.bottomNode) return; 
		return;
	}

IL_0166:
	{
		// tcx.Basin.width = tcx.Basin.rightNode.Point.X - tcx.Basin.leftNode.Point.X;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_81 = ___tcx0;
		NullCheck(L_81);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_82 = L_81->get_Basin_11();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_83 = ___tcx0;
		NullCheck(L_83);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_84 = L_83->get_Basin_11();
		NullCheck(L_84);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_85 = L_84->get_rightNode_2();
		NullCheck(L_85);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_86 = L_85->get_Point_3();
		NullCheck(L_86);
		double L_87 = L_86->get_X_1();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_88 = ___tcx0;
		NullCheck(L_88);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_89 = L_88->get_Basin_11();
		NullCheck(L_89);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_90 = L_89->get_leftNode_0();
		NullCheck(L_90);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_91 = L_90->get_Point_3();
		NullCheck(L_91);
		double L_92 = L_91->get_X_1();
		NullCheck(L_82);
		L_82->set_width_3(((double)il2cpp_codegen_subtract((double)L_87, (double)L_92)));
		// tcx.Basin.leftHighest = tcx.Basin.leftNode.Point.Y > tcx.Basin.rightNode.Point.Y;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_93 = ___tcx0;
		NullCheck(L_93);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_94 = L_93->get_Basin_11();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_95 = ___tcx0;
		NullCheck(L_95);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_96 = L_95->get_Basin_11();
		NullCheck(L_96);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_97 = L_96->get_leftNode_0();
		NullCheck(L_97);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_98 = L_97->get_Point_3();
		NullCheck(L_98);
		double L_99 = L_98->get_Y_2();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_100 = ___tcx0;
		NullCheck(L_100);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_101 = L_100->get_Basin_11();
		NullCheck(L_101);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_102 = L_101->get_rightNode_2();
		NullCheck(L_102);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_103 = L_102->get_Point_3();
		NullCheck(L_103);
		double L_104 = L_103->get_Y_2();
		NullCheck(L_94);
		L_94->set_leftHighest_4((bool)((((double)L_99) > ((double)L_104))? 1 : 0));
		// FillBasinReq(tcx, tcx.Basin.bottomNode);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_105 = ___tcx0;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_106 = ___tcx0;
		NullCheck(L_106);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_107 = L_106->get_Basin_11();
		NullCheck(L_107);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_108 = L_107->get_bottomNode_1();
		DTSweep_FillBasinReq_m56BFD87CE522F8D5F9178A8DD9AEF03BC40A9378(L_105, L_108, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_m56BFD87CE522F8D5F9178A8DD9AEF03BC40A9378 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_FillBasinReq_m56BFD87CE522F8D5F9178A8DD9AEF03BC40A9378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsShallow(tcx, node)) return; 
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = ___node1;
		bool L_2 = DTSweep_IsShallow_m531AF6A067015513D52AEEA74E2ED7E246FC5F4A(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000a;
		}
	}
	{
		// if (IsShallow(tcx, node)) return; 
		return;
	}

IL_000a:
	{
		// Fill(tcx, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_3 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = ___node1;
		DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED(L_3, L_4, /*hidden argument*/NULL);
		// if (node.Prev == tcx.Basin.leftNode && node.Next == tcx.Basin.rightNode) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_6 = L_5->get_Prev_1();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_7 = ___tcx0;
		NullCheck(L_7);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_8 = L_7->get_Basin_11();
		NullCheck(L_8);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_9 = L_8->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_6) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_9))))
		{
			goto IL_0038;
		}
	}
	{
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = ___node1;
		NullCheck(L_10);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = L_10->get_Next_0();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_12 = ___tcx0;
		NullCheck(L_12);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_13 = L_12->get_Basin_11();
		NullCheck(L_13);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = L_13->get_rightNode_2();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_11) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_14))))
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
		// } else if (node.Prev == tcx.Basin.leftNode) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_15 = ___node1;
		NullCheck(L_15);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = L_15->get_Prev_1();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_17 = ___tcx0;
		NullCheck(L_17);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_18 = L_17->get_Basin_11();
		NullCheck(L_18);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = L_18->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_16) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_19))))
		{
			goto IL_007e;
		}
	}
	{
		// Orientation o = TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = ___node1;
		NullCheck(L_20);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_21 = L_20->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = ___node1;
		NullCheck(L_22);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = L_22->get_Next_0();
		NullCheck(L_23);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = L_23->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_25 = ___node1;
		NullCheck(L_25);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = L_25->get_Next_0();
		NullCheck(L_26);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_27 = L_26->get_Next_0();
		NullCheck(L_27);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_28 = L_27->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_29 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_21, L_24, L_28, /*hidden argument*/NULL);
		// if (o == Orientation.CW) return;
		if (L_29)
		{
			goto IL_0074;
		}
	}
	{
		// if (o == Orientation.CW) return;
		return;
	}

IL_0074:
	{
		// node = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_30 = ___node1;
		NullCheck(L_30);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_31 = L_30->get_Next_0();
		___node1 = L_31;
		// } else if (node.Next == tcx.Basin.rightNode) {
		goto IL_00f9;
	}

IL_007e:
	{
		// } else if (node.Next == tcx.Basin.rightNode) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_32 = ___node1;
		NullCheck(L_32);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_33 = L_32->get_Next_0();
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_34 = ___tcx0;
		NullCheck(L_34);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_35 = L_34->get_Basin_11();
		NullCheck(L_35);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_36 = L_35->get_rightNode_2();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_33) == ((RuntimeObject*)(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)L_36))))
		{
			goto IL_00c5;
		}
	}
	{
		// Orientation o = TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_37 = ___node1;
		NullCheck(L_37);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_38 = L_37->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_39 = ___node1;
		NullCheck(L_39);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_40 = L_39->get_Prev_1();
		NullCheck(L_40);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_41 = L_40->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_42 = ___node1;
		NullCheck(L_42);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_43 = L_42->get_Prev_1();
		NullCheck(L_43);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_44 = L_43->get_Prev_1();
		NullCheck(L_44);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_45 = L_44->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		int32_t L_46 = TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7(L_38, L_41, L_45, /*hidden argument*/NULL);
		// if (o == Orientation.CCW) return;
		if ((!(((uint32_t)L_46) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// if (o == Orientation.CCW) return;
		return;
	}

IL_00bb:
	{
		// node = node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_47 = ___node1;
		NullCheck(L_47);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_48 = L_47->get_Prev_1();
		___node1 = L_48;
		// } else {
		goto IL_00f9;
	}

IL_00c5:
	{
		// if (node.Prev.Point.Y < node.Next.Point.Y) {
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_49 = ___node1;
		NullCheck(L_49);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_50 = L_49->get_Prev_1();
		NullCheck(L_50);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_51 = L_50->get_Point_3();
		NullCheck(L_51);
		double L_52 = L_51->get_Y_2();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_53 = ___node1;
		NullCheck(L_53);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_54 = L_53->get_Next_0();
		NullCheck(L_54);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_55 = L_54->get_Point_3();
		NullCheck(L_55);
		double L_56 = L_55->get_Y_2();
		if ((!(((double)L_52) < ((double)L_56))))
		{
			goto IL_00f1;
		}
	}
	{
		// node = node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_57 = ___node1;
		NullCheck(L_57);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_58 = L_57->get_Prev_1();
		___node1 = L_58;
		// } else {
		goto IL_00f9;
	}

IL_00f1:
	{
		// node = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_59 = ___node1;
		NullCheck(L_59);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_60 = L_59->get_Next_0();
		___node1 = L_60;
	}

IL_00f9:
	{
		// FillBasinReq(tcx, node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_61 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_62 = ___node1;
		DTSweep_FillBasinReq_m56BFD87CE522F8D5F9178A8DD9AEF03BC40A9378(L_61, L_62, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_m531AF6A067015513D52AEEA74E2ED7E246FC5F4A (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// if (tcx.Basin.leftHighest) {
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_1 = L_0->get_Basin_11();
		NullCheck(L_1);
		bool L_2 = L_1->get_leftHighest_4();
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// height = tcx.Basin.leftNode.Point.Y - node.Point.Y;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_3 = ___tcx0;
		NullCheck(L_3);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_4 = L_3->get_Basin_11();
		NullCheck(L_4);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = L_4->get_leftNode_0();
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = ___node1;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = L_8->get_Point_3();
		NullCheck(L_9);
		double L_10 = L_9->get_Y_2();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_7, (double)L_10));
		// } else {
		goto IL_0053;
	}

IL_0031:
	{
		// height = tcx.Basin.rightNode.Point.Y - node.Point.Y;
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_12 = L_11->get_Basin_11();
		NullCheck(L_12);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = L_12->get_rightNode_2();
		NullCheck(L_13);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_Y_2();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node1;
		NullCheck(L_16);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = L_16->get_Point_3();
		NullCheck(L_17);
		double L_18 = L_17->get_Y_2();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_15, (double)L_18));
	}

IL_0053:
	{
		// if (tcx.Basin.width > height) {
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_19 = ___tcx0;
		NullCheck(L_19);
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_20 = L_19->get_Basin_11();
		NullCheck(L_20);
		double L_21 = L_20->get_width_3();
		double L_22 = V_0;
		if ((!(((double)L_21) > ((double)L_22))))
		{
			goto IL_0063;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// return false;
		return (bool)0;
	}
}
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m9FA809DA54C5DFC4A1B36614B9E5085FB56F63E8 (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_HoleAngle_m9FA809DA54C5DFC4A1B36614B9E5085FB56F63E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// double px = node.Point.X;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___node0;
		NullCheck(L_0);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = L_0->get_Point_3();
		NullCheck(L_1);
		double L_2 = L_1->get_X_1();
		V_0 = L_2;
		// double py = node.Point.Y;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node0;
		NullCheck(L_3);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = L_3->get_Point_3();
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		V_1 = L_5;
		// double ax = node.Next.Point.X - px;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_6 = ___node0;
		NullCheck(L_6);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_7 = L_6->get_Next_0();
		NullCheck(L_7);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_8 = L_7->get_Point_3();
		NullCheck(L_8);
		double L_9 = L_8->get_X_1();
		double L_10 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_9, (double)L_10));
		// double ay = node.Next.Point.Y - py;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = ___node0;
		NullCheck(L_11);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_12 = L_11->get_Next_0();
		NullCheck(L_12);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = L_12->get_Point_3();
		NullCheck(L_13);
		double L_14 = L_13->get_Y_2();
		double L_15 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		// double bx = node.Prev.Point.X - px;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = ___node0;
		NullCheck(L_16);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = L_16->get_Prev_1();
		NullCheck(L_17);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = L_17->get_Point_3();
		NullCheck(L_18);
		double L_19 = L_18->get_X_1();
		double L_20 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_19, (double)L_20));
		// double by = node.Prev.Point.Y - py;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = ___node0;
		NullCheck(L_21);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = L_21->get_Prev_1();
		NullCheck(L_22);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_23 = L_22->get_Point_3();
		NullCheck(L_23);
		double L_24 = L_23->get_Y_2();
		double L_25 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_24, (double)L_25));
		// return Math.Atan2(ax * by - ay * bx, ax * bx + ay * by);
		double L_26 = V_2;
		double L_27 = V_5;
		double L_28 = V_3;
		double L_29 = V_4;
		double L_30 = V_2;
		double L_31 = V_4;
		double L_32 = V_3;
		double L_33 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_34 = atan2(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_26, (double)L_27)), (double)((double)il2cpp_codegen_multiply((double)L_28, (double)L_29)))), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_30, (double)L_31)), (double)((double)il2cpp_codegen_multiply((double)L_32, (double)L_33)))));
		return L_34;
	}
}
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_m10EFCC9A02B6125BB3597EEFB035B616FFAA64F3 (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_BasinAngle_m10EFCC9A02B6125BB3597EEFB035B616FFAA64F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double ax = node.Point.X - node.Next.Next.Point.X;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___node0;
		NullCheck(L_0);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = L_0->get_Point_3();
		NullCheck(L_1);
		double L_2 = L_1->get_X_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node0;
		NullCheck(L_3);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = L_4->get_Next_0();
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_1();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_2, (double)L_7));
		// double ay = node.Point.Y - node.Next.Next.Point.Y;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_8 = ___node0;
		NullCheck(L_8);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = L_8->get_Point_3();
		NullCheck(L_9);
		double L_10 = L_9->get_Y_2();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = ___node0;
		NullCheck(L_11);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_12 = L_11->get_Next_0();
		NullCheck(L_12);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = L_12->get_Next_0();
		NullCheck(L_13);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_Y_2();
		// return Math.Atan2(ay, ax);
		double L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_17 = atan2(((double)il2cpp_codegen_subtract((double)L_10, (double)L_15)), L_16);
		return L_17;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_Fill_m3AB59D6C03FF72075A3641C92AEAC5641EB188ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_0 = NULL;
	{
		// DelaunayTriangle triangle = new DelaunayTriangle(node.Prev.Point, node.Point, node.Next.Point);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___node1;
		NullCheck(L_0);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = L_0->get_Prev_1();
		NullCheck(L_1);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_3 = ___node1;
		NullCheck(L_3);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = L_3->get_Point_3();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_6 = L_5->get_Next_0();
		NullCheck(L_6);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = L_6->get_Point_3();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_8 = (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *)il2cpp_codegen_object_new(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mFBBC9E9E6CCFCDF571C82E9A24152615053068D5(L_8, L_2, L_4, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// triangle.MarkNeighbor(node.Prev.Triangle);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_9 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = ___node1;
		NullCheck(L_10);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = L_10->get_Prev_1();
		NullCheck(L_11);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_12 = L_11->get_Triangle_4();
		NullCheck(L_9);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_9, L_12, /*hidden argument*/NULL);
		// triangle.MarkNeighbor(node.Triangle);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_14 = ___node1;
		NullCheck(L_14);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_15 = L_14->get_Triangle_4();
		NullCheck(L_13);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_13, L_15, /*hidden argument*/NULL);
		// tcx.Triangles.Add(triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_16 = ___tcx0;
		NullCheck(L_16);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_17 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)L_16)->get_Triangles_1();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0(L_17, L_18, /*hidden argument*/List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0_RuntimeMethod_var);
		// node.Prev.Next = node.Next;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_19 = ___node1;
		NullCheck(L_19);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_20 = L_19->get_Prev_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_21 = ___node1;
		NullCheck(L_21);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = L_21->get_Next_0();
		NullCheck(L_20);
		L_20->set_Next_0(L_22);
		// node.Next.Prev = node.Prev;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = ___node1;
		NullCheck(L_23);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_24 = L_23->get_Next_0();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_25 = ___node1;
		NullCheck(L_25);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_26 = L_25->get_Prev_1();
		NullCheck(L_24);
		L_24->set_Prev_1(L_26);
		// tcx.RemoveNode(node);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_27 = ___tcx0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_28 = ___node1;
		NullCheck(L_27);
		DTSweepContext_RemoveNode_mB4217D8F1E0F9CA71500635A3E3DE0EF0FC7BB6D(L_27, L_28, /*hidden argument*/NULL);
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_29 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_30 = V_0;
		bool L_31 = DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_29, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0084;
		}
	}
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_32 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = V_0;
		NullCheck(L_32);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_32, L_33, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * ___tcx0, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_1 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_2 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_3 = NULL;
	int32_t V_4 = 0;
	{
		// for (int i = 0; i < 3; i++) {
		V_0 = 0;
		goto IL_00ff;
	}

IL_0007:
	{
		// if (t.EdgeIsDelaunay[i]) continue;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___t1;
		NullCheck(L_0);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_1 = L_0->get_address_of_EdgeIsDelaunay_3();
		int32_t L_2 = V_0;
		bool L_3 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_00fb;
		}
	}
	{
		// DelaunayTriangle ot = t.Neighbors[i];
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = ___t1;
		NullCheck(L_4);
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_5 = L_4->get_address_of_Neighbors_1();
		int32_t L_6 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_7 = FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_5, L_6, /*hidden argument*/FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var);
		V_1 = L_7;
		// if (ot == null) continue;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_8 = V_1;
		if (!L_8)
		{
			goto IL_00fb;
		}
	}
	{
		// TriangulationPoint p = t.Points[i];
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_9 = ___t1;
		NullCheck(L_9);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_10 = L_9->get_address_of_Points_0();
		int32_t L_11 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_10, L_11, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		V_2 = L_12;
		// TriangulationPoint op = ot.OppositePoint(t, p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = V_1;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_14 = ___t1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = V_2;
		NullCheck(L_13);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_16 = DelaunayTriangle_OppositePoint_mF44DC9F0078C3BE2EF760A170FE5B9BE75BA196C(L_13, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// int oi = ot.IndexOf(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_17 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// if (ot.EdgeIsConstrained[oi] || ot.EdgeIsDelaunay[oi]) {
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_20 = V_1;
		NullCheck(L_20);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_21 = L_20->get_address_of_EdgeIsConstrained_2();
		int32_t L_22 = V_4;
		bool L_23 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0068;
		}
	}
	{
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_24 = V_1;
		NullCheck(L_24);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_25 = L_24->get_address_of_EdgeIsDelaunay_3();
		int32_t L_26 = V_4;
		bool L_27 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0083;
		}
	}

IL_0068:
	{
		// t.EdgeIsConstrained[i] = ot.EdgeIsConstrained[oi]; 
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_28 = ___t1;
		NullCheck(L_28);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_29 = L_28->get_address_of_EdgeIsConstrained_2();
		int32_t L_30 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_31 = V_1;
		NullCheck(L_31);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_32 = L_31->get_address_of_EdgeIsConstrained_2();
		int32_t L_33 = V_4;
		bool L_34 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_32, L_33, /*hidden argument*/NULL);
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_29, L_30, L_34, /*hidden argument*/NULL);
		// continue;
		goto IL_00fb;
	}

IL_0083:
	{
		// if (!TriangulationUtil.SmartIncircle(p,t.PointCCWFrom(p),t.PointCWFrom(p),op)) continue;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_35 = V_2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_36 = ___t1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_37 = V_2;
		NullCheck(L_36);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_38 = DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE(L_36, L_37, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_39 = ___t1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_40 = V_2;
		NullCheck(L_39);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_41 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_39, L_40, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_42 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		bool L_43 = TriangulationUtil_SmartIncircle_m6F1EFF2BEF0D4EFDC62F8ABE4475E0D5D32B4BA2(L_35, L_38, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00fb;
		}
	}
	{
		// t.EdgeIsDelaunay[i] = true;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_44 = ___t1;
		NullCheck(L_44);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_45 = L_44->get_address_of_EdgeIsDelaunay_3();
		int32_t L_46 = V_0;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_45, L_46, (bool)1, /*hidden argument*/NULL);
		// ot.EdgeIsDelaunay[oi] = true;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_47 = V_1;
		NullCheck(L_47);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_48 = L_47->get_address_of_EdgeIsDelaunay_3();
		int32_t L_49 = V_4;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_48, L_49, (bool)1, /*hidden argument*/NULL);
		// RotateTrianglePair(t, p, ot, op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_50 = ___t1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_51 = V_2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_52 = V_1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_53 = V_3;
		DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298(L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
		// if (!Legalize(tcx, t)) tcx.MapTriangleToNodes(t);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_54 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_55 = ___t1;
		bool L_56 = DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_54, L_55, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_00ce;
		}
	}
	{
		// if (!Legalize(tcx, t)) tcx.MapTriangleToNodes(t);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_57 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_58 = ___t1;
		NullCheck(L_57);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_57, L_58, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// if (!Legalize(tcx, ot)) tcx.MapTriangleToNodes(ot);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_59 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_60 = V_1;
		bool L_61 = DTSweep_Legalize_mDD4E135212E29C91D3795A4826175E5F1443AE7B(L_59, L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_00de;
		}
	}
	{
		// if (!Legalize(tcx, ot)) tcx.MapTriangleToNodes(ot);
		DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * L_62 = ___tcx0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_63 = V_1;
		NullCheck(L_62);
		DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0(L_62, L_63, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// t.EdgeIsDelaunay[i] = false;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_64 = ___t1;
		NullCheck(L_64);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_65 = L_64->get_address_of_EdgeIsDelaunay_3();
		int32_t L_66 = V_0;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_65, L_66, (bool)0, /*hidden argument*/NULL);
		// ot.EdgeIsDelaunay[oi] = false;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_67 = V_1;
		NullCheck(L_67);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_68 = L_67->get_address_of_EdgeIsDelaunay_3();
		int32_t L_69 = V_4;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_68, L_69, (bool)0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// for (int i = 0; i < 3; i++) {
		int32_t L_70 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_00ff:
	{
		// for (int i = 0; i < 3; i++) {
		int32_t L_71 = V_0;
		if ((((int32_t)L_71) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p1, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___ot2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___op3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweep_RotateTrianglePair_m8FAD17C470F562DEF3F715B5C101445D9EBF9298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_0 = NULL;
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_1 = NULL;
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_2 = NULL;
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// n1 = t.NeighborCCWFrom(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p1;
		NullCheck(L_0);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_2 = DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// n2 = t.NeighborCWFrom(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_3 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = ___p1;
		NullCheck(L_3);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_5 = DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// n3 = ot.NeighborCCWFrom(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_6 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = ___op3;
		NullCheck(L_6);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_8 = DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// n4 = ot.NeighborCWFrom(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_9 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = ___op3;
		NullCheck(L_9);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_11 = DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// ce1 = t.GetConstrainedEdgeCCW(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_12 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = ___p1;
		NullCheck(L_12);
		bool L_14 = DelaunayTriangle_GetConstrainedEdgeCCW_m74B07D2D17B191D7B0DF1FF27DA14EFF24D4F147(L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// ce2 = t.GetConstrainedEdgeCW(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_15 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_16 = ___p1;
		NullCheck(L_15);
		bool L_17 = DelaunayTriangle_GetConstrainedEdgeCW_mF2FA104B63292FE48C19045E923AFC33C9CBB1A1(L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// ce3 = ot.GetConstrainedEdgeCCW(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_18 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_19 = ___op3;
		NullCheck(L_18);
		bool L_20 = DelaunayTriangle_GetConstrainedEdgeCCW_m74B07D2D17B191D7B0DF1FF27DA14EFF24D4F147(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		// ce4 = ot.GetConstrainedEdgeCW(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_21 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = ___op3;
		NullCheck(L_21);
		bool L_23 = DelaunayTriangle_GetConstrainedEdgeCW_mF2FA104B63292FE48C19045E923AFC33C9CBB1A1(L_21, L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		// de1 = t.GetDelaunayEdgeCCW(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_24 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_25 = ___p1;
		NullCheck(L_24);
		bool L_26 = DelaunayTriangle_GetDelaunayEdgeCCW_mF35D5D5F1337F022F902BEE97E0F365A00F10860(L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		// de2 = t.GetDelaunayEdgeCW(p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_27 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_28 = ___p1;
		NullCheck(L_27);
		bool L_29 = DelaunayTriangle_GetDelaunayEdgeCW_m976989BB88DC8356F4EEBCA2705E9153D41BBE59(L_27, L_28, /*hidden argument*/NULL);
		V_9 = L_29;
		// de3 = ot.GetDelaunayEdgeCCW(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_30 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_31 = ___op3;
		NullCheck(L_30);
		bool L_32 = DelaunayTriangle_GetDelaunayEdgeCCW_mF35D5D5F1337F022F902BEE97E0F365A00F10860(L_30, L_31, /*hidden argument*/NULL);
		V_10 = L_32;
		// de4 = ot.GetDelaunayEdgeCW(op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_34 = ___op3;
		NullCheck(L_33);
		bool L_35 = DelaunayTriangle_GetDelaunayEdgeCW_m976989BB88DC8356F4EEBCA2705E9153D41BBE59(L_33, L_34, /*hidden argument*/NULL);
		V_11 = L_35;
		// t.Legalize(p, op);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_36 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_37 = ___p1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_38 = ___op3;
		NullCheck(L_36);
		DelaunayTriangle_Legalize_m74AA7660F67F48CD93BA5C081518272DC78123E0(L_36, L_37, L_38, /*hidden argument*/NULL);
		// ot.Legalize(op, p);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_39 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_40 = ___op3;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_41 = ___p1;
		NullCheck(L_39);
		DelaunayTriangle_Legalize_m74AA7660F67F48CD93BA5C081518272DC78123E0(L_39, L_40, L_41, /*hidden argument*/NULL);
		// ot.SetDelaunayEdgeCCW(p, de1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_42 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_43 = ___p1;
		bool L_44 = V_8;
		NullCheck(L_42);
		DelaunayTriangle_SetDelaunayEdgeCCW_m29BF86A8ED0489AEFB6480EFE1518ABADA71213A(L_42, L_43, L_44, /*hidden argument*/NULL);
		// t.SetDelaunayEdgeCW(p, de2);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_45 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_46 = ___p1;
		bool L_47 = V_9;
		NullCheck(L_45);
		DelaunayTriangle_SetDelaunayEdgeCW_mA9E2AC6FC6E19343DEC875AAE50F8D92292A1A88(L_45, L_46, L_47, /*hidden argument*/NULL);
		// t.SetDelaunayEdgeCCW(op, de3);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_48 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_49 = ___op3;
		bool L_50 = V_10;
		NullCheck(L_48);
		DelaunayTriangle_SetDelaunayEdgeCCW_m29BF86A8ED0489AEFB6480EFE1518ABADA71213A(L_48, L_49, L_50, /*hidden argument*/NULL);
		// ot.SetDelaunayEdgeCW(op, de4);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_51 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_52 = ___op3;
		bool L_53 = V_11;
		NullCheck(L_51);
		DelaunayTriangle_SetDelaunayEdgeCW_mA9E2AC6FC6E19343DEC875AAE50F8D92292A1A88(L_51, L_52, L_53, /*hidden argument*/NULL);
		// ot.SetConstrainedEdgeCCW(p, ce1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_54 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_55 = ___p1;
		bool L_56 = V_4;
		NullCheck(L_54);
		DelaunayTriangle_SetConstrainedEdgeCCW_mD3B158A54AE96B41AFE9C75D9E53D26C412541CF(L_54, L_55, L_56, /*hidden argument*/NULL);
		// t.SetConstrainedEdgeCW(p, ce2);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_57 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_58 = ___p1;
		bool L_59 = V_5;
		NullCheck(L_57);
		DelaunayTriangle_SetConstrainedEdgeCW_mEDE8C683E174014F72BF55854BD18E43F1FC4690(L_57, L_58, L_59, /*hidden argument*/NULL);
		// t.SetConstrainedEdgeCCW(op, ce3);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_60 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_61 = ___op3;
		bool L_62 = V_6;
		NullCheck(L_60);
		DelaunayTriangle_SetConstrainedEdgeCCW_mD3B158A54AE96B41AFE9C75D9E53D26C412541CF(L_60, L_61, L_62, /*hidden argument*/NULL);
		// ot.SetConstrainedEdgeCW(op, ce4);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_63 = ___ot2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_64 = ___op3;
		bool L_65 = V_7;
		NullCheck(L_63);
		DelaunayTriangle_SetConstrainedEdgeCW_mEDE8C683E174014F72BF55854BD18E43F1FC4690(L_63, L_64, L_65, /*hidden argument*/NULL);
		// t.Neighbors.Clear();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_66 = ___t0;
		NullCheck(L_66);
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_67 = L_66->get_address_of_Neighbors_1();
		FixedArray3_1_Clear_m84E83CA44572720872962DA54C9149719A32C7A7((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_67, /*hidden argument*/FixedArray3_1_Clear_m84E83CA44572720872962DA54C9149719A32C7A7_RuntimeMethod_var);
		// ot.Neighbors.Clear();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_68 = ___ot2;
		NullCheck(L_68);
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_69 = L_68->get_address_of_Neighbors_1();
		FixedArray3_1_Clear_m84E83CA44572720872962DA54C9149719A32C7A7((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_69, /*hidden argument*/FixedArray3_1_Clear_m84E83CA44572720872962DA54C9149719A32C7A7_RuntimeMethod_var);
		// if (n1 != null) ot.MarkNeighbor(n1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_70 = V_0;
		if (!L_70)
		{
			goto IL_00e0;
		}
	}
	{
		// if (n1 != null) ot.MarkNeighbor(n1);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_71 = ___ot2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_72 = V_0;
		NullCheck(L_71);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_71, L_72, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		// if (n2 != null) t.MarkNeighbor(n2);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_73 = V_1;
		if (!L_73)
		{
			goto IL_00ea;
		}
	}
	{
		// if (n2 != null) t.MarkNeighbor(n2);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_74 = ___t0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_75 = V_1;
		NullCheck(L_74);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_74, L_75, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// if (n3 != null) t.MarkNeighbor(n3);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_76 = V_2;
		if (!L_76)
		{
			goto IL_00f4;
		}
	}
	{
		// if (n3 != null) t.MarkNeighbor(n3);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_77 = ___t0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_78 = V_2;
		NullCheck(L_77);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_77, L_78, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// if (n4 != null) ot.MarkNeighbor(n4);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_79 = V_3;
		if (!L_79)
		{
			goto IL_00fe;
		}
	}
	{
		// if (n4 != null) ot.MarkNeighbor(n4);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_80 = ___ot2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_81 = V_3;
		NullCheck(L_80);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_80, L_81, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// t.MarkNeighbor(ot);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_82 = ___t0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_83 = ___ot2;
		NullCheck(L_82);
		DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067(L_82, L_83, /*hidden argument*/NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_m362EF51EA75072CED76CFEC65788A0A27C4C7F13 (DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m5CDB699A19D761824EC476CF8F50E94B95F83D28 (DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, const RuntimeMethod* method)
{
	{
		// public DTSweepConstraint( TriangulationPoint p1, TriangulationPoint p2 ) {
		TriangulationConstraint__ctor_mDD9672F55C0D07D0A9CA68DBC59CE0D3C2CE0F97(__this, /*hidden argument*/NULL);
		// P = p1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___p10;
		((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)__this)->set_P_0(L_0);
		// Q = p2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p21;
		((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)__this)->set_Q_1(L_1);
		// if (p1.Y > p2.Y) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___p10;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = ___p21;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		if ((!(((double)L_3) > ((double)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		// Q = p1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ___p10;
		((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)__this)->set_Q_1(L_6);
		// P = p2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = ___p21;
		((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)__this)->set_P_0(L_7);
		// } else if (p1.Y == p2.Y) {
		goto IL_006c;
	}

IL_0032:
	{
		// } else if (p1.Y == p2.Y) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_8 = ___p10;
		NullCheck(L_8);
		double L_9 = L_8->get_Y_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = ___p21;
		NullCheck(L_10);
		double L_11 = L_10->get_Y_2();
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_006c;
		}
	}
	{
		// if (p1.X > p2.X) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = ___p10;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ___p21;
		NullCheck(L_14);
		double L_15 = L_14->get_X_1();
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_005e;
		}
	}
	{
		// Q = p1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_16 = ___p10;
		((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)__this)->set_Q_1(L_16);
		// P = p2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = ___p21;
		((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)__this)->set_P_0(L_17);
		// } else if (p1.X == p2.X) {
		goto IL_006c;
	}

IL_005e:
	{
		// } else if (p1.X == p2.X) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = ___p10;
		NullCheck(L_18);
		double L_19 = L_18->get_X_1();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = ___p21;
		NullCheck(L_20);
		double L_21 = L_20->get_X_1();
	}

IL_006c:
	{
		// Q.AddEdge(this);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = ((TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *)__this)->get_Q_1();
		NullCheck(L_22);
		TriangulationPoint_AddEdge_m012E25660FDE3069E1271B1163775F011BAE8603(L_22, __this, /*hidden argument*/NULL);
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
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweepContext_get_Head_mB0BF0EDC682AC7D97C4F2250BE65ACEECF8F4428 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = __this->get_U3CHeadU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mB530C73F2D5F939C4E56FCE4575A0D3F636BCE4C (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___value0;
		__this->set_U3CHeadU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweepContext_get_Tail_mC329CB371C2725059077E1844B1CC26D3A8EC690 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = __this->get_U3CTailU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m4C5FFA8C80D2F4D898A895E4752DDFE9C1B18D79 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___value0;
		__this->set_U3CTailU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext__ctor_mAAC4DFADAD551C53E1C90E2B40033EB319098F13 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext__ctor_mAAC4DFADAD551C53E1C90E2B40033EB319098F13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly float ALPHA = 0.3f;
		__this->set_ALPHA_7((0.3f));
		// public DTSweepBasin     Basin     = new DTSweepBasin();
		DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 * L_0 = (DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66 *)il2cpp_codegen_object_new(DTSweepBasin_t1ABF7322FE560858C689F7CC56FC9B6DF50B6E66_il2cpp_TypeInfo_var);
		DTSweepBasin__ctor_m362EF51EA75072CED76CFEC65788A0A27C4C7F13(L_0, /*hidden argument*/NULL);
		__this->set_Basin_11(L_0);
		// public DTSweepEdgeEvent EdgeEvent = new DTSweepEdgeEvent();
		DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * L_1 = (DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 *)il2cpp_codegen_object_new(DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2_il2cpp_TypeInfo_var);
		DTSweepEdgeEvent__ctor_mB40C30A62007E3E9FA06BDE31653EED75BEDCAA6(L_1, /*hidden argument*/NULL);
		__this->set_EdgeEvent_12(L_1);
		// private DTSweepPointComparator _comparator = new DTSweepPointComparator();
		DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * L_2 = (DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 *)il2cpp_codegen_object_new(DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9_il2cpp_TypeInfo_var);
		DTSweepPointComparator__ctor_m44CF5D543B3040E92F2CBA6EEF865D25BA907FFB(L_2, /*hidden argument*/NULL);
		__this->set__comparator_13(L_2);
		// public DTSweepContext() {
		TriangulationContext__ctor_m3A3D59F35FC48D89C87E8270952DFD0E95778936(__this, /*hidden argument*/NULL);
		// Clear();
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweepContext_get_IsDebugEnabled_m17C40C7BA5BBAC7C40F618B7FB1DDF8D245E473F (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	{
		// return base.IsDebugEnabled;
		bool L_0 = TriangulationContext_get_IsDebugEnabled_mCDD6855413BF9AD16A60E324EF139E9BD5D03C6A_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m32173CBF8B9506E9598C9B897B6B51D01BBD6EE6 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_RemoveFromList_m32173CBF8B9506E9598C9B897B6B51D01BBD6EE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangles.Remove(triangle);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_0 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Triangles_1();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_1 = ___triangle0;
		NullCheck(L_0);
		List_1_Remove_m8DADC91FE1E6B1EC9B4AAE94D838F59236E6743A(L_0, L_1, /*hidden argument*/List_1_Remove_m8DADC91FE1E6B1EC9B4AAE94D838F59236E6743A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_m88CC47A266E25B43AA5A10510367FAA0341E8176 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, const RuntimeMethod* method)
{
	{
		// MeshCleanReq(triangle);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___triangle0;
		DTSweepContext_MeshCleanReq_m49C6D0E2932A44BEA90E524928F8F479E26DECB0(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m49C6D0E2932A44BEA90E524928F8F479E26DECB0 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_MeshCleanReq_m49C6D0E2932A44BEA90E524928F8F479E26DECB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (triangle != null && !triangle.IsInterior) {
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___triangle0;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_1 = ___triangle0;
		NullCheck(L_1);
		bool L_2 = DelaunayTriangle_get_IsInterior_m3DB4D5C7827DFF63C17D6C68590C88A83EC92E95_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_004a;
		}
	}
	{
		// triangle.IsInterior = true;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_3 = ___triangle0;
		NullCheck(L_3);
		DelaunayTriangle_set_IsInterior_mFC3828D676B96D130781E36112C420A401F52F3D_inline(L_3, (bool)1, /*hidden argument*/NULL);
		// Triangulatable.AddTriangle(triangle);
		RuntimeObject* L_4 = TriangulationContext_get_Triangulatable_mF170B610538AFCBA884A7C7AD6EB2FDBBA29C7E5_inline(__this, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_5 = ___triangle0;
		NullCheck(L_4);
		InterfaceActionInvoker1< DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * >::Invoke(1 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle) */, Triangulatable_tF8775F589F4D34BBC1BCDAE884553C2ED7FFD7D5_il2cpp_TypeInfo_var, L_4, L_5);
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0022:
	{
		// if (!triangle.EdgeIsConstrained[i])
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_6 = ___triangle0;
		NullCheck(L_6);
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_7 = L_6->get_address_of_EdgeIsConstrained_2();
		int32_t L_8 = V_0;
		bool L_9 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		// MeshCleanReq(triangle.Neighbors[i]);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_10 = ___triangle0;
		NullCheck(L_10);
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_11 = L_10->get_address_of_Neighbors_1();
		int32_t L_12 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_11, L_12, /*hidden argument*/FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var);
		DTSweepContext_MeshCleanReq_m49C6D0E2932A44BEA90E524928F8F479E26DECB0(__this, L_13, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)3)))
		{
			goto IL_0022;
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_Clear_mC8577A333D0C2F508FBB833E4C829F9B164C7DA8 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_Clear_mC8577A333D0C2F508FBB833E4C829F9B164C7DA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Clear();
		TriangulationContext_Clear_m5E94C79284C9887B58548A696413300157867EFC(__this, /*hidden argument*/NULL);
		// Triangles.Clear();
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_0 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Triangles_1();
		NullCheck(L_0);
		List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62(L_0, /*hidden argument*/List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_mD8D7B0CF7FB78B76DED5531DFFE0540605B4A607 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method)
{
	{
		// Front.AddNode(node);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_0 = __this->get_Front_8();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = ___node0;
		NullCheck(L_0);
		AdvancingFront_AddNode_m2DAC1E992E9DD8502297958F0F6F3DA8D209BDC6(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_mB4217D8F1E0F9CA71500635A3E3DE0EF0FC7BB6D (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___node0, const RuntimeMethod* method)
{
	{
		// Front.RemoveNode(node);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_0 = __this->get_Front_8();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_1 = ___node0;
		NullCheck(L_0);
		AdvancingFront_RemoveNode_m9CCC0A702BA1BC0987F0C2F045407496F177AE0E(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * DTSweepContext_LocateNode_m9E03D688CBDF397C6871C5A5FBA24FE761C40BE9 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	{
		// return Front.LocateNode(point);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_0 = __this->get_Front_8();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___point0;
		NullCheck(L_0);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_2 = AdvancingFront_LocateNode_m96DEC37C37993F2AEBC6806457BCB1AEF0893618(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_m8E1E2DFB78D51CF12340835CEDF72172A29A4D67 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_CreateAdvancingFront_m8E1E2DFB78D51CF12340835CEDF72172A29A4D67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_0 = NULL;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_1 = NULL;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_2 = NULL;
	DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * V_3 = NULL;
	{
		// DelaunayTriangle iTriangle = new DelaunayTriangle(Points[0], Tail, Head);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_0 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Points_2();
		NullCheck(L_0);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = DTSweepContext_get_Tail_mC329CB371C2725059077E1844B1CC26D3A8EC690_inline(__this, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = DTSweepContext_get_Head_mB0BF0EDC682AC7D97C4F2250BE65ACEECF8F4428_inline(__this, /*hidden argument*/NULL);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *)il2cpp_codegen_object_new(DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mFBBC9E9E6CCFCDF571C82E9A24152615053068D5(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		// Triangles.Add(iTriangle);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_5 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Triangles_1();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_6 = V_3;
		NullCheck(L_5);
		List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0(L_5, L_6, /*hidden argument*/List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0_RuntimeMethod_var);
		// head = new AdvancingFrontNode(iTriangle.Points[1]);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_7 = V_3;
		NullCheck(L_7);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_8 = L_7->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_8, 1, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_10 = (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)il2cpp_codegen_object_new(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m74B63505CBB4582BA23B00D64BCC40DB386B15E1(L_10, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// head.Triangle = iTriangle;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_12 = V_3;
		NullCheck(L_11);
		L_11->set_Triangle_4(L_12);
		// middle = new AdvancingFrontNode(iTriangle.Points[0]);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_13 = V_3;
		NullCheck(L_13);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_14 = L_13->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_14, 0, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_16 = (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)il2cpp_codegen_object_new(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m74B63505CBB4582BA23B00D64BCC40DB386B15E1(L_16, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// middle.Triangle = iTriangle;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_17 = V_2;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_18 = V_3;
		NullCheck(L_17);
		L_17->set_Triangle_4(L_18);
		// tail = new AdvancingFrontNode(iTriangle.Points[2]);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_19 = V_3;
		NullCheck(L_19);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_20 = L_19->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_21 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_20, 2, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_22 = (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)il2cpp_codegen_object_new(AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m74B63505CBB4582BA23B00D64BCC40DB386B15E1(L_22, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// Front = new AdvancingFront(head, tail);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_23 = V_0;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_24 = V_1;
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_25 = (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 *)il2cpp_codegen_object_new(AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8_il2cpp_TypeInfo_var);
		AdvancingFront__ctor_mAE2567A3BDF9F26A87EA328DD0D6EC00A254F823(L_25, L_23, L_24, /*hidden argument*/NULL);
		__this->set_Front_8(L_25);
		// Front.AddNode(middle);
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_26 = __this->get_Front_8();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_27 = V_2;
		NullCheck(L_26);
		AdvancingFront_AddNode_m2DAC1E992E9DD8502297958F0F6F3DA8D209BDC6(L_26, L_27, /*hidden argument*/NULL);
		// Front.Head.Next = middle;
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_28 = __this->get_Front_8();
		NullCheck(L_28);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_29 = L_28->get_Head_0();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_30 = V_2;
		NullCheck(L_29);
		L_29->set_Next_0(L_30);
		// middle.Next = Front.Tail;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_31 = V_2;
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_32 = __this->get_Front_8();
		NullCheck(L_32);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_33 = L_32->get_Tail_1();
		NullCheck(L_31);
		L_31->set_Next_0(L_33);
		// middle.Prev = Front.Head;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_34 = V_2;
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_35 = __this->get_Front_8();
		NullCheck(L_35);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_36 = L_35->get_Head_0();
		NullCheck(L_34);
		L_34->set_Prev_1(L_36);
		// Front.Tail.Prev = middle;
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_37 = __this->get_Front_8();
		NullCheck(L_37);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_38 = L_37->get_Tail_1();
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_39 = V_2;
		NullCheck(L_38);
		L_38->set_Prev_1(L_39);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0 (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_MapTriangleToNodes_m91EB8632E627756F83DF7B1DB6D520FFA0149AA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * V_1 = NULL;
	{
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_003e;
	}

IL_0004:
	{
		// if (t.Neighbors[i] == null)
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___t0;
		NullCheck(L_0);
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_1 = L_0->get_address_of_Neighbors_1();
		int32_t L_2 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_3 = FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_1, L_2, /*hidden argument*/FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		// AdvancingFrontNode n = Front.LocatePoint(t.PointCWFrom(t.Points[i]));
		AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * L_4 = __this->get_Front_8();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_5 = ___t0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_6 = ___t0;
		NullCheck(L_6);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_7 = L_6->get_address_of_Points_0();
		int32_t L_8 = V_0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_7, L_8, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_5, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_11 = AdvancingFront_LocatePoint_m20E58E4C6D84EB573087AE94085DF3C0B5D4408F(L_4, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (n != null) n.Triangle = t;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_12 = V_1;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		// if (n != null) n.Triangle = t;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_13 = V_1;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_14 = ___t0;
		NullCheck(L_13);
		L_13->set_Triangle_4(L_14);
	}

IL_003a:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003e:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_PrepareTriangulation_m276AD1D1E4FBBAEF3FAF4E0DF147FE4C307DA09C (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_PrepareTriangulation_m276AD1D1E4FBBAEF3FAF4E0DF147FE4C307DA09C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_6 = NULL;
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_7 = NULL;
	Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C  V_8;
	memset((&V_8), 0, sizeof(V_8));
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// base.PrepareTriangulation(t);
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_PrepareTriangulation_mD4A6BAA5F582902E37DFEEA3BAF00C18EE28C5C2(__this, L_0, /*hidden argument*/NULL);
		// xmax = xmin = Points[0].X;
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_1 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Points_2();
		NullCheck(L_1);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		NullCheck(L_2);
		double L_3 = L_2->get_X_1();
		double L_4 = L_3;
		V_1 = L_4;
		V_0 = L_4;
		// ymax = ymin = Points[0].Y;
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_5 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Points_2();
		NullCheck(L_5);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		double L_8 = L_7;
		V_3 = L_8;
		V_2 = L_8;
		// foreach (TriangulationPoint p in Points) {
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_9 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Points_2();
		NullCheck(L_9);
		Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C  L_10 = List_1_GetEnumerator_m6F14B6E00C48AF3F5E85F0DEF5D19E04B98F571F(L_9, /*hidden argument*/List_1_GetEnumerator_m6F14B6E00C48AF3F5E85F0DEF5D19E04B98F571F_RuntimeMethod_var);
		V_8 = L_10;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008f;
		}

IL_003e:
		{
			// foreach (TriangulationPoint p in Points) {
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = Enumerator_get_Current_mDA655D1BD487CB7785F2CA8A3E8717E645EA2021_inline((Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C *)(&V_8), /*hidden argument*/Enumerator_get_Current_mDA655D1BD487CB7785F2CA8A3E8717E645EA2021_RuntimeMethod_var);
			V_9 = L_11;
			// if (p.X > xmax) xmax = p.X;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = V_9;
			NullCheck(L_12);
			double L_13 = L_12->get_X_1();
			double L_14 = V_0;
			if ((!(((double)L_13) > ((double)L_14))))
			{
				goto IL_0059;
			}
		}

IL_0051:
		{
			// if (p.X > xmax) xmax = p.X;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_15 = V_9;
			NullCheck(L_15);
			double L_16 = L_15->get_X_1();
			V_0 = L_16;
		}

IL_0059:
		{
			// if (p.X < xmin) xmin = p.X;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_17 = V_9;
			NullCheck(L_17);
			double L_18 = L_17->get_X_1();
			double L_19 = V_1;
			if ((!(((double)L_18) < ((double)L_19))))
			{
				goto IL_006b;
			}
		}

IL_0063:
		{
			// if (p.X < xmin) xmin = p.X;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = V_9;
			NullCheck(L_20);
			double L_21 = L_20->get_X_1();
			V_1 = L_21;
		}

IL_006b:
		{
			// if (p.Y > ymax) ymax = p.Y;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = V_9;
			NullCheck(L_22);
			double L_23 = L_22->get_Y_2();
			double L_24 = V_2;
			if ((!(((double)L_23) > ((double)L_24))))
			{
				goto IL_007d;
			}
		}

IL_0075:
		{
			// if (p.Y > ymax) ymax = p.Y;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_25 = V_9;
			NullCheck(L_25);
			double L_26 = L_25->get_Y_2();
			V_2 = L_26;
		}

IL_007d:
		{
			// if (p.Y < ymin) ymin = p.Y;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_27 = V_9;
			NullCheck(L_27);
			double L_28 = L_27->get_Y_2();
			double L_29 = V_3;
			if ((!(((double)L_28) < ((double)L_29))))
			{
				goto IL_008f;
			}
		}

IL_0087:
		{
			// if (p.Y < ymin) ymin = p.Y;
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_30 = V_9;
			NullCheck(L_30);
			double L_31 = L_30->get_Y_2();
			V_3 = L_31;
		}

IL_008f:
		{
			// foreach (TriangulationPoint p in Points) {
			bool L_32 = Enumerator_MoveNext_mFA7973F7DBA060DEB216CE7678BB0340318C1C45((Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C *)(&V_8), /*hidden argument*/Enumerator_MoveNext_mFA7973F7DBA060DEB216CE7678BB0340318C1C45_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_003e;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mABE0450BD7896734A750E7434E75473043A90F4B((Enumerator_t70F8EBF9FA096DCB486DC77C228BB3025B1D346C *)(&V_8), /*hidden argument*/Enumerator_Dispose_mABE0450BD7896734A750E7434E75473043A90F4B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(154)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
	}

IL_00a8:
	{
		// double deltaX = ALPHA * (xmax - xmin);
		float L_33 = __this->get_ALPHA_7();
		double L_34 = V_0;
		double L_35 = V_1;
		V_4 = ((double)il2cpp_codegen_multiply((double)(((double)((double)L_33))), (double)((double)il2cpp_codegen_subtract((double)L_34, (double)L_35))));
		// double deltaY = ALPHA * (ymax - ymin);
		float L_36 = __this->get_ALPHA_7();
		double L_37 = V_2;
		double L_38 = V_3;
		V_5 = ((double)il2cpp_codegen_multiply((double)(((double)((double)L_36))), (double)((double)il2cpp_codegen_subtract((double)L_37, (double)L_38))));
		// TriangulationPoint p1 = new TriangulationPoint(xmax + deltaX, ymin - deltaY, -1);
		double L_39 = V_0;
		double L_40 = V_4;
		double L_41 = V_3;
		double L_42 = V_5;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_43 = (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)il2cpp_codegen_object_new(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m7147AF71666B9301CDE139279BCB0B3FC0663069(L_43, ((double)il2cpp_codegen_add((double)L_39, (double)L_40)), ((double)il2cpp_codegen_subtract((double)L_41, (double)L_42)), (-1), /*hidden argument*/NULL);
		V_6 = L_43;
		// TriangulationPoint p2 = new TriangulationPoint(xmin - deltaX, ymin - deltaY, -1);
		double L_44 = V_1;
		double L_45 = V_4;
		double L_46 = V_3;
		double L_47 = V_5;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_48 = (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)il2cpp_codegen_object_new(TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m7147AF71666B9301CDE139279BCB0B3FC0663069(L_48, ((double)il2cpp_codegen_subtract((double)L_44, (double)L_45)), ((double)il2cpp_codegen_subtract((double)L_46, (double)L_47)), (-1), /*hidden argument*/NULL);
		V_7 = L_48;
		// Head = p1;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_49 = V_6;
		DTSweepContext_set_Head_mB530C73F2D5F939C4E56FCE4575A0D3F636BCE4C_inline(__this, L_49, /*hidden argument*/NULL);
		// Tail = p2;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_50 = V_7;
		DTSweepContext_set_Tail_m4C5FFA8C80D2F4D898A895E4752DDFE9C1B18D79_inline(__this, L_50, /*hidden argument*/NULL);
		// Points.Sort(_comparator);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_51 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Points_2();
		DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * L_52 = __this->get__comparator_13();
		NullCheck(L_51);
		List_1_Sort_m9813CB128EDD4C8F8492549D1BA4E083B3527480(L_51, L_52, /*hidden argument*/List_1_Sort_m9813CB128EDD4C8F8492549D1BA4E083B3527480_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mB72F54E49BAB7BFB3DB20F9B6F601C699F7C54AB (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_FinalizeTriangulation_mB72F54E49BAB7BFB3DB20F9B6F601C699F7C54AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulatable.AddTriangles(Triangles);
		RuntimeObject* L_0 = TriangulationContext_get_Triangulatable_mF170B610538AFCBA884A7C7AD6EB2FDBBA29C7E5_inline(__this, /*hidden argument*/NULL);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_1 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Triangles_1();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>) */, Triangulatable_tF8775F589F4D34BBC1BCDAE884553C2ED7FFD7D5_il2cpp_TypeInfo_var, L_0, L_1);
		// Triangles.Clear();
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_2 = ((TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A *)__this)->get_Triangles_1();
		NullCheck(L_2);
		List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62(L_2, /*hidden argument*/List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 * DTSweepContext_NewConstraint_mEDE58C6509A659A99CD377614E008CAFC2B3749D (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___a0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepContext_NewConstraint_mEDE58C6509A659A99CD377614E008CAFC2B3749D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DTSweepConstraint(a, b);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___a0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___b1;
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_2 = (DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC *)il2cpp_codegen_object_new(DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC_il2cpp_TypeInfo_var);
		DTSweepConstraint__ctor_m5CDB699A19D761824EC476CF8F50E94B95F83D28(L_2, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99 (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___value0;
		__this->set__primaryTriangle_1(L_0);
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_1 = ((TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0(L_1, _stringLiteral55CA8173E83F776306409B1B0D4550B22DAB54E1, /*hidden argument*/NULL);
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_m3574DE99A897AB99A533D776F46D8026C61E9295 (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepDebugContext_set_SecondaryTriangle_m3574DE99A897AB99A533D776F46D8026C61E9295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___value0;
		__this->set__secondaryTriangle_2(L_0);
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_1 = ((TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0(L_1, _stringLiteral4C944ED59FB7B35811B15294F39E7EB7EF1CA737, /*hidden argument*/NULL);
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_m1F2A670990D0582DF9CC2E93C180570B17EB152B (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepDebugContext_set_ActivePoint_m1F2A670990D0582DF9CC2E93C180570B17EB152B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___value0;
		__this->set__activePoint_3(L_0);
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_1 = ((TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0(L_1, _stringLiteralD20A0F77DDD400F8F60D1A62659E79FB37FFBC5D, /*hidden argument*/NULL);
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = ___value0;
		__this->set__activeNode_4(L_0);
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_1 = ((TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0(L_1, _stringLiteral96EC874110F5674A57DEAEF286694579880D9F61, /*hidden argument*/NULL);
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m418CFFB54544323CFCDDF05A1EA185B61C1683BC (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DTSweepDebugContext_set_ActiveConstraint_m418CFFB54544323CFCDDF05A1EA185B61C1683BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_0 = ___value0;
		__this->set__activeConstraint_5(L_0);
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_1 = ((TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0(L_1, _stringLiteralF5611CA4C60AE11A4DAC3B1722205A0FC0D9C9D9, /*hidden argument*/NULL);
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_Clear_m1B51B3C906B96908D8C4F179302300CE80697D27 (DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * __this, const RuntimeMethod* method)
{
	{
		// PrimaryTriangle   = null;
		DTSweepDebugContext_set_PrimaryTriangle_mD879F5E42404ED34B37C15C2974504DBA0A0FE99(__this, (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *)NULL, /*hidden argument*/NULL);
		// SecondaryTriangle = null;
		DTSweepDebugContext_set_SecondaryTriangle_m3574DE99A897AB99A533D776F46D8026C61E9295(__this, (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA *)NULL, /*hidden argument*/NULL);
		// ActivePoint       = null;
		DTSweepDebugContext_set_ActivePoint_m1F2A670990D0582DF9CC2E93C180570B17EB152B(__this, (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *)NULL, /*hidden argument*/NULL);
		// ActiveNode        = null;
		DTSweepDebugContext_set_ActiveNode_mCFFDC94D4890FF3B31707DA1A87935AA11EF062F(__this, (AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE *)NULL, /*hidden argument*/NULL);
		// ActiveConstraint  = null;
		DTSweepDebugContext_set_ActiveConstraint_m418CFFB54544323CFCDDF05A1EA185B61C1683BC(__this, (DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC *)NULL, /*hidden argument*/NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_mB40C30A62007E3E9FA06BDE31653EED75BEDCAA6 (DTSweepEdgeEvent_t83C93ADFCC82F6D6A954440ED915067675F6A4D2 * __this, const RuntimeMethod* method)
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
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::Compare(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DTSweepPointComparator_Compare_m1D74FB0E9CD3381C529D5FF7362D8D551592CC88 (DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, const RuntimeMethod* method)
{
	{
		// if (p1.Y < p2.Y) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___p10;
		NullCheck(L_0);
		double L_1 = L_0->get_Y_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___p21;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		if ((!(((double)L_1) < ((double)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// } else if (p1.Y > p2.Y) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = ___p10;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ___p21;
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		if ((!(((double)L_5) > ((double)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0020:
	{
		// if (p1.X < p2.X) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_8 = ___p10;
		NullCheck(L_8);
		double L_9 = L_8->get_X_1();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = ___p21;
		NullCheck(L_10);
		double L_11 = L_10->get_X_1();
		if ((!(((double)L_9) < ((double)L_11))))
		{
			goto IL_0030;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// } else if (p1.X > p2.X) {
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = ___p10;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ___p21;
		NullCheck(L_14);
		double L_15 = L_14->get_X_1();
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_0040;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0040:
	{
		// return 0;
		return 0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_m44CF5D543B3040E92F2CBA6EEF865D25BA907FFB (DTSweepPointComparator_t1CC3FF453CF91DEE9819342FF527DDD0E1005EF9 * __this, const RuntimeMethod* method)
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
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m3DB4D5C7827DFF63C17D6C68590C88A83EC92E95 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = __this->get_U3CIsInteriorU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_mFC3828D676B96D130781E36112C420A401F52F3D (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsInteriorU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_mFBBC9E9E6CCFCDF571C82E9A24152615053068D5 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p32, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle__ctor_mFBBC9E9E6CCFCDF571C82E9A24152615053068D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle(TriangulationPoint p1, TriangulationPoint p2, TriangulationPoint p3) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// Points[0] = p1;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p10;
		FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, 0, L_1, /*hidden argument*/FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var);
		// Points[1] = p2;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_2 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = ___p21;
		FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_2, 1, L_3, /*hidden argument*/FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var);
		// Points[2] = p3;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_4 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_5 = ___p32;
		FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_4, 2, L_5, /*hidden argument*/FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// int i = Points.IndexOf(p);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, L_1, /*hidden argument*/FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310_RuntimeMethod_var);
		// if (i==-1) throw new Exception("Calling index with a point that doesn't exist in triangle");
		int32_t L_3 = L_2;
		G_B1_0 = L_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = L_3;
			goto IL_001b;
		}
	}
	{
		// if (i==-1) throw new Exception("Calling index with a point that doesn't exist in triangle");
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_4, _stringLiteralD41CE9D92FC14809009CE1633171C1438F0A9211, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9_RuntimeMethod_var);
	}

IL_001b:
	{
		// return i;
		return G_B2_0;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_m3ECE1A590C0A1D6B947DD2165060A1B3E431B4E7 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method)
{
	{
		// public int IndexCCWFrom(TriangulationPoint p) { return (IndexOf(p)+1)%3; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___p0;
		int32_t L_1 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))%(int32_t)3));
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Contains(TriangulationPoint p) { return Points.Contains(p); }
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		bool L_2 = FixedArray3_1_Contains_m989F76062991CF4E316D89FC5184BB1D33470B42((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, L_1, /*hidden argument*/FixedArray3_1_Contains_m989F76062991CF4E316D89FC5184BB1D33470B42_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int i = EdgeIndex(p1,p2);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___p10;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p21;
		int32_t L_2 = DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if ( i==-1 ) throw new Exception( "Error marking neighbors -- t doesn't contain edge p1-p2!" );
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0018;
		}
	}
	{
		// if ( i==-1 ) throw new Exception( "Error marking neighbors -- t doesn't contain edge p1-p2!" );
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_4, _stringLiteralF61C965BA01AE4E9DBE21527FEB268879D862A44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70_RuntimeMethod_var);
	}

IL_0018:
	{
		// Neighbors[i] = t;
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_5 = __this->get_address_of_Neighbors_1();
		int32_t L_6 = V_0;
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_7 = ___t2;
		FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_5, L_6, L_7, /*hidden argument*/FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool a = t.Contains(Points[0]);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___t0;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_1, 0, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_3 = DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// bool b = t.Contains(Points[1]);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = ___t0;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_5 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_5, 1, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7 = DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592(L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// bool c = t.Contains(Points[2]);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_8 = ___t0;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_9 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_9, 2, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_11 = DelaunayTriangle_Contains_m96E1DAA850E533A4875D11A9D0E439BA00F73592(L_8, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		bool L_12 = V_1;
		bool L_13 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)L_13)))
		{
			goto IL_006b;
		}
	}
	{
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_14 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_15 = ___t0;
		FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_14, 0, L_15, /*hidden argument*/FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869_RuntimeMethod_var);
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_16 = ___t0;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_17 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_17, 1, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_19 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_20 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_19, 2, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_16);
		DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70(L_16, L_18, L_20, __this, /*hidden argument*/NULL);
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		return;
	}

IL_006b:
	{
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		bool L_21 = V_0;
		bool L_22 = V_2;
		if (!((int32_t)((int32_t)L_21&(int32_t)L_22)))
		{
			goto IL_009d;
		}
	}
	{
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_23 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_24 = ___t0;
		FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_23, 1, L_24, /*hidden argument*/FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869_RuntimeMethod_var);
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_25 = ___t0;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_26 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_27 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_26, 0, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_28 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_29 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_28, 2, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_25);
		DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70(L_25, L_27, L_29, __this, /*hidden argument*/NULL);
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		return;
	}

IL_009d:
	{
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		bool L_30 = V_0;
		bool L_31 = V_1;
		if (!((int32_t)((int32_t)L_30&(int32_t)L_31)))
		{
			goto IL_00cf;
		}
	}
	{
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_32 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_33 = ___t0;
		FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_32, 2, L_33, /*hidden argument*/FixedArray3_1_set_Item_m7258359C488088C2D93405A27058034D2A108869_RuntimeMethod_var);
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_34 = ___t0;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_35 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_36 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_35, 0, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_37 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_38 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_37, 1, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_34);
		DelaunayTriangle_MarkNeighbor_mC230986F0B1A3FA8B3B7F515CEAEF4F20A056C70(L_34, L_36, L_38, __this, /*hidden argument*/NULL);
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		return;
	}

IL_00cf:
	{
		// else throw new Exception( "Failed to mark neighbor, doesn't share an edge!");
		Exception_t * L_39 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_39, _stringLiteralB413A83B8F8509B21B9D4D5A32AC41B8569496CA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, DelaunayTriangle_MarkNeighbor_m7F3AA14C4E457C3A16BA84BE82E359E824CF1067_RuntimeMethod_var);
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DelaunayTriangle_OppositePoint_mF44DC9F0078C3BE2EF760A170FE5B9BE75BA196C (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p1, const RuntimeMethod* method)
{
	{
		// return PointCWFrom(t.PointCWFrom(p));
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_0 = ___t0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p1;
		NullCheck(L_0);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(L_0, L_1, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_NeighborCWFrom_m2A77774C32E1B6BA4DCCF9FE548F30605288D65B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborCWFrom    (TriangulationPoint point) { return Neighbors[(Points.IndexOf(point)+1)%3]; }
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___point0;
		int32_t L_3 = FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310_RuntimeMethod_var);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_NeighborCCWFrom_m0D0D684F99D86F446C9F48D77487E3E9444B736E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborCCWFrom   (TriangulationPoint point) { return Neighbors[(Points.IndexOf(point)+2)%3]; }
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___point0;
		int32_t L_3 = FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310_RuntimeMethod_var);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_NeighborAcrossFrom_m77FD5119C5DE95E410C92038F2F7AD4F51C067EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborAcrossFrom(TriangulationPoint point) { return Neighbors[ Points.IndexOf(point)     ]; }
		FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___point0;
		int32_t L_3 = FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310_RuntimeMethod_var);
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_4 = FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5((FixedArray3_1_t84152D42529A72DA99D7733650B294DD01C82F12 *)L_0, L_3, /*hidden argument*/FixedArray3_1_get_Item_m14C25C29F48C4E7B829B4D8F1D9D69A28A0645B5_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_PointCCWFrom_m84E4DD4BF56B064F805F4DB8D7801748025E1CBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint PointCCWFrom(TriangulationPoint point) { return Points[(IndexOf(point)+1)%3]; }
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___point0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_PointCWFrom_m3DF8E24691FB8D5E675A1318A7396A8746427673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint PointCWFrom (TriangulationPoint point) { return Points[(IndexOf(point)+2)%3]; }
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___point0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m89343D647B63AE562CDD2593F752982EC7F28FCB (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_RotateCW_m89343D647B63AE562CDD2593F752982EC7F28FCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * V_0 = NULL;
	{
		// var t = Points[2];
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, 2, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		V_0 = L_1;
		// Points[2] = Points[1];
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_2 = __this->get_address_of_Points_0();
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_3 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_3, 1, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_2, 2, L_4, /*hidden argument*/FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var);
		// Points[1] = Points[0];
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_5 = __this->get_address_of_Points_0();
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_6 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_6, 0, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_5, 1, L_7, /*hidden argument*/FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var);
		// Points[0] = t;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_8 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_9 = V_0;
		FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_8, 0, L_9, /*hidden argument*/FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_m74AA7660F67F48CD93BA5C081518272DC78123E0 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___oPoint0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___nPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_Legalize_m74AA7660F67F48CD93BA5C081518272DC78123E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateCW();
		DelaunayTriangle_RotateCW_m89343D647B63AE562CDD2593F752982EC7F28FCB(__this, /*hidden argument*/NULL);
		// Points[IndexCCWFrom(oPoint)] = nPoint;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___oPoint0;
		int32_t L_2 = DelaunayTriangle_IndexCCWFrom_m3ECE1A590C0A1D6B947DD2165060A1B3E431B4E7(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = ___nPoint1;
		FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, L_2, L_3, /*hidden argument*/FixedArray3_1_set_Item_m6533220564D6647B66F2E5907C5BD248AD135A67_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelaunayTriangle_ToString_m8118E7BA7404DB70DE38CD53C94E7FE6EA88CC4A (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_ToString_m8118E7BA7404DB70DE38CD53C94E7FE6EA88CC4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() { return Points[0] + "," + Points[1] + "," + Points[2]; }
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_2 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_2, 0, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_6 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_6, 1, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_10 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_10, 2, /*hidden argument*/FixedArray3_1_get_Item_mC3ED54F07CBB0B9BE723B719EC7FC4E4B3848728_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_9, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m877C203B9027322C1964B6175F79A99AEA0E78E2 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// EdgeIsConstrained[index] = true;
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		int32_t L_1 = ___index0;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m1C797822F982588021F1E7A2FAE4B6BC096B83A3 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___q1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int i = EdgeIndex(p,q);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___p0;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___q1;
		int32_t L_2 = DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if ( i != -1 ) EdgeIsConstrained[i] = true;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}
	{
		// if ( i != -1 ) EdgeIsConstrained[i] = true;
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_4 = __this->get_address_of_EdgeIsConstrained_2();
		int32_t L_5 = V_0;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_4, L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p10, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelaunayTriangle_EdgeIndex_m0AE6343187AA3C25313F6C87DD5502BF58C1FE82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B9_0 = 0;
	{
		// int i1 = Points.IndexOf(p1);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p10;
		int32_t L_2 = FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_0, L_1, /*hidden argument*/FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310_RuntimeMethod_var);
		// int i2 = Points.IndexOf(p2);
		FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 * L_3 = __this->get_address_of_Points_0();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = ___p21;
		int32_t L_5 = FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310((FixedArray3_1_tD197A91D7BA897D52C972E56697E8E70FEAE4125 *)L_3, L_4, /*hidden argument*/FixedArray3_1_IndexOf_m18348557B2C87D2CF63F23A4F1F61AF5A2A5C310_RuntimeMethod_var);
		V_0 = L_5;
		// bool a = (i1==0 || i2==0);
		int32_t L_6 = L_2;
		G_B1_0 = L_6;
		if (!L_6)
		{
			G_B2_0 = L_6;
			goto IL_0022;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		V_1 = (bool)G_B3_0;
		// bool b = (i1==1 || i2==1);
		int32_t L_8 = G_B3_1;
		G_B4_0 = L_8;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			G_B5_0 = L_8;
			goto IL_002e;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		V_2 = (bool)G_B6_0;
		// bool c = (i1==2 || i2==2);
		if ((((int32_t)G_B6_1) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_10 = V_0;
		G_B9_0 = ((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B9_0 = 1;
	}

IL_003a:
	{
		V_3 = (bool)G_B9_0;
		// if (b&&c) return 0;
		bool L_11 = V_2;
		bool L_12 = V_3;
		if (!((int32_t)((int32_t)L_11&(int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		// if (b&&c) return 0;
		return 0;
	}

IL_0042:
	{
		// if (a&&c) return 1;
		bool L_13 = V_1;
		bool L_14 = V_3;
		if (!((int32_t)((int32_t)L_13&(int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		// if (a&&c) return 1;
		return 1;
	}

IL_0049:
	{
		// if (a&&b) return 2;
		bool L_15 = V_1;
		bool L_16 = V_2;
		if (!((int32_t)((int32_t)L_15&(int32_t)L_16)))
		{
			goto IL_0050;
		}
	}
	{
		// if (a&&b) return 2;
		return 2;
	}

IL_0050:
	{
		// return -1;
		return (-1);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_m74B07D2D17B191D7B0DF1FF27DA14EFF24D4F147 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetConstrainedEdgeCCW   ( TriangulationPoint p ) { return EdgeIsConstrained[(IndexOf(p)+2)%3]; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_mF2FA104B63292FE48C19045E923AFC33C9CBB1A1 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetConstrainedEdgeCW    ( TriangulationPoint p ) { return EdgeIsConstrained[(IndexOf(p)+1)%3]; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_mD3B158A54AE96B41AFE9C75D9E53D26C412541CF (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetConstrainedEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+2)%3] = ce; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetConstrainedEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+2)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_mEDE8C683E174014F72BF55854BD18E43F1FC4690 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetConstrainedEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+1)%3] = ce; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetConstrainedEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+1)%3] = ce; }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_mF35D5D5F1337F022F902BEE97E0F365A00F10860 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetDelaunayEdgeCCW   ( TriangulationPoint p ) { return EdgeIsDelaunay[(IndexOf(p)+2)%3]; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m976989BB88DC8356F4EEBCA2705E9153D41BBE59 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetDelaunayEdgeCW    ( TriangulationPoint p ) { return EdgeIsDelaunay[(IndexOf(p)+1)%3]; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_m29BF86A8ED0489AEFB6480EFE1518ABADA71213A (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetDelaunayEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+2)%3] = ce; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetDelaunayEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+2)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_mA9E2AC6FC6E19343DEC875AAE50F8D92292A1A88 (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetDelaunayEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+1)%3] = ce; }
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___p0;
		int32_t L_2 = DelaunayTriangle_IndexOf_mE9809CCC0DE22B0D0912532004762BC1B4AA39E9(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetDelaunayEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+1)%3] = ce; }
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
// Conversion methods for marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshal_pinvoke(const FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B& unmarshaled, FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_pinvoke& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.get__0_0());
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.get__1_1());
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.get__2_2());
}
IL2CPP_EXTERN_C void FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshal_pinvoke_back(const FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_pinvoke& marshaled, FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B& unmarshaled)
{
	bool unmarshaled__0_temp_0 = false;
	unmarshaled__0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.set__0_0(unmarshaled__0_temp_0);
	bool unmarshaled__1_temp_1 = false;
	unmarshaled__1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.set__1_1(unmarshaled__1_temp_1);
	bool unmarshaled__2_temp_2 = false;
	unmarshaled__2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.set__2_2(unmarshaled__2_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshal_pinvoke_cleanup(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshal_com(const FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B& unmarshaled, FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_com& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.get__0_0());
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.get__1_1());
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.get__2_2());
}
IL2CPP_EXTERN_C void FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshal_com_back(const FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_com& marshaled, FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B& unmarshaled)
{
	bool unmarshaled__0_temp_0 = false;
	unmarshaled__0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.set__0_0(unmarshaled__0_temp_0);
	bool unmarshaled__1_temp_1 = false;
	unmarshaled__1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.set__1_1(unmarshaled__1_temp_1);
	bool unmarshaled__2_temp_2 = false;
	unmarshaled__2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.set__2_2(unmarshaled__2_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshal_com_cleanup(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch ( index ) {
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0029;
	}

IL_0014:
	{
		// case 0: return _0;
		bool L_1 = __this->get__0_0();
		return L_1;
	}

IL_001b:
	{
		// case 1: return _1;
		bool L_2 = __this->get__1_1();
		return L_2;
	}

IL_0022:
	{
		// case 2: return _2;
		bool L_3 = __this->get__2_2();
		return L_3;
	}

IL_0029:
	{
		// default: throw new IndexOutOfRangeException();
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_4 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  bool FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * _thisAdjusted = reinterpret_cast<FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *>(__this + _offset);
	return FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90 (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch ( index ) {
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		// case 0: _0 = value; break;
		bool L_1 = ___value1;
		__this->set__0_0(L_1);
		// case 0: _0 = value; break;
		return;
	}

IL_001c:
	{
		// case 1: _1 = value; break;
		bool L_2 = ___value1;
		__this->set__1_1(L_2);
		// case 1: _1 = value; break;
		return;
	}

IL_0024:
	{
		// case 2: _2 = value; break;
		bool L_3 = ___value1;
		__this->set__2_2(L_3);
		// case 2: _2 = value; break;
		return;
	}

IL_002c:
	{
		// default: throw new IndexOutOfRangeException();
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_4 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * _thisAdjusted = reinterpret_cast<FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *>(__this + _offset);
	FixedBitArray3_set_Item_mC235E95C563DD14FA5216B59CE1EEC0B7D5F7C90(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_m7BA5F500516DD2D9FF20855DAC52E1C285F510ED (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// _0=_1=_2=false;
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->set__2_2((bool)L_0);
		bool L_1 = V_0;
		bool L_2 = L_1;
		V_0 = L_2;
		__this->set__1_1(L_2);
		bool L_3 = V_0;
		__this->set__0_0(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_Clear_m7BA5F500516DD2D9FF20855DAC52E1C285F510ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * _thisAdjusted = reinterpret_cast<FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *>(__this + _offset);
	FixedBitArray3_Clear_m7BA5F500516DD2D9FF20855DAC52E1C285F510ED(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerable`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_m8B13F021334E6D1CA067C0513B3C6B010167A4FA (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedBitArray3_Enumerate_m8B13F021334E6D1CA067C0513B3C6B010167A4FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * L_0 = (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB *)il2cpp_codegen_object_new(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ed__10__ctor_mDD85E046B4F21D06D9AA5C18B765BA5AB4B4E6D2(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * L_1 = L_0;
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  L_2 = (*(FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)__this);
		NullCheck(L_1);
		L_1->set_U3CU3E3__U3CU3E4__this_4(L_2);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_Enumerate_m8B13F021334E6D1CA067C0513B3C6B010167A4FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * _thisAdjusted = reinterpret_cast<FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *>(__this + _offset);
	return FixedBitArray3_Enumerate_m8B13F021334E6D1CA067C0513B3C6B010167A4FA(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_m63A8B70E76AAA02DEA1CF7A57C16AB85361F6662 (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FixedBitArray3_GetEnumerator_m63A8B70E76AAA02DEA1CF7A57C16AB85361F6662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<bool> GetEnumerator() { return Enumerate().GetEnumerator(); }
		RuntimeObject* L_0 = FixedBitArray3_Enumerate_m8B13F021334E6D1CA067C0513B3C6B010167A4FA((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_tC6EB38083371E9C00CC441AE4ADB4A3100BEB721_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_GetEnumerator_m63A8B70E76AAA02DEA1CF7A57C16AB85361F6662_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * _thisAdjusted = reinterpret_cast<FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *>(__this + _offset);
	return FixedBitArray3_GetEnumerator_m63A8B70E76AAA02DEA1CF7A57C16AB85361F6662(_thisAdjusted, method);
}
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m4F112BD72DFB8E003A5B9E86F9274AC65F30B5E4 (FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * __this, const RuntimeMethod* method)
{
	{
		// IEnumerator IEnumerable.GetEnumerator() { return GetEnumerator(); }
		RuntimeObject* L_0 = FixedBitArray3_GetEnumerator_m63A8B70E76AAA02DEA1CF7A57C16AB85361F6662((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m4F112BD72DFB8E003A5B9E86F9274AC65F30B5E4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * _thisAdjusted = reinterpret_cast<FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *>(__this + _offset);
	return FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m4F112BD72DFB8E003A5B9E86F9274AC65F30B5E4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10__ctor_mDD85E046B4F21D06D9AA5C18B765BA5AB4B4E6D2 (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10_System_IDisposable_Dispose_m4C74A65965B54484611EC34653668423B60DBD04 (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__10_MoveNext_mC435B7C987C7949A46F7DA562BEFB5227A0E8AFC (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
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
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		__this->set_U3CiU3E5__2_5(0);
		goto IL_0057;
	}

IL_0020:
	{
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B * L_3 = __this->get_address_of_U3CU3E4__this_3();
		int32_t L_4 = __this->get_U3CiU3E5__2_5();
		bool L_5 = FixedBitArray3_get_Item_m744A8102D04F2E078785CDEC5EE80D6206A8D61A((FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B *)L_3, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		int32_t L_6 = __this->get_U3CiU3E5__2_5();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_1;
		__this->set_U3CiU3E5__2_5(L_7);
	}

IL_0057:
	{
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		int32_t L_8 = __this->get_U3CiU3E5__2_5();
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::System.Collections.Generic.IEnumerator<System.Boolean>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_BooleanU3E_get_Current_mF41F984DD1C0401E6FF418905F34F449E846FF0E (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_mF7E53F235FF9681103F337D328F8B2D5FE9921BF (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_mF7E53F235FF9681103F337D328F8B2D5FE9921BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_mF7E53F235FF9681103F337D328F8B2D5FE9921BF_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateU3Ed__10_System_Collections_IEnumerator_get_Current_m2F66114EF1AB433F739346FEBD0622751953D525 (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateU3Ed__10_System_Collections_IEnumerator_get_Current_m2F66114EF1AB433F739346FEBD0622751953D525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_U3CU3E2__current_1();
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m37C17EB66EF15E9E21B59372491B3985106DFB65 (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m37C17EB66EF15E9E21B59372491B3985106DFB65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * L_3 = (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB *)il2cpp_codegen_object_new(U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ed__10__ctor_mDD85E046B4F21D06D9AA5C18B765BA5AB4B4E6D2(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * L_4 = V_0;
		FixedBitArray3_t1CFA08A0FC7ADB648A6E34BC9DDF891EA394393B  L_5 = __this->get_U3CU3E3__U3CU3E4__this_4();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
		U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3_<Enumerate>d__10::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_IEnumerable_GetEnumerator_m81A1F7BBC812227673868176916602FFF7893422 (U3CEnumerateU3Ed__10_tFD04F57E6347E81D5734AAD7B9E881DE1066E8CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_m37C17EB66EF15E9E21B59372491B3985106DFB65(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::.ctor(System.String,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_m1548AEC8F2DBCF463AC8C016FBA632464A1D9048 (PointOnEdgeException_tFA61B17A00AD556F823127E28A8C173B691A377D * __this, String_t* ___message0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___a1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___b2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___c3, const RuntimeMethod* method)
{
	{
		// : base(message)
		String_t* L_0 = ___message0;
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(__this, L_0, /*hidden argument*/NULL);
		// A=a;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_1 = ___a1;
		__this->set_A_17(L_1);
		// B=b;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___b2;
		__this->set_B_18(L_2);
		// C=c;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_3 = ___c3;
		__this->set_C_19(L_3);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m270D6CEC54E1B91FA19C2C4D039636E475EF2105 (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, RuntimeObject* ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Polygon__ctor_m270D6CEC54E1B91FA19C2C4D039636E475EF2105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<TriangulationPoint> _points = new List<TriangulationPoint>();
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_0 = (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *)il2cpp_codegen_object_new(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7_il2cpp_TypeInfo_var);
		List_1__ctor_m8C37730941C3E22EAF2BF642AE05D477A1BF821C(L_0, /*hidden argument*/List_1__ctor_m8C37730941C3E22EAF2BF642AE05D477A1BF821C_RuntimeMethod_var);
		__this->set__points_0(L_0);
		// public Polygon( IList<PolygonPoint> points ) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (points.Count < 3) throw new ArgumentException("List has fewer than 3 points", "points");
		RuntimeObject* L_1 = ___points0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_t92843E4EA2556341F10194C266099018B17E94A7_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		// if (points.Count < 3) throw new ArgumentException("List has fewer than 3 points", "points");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_3, _stringLiteralC0C735C8692D6230EDF64759042851401DD2747C, _stringLiteral819F41F058379EB51168FF0AD732BE993FA49610, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Polygon__ctor_m270D6CEC54E1B91FA19C2C4D039636E475EF2105_RuntimeMethod_var);
	}

IL_002a:
	{
		// if (points[0].Equals(points[points.Count - 1])) points.RemoveAt(points.Count - 1);
		RuntimeObject* L_4 = ___points0;
		NullCheck(L_4);
		PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * L_5 = InterfaceFuncInvoker1< PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_t60526566CB3820B1EC1744939DEC75933FBE8429_il2cpp_TypeInfo_var, L_4, 0);
		RuntimeObject* L_6 = ___points0;
		RuntimeObject* L_7 = ___points0;
		NullCheck(L_7);
		int32_t L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_t92843E4EA2556341F10194C266099018B17E94A7_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * L_9 = InterfaceFuncInvoker1< PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_t60526566CB3820B1EC1744939DEC75933FBE8429_il2cpp_TypeInfo_var, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		NullCheck(L_5);
		bool L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_9);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// if (points[0].Equals(points[points.Count - 1])) points.RemoveAt(points.Count - 1);
		RuntimeObject* L_11 = ___points0;
		RuntimeObject* L_12 = ___points0;
		NullCheck(L_12);
		int32_t L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_t92843E4EA2556341F10194C266099018B17E94A7_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_11);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::RemoveAt(System.Int32) */, IList_1_t60526566CB3820B1EC1744939DEC75933FBE8429_il2cpp_TypeInfo_var, L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
	}

IL_0054:
	{
		// _points.AddRange(points.Cast<TriangulationPoint>());
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_14 = __this->get__points_0();
		RuntimeObject* L_15 = ___points0;
		RuntimeObject* L_16 = Enumerable_Cast_TisTriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D_mEACC936F27FE9F1B054147C71C3936E465AB4681(L_15, /*hidden argument*/Enumerable_Cast_TisTriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D_mEACC936F27FE9F1B054147C71C3936E465AB4681_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E(L_14, L_16, /*hidden argument*/List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_mAC6E1D7FBBA4DF180D23212F0127A54766E5BB18 (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, RuntimeObject* ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Polygon__ctor_mAC6E1D7FBBA4DF180D23212F0127A54766E5BB18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * G_B1_1 = NULL;
	{
		// public Polygon( IEnumerable<PolygonPoint> points ): this( (points as IList<PolygonPoint>) ?? points.ToArray() ) {}
		RuntimeObject* L_0 = ___points0;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_1_t60526566CB3820B1EC1744939DEC75933FBE8429_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___points0;
		PolygonPointU5BU5D_t661578CCDE92AF1A45580A269617A8A1075D79EF* L_3 = Enumerable_ToArray_TisPolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9_m1EE166E10CEB289CCFD66C958988815F503A1928(L_2, /*hidden argument*/Enumerable_ToArray_TisPolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9_m1EE166E10CEB289CCFD66C958988815F503A1928_RuntimeMethod_var);
		G_B2_0 = ((RuntimeObject*)(L_3));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		Polygon__ctor_m270D6CEC54E1B91FA19C2C4D039636E475EF2105(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// public Polygon( IEnumerable<PolygonPoint> points ): this( (points as IList<PolygonPoint>) ?? points.ToArray() ) {}
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.Polygon::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Polygon_get_TriangulationMode_m5B701AAC5B6768CED844AE70E26396EEA97049C8 (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get { return TriangulationMode.Polygon; } }
		return (int32_t)(2);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddHole(UnityEngine.ProBuilder.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddHole_mF55835C0A8EFDA3DB0526215554949F20135602A (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * ___poly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Polygon_AddHole_mF55835C0A8EFDA3DB0526215554949F20135602A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_holes == null) _holes = new List<Polygon>();
		List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * L_0 = __this->get__holes_2();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_holes == null) _holes = new List<Polygon>();
		List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * L_1 = (List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE *)il2cpp_codegen_object_new(List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE_il2cpp_TypeInfo_var);
		List_1__ctor_m643435A2B66C4E7D1CEEBCF079CCD01C2D9833BC(L_1, /*hidden argument*/List_1__ctor_m643435A2B66C4E7D1CEEBCF079CCD01C2D9833BC_RuntimeMethod_var);
		__this->set__holes_2(L_1);
	}

IL_0013:
	{
		// _holes.Add(poly);
		List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * L_2 = __this->get__holes_2();
		Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_3 = ___poly0;
		NullCheck(L_2);
		List_1_Add_m298D8B742EE79A4E757105B256972C50B359480F(L_2, L_3, /*hidden argument*/List_1_Add_m298D8B742EE79A4E757105B256972C50B359480F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.Polygon::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Triangles_mEF14DB613BD87936607A5BCEDEF87C49941330E1 (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, const RuntimeMethod* method)
{
	{
		// public IList<DelaunayTriangle> Triangles { get { return _triangles; } }
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_0 = __this->get__triangles_3();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangle_m90F0A658E4E0C6D24B5D5A36A006E9AEA84E1626 (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Polygon_AddTriangle_m90F0A658E4E0C6D24B5D5A36A006E9AEA84E1626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _triangles.Add(t);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_0 = __this->get__triangles_3();
		DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * L_1 = ___t0;
		NullCheck(L_0);
		List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0(L_0, L_1, /*hidden argument*/List_1_Add_m46E281E0E939B7466955E808B8CE9D0209DD50E0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangles_m4BBA351D9A74C8265C53F1A663FB0179D499504D (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Polygon_AddTriangles_m4BBA351D9A74C8265C53F1A663FB0179D499504D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _triangles.AddRange(list);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_0 = __this->get__triangles_3();
		RuntimeObject* L_1 = ___list0;
		NullCheck(L_0);
		List_1_AddRange_mE8361ABB827B9F8C4A9D54FB269F03E6036586E3(L_0, L_1, /*hidden argument*/List_1_AddRange_mE8361ABB827B9F8C4A9D54FB269F03E6036586E3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Prepare_mF8988ECE495B9338C8372D9FC868D5E5BEB2A835 (Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * __this, TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Polygon_Prepare_mF8988ECE495B9338C8372D9FC868D5E5BEB2A835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (_triangles == null) {
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_0 = __this->get__triangles_3();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _triangles = new List<DelaunayTriangle>(_points.Count);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_1 = __this->get__points_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_inline(L_1, /*hidden argument*/List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_RuntimeMethod_var);
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_3 = (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *)il2cpp_codegen_object_new(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48_il2cpp_TypeInfo_var);
		List_1__ctor_m367A7A864E0FD4762BC11C1FD623B733739D84B3(L_3, L_2, /*hidden argument*/List_1__ctor_m367A7A864E0FD4762BC11C1FD623B733739D84B3_RuntimeMethod_var);
		__this->set__triangles_3(L_3);
		// } else {
		goto IL_002b;
	}

IL_0020:
	{
		// _triangles.Clear();
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_4 = __this->get__triangles_3();
		NullCheck(L_4);
		List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62(L_4, /*hidden argument*/List_1_Clear_mED13317B81F8E32A8C207A70BCF7881CBE020D62_RuntimeMethod_var);
	}

IL_002b:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		V_0 = 0;
		goto IL_0054;
	}

IL_002f:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_5 = ___tcx0;
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_6 = __this->get__points_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_8 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_9 = __this->get__points_0();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_11 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		NullCheck(L_5);
		VirtFuncInvoker2< TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_5, L_8, L_11);
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0054:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		int32_t L_13 = V_0;
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_14 = __this->get__points_0();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_inline(L_14, /*hidden argument*/List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))))
		{
			goto IL_002f;
		}
	}
	{
		// tcx.NewConstraint(_points[0], _points[_points.Count - 1]);
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_16 = ___tcx0;
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_17 = __this->get__points_0();
		NullCheck(L_17);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_18 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_17, 0, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_19 = __this->get__points_0();
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_20 = __this->get__points_0();
		NullCheck(L_20);
		int32_t L_21 = List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_inline(L_20, /*hidden argument*/List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_RuntimeMethod_var);
		NullCheck(L_19);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
		NullCheck(L_16);
		VirtFuncInvoker2< TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_16, L_18, L_22);
		// tcx.Points.AddRange(_points);
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_23 = ___tcx0;
		NullCheck(L_23);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_24 = L_23->get_Points_2();
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_25 = __this->get__points_0();
		NullCheck(L_24);
		List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E(L_24, L_25, /*hidden argument*/List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E_RuntimeMethod_var);
		// if (_holes != null) {
		List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * L_26 = __this->get__holes_2();
		if (!L_26)
		{
			goto IL_0152;
		}
	}
	{
		// foreach (Polygon p in _holes) {
		List_1_tD60F5BFF1573617E966DEF3583134544D39AFDAE * L_27 = __this->get__holes_2();
		NullCheck(L_27);
		Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC  L_28 = List_1_GetEnumerator_m78A6F8E216A32929C8FE7E97C480DFCF7660E475(L_27, /*hidden argument*/List_1_GetEnumerator_m78A6F8E216A32929C8FE7E97C480DFCF7660E475_RuntimeMethod_var);
		V_1 = L_28;
	}

IL_00b7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0136;
		}

IL_00b9:
		{
			// foreach (Polygon p in _holes) {
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_29 = Enumerator_get_Current_m691E606DB5E20CEF856B9DD1F4F4D6AAB68A8575_inline((Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC *)(&V_1), /*hidden argument*/Enumerator_get_Current_m691E606DB5E20CEF856B9DD1F4F4D6AAB68A8575_RuntimeMethod_var);
			V_2 = L_29;
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			V_3 = 0;
			goto IL_00ea;
		}

IL_00c5:
		{
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_30 = ___tcx0;
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_31 = V_2;
			NullCheck(L_31);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_32 = L_31->get__points_0();
			int32_t L_33 = V_3;
			NullCheck(L_32);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_34 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_35 = V_2;
			NullCheck(L_35);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_36 = L_35->get__points_0();
			int32_t L_37 = V_3;
			NullCheck(L_36);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_38 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_36, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
			NullCheck(L_30);
			VirtFuncInvoker2< TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_30, L_34, L_38);
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			int32_t L_39 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		}

IL_00ea:
		{
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			int32_t L_40 = V_3;
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_41 = V_2;
			NullCheck(L_41);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_42 = L_41->get__points_0();
			NullCheck(L_42);
			int32_t L_43 = List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_inline(L_42, /*hidden argument*/List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_RuntimeMethod_var);
			if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)1)))))
			{
				goto IL_00c5;
			}
		}

IL_00fa:
		{
			// tcx.NewConstraint(p._points[0], p._points[p._points.Count - 1]);
			TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_44 = ___tcx0;
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_45 = V_2;
			NullCheck(L_45);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_46 = L_45->get__points_0();
			NullCheck(L_46);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_47 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_46, 0, /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_48 = V_2;
			NullCheck(L_48);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_49 = L_48->get__points_0();
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_50 = V_2;
			NullCheck(L_50);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_51 = L_50->get__points_0();
			NullCheck(L_51);
			int32_t L_52 = List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_inline(L_51, /*hidden argument*/List_1_get_Count_m3FC2EE4E79205E9C6F90CE8C4CD42D7705B0CDC4_RuntimeMethod_var);
			NullCheck(L_49);
			TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_53 = List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_inline(L_49, ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1)), /*hidden argument*/List_1_get_Item_m6ADA03C0B600FFBFC6F8690D6ED50E8476F7852B_RuntimeMethod_var);
			NullCheck(L_44);
			VirtFuncInvoker2< TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D *, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_44, L_47, L_53);
			// tcx.Points.AddRange(p._points);
			TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_54 = ___tcx0;
			NullCheck(L_54);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_55 = L_54->get_Points_2();
			Polygon_tF7673A3F0CF5DE431E07D1149133C12ABEE7C586 * L_56 = V_2;
			NullCheck(L_56);
			List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_57 = L_56->get__points_0();
			NullCheck(L_55);
			List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E(L_55, L_57, /*hidden argument*/List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E_RuntimeMethod_var);
		}

IL_0136:
		{
			// foreach (Polygon p in _holes) {
			bool L_58 = Enumerator_MoveNext_m8B23BC5EC794E42DE0D86BBB2E7FC44FA05CD0C7((Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m8B23BC5EC794E42DE0D86BBB2E7FC44FA05CD0C7_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_00b9;
			}
		}

IL_0142:
		{
			IL2CPP_LEAVE(0x152, FINALLY_0144);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0144;
	}

FINALLY_0144:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAECD9E3E206D54E1795675777EC1A5D5668F098F((Enumerator_t8332376C9064406339891F90FFF39EA83EB9D1BC *)(&V_1), /*hidden argument*/Enumerator_Dispose_mAECD9E3E206D54E1795675777EC1A5D5668F098F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(324)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(324)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x152, IL_0152)
	}

IL_0152:
	{
		// if (_steinerPoints != null) {
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_59 = __this->get__steinerPoints_1();
		if (!L_59)
		{
			goto IL_016b;
		}
	}
	{
		// tcx.Points.AddRange(_steinerPoints);
		TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * L_60 = ___tcx0;
		NullCheck(L_60);
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_61 = L_60->get_Points_2();
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_62 = __this->get__steinerPoints_1();
		NullCheck(L_61);
		List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E(L_61, L_62, /*hidden argument*/List_1_AddRange_m87478F5A1989E1518A3D66BA3A6B990E036F034E_RuntimeMethod_var);
	}

IL_016b:
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint__ctor_m95DD04A1346023A92E506EE9027A5ED82F7D5A6F (PolygonPoint_tDDCF2884A98AB3E64691CE2F902B6AF2053EA2C9 * __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method)
{
	{
		// public PolygonPoint( double x, double y, int index = INSERTED_INDEX ) : base(x, y, index) { }
		double L_0 = ___x0;
		double L_1 = ___y1;
		int32_t L_2 = ___index2;
		TriangulationPoint__ctor_m7147AF71666B9301CDE139279BCB0B3FC0663069(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// public PolygonPoint( double x, double y, int index = INSERTED_INDEX ) : base(x, y, index) { }
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_mDD9672F55C0D07D0A9CA68DBC59CE0D3C2CE0F97 (TriangulationConstraint_t136197F4043FF617E857EB679090540A1946F329 * __this, const RuntimeMethod* method)
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
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * TriangulationContext_get_DebugContext_m37382985F166584A1842EC5E91276DFD51997632 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * L_0 = __this->get_U3CDebugContextU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_m953D5E9DF9F986C03CC0B59CFF7684568063A4C3 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = __this->get_U3CTriangulationModeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m62BDACA1CBE9BE9345F70A568F0527109B6D6776 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTriangulationModeU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mF170B610538AFCBA884A7C7AD6EB2FDBBA29C7E5 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CTriangulatableU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_m228DB8DA07E50F849E9A2262535767EB7A32FF1E (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTriangulatableU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_mBE86D6A51BACFC441434301769C5E65D12A59EDF (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = __this->get_U3CStepCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m76276A313719E357210CDE131C502DDA171A5D23 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStepCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_m7B283B98D208A9256B9583B02CE8B52E378D778C (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// StepCount++;
		int32_t L_0 = TriangulationContext_get_StepCount_mBE86D6A51BACFC441434301769C5E65D12A59EDF_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		TriangulationContext_set_StepCount_m76276A313719E357210CDE131C502DDA171A5D23_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_mD4A6BAA5F582902E37DFEEA3BAF00C18EE28C5C2 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationContext_PrepareTriangulation_mD4A6BAA5F582902E37DFEEA3BAF00C18EE28C5C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulatable = t;
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_set_Triangulatable_m228DB8DA07E50F849E9A2262535767EB7A32FF1E_inline(__this, L_0, /*hidden argument*/NULL);
		// TriangulationMode = t.TriangulationMode;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.Triangulatable::get_TriangulationMode() */, Triangulatable_tF8775F589F4D34BBC1BCDAE884553C2ED7FFD7D5_il2cpp_TypeInfo_var, L_1);
		TriangulationContext_set_TriangulationMode_m62BDACA1CBE9BE9345F70A568F0527109B6D6776_inline(__this, L_2, /*hidden argument*/NULL);
		// t.Prepare(this);
		RuntimeObject* L_3 = ___t0;
		NullCheck(L_3);
		InterfaceActionInvoker1< TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * >::Invoke(0 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext) */, Triangulatable_tF8775F589F4D34BBC1BCDAE884553C2ED7FFD7D5_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_mEC47A7BEE602DE1B931C60F834BE713ECD37B7E0 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public void Update(string message) {}
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m5E94C79284C9887B58548A696413300157867EFC (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationContext_Clear_m5E94C79284C9887B58548A696413300157867EFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.Clear();
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_0 = __this->get_Points_2();
		NullCheck(L_0);
		List_1_Clear_mE23DCF76145267A908E4838A246D932339B22822(L_0, /*hidden argument*/List_1_Clear_mE23DCF76145267A908E4838A246D932339B22822_RuntimeMethod_var);
		// if (DebugContext != null) DebugContext.Clear();
		TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * L_1 = TriangulationContext_get_DebugContext_m37382985F166584A1842EC5E91276DFD51997632_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (DebugContext != null) DebugContext.Clear();
		TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * L_2 = TriangulationContext_get_DebugContext_m37382985F166584A1842EC5E91276DFD51997632_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::Clear() */, L_2);
	}

IL_001e:
	{
		// StepCount = 0;
		TriangulationContext_set_StepCount_m76276A313719E357210CDE131C502DDA171A5D23_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mCDD6855413BF9AD16A60E324EF139E9BD5D03C6A (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = __this->get_U3CIsDebugEnabledU3Ek__BackingField_6();
		return L_0;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A * TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationContext_get_DTDebugContext_m8F5E0C9062340FFDBA79C681E34F6AEAE79B9380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DTSweepDebugContext DTDebugContext { get { return DebugContext as DTSweepDebugContext; } }
		TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * L_0 = TriangulationContext_get_DebugContext_m37382985F166584A1842EC5E91276DFD51997632_inline(__this, /*hidden argument*/NULL);
		return ((DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A *)IsInstClass((RuntimeObject*)L_0, DTSweepDebugContext_t8B49794079283BD0D8264FA788ADA37A5B972F1A_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_m3A3D59F35FC48D89C87E8270952DFD0E95778936 (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationContext__ctor_m3A3D59F35FC48D89C87E8270952DFD0E95778936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<DelaunayTriangle> Triangles = new List<DelaunayTriangle>();
		List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 * L_0 = (List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48 *)il2cpp_codegen_object_new(List_1_t3FE59E3352993531FDEE0A3B70167CB5201A0A48_il2cpp_TypeInfo_var);
		List_1__ctor_m1E8B3FAD48752BB5B27E1E9030C66BE3C69ED179(L_0, /*hidden argument*/List_1__ctor_m1E8B3FAD48752BB5B27E1E9030C66BE3C69ED179_RuntimeMethod_var);
		__this->set_Triangles_1(L_0);
		// public readonly List<TriangulationPoint> Points = new List<TriangulationPoint>();
		List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 * L_1 = (List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7 *)il2cpp_codegen_object_new(List_1_tCB41B60492A9BA803A4AA24137A0F5A28AF5F0B7_il2cpp_TypeInfo_var);
		List_1__ctor_m8C37730941C3E22EAF2BF642AE05D477A1BF821C(L_1, /*hidden argument*/List_1__ctor_m8C37730941C3E22EAF2BF642AE05D477A1BF821C_RuntimeMethod_var);
		__this->set_Points_2(L_1);
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
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * TriangulationPoint_get_Edges_m57ECE2E2D4D360DA4D7A0A732885150A559C677A (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_0 = __this->get_U3CEdgesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m190FFB192FF3FDE813C35E5289755A346C489D4B (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_0 = ___value0;
		__this->set_U3CEdgesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m7147AF71666B9301CDE139279BCB0B3FC0663069 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		double L_0 = ___x0;
		__this->set_X_1(L_0);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		double L_1 = ___y1;
		__this->set_Y_2(L_1);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		int32_t L_2 = ___index2;
		__this->set_Index_3(L_2);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TriangulationPoint_ToString_mAC0409A5859212207C9E352784DE6D7020E0C092 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationPoint_ToString_mAC0409A5859212207C9E352784DE6D7020E0C092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "[" + X + "," + Y + "]";
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		double L_3 = __this->get_X_1();
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		double L_8 = __this->get_Y_2();
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m012E25660FDE3069E1271B1163775F011BAE8603 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationPoint_AddEdge_m012E25660FDE3069E1271B1163775F011BAE8603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Edges == null) Edges = new List<DTSweepConstraint>();
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_0 = TriangulationPoint_get_Edges_m57ECE2E2D4D360DA4D7A0A732885150A559C677A_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (Edges == null) Edges = new List<DTSweepConstraint>();
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_1 = (List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 *)il2cpp_codegen_object_new(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822_il2cpp_TypeInfo_var);
		List_1__ctor_m556B44F481C2F0F211428476F25C2A02D07B5DC6(L_1, /*hidden argument*/List_1__ctor_m556B44F481C2F0F211428476F25C2A02D07B5DC6_RuntimeMethod_var);
		TriangulationPoint_set_Edges_m190FFB192FF3FDE813C35E5289755A346C489D4B_inline(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// Edges.Add(e);
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_2 = TriangulationPoint_get_Edges_m57ECE2E2D4D360DA4D7A0A732885150A559C677A_inline(__this, /*hidden argument*/NULL);
		DTSweepConstraint_t65C93E79FA7C3049945D68AF91052C29805F48DC * L_3 = ___e0;
		NullCheck(L_2);
		List_1_Add_m5D5A46A70DC5551221237CF0D0E10433D7044400(L_2, L_3, /*hidden argument*/List_1_Add_m5D5A46A70DC5551221237CF0D0E10433D7044400_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_m4894178A3DB02870533CC09D659C2C24E97C25F8 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, const RuntimeMethod* method)
{
	{
		// public bool HasEdges { get { return Edges != null; } }
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_0 = TriangulationPoint_get_Edges_m57ECE2E2D4D360DA4D7A0A732885150A559C677A_inline(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m6F1EFF2BEF0D4EFDC62F8ABE4475E0D5D32B4BA2 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pa0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pb1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pc2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pd3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	{
		// double pdx = pd.X;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___pd3;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		V_0 = L_1;
		// double pdy = pd.Y;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___pd3;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		V_1 = L_3;
		// double adx = pa.X - pdx;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = ___pa0;
		NullCheck(L_4);
		double L_5 = L_4->get_X_1();
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_5, (double)L_6));
		// double ady = pa.Y - pdy;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = ___pa0;
		NullCheck(L_7);
		double L_8 = L_7->get_Y_2();
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_8, (double)L_9));
		// double bdx = pb.X - pdx;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = ___pb1;
		NullCheck(L_10);
		double L_11 = L_10->get_X_1();
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_11, (double)L_12));
		// double bdy = pb.Y - pdy;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = ___pb1;
		NullCheck(L_13);
		double L_14 = L_13->get_Y_2();
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		// double adxbdy = adx * bdy;
		double L_16 = V_2;
		double L_17 = V_5;
		// double bdxady = bdx * ady;
		double L_18 = V_4;
		double L_19 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_18, (double)L_19));
		// double oabd = adxbdy - bdxady;
		double L_20 = V_6;
		V_7 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_16, (double)L_17)), (double)L_20));
		// if (oabd <= 0) return false;
		double L_21 = V_7;
		if ((!(((double)L_21) <= ((double)(0.0)))))
		{
			goto IL_0052;
		}
	}
	{
		// if (oabd <= 0) return false;
		return (bool)0;
	}

IL_0052:
	{
		// double cdx = pc.X - pdx;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_22 = ___pc2;
		NullCheck(L_22);
		double L_23 = L_22->get_X_1();
		double L_24 = V_0;
		V_8 = ((double)il2cpp_codegen_subtract((double)L_23, (double)L_24));
		// double cdy = pc.Y - pdy;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_25 = ___pc2;
		NullCheck(L_25);
		double L_26 = L_25->get_Y_2();
		double L_27 = V_1;
		V_9 = ((double)il2cpp_codegen_subtract((double)L_26, (double)L_27));
		// double cdxady = cdx * ady;
		double L_28 = V_8;
		double L_29 = V_3;
		// double adxcdy = adx * cdy;
		double L_30 = V_2;
		double L_31 = V_9;
		V_10 = ((double)il2cpp_codegen_multiply((double)L_30, (double)L_31));
		// double ocad = cdxady - adxcdy;
		double L_32 = V_10;
		V_11 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_28, (double)L_29)), (double)L_32));
		// if (ocad <= 0) return false;
		double L_33 = V_11;
		if ((!(((double)L_33) <= ((double)(0.0)))))
		{
			goto IL_0084;
		}
	}
	{
		// if (ocad <= 0) return false;
		return (bool)0;
	}

IL_0084:
	{
		// double bdxcdy = bdx * cdy;
		double L_34 = V_4;
		double L_35 = V_9;
		V_12 = ((double)il2cpp_codegen_multiply((double)L_34, (double)L_35));
		// double cdxbdy = cdx * bdy;
		double L_36 = V_8;
		double L_37 = V_5;
		V_13 = ((double)il2cpp_codegen_multiply((double)L_36, (double)L_37));
		// double alift = adx * adx + ady * ady;
		double L_38 = V_2;
		double L_39 = V_2;
		double L_40 = V_3;
		double L_41 = V_3;
		// double blift = bdx * bdx + bdy * bdy;
		double L_42 = V_4;
		double L_43 = V_4;
		double L_44 = V_5;
		double L_45 = V_5;
		V_14 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_42, (double)L_43)), (double)((double)il2cpp_codegen_multiply((double)L_44, (double)L_45))));
		// double clift = cdx * cdx + cdy * cdy;
		double L_46 = V_8;
		double L_47 = V_8;
		double L_48 = V_9;
		double L_49 = V_9;
		V_15 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_46, (double)L_47)), (double)((double)il2cpp_codegen_multiply((double)L_48, (double)L_49))));
		// double det = alift * (bdxcdy - cdxbdy) + blift * ocad + clift * oabd;
		double L_50 = V_12;
		double L_51 = V_13;
		double L_52 = V_14;
		double L_53 = V_11;
		double L_54 = V_15;
		double L_55 = V_7;
		// return det > 0;
		return (bool)((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_38, (double)L_39)), (double)((double)il2cpp_codegen_multiply((double)L_40, (double)L_41)))), (double)((double)il2cpp_codegen_subtract((double)L_50, (double)L_51)))), (double)((double)il2cpp_codegen_multiply((double)L_52, (double)L_53)))), (double)((double)il2cpp_codegen_multiply((double)L_54, (double)L_55))))) > ((double)(0.0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_mE851390EF57E22B31ECB916E31BD40F13CCEA64A (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pa0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pb1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pc2, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pd3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	{
		// double pdx = pd.X;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___pd3;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		V_0 = L_1;
		// double pdy = pd.Y;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___pd3;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		V_1 = L_3;
		// double adx = pa.X - pdx;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = ___pa0;
		NullCheck(L_4);
		double L_5 = L_4->get_X_1();
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_5, (double)L_6));
		// double ady = pa.Y - pdy;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_7 = ___pa0;
		NullCheck(L_7);
		double L_8 = L_7->get_Y_2();
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_8, (double)L_9));
		// double bdx = pb.X - pdx;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = ___pb1;
		NullCheck(L_10);
		double L_11 = L_10->get_X_1();
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_11, (double)L_12));
		// double bdy = pb.Y - pdy;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_13 = ___pb1;
		NullCheck(L_13);
		double L_14 = L_13->get_Y_2();
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		// double adxbdy = adx * bdy;
		double L_16 = V_2;
		double L_17 = V_5;
		// double bdxady = bdx * ady;
		double L_18 = V_4;
		double L_19 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_18, (double)L_19));
		// double oabd = adxbdy - bdxady;
		double L_20 = V_6;
		// if (oabd <= 0) {
		if ((!(((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_16, (double)L_17)), (double)L_20))) <= ((double)(0.0)))))
		{
			goto IL_004e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004e:
	{
		// double cdx = pc.X - pdx;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_21 = ___pc2;
		NullCheck(L_21);
		double L_22 = L_21->get_X_1();
		double L_23 = V_0;
		// double cdy = pc.Y - pdy;
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_24 = ___pc2;
		NullCheck(L_24);
		double L_25 = L_24->get_Y_2();
		double L_26 = V_1;
		V_7 = ((double)il2cpp_codegen_subtract((double)L_25, (double)L_26));
		// double cdxady = cdx * ady;
		double L_27 = V_3;
		// double adxcdy = adx * cdy;
		double L_28 = V_2;
		double L_29 = V_7;
		V_8 = ((double)il2cpp_codegen_multiply((double)L_28, (double)L_29));
		// double ocad = cdxady - adxcdy;
		double L_30 = V_8;
		// if (ocad <= 0) {
		if ((!(((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_22, (double)L_23)), (double)L_27)), (double)L_30))) <= ((double)(0.0)))))
		{
			goto IL_0078;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0078:
	{
		// return true;
		return (bool)1;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.Orientation UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7 (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pa0, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pb1, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___pc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationUtil_Orient2d_m2D4AB2522F51564577C7EEBEF4F614CEC512CAE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// double detleft = (pa.X - pc.X) * (pb.Y - pc.Y);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___pa0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_2 = ___pc2;
		NullCheck(L_2);
		double L_3 = L_2->get_X_1();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_4 = ___pb1;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_6 = ___pc2;
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		// double detright = (pa.Y - pc.Y) * (pb.X - pc.X);
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_8 = ___pa0;
		NullCheck(L_8);
		double L_9 = L_8->get_Y_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_10 = ___pc2;
		NullCheck(L_10);
		double L_11 = L_10->get_Y_2();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_12 = ___pb1;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_14 = ___pc2;
		NullCheck(L_14);
		double L_15 = L_14->get_X_1();
		V_0 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_9, (double)L_11)), (double)((double)il2cpp_codegen_subtract((double)L_13, (double)L_15))));
		// double val = detleft - detright;
		double L_16 = V_0;
		V_1 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_1, (double)L_3)), (double)((double)il2cpp_codegen_subtract((double)L_5, (double)L_7)))), (double)L_16));
		// if (val > -EPSILON && val < EPSILON) {
		double L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		double L_18 = ((TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_17) > ((double)((-L_18))))))
		{
			goto IL_004d;
		}
	}
	{
		double L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var);
		double L_20 = ((TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_19) < ((double)L_20))))
		{
			goto IL_004d;
		}
	}
	{
		// return Orientation.Collinear;
		return (int32_t)(2);
	}

IL_004d:
	{
		// } else if (val > 0) {
		double L_21 = V_1;
		if ((!(((double)L_21) > ((double)(0.0)))))
		{
			goto IL_005b;
		}
	}
	{
		// return Orientation.CCW;
		return (int32_t)(1);
	}

IL_005b:
	{
		// return Orientation.CW;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationUtil__cctor_mE12C6B477ADE39E0005D18129F754A211D135B18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TriangulationUtil__cctor_mE12C6B477ADE39E0005D18129F754A211D135B18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double EPSILON = 1e-12;
		((TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tC4062BE179731EBF2479A255F74525548E24A797_il2cpp_TypeInfo_var))->set_EPSILON_0((1.0E-12));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * AdvancingFront_FindSearchNode_m3D3C37960239EA5CF71303BC1F3479E954BAFC4F_inline (AdvancingFront_t9350C45B1F982EF9C6DAC1A15F01FBD8BB7B7BE8 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		// return Search;
		AdvancingFrontNode_t128D0AAE7B61A804C650031128E3035E77CFEDFE * L_0 = __this->get_Search_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_m953D5E9DF9F986C03CC0B59CFF7684568063A4C3_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = __this->get_U3CTriangulationModeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * TriangulationPoint_get_Edges_m57ECE2E2D4D360DA4D7A0A732885150A559C677A_inline (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_0 = __this->get_U3CEdgesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mCDD6855413BF9AD16A60E324EF139E9BD5D03C6A_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = __this->get_U3CIsDebugEnabledU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m3DB4D5C7827DFF63C17D6C68590C88A83EC92E95_inline (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = __this->get_U3CIsInteriorU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_mFC3828D676B96D130781E36112C420A401F52F3D_inline (DelaunayTriangle_t9816054E61BBF985B4D487B991FCD23451436AFA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsInteriorU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mF170B610538AFCBA884A7C7AD6EB2FDBBA29C7E5_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CTriangulatableU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweepContext_get_Tail_mC329CB371C2725059077E1844B1CC26D3A8EC690_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = __this->get_U3CTailU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * DTSweepContext_get_Head_mB0BF0EDC682AC7D97C4F2250BE65ACEECF8F4428_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = __this->get_U3CHeadU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mB530C73F2D5F939C4E56FCE4575A0D3F636BCE4C_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___value0;
		__this->set_U3CHeadU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m4C5FFA8C80D2F4D898A895E4752DDFE9C1B18D79_inline (DTSweepContext_t8C8271F9AFFAC2F0FC5D28030DE891F452623A0D * __this, TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * L_0 = ___value0;
		__this->set_U3CTailU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_mBE86D6A51BACFC441434301769C5E65D12A59EDF_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = __this->get_U3CStepCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m76276A313719E357210CDE131C502DDA171A5D23_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStepCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_m228DB8DA07E50F849E9A2262535767EB7A32FF1E_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTriangulatableU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m62BDACA1CBE9BE9345F70A568F0527109B6D6776_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTriangulationModeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * TriangulationContext_get_DebugContext_m37382985F166584A1842EC5E91276DFD51997632_inline (TriangulationContext_t86DFA363230E7D919711D4A5C0F5A70D2F96354A * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_t89390A097098EB41F16458D561A499157C545859 * L_0 = __this->get_U3CDebugContextU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m190FFB192FF3FDE813C35E5289755A346C489D4B_inline (TriangulationPoint_tFFC3C2A9199AFDCFD2376877388FF9A233155A1D * __this, List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t15BA6D0F2FFA62FB46DFF1644F7D4E66B9EF5822 * L_0 = ___value0;
		__this->set_U3CEdgesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
