//stamp:0ea1fa046bf19881
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				dlg_about = _T("LAYOUT:dlg_about");
				dlg_keymap = _T("LAYOUT:dlg_keymap");
				wnd_build_index_prog = _T("LAYOUT:wnd_build_index_prog");
				dlg_update_info = _T("LAYOUT:dlg_update_info");
			}
			const TCHAR * dlg_about;
			const TCHAR * dlg_keymap;
			const TCHAR * wnd_build_index_prog;
			const TCHAR * dlg_update_info;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
				ICON_LOGO1 = _T("ICON:ICON_LOGO1");
				ICON_LOGO2 = _T("ICON:ICON_LOGO2");
				ICON_LOGO3 = _T("ICON:ICON_LOGO3");
				ICON_LOGO4 = _T("ICON:ICON_LOGO4");
			}
			const TCHAR * ICON_LOGO;
			const TCHAR * ICON_LOGO1;
			const TCHAR * ICON_LOGO2;
			const TCHAR * ICON_LOGO3;
			const TCHAR * ICON_LOGO4;
		}ICON;
		class _smenu{
			public:
			_smenu(){
				menu_context = _T("smenu:menu_context");
			}
			const TCHAR * menu_context;
		}smenu;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_close",2},
		{L"btn_update_now",65540},
		{L"cbx_update_interval",65539},
		{L"chk_auto_update",65538},
		{L"edit_info",65552},
		{L"img_keymap",65543},
		{L"link_comp_website",65542},
		{L"link_more",65551},
		{L"menu_about",100},
		{L"menu_auto",101},
		{L"menu_exit",102},
		{L"prog_build_index",65546},
		{L"tab_stage",65544},
		{L"txt_client_ver_cur",65549},
		{L"txt_client_ver_new",65550},
		{L"txt_comp_name",65541},
		{L"txt_name",65536},
		{L"txt_prog_title",65545},
		{L"txt_svr_ver_cur",65547},
		{L"txt_svr_ver_new",65548},
		{L"txt_ver",65537}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_update_now = namedXmlID[2].strName;
			cbx_update_interval = namedXmlID[3].strName;
			chk_auto_update = namedXmlID[4].strName;
			edit_info = namedXmlID[5].strName;
			img_keymap = namedXmlID[6].strName;
			link_comp_website = namedXmlID[7].strName;
			link_more = namedXmlID[8].strName;
			menu_about = namedXmlID[9].strName;
			menu_auto = namedXmlID[10].strName;
			menu_exit = namedXmlID[11].strName;
			prog_build_index = namedXmlID[12].strName;
			tab_stage = namedXmlID[13].strName;
			txt_client_ver_cur = namedXmlID[14].strName;
			txt_client_ver_new = namedXmlID[15].strName;
			txt_comp_name = namedXmlID[16].strName;
			txt_name = namedXmlID[17].strName;
			txt_prog_title = namedXmlID[18].strName;
			txt_svr_ver_cur = namedXmlID[19].strName;
			txt_svr_ver_new = namedXmlID[20].strName;
			txt_ver = namedXmlID[21].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_close;
		 const wchar_t * btn_update_now;
		 const wchar_t * cbx_update_interval;
		 const wchar_t * chk_auto_update;
		 const wchar_t * edit_info;
		 const wchar_t * img_keymap;
		 const wchar_t * link_comp_website;
		 const wchar_t * link_more;
		 const wchar_t * menu_about;
		 const wchar_t * menu_auto;
		 const wchar_t * menu_exit;
		 const wchar_t * prog_build_index;
		 const wchar_t * tab_stage;
		 const wchar_t * txt_client_ver_cur;
		 const wchar_t * txt_client_ver_new;
		 const wchar_t * txt_comp_name;
		 const wchar_t * txt_name;
		 const wchar_t * txt_prog_title;
		 const wchar_t * txt_svr_ver_cur;
		 const wchar_t * txt_svr_ver_new;
		 const wchar_t * txt_ver;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_close	=	2;
		const static int btn_update_now	=	65540;
		const static int cbx_update_interval	=	65539;
		const static int chk_auto_update	=	65538;
		const static int edit_info	=	65552;
		const static int img_keymap	=	65543;
		const static int link_comp_website	=	65542;
		const static int link_more	=	65551;
		const static int menu_about	=	100;
		const static int menu_auto	=	101;
		const static int menu_exit	=	102;
		const static int prog_build_index	=	65546;
		const static int tab_stage	=	65544;
		const static int txt_client_ver_cur	=	65549;
		const static int txt_client_ver_new	=	65550;
		const static int txt_comp_name	=	65541;
		const static int txt_name	=	65536;
		const static int txt_prog_title	=	65545;
		const static int txt_svr_ver_cur	=	65547;
		const static int txt_svr_ver_new	=	65548;
		const static int txt_ver	=	65537;
		}id;

		class _string{
		public:
		const static int about	=	0;
		const static int keymap	=	1;
		const static int new_ver_found	=	2;
		const static int prog	=	3;
		const static int update	=	4;
		const static int ver	=	5;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
