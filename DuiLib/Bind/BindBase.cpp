#include "StdAfx.h"



namespace DuiLib {
	//std::map<string_t, BindCtrlBase*> BindCtrlBase::s_bind_ctrls;
	//CPaintManagerUI *BindCtrlBase::s_pm = nullptr;



	//void BindCtrlBase::init_binding (CPaintManagerUI *pm) {
	//	s_pm = pm;
	//	//for (auto[ctrl_name, obj] : s_bind_ctrls) {
	//	//	obj->m_ctrl = pm->FindControl (ctrl_name);
	//	//	if (obj->GetClassType () != obj->m_ctrl->GetClass ()) {
	//	//		DUITRACE (_T ("�޷��� %s ���Ͷ���󶨵� %s ������"), obj->GetClassType ().data (), obj->m_ctrl->GetClass ().data ());
	//	//		ASSERT (false);
	//	//	}
	//	//	obj->binded ();
	//	//}
	//}

	//template <typename T>
	//string_view_t BindVarBase<T>::GetVarType () const {
	//	using base_T = std::decay<T>;
	//	if constexpr (std::is_same<base_T, string_t>::value) {
	//		return _T ("string_t");
	//	} else if constexpr (std::is_same<base_T, size_t>::value) {
	//		return _T ("size_t");
	//	} else if constexpr (std::is_same<base_T, int64_t>::value) {
	//		return _T ("int64_t");
	//	} else if constexpr (std::is_same<base_T, bool>::value) {
	//		return _T ("bool");
	//	} else {
	//		return _T ("");
	//	}
	//}

	//template <typename T>
	//void BindVarBase<T>::binded () {
	//	static std::map<string_t, std::vector<string_t>> smv {
	//		{ _T ("string_t"), { _T ("ComboUI"), _T ("ComboBoxUI"), _T ("DateTimeUI"), _T ("EditUI"), _T ("GroupBoxUI"), _T ("IPAddressUI"), _T ("IPAddressExUI"), _T ("LabelUI"), _T ("OptionUI"), _T ("RichEditUI"), _T ("TextUI") } },
	//		{ _T ("size_t"), { _T ("EditUI"), _T ("GroupBoxUI"), _T ("LabelUI"), _T ("OptionUI"), _T ("RichEditUI"), _T ("TextUI") } },
	//		{ _T ("int64_t"), { _T ("EditUI"), _T ("GroupBoxUI"), _T ("LabelUI"), _T ("OptionUI"), _T ("RichEditUI"), _T ("TextUI") } },
	//		{ _T ("bool"), { _T ("CheckBox") } }
	//	};
	//	if (smv.find (GetVarType ().data ()) == smv.end ()) {
	//		DUITRACE (_T ("��֧�ֵ�ģ�����ͣ�%s"), GetVarType ().data ());
	//		ASSERT (false);
	//	}
	//	string_t class_name = obj->m_ctrl->GetClass ();
	//	if (FawTools::find (smv[GetVarType ().data ()], class_name) == string_t::npos) {
	//		DUITRACE (_T ("%s ���Ͷ����޷��� %s ���ͱ���"), class_name.data (), GetVarType ().data ());
	//		ASSERT (false);
	//	}

	//	// TODO: ���޸��¼�
	//}
}
