#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct VirtActionInvoker11
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Resources.ResourceLocator>
struct Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean>
struct Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<System.Resources.ResourceLocator>
struct IEnumerator_1_tF9579AAEDBCFB25ABA9316EA739986095F864E7B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_tAFCE72ADC2EDFFA5D34E7918994DD34A8583449F;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord>
struct IEqualityComparer_1_tA69FAEE2FF62FD94D03621391FBBAA1F820E8B92;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Resources.ResourceLocator>
struct KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t42CCC45AD9AFD4B1EC32305A1FB75096D1D60E4F;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct KeyCollection_t7A3E9764F18C1DE44C90DF9D411158787E20A943;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>
struct ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Resources.ResourceLocator>[]
struct EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,System.Object>[]
struct EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>[]
struct EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Resources.ResourceLocator[]
struct ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A;
IL2CPP_EXTERN_C String_t* _stringLiteral261D661948B770F8B400B8265288227AE56B4F98;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral3494960139156C577EACAE136B19BE516523C267;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205;
IL2CPP_EXTERN_C String_t* _stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCE1874A8D7E75C725B6E18E8F5F2D5B78FCE9;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2187048809B10555138F2F9BB58E93E20F1B49;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m68DCF814CE9B90F605034BAD98C0DB223CD9CED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mDBA7DCDF07C312FAA34E0CFD6A6976DFCC40EF3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1507D6368EB4FD584D842B25F3A57D1D472F392F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m5D72D827B600E6F821692279686EB2FAE565AEA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m6516D9B3E6511E95D07372033B20FD1C1A1B01F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82BB88792868D7BCA61CDDA0BA67146A05ABB392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEE9F60985A1A4843C8F4C72377361CABAED40607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mFC1427B9B734FFCBBBEE6B9D459AA7676A54269B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43A1E8E9B6E448F5109E63D2F9452D073E099F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5147E7E8DBDEA9A83A71421C6C9B848DFF03F282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m518D2432C00A46A713CE314CE9A6962FA93BF1D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5D153A523B2CAC02D94C3106566E461B71638FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m7958C3DD111888A05CAE6AD5FB08398B34DD8AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mA7A68EA12ADCDA48C1FB67B6ABCF6CD7E3979E8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m634617A4485B074C21CAFE4B998040E22F2A89D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7460FE265FDD1B034B1F2B80165B46E7CF2965BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7A0F11CAFAA0F0AEFCDD965BE0B6430C090E40FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8ED2FCE61DFF18D6BAF9B4677391089D56BB21CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mDDBFCE312F2C4CD8CD0F6FC09C5C6240A265D076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mE766A1F421AC1DC925D60E7A31C00B32F748FD32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m137B43D2AD4DE76087897823B0F9D17A83C08009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_m2C7529C40378EFA70389A8EB2979BED417C58772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mAF1C70E689EC3530A6B82DC6E3E16CEDEEA2A60E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mB5B16EFFE8E91D04EBA70E5F13D23834BD9202B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mC8EEA954A8BAFCF2EA9DD8B7122C8872E74FC3C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection__ctor_mF03D64F567C6D69B0360E99FC446AF1FDC0ECD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E;
struct EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A;
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
struct EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412;
struct EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3;
struct EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___entries_1)); }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___keys_7)); }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___values_8)); }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___entries_1)); }
	inline EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___keys_7)); }
	inline KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ___values_8)); }
	inline ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Resources.ResourceLocator>
struct Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___entries_1)); }
	inline EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___keys_7)); }
	inline KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB86914AB06A108AEE25721CFAAAC460538F6DAE7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ___values_8)); }
	inline ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * get_values_8() const { return ___values_8; }
	inline ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t42CCC45AD9AFD4B1EC32305A1FB75096D1D60E4F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___entries_1)); }
	inline EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___keys_7)); }
	inline KeyCollection_t42CCC45AD9AFD4B1EC32305A1FB75096D1D60E4F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t42CCC45AD9AFD4B1EC32305A1FB75096D1D60E4F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t42CCC45AD9AFD4B1EC32305A1FB75096D1D60E4F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ___values_8)); }
	inline ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t7A3E9764F18C1DE44C90DF9D411158787E20A943 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___entries_1)); }
	inline EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___keys_7)); }
	inline KeyCollection_t7A3E9764F18C1DE44C90DF9D411158787E20A943 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7A3E9764F18C1DE44C90DF9D411158787E20A943 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7A3E9764F18C1DE44C90DF9D411158787E20A943 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ___values_8)); }
	inline ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
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


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848, ___dictionary_0)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>
struct ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC, ___dictionary_0)); }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759, ___dictionary_0)); }
	inline Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF, ___dictionary_0)); }
	inline Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
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

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>
struct Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>
struct Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject * ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___key_2)); }
	inline RuntimeObject * get_key_2() const { return ___key_2; }
	inline RuntimeObject ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(RuntimeObject * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A, ___value_3)); }
	inline int32_t get_value_3() const { return ___value_3; }
	inline int32_t* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(int32_t value)
	{
		___value_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>
struct Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject * ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___key_2)); }
	inline RuntimeObject * get_key_2() const { return ___key_2; }
	inline RuntimeObject ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(RuntimeObject * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,System.Object>
struct Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint64_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31, ___key_2)); }
	inline uint64_t get_key_2() const { return ___key_2; }
	inline uint64_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(uint64_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	int32_t ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___dictionary_0)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712, ___currentValue_3)); }
	inline int32_t get_currentValue_3() const { return ___currentValue_3; }
	inline int32_t* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(int32_t value)
	{
		___currentValue_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
struct Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934, ___dictionary_0)); }
	inline Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3, ___dictionary_0)); }
	inline Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493, ___Delegate_0)); }
	inline UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D, ___Delegate_0)); }
	inline UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9, ___Delegate_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF, ___Delegate_0)); }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690, ___Delegate_0)); }
	inline UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF, ___Delegate_0)); }
	inline UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90, ___Delegate_0)); }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870, ___Delegate_0)); }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD, ___Delegate_0)); }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
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


// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741, ___Delegate_0)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Resources.ResourceLocator
struct ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};

// DG.Tweening.Core.SafeModeReport
struct SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totMissingTargetOrFieldErrors>k__BackingField
	int32_t ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totCallbackErrors>k__BackingField
	int32_t ___U3CtotCallbackErrorsU3Ek__BackingField_1;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totStartupErrors>k__BackingField
	int32_t ___U3CtotStartupErrorsU3Ek__BackingField_2;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totUnsetErrors>k__BackingField
	int32_t ___U3CtotUnsetErrorsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0)); }
	inline int32_t get_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() const { return ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return &___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline void set_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0(int32_t value)
	{
		___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotCallbackErrorsU3Ek__BackingField_1)); }
	inline int32_t get_U3CtotCallbackErrorsU3Ek__BackingField_1() const { return ___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return &___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline void set_U3CtotCallbackErrorsU3Ek__BackingField_1(int32_t value)
	{
		___U3CtotCallbackErrorsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotStartupErrorsU3Ek__BackingField_2)); }
	inline int32_t get_U3CtotStartupErrorsU3Ek__BackingField_2() const { return ___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return &___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline void set_U3CtotStartupErrorsU3Ek__BackingField_2(int32_t value)
	{
		___U3CtotStartupErrorsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotUnsetErrorsU3Ek__BackingField_3)); }
	inline int32_t get_U3CtotUnsetErrorsU3Ek__BackingField_3() const { return ___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return &___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline void set_U3CtotUnsetErrorsU3Ek__BackingField_3(int32_t value)
	{
		___U3CtotUnsetErrorsU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord
struct TileCoord_t491EABF2B90DFB255C8F7624FF5528F2DE2CC901 
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::tileZ
	int32_t ___tileZ_1;

public:
	inline static int32_t get_offset_of_tileX_0() { return static_cast<int32_t>(offsetof(TileCoord_t491EABF2B90DFB255C8F7624FF5528F2DE2CC901, ___tileX_0)); }
	inline int32_t get_tileX_0() const { return ___tileX_0; }
	inline int32_t* get_address_of_tileX_0() { return &___tileX_0; }
	inline void set_tileX_0(int32_t value)
	{
		___tileX_0 = value;
	}

	inline static int32_t get_offset_of_tileZ_1() { return static_cast<int32_t>(offsetof(TileCoord_t491EABF2B90DFB255C8F7624FF5528F2DE2CC901, ___tileZ_1)); }
	inline int32_t get_tileZ_1() const { return ___tileZ_1; }
	inline int32_t* get_address_of_tileZ_1() { return &___tileZ_1; }
	inline void set_tileZ_1(int32_t value)
	{
		___tileZ_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Resources.ResourceLocator>
struct Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	RuntimeObject * ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___key_2)); }
	inline RuntimeObject * get_key_2() const { return ___key_2; }
	inline RuntimeObject ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(RuntimeObject * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26, ___value_3)); }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  get_value_3() const { return ___value_3; }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_3))->____value_0), (void*)NULL);
	}
};


// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99 
{
public:
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	TileCoord_t491EABF2B90DFB255C8F7624FF5528F2DE2CC901  ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_hashCode_0() { return static_cast<int32_t>(offsetof(Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99, ___hashCode_0)); }
	inline int32_t get_hashCode_0() const { return ___hashCode_0; }
	inline int32_t* get_address_of_hashCode_0() { return &___hashCode_0; }
	inline void set_hashCode_0(int32_t value)
	{
		___hashCode_0 = value;
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99, ___key_2)); }
	inline TileCoord_t491EABF2B90DFB255C8F7624FF5528F2DE2CC901  get_key_2() const { return ___key_2; }
	inline TileCoord_t491EABF2B90DFB255C8F7624FF5528F2DE2CC901 * get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(TileCoord_t491EABF2B90DFB255C8F7624FF5528F2DE2CC901  value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>
struct Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___dictionary_0)); }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8, ___currentValue_3)); }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  get_currentValue_3() const { return ___currentValue_3; }
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->____value_0), (void*)NULL);
	}
};


// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___handle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// DG.Tweening.AutoPlay
struct AutoPlay_t82EC6434A741EB9DED6F3BE07E59E70446ABC80C 
{
public:
	// System.Int32 DG.Tweening.AutoPlay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoPlay_t82EC6434A741EB9DED6F3BE07E59E70446ABC80C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.AxisConstraint
struct AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4, ___value___2)); }
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

// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// DG.Tweening.LogBehaviour
struct LogBehaviour_tE75FAAAFF4FA56D1EB213B38425928B7FF6B17C1 
{
public:
	// System.Int32 DG.Tweening.LogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogBehaviour_tE75FAAAFF4FA56D1EB213B38425928B7FF6B17C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour
struct NestedTweenFailureBehaviour_t226FD9A7294FEF476C4E6D8B943EC4702E369E4D 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.NestedTweenFailureBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NestedTweenFailureBehaviour_t226FD9A7294FEF476C4E6D8B943EC4702E369E4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.RewindCallbackMode
struct RewindCallbackMode_tE4C3B57E2525E673DB571768A7DA431F03CABC6A 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.RewindCallbackMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RewindCallbackMode_tE4C3B57E2525E673DB571768A7DA431F03CABC6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// DG.Tweening.Core.Enums.SafeModeLogBehaviour
struct SafeModeLogBehaviour_t0BAF69EBAAA15F4C73688CDC5E2F03EF62AD4B08 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SafeModeLogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeLogBehaviour_t0BAF69EBAAA15F4C73688CDC5E2F03EF62AD4B08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.UpdateMode
struct UpdateMode_tEEC2470CE28E891BEC02FE0AC9F3C0159DB328E5 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.UpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMode_tEEC2470CE28E891BEC02FE0AC9F3C0159DB328E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.UpdateNotice
struct UpdateNotice_t3613BA991D88A896A235AC33D7342043556404CB 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.UpdateNotice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateNotice_t3613BA991D88A896A235AC33D7342043556404CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.SafeModeReport/SafeModeReportType
struct SafeModeReportType_t40471AA507F72C513F9929567F62AE57D339FA74 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport/SafeModeReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeReportType_t40471AA507F72C513F9929567F62AE57D339FA74, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// DG.Tweening.DOTween
struct DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203  : public RuntimeObject
{
public:

public:
};

struct DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields
{
public:
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// DG.Tweening.Core.Enums.SafeModeLogBehaviour DG.Tweening.DOTween::safeModeLogBehaviour
	int32_t ___safeModeLogBehaviour_2;
	// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour DG.Tweening.DOTween::nestedTweenFailureBehaviour
	int32_t ___nestedTweenFailureBehaviour_3;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_4;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_5;
	// System.Boolean DG.Tweening.DOTween::useSmoothDeltaTime
	bool ___useSmoothDeltaTime_6;
	// System.Single DG.Tweening.DOTween::maxSmoothUnscaledTime
	float ___maxSmoothUnscaledTime_7;
	// DG.Tweening.Core.Enums.RewindCallbackMode DG.Tweening.DOTween::rewindCallbackMode
	int32_t ___rewindCallbackMode_8;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_9;
	// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean> DG.Tweening.DOTween::onWillLog
	Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 * ___onWillLog_10;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_11;
	// System.Boolean DG.Tweening.DOTween::debugMode
	bool ___debugMode_12;
	// System.Boolean DG.Tweening.DOTween::_fooDebugStoreTargetId
	bool ____fooDebugStoreTargetId_13;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_14;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_15;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_16;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_17;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_18;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_19;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_20;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_21;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_22;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 * ___instance_23;
	// System.Boolean DG.Tweening.DOTween::_foo_isQuitting
	bool ____foo_isQuitting_24;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_25;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_26;
	// DG.Tweening.Core.SafeModeReport DG.Tweening.DOTween::safeModeReport
	SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC  ___safeModeReport_27;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 * ___GizmosDelegates_28;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_29;
	// System.Int32 DG.Tweening.DOTween::_isQuittingFrame
	int32_t ____isQuittingFrame_30;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version_0), (void*)value);
	}

	inline static int32_t get_offset_of_useSafeMode_1() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___useSafeMode_1)); }
	inline bool get_useSafeMode_1() const { return ___useSafeMode_1; }
	inline bool* get_address_of_useSafeMode_1() { return &___useSafeMode_1; }
	inline void set_useSafeMode_1(bool value)
	{
		___useSafeMode_1 = value;
	}

	inline static int32_t get_offset_of_safeModeLogBehaviour_2() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___safeModeLogBehaviour_2)); }
	inline int32_t get_safeModeLogBehaviour_2() const { return ___safeModeLogBehaviour_2; }
	inline int32_t* get_address_of_safeModeLogBehaviour_2() { return &___safeModeLogBehaviour_2; }
	inline void set_safeModeLogBehaviour_2(int32_t value)
	{
		___safeModeLogBehaviour_2 = value;
	}

	inline static int32_t get_offset_of_nestedTweenFailureBehaviour_3() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___nestedTweenFailureBehaviour_3)); }
	inline int32_t get_nestedTweenFailureBehaviour_3() const { return ___nestedTweenFailureBehaviour_3; }
	inline int32_t* get_address_of_nestedTweenFailureBehaviour_3() { return &___nestedTweenFailureBehaviour_3; }
	inline void set_nestedTweenFailureBehaviour_3(int32_t value)
	{
		___nestedTweenFailureBehaviour_3 = value;
	}

	inline static int32_t get_offset_of_showUnityEditorReport_4() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___showUnityEditorReport_4)); }
	inline bool get_showUnityEditorReport_4() const { return ___showUnityEditorReport_4; }
	inline bool* get_address_of_showUnityEditorReport_4() { return &___showUnityEditorReport_4; }
	inline void set_showUnityEditorReport_4(bool value)
	{
		___showUnityEditorReport_4 = value;
	}

	inline static int32_t get_offset_of_timeScale_5() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___timeScale_5)); }
	inline float get_timeScale_5() const { return ___timeScale_5; }
	inline float* get_address_of_timeScale_5() { return &___timeScale_5; }
	inline void set_timeScale_5(float value)
	{
		___timeScale_5 = value;
	}

	inline static int32_t get_offset_of_useSmoothDeltaTime_6() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___useSmoothDeltaTime_6)); }
	inline bool get_useSmoothDeltaTime_6() const { return ___useSmoothDeltaTime_6; }
	inline bool* get_address_of_useSmoothDeltaTime_6() { return &___useSmoothDeltaTime_6; }
	inline void set_useSmoothDeltaTime_6(bool value)
	{
		___useSmoothDeltaTime_6 = value;
	}

	inline static int32_t get_offset_of_maxSmoothUnscaledTime_7() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___maxSmoothUnscaledTime_7)); }
	inline float get_maxSmoothUnscaledTime_7() const { return ___maxSmoothUnscaledTime_7; }
	inline float* get_address_of_maxSmoothUnscaledTime_7() { return &___maxSmoothUnscaledTime_7; }
	inline void set_maxSmoothUnscaledTime_7(float value)
	{
		___maxSmoothUnscaledTime_7 = value;
	}

	inline static int32_t get_offset_of_rewindCallbackMode_8() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___rewindCallbackMode_8)); }
	inline int32_t get_rewindCallbackMode_8() const { return ___rewindCallbackMode_8; }
	inline int32_t* get_address_of_rewindCallbackMode_8() { return &___rewindCallbackMode_8; }
	inline void set_rewindCallbackMode_8(int32_t value)
	{
		___rewindCallbackMode_8 = value;
	}

	inline static int32_t get_offset_of__logBehaviour_9() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____logBehaviour_9)); }
	inline int32_t get__logBehaviour_9() const { return ____logBehaviour_9; }
	inline int32_t* get_address_of__logBehaviour_9() { return &____logBehaviour_9; }
	inline void set__logBehaviour_9(int32_t value)
	{
		____logBehaviour_9 = value;
	}

	inline static int32_t get_offset_of_onWillLog_10() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___onWillLog_10)); }
	inline Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 * get_onWillLog_10() const { return ___onWillLog_10; }
	inline Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 ** get_address_of_onWillLog_10() { return &___onWillLog_10; }
	inline void set_onWillLog_10(Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 * value)
	{
		___onWillLog_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWillLog_10), (void*)value);
	}

	inline static int32_t get_offset_of_drawGizmos_11() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___drawGizmos_11)); }
	inline bool get_drawGizmos_11() const { return ___drawGizmos_11; }
	inline bool* get_address_of_drawGizmos_11() { return &___drawGizmos_11; }
	inline void set_drawGizmos_11(bool value)
	{
		___drawGizmos_11 = value;
	}

	inline static int32_t get_offset_of_debugMode_12() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___debugMode_12)); }
	inline bool get_debugMode_12() const { return ___debugMode_12; }
	inline bool* get_address_of_debugMode_12() { return &___debugMode_12; }
	inline void set_debugMode_12(bool value)
	{
		___debugMode_12 = value;
	}

	inline static int32_t get_offset_of__fooDebugStoreTargetId_13() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____fooDebugStoreTargetId_13)); }
	inline bool get__fooDebugStoreTargetId_13() const { return ____fooDebugStoreTargetId_13; }
	inline bool* get_address_of__fooDebugStoreTargetId_13() { return &____fooDebugStoreTargetId_13; }
	inline void set__fooDebugStoreTargetId_13(bool value)
	{
		____fooDebugStoreTargetId_13 = value;
	}

	inline static int32_t get_offset_of_defaultUpdateType_14() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultUpdateType_14)); }
	inline int32_t get_defaultUpdateType_14() const { return ___defaultUpdateType_14; }
	inline int32_t* get_address_of_defaultUpdateType_14() { return &___defaultUpdateType_14; }
	inline void set_defaultUpdateType_14(int32_t value)
	{
		___defaultUpdateType_14 = value;
	}

	inline static int32_t get_offset_of_defaultTimeScaleIndependent_15() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultTimeScaleIndependent_15)); }
	inline bool get_defaultTimeScaleIndependent_15() const { return ___defaultTimeScaleIndependent_15; }
	inline bool* get_address_of_defaultTimeScaleIndependent_15() { return &___defaultTimeScaleIndependent_15; }
	inline void set_defaultTimeScaleIndependent_15(bool value)
	{
		___defaultTimeScaleIndependent_15 = value;
	}

	inline static int32_t get_offset_of_defaultAutoPlay_16() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultAutoPlay_16)); }
	inline int32_t get_defaultAutoPlay_16() const { return ___defaultAutoPlay_16; }
	inline int32_t* get_address_of_defaultAutoPlay_16() { return &___defaultAutoPlay_16; }
	inline void set_defaultAutoPlay_16(int32_t value)
	{
		___defaultAutoPlay_16 = value;
	}

	inline static int32_t get_offset_of_defaultAutoKill_17() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultAutoKill_17)); }
	inline bool get_defaultAutoKill_17() const { return ___defaultAutoKill_17; }
	inline bool* get_address_of_defaultAutoKill_17() { return &___defaultAutoKill_17; }
	inline void set_defaultAutoKill_17(bool value)
	{
		___defaultAutoKill_17 = value;
	}

	inline static int32_t get_offset_of_defaultLoopType_18() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultLoopType_18)); }
	inline int32_t get_defaultLoopType_18() const { return ___defaultLoopType_18; }
	inline int32_t* get_address_of_defaultLoopType_18() { return &___defaultLoopType_18; }
	inline void set_defaultLoopType_18(int32_t value)
	{
		___defaultLoopType_18 = value;
	}

	inline static int32_t get_offset_of_defaultRecyclable_19() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultRecyclable_19)); }
	inline bool get_defaultRecyclable_19() const { return ___defaultRecyclable_19; }
	inline bool* get_address_of_defaultRecyclable_19() { return &___defaultRecyclable_19; }
	inline void set_defaultRecyclable_19(bool value)
	{
		___defaultRecyclable_19 = value;
	}

	inline static int32_t get_offset_of_defaultEaseType_20() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultEaseType_20)); }
	inline int32_t get_defaultEaseType_20() const { return ___defaultEaseType_20; }
	inline int32_t* get_address_of_defaultEaseType_20() { return &___defaultEaseType_20; }
	inline void set_defaultEaseType_20(int32_t value)
	{
		___defaultEaseType_20 = value;
	}

	inline static int32_t get_offset_of_defaultEaseOvershootOrAmplitude_21() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultEaseOvershootOrAmplitude_21)); }
	inline float get_defaultEaseOvershootOrAmplitude_21() const { return ___defaultEaseOvershootOrAmplitude_21; }
	inline float* get_address_of_defaultEaseOvershootOrAmplitude_21() { return &___defaultEaseOvershootOrAmplitude_21; }
	inline void set_defaultEaseOvershootOrAmplitude_21(float value)
	{
		___defaultEaseOvershootOrAmplitude_21 = value;
	}

	inline static int32_t get_offset_of_defaultEasePeriod_22() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultEasePeriod_22)); }
	inline float get_defaultEasePeriod_22() const { return ___defaultEasePeriod_22; }
	inline float* get_address_of_defaultEasePeriod_22() { return &___defaultEasePeriod_22; }
	inline void set_defaultEasePeriod_22(float value)
	{
		___defaultEasePeriod_22 = value;
	}

	inline static int32_t get_offset_of_instance_23() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___instance_23)); }
	inline DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 * get_instance_23() const { return ___instance_23; }
	inline DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 ** get_address_of_instance_23() { return &___instance_23; }
	inline void set_instance_23(DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 * value)
	{
		___instance_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_23), (void*)value);
	}

	inline static int32_t get_offset_of__foo_isQuitting_24() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____foo_isQuitting_24)); }
	inline bool get__foo_isQuitting_24() const { return ____foo_isQuitting_24; }
	inline bool* get_address_of__foo_isQuitting_24() { return &____foo_isQuitting_24; }
	inline void set__foo_isQuitting_24(bool value)
	{
		____foo_isQuitting_24 = value;
	}

	inline static int32_t get_offset_of_maxActiveTweenersReached_25() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___maxActiveTweenersReached_25)); }
	inline int32_t get_maxActiveTweenersReached_25() const { return ___maxActiveTweenersReached_25; }
	inline int32_t* get_address_of_maxActiveTweenersReached_25() { return &___maxActiveTweenersReached_25; }
	inline void set_maxActiveTweenersReached_25(int32_t value)
	{
		___maxActiveTweenersReached_25 = value;
	}

	inline static int32_t get_offset_of_maxActiveSequencesReached_26() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___maxActiveSequencesReached_26)); }
	inline int32_t get_maxActiveSequencesReached_26() const { return ___maxActiveSequencesReached_26; }
	inline int32_t* get_address_of_maxActiveSequencesReached_26() { return &___maxActiveSequencesReached_26; }
	inline void set_maxActiveSequencesReached_26(int32_t value)
	{
		___maxActiveSequencesReached_26 = value;
	}

	inline static int32_t get_offset_of_safeModeReport_27() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___safeModeReport_27)); }
	inline SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC  get_safeModeReport_27() const { return ___safeModeReport_27; }
	inline SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC * get_address_of_safeModeReport_27() { return &___safeModeReport_27; }
	inline void set_safeModeReport_27(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC  value)
	{
		___safeModeReport_27 = value;
	}

	inline static int32_t get_offset_of_GizmosDelegates_28() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___GizmosDelegates_28)); }
	inline List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 * get_GizmosDelegates_28() const { return ___GizmosDelegates_28; }
	inline List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 ** get_address_of_GizmosDelegates_28() { return &___GizmosDelegates_28; }
	inline void set_GizmosDelegates_28(List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 * value)
	{
		___GizmosDelegates_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GizmosDelegates_28), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_29() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___initialized_29)); }
	inline bool get_initialized_29() const { return ___initialized_29; }
	inline bool* get_address_of_initialized_29() { return &___initialized_29; }
	inline void set_initialized_29(bool value)
	{
		___initialized_29 = value;
	}

	inline static int32_t get_offset_of__isQuittingFrame_30() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____isQuittingFrame_30)); }
	inline int32_t get__isQuittingFrame_30() const { return ____isQuittingFrame_30; }
	inline int32_t* get_address_of__isQuittingFrame_30() { return &____isQuittingFrame_30; }
	inline void set__isQuittingFrame_30(int32_t value)
	{
		____isQuittingFrame_30 = value;
	}
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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


// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC  : public MulticastDelegate_t
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


// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
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


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___startValue_57)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_startValue_57() const { return ___startValue_57; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___endValue_58)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_endValue_58() const { return ___endValue_58; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___changeValue_59)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___getter_61)); }
	inline DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___setter_62)); }
	inline DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  m_Items[1];

public:
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD3C172E348082DAA38034A7BFC5251A40A96D632  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  m_Items[1];

public:
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t19C714E802975CC32D4BD74AE5A32816E1352D0A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  m_Items[1];

public:
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
// System.Resources.ResourceLocator[]
struct ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  m_Items[1];

public:
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Resources.ResourceLocator>[]
struct EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  m_Items[1];

public:
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____value_0), (void*)NULL);
		#endif
	}
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____value_0), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,System.Object>[]
struct EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31  m_Items[1];

public:
	inline Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t8E7896C112810E7B3FD1419DDAC87B62F5549A31  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>[]
struct EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99  m_Items[1];

public:
	inline Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA2F747A511B65CEC54DAB28F6273EE844D053E99  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475_gshared (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 * __this, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7_gshared (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 * __this, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m35046DC7633EC3609130A1EE802B6B44F8EE2E41_gshared (Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934 * __this, Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m714DA4303AE7B7D39303A6CC5F3BCF02CD0AE451_gshared (Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3 * __this, Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * ___dictionary0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void DG.Tweening.Tweener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener__ctor_m48B4AF3E51DFEAED312F4875F09EE9B7E41248D7 (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogError(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D (RuntimeObject * ___message0, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_Reset_mAADD5CF8D940FB674B8E3914E16230599FB7A957 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.Plugins.Options.VectorOptions::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorOptions_Reset_mF46B9B9771CBDA05DD32C4396C611D9D8E86BCD4 (VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * __this, const RuntimeMethod* method);
// System.Single DG.Tweening.Tween::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_isRelative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.Debugger::ShouldLogSafeModeCapturedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A (const RuntimeMethod* method);
// System.Reflection.MethodBase System.Exception::get_TargetSite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t * Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247 (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogSafeModeCapturedError(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C (RuntimeObject * ___message0, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.SafeModeReport::Add(DG.Tweening.Core.SafeModeReport/SafeModeReportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7 (SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * ___call0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36 (Type_t * ___objectType0, String_t* ___functionName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7 (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F *, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773 (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475 (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 * __this, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 *, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 *, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7 (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 * __this, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 *, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m35046DC7633EC3609130A1EE802B6B44F8EE2E41 (Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934 * __this, Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934 *, Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *, const RuntimeMethod*))Enumerator__ctor_m35046DC7633EC3609130A1EE802B6B44F8EE2E41_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
inline void Enumerator__ctor_m714DA4303AE7B7D39303A6CC5F3BCF02CD0AE451 (Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3 * __this, Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3 *, Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *, const RuntimeMethod*))Enumerator__ctor_m714DA4303AE7B7D39303A6CC5F3BCF02CD0AE451_gshared)(__this, ___dictionary0, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerCore_3__ctor_mB137B3A25CC15E7E3B6D75E888A57C3A3487693C_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		__this->set__colorType_65(L_1);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		__this->set__color32Type_66(L_3);
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this);
		Tweener__ctor_m48B4AF3E51DFEAED312F4875F09EE9B7E41248D7((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->set_typeofT1_36(L_5);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->set_typeofT2_37(L_7);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->set_typeofTPlugOptions_38(L_9);
		((ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76 *)__this)->set_tweenType_0(0);
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this);
		VirtActionInvoker0::Invoke(4 /* System.Void DG.Tweening.Tween::Reset() */, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this);
		return;
	}
}
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeStartValue(System.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenerCore_3_ChangeStartValue_m9ACEFFBCA8C225F2A489CAB5BBE1D55BA54B6833_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, RuntimeObject * ___newStartValue0, float ___newDuration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2187048809B10555138F2F9BB58E93E20F1B49);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	Type_t * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Type_t * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	Type_t * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Type_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	{
		bool L_0 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_isSequenced_40();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}

IL_0015:
	{
		RuntimeObject * L_1 = ___newStartValue0;
		NullCheck((RuntimeObject *)L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_1, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		NullCheck((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this);
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Type_t *, bool*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Type_t *)L_3, (bool*)(bool*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (L_4)
		{
			goto IL_0077;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralEC2187048809B10555138F2F9BB58E93E20F1B49);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2187048809B10555138F2F9BB58E93E20F1B49);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_6;
		Type_t * L_8 = V_0;
		Type_t * L_9 = (Type_t *)L_8;
		G_B4_0 = L_9;
		G_B4_1 = 1;
		G_B4_2 = L_7;
		G_B4_3 = L_7;
		if (L_9)
		{
			G_B5_0 = L_9;
			G_B5_1 = 1;
			G_B5_2 = L_7;
			G_B5_3 = L_7;
			goto IL_003f;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0044;
	}

IL_003f:
	{
		NullCheck((RuntimeObject *)G_B5_0);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B5_0);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0044:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B6_3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_11;
		Type_t * L_13 = (Type_t *)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_typeofT2_37();
		Type_t * L_14 = (Type_t *)L_13;
		G_B7_0 = L_14;
		G_B7_1 = 3;
		G_B7_2 = L_12;
		G_B7_3 = L_12;
		if (L_14)
		{
			G_B8_0 = L_14;
			G_B8_1 = 3;
			G_B8_2 = L_12;
			G_B8_3 = L_12;
			goto IL_005c;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject *)G_B8_0);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B8_0);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0061:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B9_3;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_16, /*hidden argument*/NULL);
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)L_17, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}

IL_0077:
	{
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		RuntimeObject * L_19 = ___newStartValue0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )((*(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)UnBox(L_19, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_20;
		RuntimeObject * L_22 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_21);
		float L_23 = ___newDuration1;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_24;
		L_24 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (float)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_24;
	}

IL_0097:
	{
		RuntimeObject * L_25 = ___newStartValue0;
		float L_26 = ___newDuration1;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_27;
		L_27 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_25, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (float)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_27;
	}
}
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeEndValue(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenerCore_3_ChangeEndValue_m910D0757ADCEF4FBC55C2B934B6F3FEAF1C0E159_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, RuntimeObject * ___newEndValue0, bool ___snapStartValue1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___newEndValue0;
		bool L_1 = ___snapStartValue1;
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_2;
		L_2 = VirtFuncInvoker3< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, RuntimeObject *, float, bool >::Invoke(10 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Single,System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this, (RuntimeObject *)L_0, (float)(-1.0f), (bool)L_1);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_2;
	}
}
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeEndValue(System.Object,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenerCore_3_ChangeEndValue_m1494E3050629FE0F6535E1B9AAB7960FEB0D0F5B_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, RuntimeObject * ___newEndValue0, float ___newDuration1, bool ___snapStartValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCE1874A8D7E75C725B6E18E8F5F2D5B78FCE9);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	Type_t * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Type_t * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	Type_t * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Type_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	{
		bool L_0 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_isSequenced_40();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}

IL_0015:
	{
		RuntimeObject * L_1 = ___newEndValue0;
		NullCheck((RuntimeObject *)L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_1, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		NullCheck((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this);
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Type_t *, bool*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Type_t *)L_3, (bool*)(bool*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (L_4)
		{
			goto IL_0077;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD6DCE1874A8D7E75C725B6E18E8F5F2D5B78FCE9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD6DCE1874A8D7E75C725B6E18E8F5F2D5B78FCE9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_6;
		Type_t * L_8 = V_0;
		Type_t * L_9 = (Type_t *)L_8;
		G_B4_0 = L_9;
		G_B4_1 = 1;
		G_B4_2 = L_7;
		G_B4_3 = L_7;
		if (L_9)
		{
			G_B5_0 = L_9;
			G_B5_1 = 1;
			G_B5_2 = L_7;
			G_B5_3 = L_7;
			goto IL_003f;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0044;
	}

IL_003f:
	{
		NullCheck((RuntimeObject *)G_B5_0);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B5_0);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0044:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B6_3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_11;
		Type_t * L_13 = (Type_t *)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_typeofT2_37();
		Type_t * L_14 = (Type_t *)L_13;
		G_B7_0 = L_14;
		G_B7_1 = 3;
		G_B7_2 = L_12;
		G_B7_3 = L_12;
		if (L_14)
		{
			G_B8_0 = L_14;
			G_B8_1 = 3;
			G_B8_2 = L_12;
			G_B8_3 = L_12;
			goto IL_005c;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject *)G_B8_0);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B8_0);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0061:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B9_3;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_16, /*hidden argument*/NULL);
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)L_17, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}

IL_0077:
	{
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0098;
		}
	}
	{
		RuntimeObject * L_19 = ___newEndValue0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )((*(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)UnBox(L_19, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_20;
		RuntimeObject * L_22 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_21);
		float L_23 = ___newDuration1;
		bool L_24 = ___snapStartValue2;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_25;
		L_25 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (float)L_23, (bool)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_25;
	}

IL_0098:
	{
		RuntimeObject * L_26 = ___newEndValue0;
		float L_27 = ___newDuration1;
		bool L_28 = ___snapStartValue2;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_29;
		L_29 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_26, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (float)L_27, (bool)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_29;
	}
}
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeValues(System.Object,System.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenerCore_3_ChangeValues_m74F366DF42D096EDA2DE98E4DD734980022EAF62_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, RuntimeObject * ___newStartValue0, RuntimeObject * ___newEndValue1, float ___newDuration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3494960139156C577EACAE136B19BE516523C267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	Type_t * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Type_t * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	Type_t * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Type_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	Type_t * G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	Type_t * G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	Type_t * G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	Type_t * G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	{
		bool L_0 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_isSequenced_40();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}

IL_0015:
	{
		RuntimeObject * L_1 = ___newStartValue0;
		NullCheck((RuntimeObject *)L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_1, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_2;
		RuntimeObject * L_3 = ___newEndValue1;
		NullCheck((RuntimeObject *)L_3);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_3, /*hidden argument*/NULL);
		V_1 = (Type_t *)L_4;
		Type_t * L_5 = V_0;
		NullCheck((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this);
		bool L_6;
		L_6 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Type_t *, bool*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Type_t *)L_5, (bool*)(bool*)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (L_6)
		{
			goto IL_007e;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3494960139156C577EACAE136B19BE516523C267);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3494960139156C577EACAE136B19BE516523C267);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		Type_t * L_10 = V_0;
		Type_t * L_11 = (Type_t *)L_10;
		G_B4_0 = L_11;
		G_B4_1 = 1;
		G_B4_2 = L_9;
		G_B4_3 = L_9;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = 1;
			G_B5_2 = L_9;
			G_B5_3 = L_9;
			goto IL_0046;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_004b;
	}

IL_0046:
	{
		NullCheck((RuntimeObject *)G_B5_0);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B5_0);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_004b:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_13;
		Type_t * L_15 = (Type_t *)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_typeofT2_37();
		Type_t * L_16 = (Type_t *)L_15;
		G_B7_0 = L_16;
		G_B7_1 = 3;
		G_B7_2 = L_14;
		G_B7_3 = L_14;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = 3;
			G_B8_2 = L_14;
			G_B8_3 = L_14;
			goto IL_0063;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0068;
	}

IL_0063:
	{
		NullCheck((RuntimeObject *)G_B8_0);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B8_0);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0068:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B9_3;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_19;
		L_19 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_18, /*hidden argument*/NULL);
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)L_19, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}

IL_007e:
	{
		Type_t * L_20 = V_1;
		NullCheck((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this);
		bool L_21;
		L_21 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Type_t *, bool*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Type_t *)L_20, (bool*)(bool*)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (L_21)
		{
			goto IL_00d9;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral3494960139156C577EACAE136B19BE516523C267);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3494960139156C577EACAE136B19BE516523C267);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_23;
		Type_t * L_25 = V_1;
		Type_t * L_26 = (Type_t *)L_25;
		G_B12_0 = L_26;
		G_B12_1 = 1;
		G_B12_2 = L_24;
		G_B12_3 = L_24;
		if (L_26)
		{
			G_B13_0 = L_26;
			G_B13_1 = 1;
			G_B13_2 = L_24;
			G_B13_3 = L_24;
			goto IL_00a1;
		}
	}
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B12_1;
		G_B14_2 = G_B12_2;
		G_B14_3 = G_B12_3;
		goto IL_00a6;
	}

IL_00a1:
	{
		NullCheck((RuntimeObject *)G_B13_0);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B13_0);
		G_B14_0 = L_27;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}

IL_00a6:
	{
		NullCheck(G_B14_2);
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B14_3;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_28;
		Type_t * L_30 = (Type_t *)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_typeofT2_37();
		Type_t * L_31 = (Type_t *)L_30;
		G_B15_0 = L_31;
		G_B15_1 = 3;
		G_B15_2 = L_29;
		G_B15_3 = L_29;
		if (L_31)
		{
			G_B16_0 = L_31;
			G_B16_1 = 3;
			G_B16_2 = L_29;
			G_B16_3 = L_29;
			goto IL_00be;
		}
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_00c3;
	}

IL_00be:
	{
		NullCheck((RuntimeObject *)G_B16_0);
		String_t* L_32;
		L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B16_0);
		G_B17_0 = L_32;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_00c3:
	{
		NullCheck(G_B17_2);
		ArrayElementTypeCheck (G_B17_2, G_B17_0);
		(G_B17_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B17_3;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_34;
		L_34 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_33, /*hidden argument*/NULL);
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)L_34, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}

IL_00d9:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject * L_36 = ___newStartValue0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		L_37 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )((*(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)UnBox(L_36, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_37;
		RuntimeObject * L_39 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_38);
		RuntimeObject * L_40 = ___newEndValue1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )((*(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D *)UnBox(L_40, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_41;
		RuntimeObject * L_43 = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &L_42);
		float L_44 = ___newDuration2;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_45;
		L_45 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_39, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_43, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (float)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_45;
	}

IL_010e:
	{
		RuntimeObject * L_46 = ___newStartValue0;
		RuntimeObject * L_47 = ___newEndValue1;
		float L_48 = ___newDuration2;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_49;
		L_49 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_46, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_47, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))))), (float)L_48, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_49;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeStartValue(T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * TweenerCore_3_ChangeStartValue_mC1152666D3CE2C1ADB10D37A61AA105A05EE2147_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newStartValue0, float ___newDuration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_isSequenced_40();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this;
	}

IL_0015:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___newStartValue0;
		float L_2 = ___newDuration1;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_3;
		L_3 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_3;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeEndValue(T2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * TweenerCore_3_ChangeEndValue_m9B0F4FA2B5C95191701D4931F0EB9E0A1286686D_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newEndValue0, bool ___snapStartValue1, const RuntimeMethod* method)
{
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___newEndValue0;
		bool L_1 = ___snapStartValue1;
		NullCheck((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_2;
		L_2 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0, (float)(-1.0f), (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_2;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeEndValue(T2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * TweenerCore_3_ChangeEndValue_mA8473E4F6F9CF9B96A6DAA09C7BE08E22A672C10_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newEndValue0, float ___newDuration1, bool ___snapStartValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_isSequenced_40();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this;
	}

IL_0015:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___newEndValue0;
		float L_2 = ___newDuration1;
		bool L_3 = ___snapStartValue2;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_4;
		L_4 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, (float)L_2, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_4;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ChangeValues(T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * TweenerCore_3_ChangeValues_mD12EB0563A78E7739287E851776DBF58CADBA124_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newStartValue0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newEndValue1, float ___newDuration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_isSequenced_40();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this;
	}

IL_0015:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___newStartValue0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___newEndValue1;
		float L_3 = ___newDuration2;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_4;
		L_4 = ((  TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_2, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_4;
	}
}
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetFrom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenerCore_3_SetFrom_mE07925657355E12DBE8325A8812A57C2CFA43EA5_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, bool ___relative0, const RuntimeMethod* method)
{
	{
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_0 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)__this->get_tweenPlugin_63();
		bool L_1 = ___relative0;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_0);
		VirtActionInvoker2< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, bool >::Invoke(5 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetFrom(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Boolean) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_0, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (bool)L_1);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this)->set_hasManuallySetStartValue_55((bool)1);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}
}
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetFrom(T2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenerCore_3_SetFrom_m43BD8AEE6BF86A9AE1EC2A1649AF6C92D7D6BF30_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___fromValue0, bool ___setImmediately1, bool ___relative2, const RuntimeMethod* method)
{
	{
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_0 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)__this->get_tweenPlugin_63();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___fromValue0;
		bool L_2 = ___setImmediately1;
		bool L_3 = ___relative2;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_0);
		VirtActionInvoker4< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , bool, bool >::Invoke(6 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetFrom(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Boolean,System.Boolean) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_0, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1, (bool)L_2, (bool)L_3);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this)->set_hasManuallySetStartValue_55((bool)1);
		return (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this;
	}
}
// System.Void DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerCore_3_Reset_m2A9CF3D0F46A05059953C2216CA3AAD62B016254_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this);
		Tween_Reset_mAADD5CF8D940FB674B8E3914E16230599FB7A957((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_0 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)__this->get_tweenPlugin_63();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_1 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)__this->get_tweenPlugin_63();
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_1);
		VirtActionInvoker1< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * >::Invoke(4 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::Reset(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_1, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this);
	}

IL_001a:
	{
		VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * L_2 = (VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB *)__this->get_address_of_plugOptions_60();
		VectorOptions_Reset_mF46B9B9771CBDA05DD32C4396C611D9D8E86BCD4((VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB *)(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB *)L_2, /*hidden argument*/NULL);
		__this->set_getter_61((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)NULL);
		__this->set_setter_62((DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 *)NULL);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this)->set_hasManuallySetStartValue_55((bool)0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)__this)->set_isFromAllowed_56((bool)1);
		return;
	}
}
// System.Boolean DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_Validate_mECC616FD7EC1EC54D45C2C3C70A5BD17F22D6E46_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_0 = (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)__this->get_getter_61();
		NullCheck((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{ // begin catch(System.Object)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	} // end catch (depth: 1)

IL_0013:
	{
		return (bool)1;
	}

IL_0015:
	{
		bool L_2 = V_0;
		return (bool)L_2;
	}
}
// System.Boolean DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ValidateChangeValueType(System.Type,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_ValidateChangeValueType_m63AFAC877B9B393B61809E7BEB49614F2E973234_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, Type_t * ___newType0, bool* ___isColor32ToColor1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___newType0;
		Type_t * L_1 = (Type_t *)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_typeofT2_37();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		bool* L_2 = ___isColor32ToColor1;
		*((int8_t*)L_2) = (int8_t)0;
		return (bool)1;
	}

IL_000e:
	{
		Type_t * L_3 = (Type_t *)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_typeofT2_37();
		Type_t * L_4 = (Type_t *)__this->get__colorType_65();
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_002a;
		}
	}
	{
		Type_t * L_5 = ___newType0;
		Type_t * L_6 = (Type_t *)__this->get__color32Type_66();
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))))
		{
			goto IL_002a;
		}
	}
	{
		bool* L_7 = ___isColor32ToColor1;
		*((int8_t*)L_7) = (int8_t)1;
		return (bool)1;
	}

IL_002a:
	{
		bool* L_8 = ___isColor32ToColor1;
		*((int8_t*)L_8) = (int8_t)0;
		return (bool)0;
	}
}
// System.Single DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::UpdateDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenerCore_3_UpdateDelay_mBA0DA19A5C7E4B0D8CD0737DC391A22F7829EA3D_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, float ___elapsed0, const RuntimeMethod* method)
{
	{
		float L_0 = ___elapsed0;
		float L_1;
		L_1 = ((  float (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return (float)L_1;
	}
}
// System.Boolean DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::Startup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_Startup_m1A8E295870A56D57745DBCD9D91EDDB45927A1E3_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return (bool)L_0;
	}
}
// System.Boolean DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ApplyTween(System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode,DG.Tweening.Core.Enums.UpdateNotice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_ApplyTween_m3D4A6F8316087CA2500101C6B7F157BA4B47380A_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * __this, float ___prevPosition0, int32_t ___prevCompletedLoops1, int32_t ___newCompletedSteps2, bool ___useInversePosition3, int32_t ___updateMode4, int32_t ___updateNotice5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	float G_B5_0 = 0.0f;
	{
		bool L_0 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_isInverted_6();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = ___useInversePosition3;
		___useInversePosition3 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000f:
	{
		bool L_2 = ___useInversePosition3;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this);
		float L_3;
		L_3 = Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		G_B5_0 = L_3;
		goto IL_0028;
	}

IL_001b:
	{
		float L_4 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_duration_26();
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this);
		float L_5;
		L_5 = Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		G_B5_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
	}

IL_0028:
	{
		V_0 = (float)G_B5_0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_6 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_6)
		{
			goto IL_00a6;
		}
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_7 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)__this->get_tweenPlugin_63();
		VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  L_8 = (VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB )__this->get_plugOptions_60();
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this);
		bool L_9;
		L_9 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_10 = (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)__this->get_getter_61();
		DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * L_11 = (DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 *)__this->get_setter_62();
		float L_12 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_startValue_57();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_changeValue_59();
		float L_15 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_duration_26();
		bool L_16 = ___useInversePosition3;
		int32_t L_17 = ___updateNotice5;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_7);
		VirtActionInvoker11< VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB , Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, bool, DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *, DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 *, float, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, bool, int32_t >::Invoke(11 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::EvaluateAndApply(TPlugOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,System.Single,T2,T2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_7, (VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB )L_8, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, (bool)L_9, (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_10, (DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 *)L_11, (float)L_12, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_13, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_14, (float)L_15, (bool)L_16, (int32_t)L_17);
		goto IL_00e1;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{ // begin catch(System.Exception)
		{
			V_1 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_18;
			L_18 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0097;
			}
		}

IL_0075:
		{
			Exception_t * L_19 = V_1;
			NullCheck((Exception_t *)L_19);
			MethodBase_t * L_20;
			L_20 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_19, /*hidden argument*/NULL);
			Exception_t * L_21 = V_1;
			NullCheck((Exception_t *)L_21);
			String_t* L_22;
			L_22 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_21);
			Exception_t * L_23 = V_1;
			NullCheck((Exception_t *)L_23);
			String_t* L_24;
			L_24 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, (Exception_t *)L_23);
			String_t* L_25;
			L_25 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F)), (RuntimeObject *)L_20, (RuntimeObject *)L_22, (RuntimeObject *)L_24, /*hidden argument*/NULL);
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_25, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		}

IL_0097:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)1, /*hidden argument*/NULL);
			V_2 = (bool)1;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e3;
		}
	} // end catch (depth: 1)

IL_00a6:
	{
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_26 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)__this->get_tweenPlugin_63();
		VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  L_27 = (VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB )__this->get_plugOptions_60();
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this);
		bool L_28;
		L_28 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, /*hidden argument*/NULL);
		DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_29 = (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)__this->get_getter_61();
		DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * L_30 = (DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 *)__this->get_setter_62();
		float L_31 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_32 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_startValue_57();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_33 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_changeValue_59();
		float L_34 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this)->get_duration_26();
		bool L_35 = ___useInversePosition3;
		int32_t L_36 = ___updateNotice5;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_26);
		VirtActionInvoker11< VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB , Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *, bool, DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *, DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 *, float, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , float, bool, int32_t >::Invoke(11 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::EvaluateAndApply(TPlugOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,System.Single,T2,T2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_26, (VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB )L_27, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)__this, (bool)L_28, (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_29, (DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 *)L_30, (float)L_31, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_32, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_33, (float)L_34, (bool)L_35, (int32_t)L_36);
	}

IL_00e1:
	{
		return (bool)0;
	}

IL_00e3:
	{
		bool L_37 = V_2;
		return (bool)L_37;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m0251CCA621F83D757C11A2CC5026DDA24A088866_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mF4A4312C4C5D7EC10F1D0AC32360D20951F3E276_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mADA530A569FA02CEE365550C0B1364847F902DAC_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5529C0F3FFF9E3B541FD5C0239931C2575237973_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mEC0F63D2F925ADACDD0D09B87C83E28BF13DDD5F_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m769BC6D74C17069B97AA096698E2A1072F478C20_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m6E8C5B9F56F1C10C6DF482F1DC1E3CFFBC5FF5F5_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m50A0084C1E73C78361F32170CF616D08681D7380_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m7320ACEFEBD2FA7D50C947BE9CEC62DAE429A329_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m7C92F18128CD7BC314EECF7D6FBE3F0D99B87597_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mF6CE051EB914150BEB88244003A263509CD42FDE_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mA4ADF56200888B2A297C5913DA00A89F11BD87C5_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m16F774E0F869579B89A02E33198957BF2B362763_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mA6A81E3B39C49A2A483B7EC5A7FC6F305C84BDCD_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mCC90A51C5C963477EEE746E3D3856AEBE78FB78A_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mEAA1361DECE0C4E7F731346AD77D6999664527CA_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m936D976DB36E14668A40522AADE9283923079869_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF26A01600BF18A3051372F4AA91E74AD1F557A12_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m8C06062E095F203A1291F3CAB67A40EB89DF3712_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mF0799ACC3D5BF95C48D11D03FFEDE24F53C00475_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m02ED2BCB3DB958F9E000563E77EC2BCA9E5659C4_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mC190ED9AED96E2FE7A68F86FF0DE1AF6B3F8C270_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m61A3E25D9705ECD97BB9634081BFE1F51A11BB72_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4915ABA44B9B53926A3A694CDF011EF8C7345CD6_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m5AA1F690449F2F9671E0B94633F97A1FAD7E3ED1_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mDCEEB031BDBB99CF9F4FD8C66C8764E7145F233E_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m490BFF59EA4C5D89B467DFF2EBB8294B4D2B625D_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mBE8D06B5C36F3C91DE37A9D965AEB4B499832596_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mEA01486964659C4609BA96B58825B2E9B851FE10_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m66976206F24D939E2132FAB88213AB25CBC0AEED_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mB86D6414884FDC1E91052C11EDE9D2D76F7ECA4F_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m6F58BD0703FA3C41CC7D6F3230771D8B1DF6CEC4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m88F46BFD94198E51067773C687AF1EA4E56BA6C9_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m61C295D3CAE75DAA73F736514C0F8305F21BF4D4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m77B1860A1697D777A50B461899187B1F788FED67_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m33FE7C261E18C40BF698970133F4C4AAE221453C_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m340C3A0B9B1D3D5617E73EFF0AECC0D26BA2434B_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mD613D87947DBD4EAA4AFAB2EAA52C64E61B53393_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m4737379F2E23EA022A5577626A9B77BC652C6C81_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m85C211C6A8878EB2C829C518B2E2825592A6BAD2_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_2 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_mB08C5D84E6AF7F4ED076E863ABC8924F3683531F_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_0 = ___action0;
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_1 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)((InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 * L_6 = V_2;
		bool L_7 = ___arg00;
		NullCheck((InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_6);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1) */, (InvokableCall_1_t3C3B0B0B930948588A189C18F589C65343D49493 *)L_6, (bool)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		bool L_21 = ___arg00;
		bool L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m142F8EC4F0B95BE4817D1B8BAB5311BF82761B7B_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3324210C9047391B2DBB94831C131C6111A43128_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m87D815FEE9AA0E17B7B827751412B54C5BB32B60_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m5835ECDAF9B756B926230F6D6C9E10F55C02E581_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_2 = (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m8A50FC09BAF3824EA8CE8A51E5EE425D06B1CA60_gshared (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE * L_0 = ___action0;
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_1 = (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *, UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tA672F8DCDC82A4F3E991BC74F9F2796AD16679FE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m2C3D89FA16884071FFCCB2A7CE61A84C80F170F5_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)((InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D * L_6 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___arg00;
		NullCheck((InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)L_6);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(T1) */, (InvokableCall_1_t62804E45EDA037DAA4B294959796F919EDEBA47D *)L_6, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = ___arg00;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m883CB9322DD397C11303E11CE1D75DE4DAB7A2A1_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m9F6A762AD5938FB4E433C68A6CAE0E064358B79E_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m042F0FF8A168ACCAC76DFF33398FF72BE89A13D4_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___action0;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_1 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		NullCheck((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mAEF284CEE451CDF002B423EAD1920E36A12A9CF0_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m7B52283F3C9BA5BFFADCEA8C22119BD2DEF4FD39_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m38113512C8395BCA851A99D1A947C8C56FF66C45_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___action0;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_1 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		NullCheck((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_22 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_26 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3EA4FA20F6DE6E6FC738060875193A99E19AD1C3_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m0622108A7CD81D5EF2A59382C769DC733EF3530F_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m67C17B30C677E6D59E0477957BC1B3645C39EE0C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_2 = (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m40926337FC4AF792D319B9B4879DB2A5A8F723BC_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_0 = ___action0;
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_1 = (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1DA4CADD93DA296D31E00A263219A99A9E0AFB0E_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, float ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)((InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 * L_6 = V_2;
		float L_7 = ___arg00;
		NullCheck((InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)L_6);
		VirtActionInvoker1< float >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1) */, (InvokableCall_1_t13EC6185325262950E00B739E096E4B705195690 *)L_6, (float)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		float L_21 = ___arg00;
		float L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m69EA39B3DD1F41AAE09CE783C7D03AF61BA91E6B_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1;
		L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m4D54629C431821D2153C7E23584EDD379051B9DE_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3;
		L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m8C7040459D38C21B6CA252658570FF207DFD5634_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6;
		L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m1443B62E96235B67C0275343AE1E00E5F456E82F_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_2 = (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m46723BEB228E805D70546FE0076C2F7B923334BE_gshared (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 * L_0 = ___action0;
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_1 = (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *, UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_tB9CC1382F6773F1D7AE2D9938D64C8CE4034F5B0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB4A40E66B8302949068CCFA2E3E1C15F625EA1CD_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0;
		L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3;
		L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)((InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF * L_6 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___arg00;
		NullCheck((InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)L_6);
		VirtActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(T1) */, (InvokableCall_1_t194FF118E5E42BBA25E068AB6C4BD62FAF2A4BBF *)L_6, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10;
		L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16;
		L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = ___arg00;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mF60EF62AFB15A35F2DD69476A73537390423F21A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m9DEDA5637D671AC58D580000A01B4B335B9923F0_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9;
		L_9 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return (MethodInfo_t *)L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_2_GetDelegate_m8F25D40B052080876D1C4762AA6E7E6703D0249E_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 * L_2 = (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m4B93C635FB8DB80244E4979D82F6F94941196483_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m28C35DB6F6DBCF1315EC5755FBA0B5DB80822DB7_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12;
		L_12 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return (MethodInfo_t *)L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_3_GetDelegate_m4D1CD01F37200B3D0525A100BCE71287EA769653_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * L_2 = (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_mAD32A45894B24DF8063BA635592B37EAEAB2C63A_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m18804249F2696D07B6E5723A86A95E2A98424E62_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15;
		L_15 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return (MethodInfo_t *)L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_4_GetDelegate_mCC9B16CF07EAAA26AE65B3BB31CFFC22031EE4A0_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD * L_2 = (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_3;
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m2C7529C40378EFA70389A8EB2979BED417C58772_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_m2C7529C40378EFA70389A8EB2979BED417C58772_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A((&L_1), (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_11 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m6171F01ABF1C5F39000A4AA3E89E7EC37E66CB83_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_14 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_16 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_17 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m0F6276D7AD48BD293B9E4274685242F3E26C8D8A_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mA97CFD92664C189ECE8A6DB8658912E2E59C4674_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEE9F60985A1A4843C8F4C72377361CABAED40607_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mEE9F60985A1A4843C8F4C72377361CABAED40607_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mE766A1F421AC1DC925D60E7A31C00B32F748FD32_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mE766A1F421AC1DC925D60E7A31C00B32F748FD32_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5D153A523B2CAC02D94C3106566E461B71638FA7_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5D153A523B2CAC02D94C3106566E461B71638FA7_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m56D50B8FE493854B8D0714ACD11F40E27AE0DE18_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9E614F4CFD02D00F2CAB9A856F284F38D1EF8AD8_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A((&L_1), (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_2 = (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mDDFD2317A55E70B3DB696012AFF982C7DF237866_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m0023AA61CB0CE57C4673F8E69FB53FDA6CFD901A((&L_1), (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  L_2 = (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_19 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF *)__this);
		((  void (*) (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_29 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_31 = (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_32 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mAEA9B429CCD061D9071F884CF70A1A9447CD55DE_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mC8EEA954A8BAFCF2EA9DD8B7122C8872E74FC3C8_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mC8EEA954A8BAFCF2EA9DD8B7122C8872E74FC3C8_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  ValueCollection_GetEnumerator_mE049A745DF2689CBA71F592F6FA146A4759D4176_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475((&L_1), (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var)));
	}

IL_002e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_11 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m8508843D0227197BF525C168816C23FA6E69E808_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_14 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_16 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_17 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m985BCA61A2A06A9168547247414618602BB457DC_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mD4867B2A2D8D73F3E6BD84BAA8CC3A42002090DE_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82BB88792868D7BCA61CDDA0BA67146A05ABB392_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m82BB88792868D7BCA61CDDA0BA67146A05ABB392_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8ED2FCE61DFF18D6BAF9B4677391089D56BB21CC_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m8ED2FCE61DFF18D6BAF9B4677391089D56BB21CC_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43A1E8E9B6E448F5109E63D2F9452D073E099F20_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43A1E8E9B6E448F5109E63D2F9452D073E099F20_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m5AE2691CA73C84474D879E6C0F8D98A623F05A42_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		int32_t L_1 = ___item0;
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m267B7F7412F5016D2F014656FFB50EBE8786E24D_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475((&L_1), (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_2 = (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mDEB78FB8CE3E70488BEA295553ACFE002E9AD324_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m923F611E2EFB07303EB41E434043CCC3048E0475((&L_1), (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712  L_2 = (Enumerator_tAB4C1E18CB59378941095470A59B0C0F817C1712 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_gshared (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_19 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 *)__this);
		((  void (*) (ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848 *)__this, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_29 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * L_31 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_32 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tBC4463B96C923135EDB5CFF91B7E15E4D1503D2A* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			int32_t L_42 = L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mE6FC58EE945BEF28890408E53EC5559037DD761A_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mAF1C70E689EC3530A6B82DC6E3E16CEDEEA2A60E_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mAF1C70E689EC3530A6B82DC6E3E16CEDEEA2A60E_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE((&L_1), (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_11 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m4CA310710CBE4DEEEB918B6C83A5F0D60E352956_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_14 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_16 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_17 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_mF19B1FB9B0DD226A0E7C38405ACB31C13FEC28AD_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m65D5625DA1C2FEAA9BD4DD90CA367F21C7A7C288_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m6516D9B3E6511E95D07372033B20FD1C1A1B01F5_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m6516D9B3E6511E95D07372033B20FD1C1A1B01F5_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7460FE265FDD1B034B1F2B80165B46E7CF2965BC_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7460FE265FDD1B034B1F2B80165B46E7CF2965BC_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5147E7E8DBDEA9A83A71421C6C9B848DFF03F282_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m5147E7E8DBDEA9A83A71421C6C9B848DFF03F282_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m61660CBF2AB0BFAFA98B73C17978FE9BFA9C5E9F_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mCC42FF1A9647D2CA97817F67BD44AFFE5394AF21_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE((&L_1), (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_2 = (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m883729DAC8F3537A33DE83D42778BD27F46839B7_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m3922E9CAEB4F1AD6B37B22B80500929D49025AFE((&L_1), (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  L_2 = (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_19 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 *)__this);
		((  void (*) (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_29 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_31 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_32 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m87F5F8030928B2B117EFD6CB60703D875884D5CB_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF03D64F567C6D69B0360E99FC446AF1FDC0ECD6A_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mF03D64F567C6D69B0360E99FC446AF1FDC0ECD6A_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  ValueCollection_GetEnumerator_m133ACECF2F504CF00C8DC7C1694E904FC002A47A_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7((&L_1), (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var)));
	}

IL_002e:
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_11 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mC7559BEFCDA91CB4D63DD80424BC6075B9C2EDA1_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_14 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_16 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_17 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_26 = (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_mDA6619EBB6B0BD3D75007074361B37FA352CD73F_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m55312B4F6D366B2C1E5C53559D445CE688B5EA29_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m5D72D827B600E6F821692279686EB2FAE565AEA4_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m5D72D827B600E6F821692279686EB2FAE565AEA4_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7A0F11CAFAA0F0AEFCDD965BE0B6430C090E40FA_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m7A0F11CAFAA0F0AEFCDD965BE0B6430C090E40FA_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m7958C3DD111888A05CAE6AD5FB08398B34DD8AD0_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m7958C3DD111888A05CAE6AD5FB08398B34DD8AD0_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m91F2E8C8141F53C4F789D6105EA3ED521822F4B0_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_1 = ___item0;
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m15D97F02928D7DDA88D4B9678E3E213E6A5DA8F6_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7((&L_1), (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_2 = (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m0B27E44A14428F86D9560A50C86D3BFCA448F04C_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_0 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m52AF37DA766B7CEA33346D5C4EA61934F09912A7((&L_1), (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8  L_2 = (Enumerator_t86FD2B0CBDF5C9DD655CBFE02E5C8A805968A4B8 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Resources.ResourceLocator>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_gshared (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_19 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*)((ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC *)__this);
		((  void (*) (ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC *, ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC *)__this, (ResourceLocatorU5BU5D_tE68C3EE72E3C812637D20321B4E5E9248C9FD093*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_29 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * L_31 = (Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_32 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t8BD20A960516C19031455119CBAC8AF88A610412* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_41 = (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11  L_42 = (ResourceLocator_t3D496606F94367D5D6B24DA9DC0A3B46E6B53B11 )L_41;
			RuntimeObject * L_43 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), &L_42);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_43);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_43);
		}

IL_00f7:
		{
			int32_t L_44 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_45 = V_4;
			int32_t L_46 = V_2;
			if ((((int32_t)L_45) < ((int32_t)L_46)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_47 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_47, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m82709EFB7B9786BAD796E1CF71FA3A35E8177927_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mB5B16EFFE8E91D04EBA70E5F13D23834BD9202B6_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_mB5B16EFFE8E91D04EBA70E5F13D23834BD9202B6_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934  ValueCollection_GetEnumerator_m8EEB3CEF4E99B213BBC047118E2E93DFCD533CE6_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_0 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m35046DC7633EC3609130A1EE802B6B44F8EE2E41((&L_1), (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mDBA7DCDF07C312FAA34E0CFD6A6976DFCC40EF3A_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mDBA7DCDF07C312FAA34E0CFD6A6976DFCC40EF3A_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mDBA7DCDF07C312FAA34E0CFD6A6976DFCC40EF3A_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_11 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mDBA7DCDF07C312FAA34E0CFD6A6976DFCC40EF3A_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_14 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_16 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* L_17 = (EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m6B7F26C45D36CAB76DCF7C50EE29958A06D5731C_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_0 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mC8AA6D704EB50A786290B0A3053670DC35299E4E_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mFC1427B9B734FFCBBBEE6B9D459AA7676A54269B_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_mFC1427B9B734FFCBBBEE6B9D459AA7676A54269B_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mDDBFCE312F2C4CD8CD0F6FC09C5C6240A265D076_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_mDDBFCE312F2C4CD8CD0F6FC09C5C6240A265D076_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mA7A68EA12ADCDA48C1FB67B6ABCF6CD7E3979E8F_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_mA7A68EA12ADCDA48C1FB67B6ABCF6CD7E3979E8F_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2885C94D864C934D3277BBB8C93117F69EA4D3DC_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_0 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mE14AFFC18E294B0FF8AB0BBB86A160B2CC8DB1A8_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_0 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m35046DC7633EC3609130A1EE802B6B44F8EE2E41((&L_1), (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934  L_2 = (Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m53AB21D3EA63FBE17753F9E67DBC6C19F3CD1E3F_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_0 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m35046DC7633EC3609130A1EE802B6B44F8EE2E41((&L_1), (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934  L_2 = (Enumerator_t982A8C1272A6393752AE9EE877A586D4EAA04934 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_gshared (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_19 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 *)__this);
		((  void (*) (ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tDAA32EF298949BB68B6463967FD7914A38A3A759 *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_29 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * L_31 = (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* L_32 = (EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t54BBAD1F7328BEC876A63E4ADA6D7ACDD3ECE4D3* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_m704E3FEBA77C43BEA4C4F9F588989E89ADB2D2E5_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
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
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m137B43D2AD4DE76087897823B0F9D17A83C08009_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection__ctor_m137B43D2AD4DE76087897823B0F9D17A83C08009_RuntimeMethod_var)));
	}

IL_0014:
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_2 = ___dictionary0;
		__this->set_dictionary_0(L_2);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3  ValueCollection_GetEnumerator_m022A2BA7A41FE118BF6B567F50A9C1D4C3598604_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_0 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m714DA4303AE7B7D39303A6CC5F3BCF02CD0AE451((&L_1), (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return (Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3 )L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m68DCF814CE9B90F605034BAD98C0DB223CD9CED7_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m68DCF814CE9B90F605034BAD98C0DB223CD9CED7_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m68DCF814CE9B90F605034BAD98C0DB223CD9CED7_RuntimeMethod_var)));
	}

IL_002e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_11 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10))) >= ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_m68DCF814CE9B90F605034BAD98C0DB223CD9CED7_RuntimeMethod_var)));
	}

IL_004b:
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_14 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_count_2();
		V_0 = (int32_t)L_15;
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_16 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		NullCheck(L_16);
		EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* L_17 = (EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67*)L_16->get_entries_1();
		V_1 = (EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67*)L_17;
		V_2 = (int32_t)0;
		goto IL_0092;
	}

IL_0067:
	{
		EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = (int32_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_hashCode_0();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = ___array0;
		int32_t L_22 = ___index1;
		int32_t L_23 = (int32_t)L_22;
		___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		RuntimeObject * L_26 = (RuntimeObject *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_value_3();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_26);
	}

IL_008e:
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m1C2AE783007C39BA8D3CD8CD14012D97EA416A0C_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_0 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (int32_t)L_1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_mEA1FCA6B30542F33ABD930FF9D1622ABBC347423_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1507D6368EB4FD584D842B25F3A57D1D472F392F_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1507D6368EB4FD584D842B25F3A57D1D472F392F_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m634617A4485B074C21CAFE4B998040E22F2A89D1_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m634617A4485B074C21CAFE4B998040E22F2A89D1_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m518D2432C00A46A713CE314CE9A6962FA93BF1D1_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5E4E1FAAB05C1541AB9B0C1282FD2FFCEF4F205)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m518D2432C00A46A713CE314CE9A6962FA93BF1D1_RuntimeMethod_var)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_mAD51D9F7C8EB271EE5B7E99AAD8793AB71189D3B_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_0 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (bool)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mBDE018C38E2D52E0EC55F66E49BAFED75FDBDE02_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_0 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m714DA4303AE7B7D39303A6CC5F3BCF02CD0AE451((&L_1), (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3  L_2 = (Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_m3CEDB604BA6D94D02DC5EFE1C6B773A13CCCDFB1_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_0 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m714DA4303AE7B7D39303A6CC5F3BCF02CD0AE451((&L_1), (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3  L_2 = (Enumerator_tE3AED6FABD554C41493509499DBC5907B75D4DB3 )L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_gshared (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeArray * L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray * L_2 = ___array0;
		NullCheck((RuntimeArray *)L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeArray * L_5 = ___array0;
		NullCheck((RuntimeArray *)L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)L_5, (int32_t)0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_8 = ___index1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___index1;
		RuntimeArray * L_10 = ___array0;
		NullCheck((RuntimeArray *)L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_15, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), (RuntimeObject *)L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var)));
	}

IL_0063:
	{
		RuntimeArray * L_16 = ___array0;
		NullCheck((RuntimeArray *)L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___index1;
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_19 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		NullCheck((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18))) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var)));
	}

IL_0083:
	{
		RuntimeArray * L_22 = ___array0;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_0;
		int32_t L_25 = ___index1;
		NullCheck((ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF *)__this);
		((  void (*) (ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ValueCollection_tE30D2CF7AE93E79624FC9423989FB43B317280DF *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_24, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return;
	}

IL_0096:
	{
		RuntimeArray * L_26 = ___array0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = V_1;
		if (L_27)
		{
			goto IL_00b0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_28, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var)));
	}

IL_00b0:
	{
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_29 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_count_2();
		V_2 = (int32_t)L_30;
		Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C * L_31 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)__this->get_dictionary_0();
		NullCheck(L_31);
		EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* L_32 = (EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67*)L_31->get_entries_1();
		V_3 = (EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67*)L_32;
	}

IL_00c8:
	try
	{ // begin try (depth: 1)
		{
			V_4 = (int32_t)0;
			goto IL_00fd;
		}

IL_00cd:
		{
			EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* L_33 = V_3;
			int32_t L_34 = V_4;
			NullCheck(L_33);
			int32_t L_35 = (int32_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_hashCode_0();
			if ((((int32_t)L_35) < ((int32_t)0)))
			{
				goto IL_00f7;
			}
		}

IL_00dd:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_1;
			int32_t L_37 = ___index1;
			int32_t L_38 = (int32_t)L_37;
			___index1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			EntryU5BU5D_t19FCE264BF26418E45186B707D1479049C0FEA67* L_39 = V_3;
			int32_t L_40 = V_4;
			NullCheck(L_39);
			RuntimeObject * L_41 = (RuntimeObject *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_value_3();
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_41);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_41);
		}

IL_00f7:
		{
			int32_t L_42 = V_4;
			V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			int32_t L_44 = V_2;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_00cd;
			}
		}

IL_0102:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_45 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_45, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_System_Collections_ICollection_CopyTo_mEEA45154B3D0A4B9E4C76C298F27B3E4062D303E_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0115:
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
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m26CA3930ADE164EA48E474988EE6B82D26E5F9E9_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		NullCheck((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this);
		((  void (*) (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 *)__this, (RuntimeObject *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mF2828744686B43E540BF1C0908FA8C14694F666F_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_trackResurrection_1(L_0);
		bool L_1 = ___trackResurrection1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject * L_2 = ___target0;
		int32_t L_3 = V_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4;
		L_4 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		__this->set_handle_0(L_4);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, /*hidden argument*/NULL);
		__this->set_trackResurrection_1(L_3);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4);
		RuntimeObject * L_7;
		L_7 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_4, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (Type_t *)L_6, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_7;
		bool L_8 = (bool)__this->get_trackResurrection_1();
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_11;
		L_11 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		__this->set_handle_0(L_11);
		return;
	}
}
// System.Void System.WeakReference`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		bool L_3 = (bool)__this->get_trackResurrection_1();
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_2, (String_t*)_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, (bool)L_3, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_7 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_8;
		L_8 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_7, /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_6, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)L_8, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D((SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 *)L_9, (String_t*)_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject ** ___target0, const RuntimeMethod* method)
{
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject *));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject ** L_3 = ___target0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		RuntimeObject * L_5;
		L_5 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		*(RuntimeObject **)L_3 = ((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		RuntimeObject ** L_6 = ___target0;
		RuntimeObject * L_7 = (*(RuntimeObject **)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.WeakReference`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_mFFF6306032DA8256E4F7D125EF76342E83CD6F68_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)__this->get_address_of_handle_0();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CpositionU3Ek__BackingField_47();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisRelativeU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
