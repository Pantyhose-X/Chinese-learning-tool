//stamp:2bef72f66c3a0962
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
				dlg_keymap = _T("LAYOUT:dlg_keymap");
				wnd_build_index_prog = _T("LAYOUT:wnd_build_index_prog");
				dlg_update_info = _T("LAYOUT:dlg_update_info");
				wnd_composition = _T("LAYOUT:wnd_composition");
				wnd_status_bar = _T("LAYOUT:wnd_status_bar");
				wnd_tip = _T("LAYOUT:wnd_tip");
				wnd_spchar = _T("LAYOUT:wnd_spchar");
				dlg_addblur = _T("LAYOUT:dlg_addblur");
				dlg_config = _T("LAYOUT:dlg_config");
				page_about = _T("LAYOUT:page_about");
				page_misc = _T("LAYOUT:page_misc");
				page_phraselib = _T("LAYOUT:page_phraselib");
				page_pinyin = _T("LAYOUT:page_pinyin");
				page_tts = _T("LAYOUT:page_tts");
				page_candidate = _T("LAYOUT:page_candidate");
				page_associate = _T("LAYOUT:page_associate");
				page_hotkey = _T("LAYOUT:page_hotkey");
				page_habit = _T("LAYOUT:page_habit");
				page_celib = _T("LAYOUT:page_celib");
			}
			const TCHAR * dlg_keymap;
			const TCHAR * wnd_build_index_prog;
			const TCHAR * dlg_update_info;
			const TCHAR * wnd_composition;
			const TCHAR * wnd_status_bar;
			const TCHAR * wnd_tip;
			const TCHAR * wnd_spchar;
			const TCHAR * dlg_addblur;
			const TCHAR * dlg_config;
			const TCHAR * page_about;
			const TCHAR * page_misc;
			const TCHAR * page_phraselib;
			const TCHAR * page_pinyin;
			const TCHAR * page_tts;
			const TCHAR * page_candidate;
			const TCHAR * page_associate;
			const TCHAR * page_hotkey;
			const TCHAR * page_habit;
			const TCHAR * page_celib;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
				dim = _T("values:dim");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
			const TCHAR * dim;
		}values;
		class _IMG{
			public:
			_IMG(){
				logo_32 = _T("IMG:logo_32");
				png_charmode = _T("IMG:png_charmode");
				png_charmode_full = _T("IMG:png_charmode_full");
				png_charmode_half = _T("IMG:png_charmode_half");
				png_status_open = _T("IMG:png_status_open");
				png_status_close = _T("IMG:png_status_close");
				png_composition = _T("IMG:png_composition");
				btn_extend = _T("IMG:btn_extend");
				btn_shrink = _T("IMG:btn_shrink");
				btn_makeword = _T("IMG:btn_makeword");
				btn_prevpage = _T("IMG:btn_prevpage");
				btn_nextpage = _T("IMG:btn_nextpage");
				btn_query = _T("IMG:btn_query");
				btn_record_enable = _T("IMG:btn_record_enable");
				btn_record_disable = _T("IMG:btn_record_disable");
				btn_sound_enable = _T("IMG:btn_sound_enable");
				btn_sound_disable = _T("IMG:btn_sound_disable");
				png_lines = _T("IMG:png_lines");
				btn_english_enable = _T("IMG:btn_english_enable");
				btn_english_disable = _T("IMG:btn_english_disable");
				SYS_SCROLLBAR = _T("IMG:SYS_SCROLLBAR");
			}
			const TCHAR * logo_32;
			const TCHAR * png_charmode;
			const TCHAR * png_charmode_full;
			const TCHAR * png_charmode_half;
			const TCHAR * png_status_open;
			const TCHAR * png_status_close;
			const TCHAR * png_composition;
			const TCHAR * btn_extend;
			const TCHAR * btn_shrink;
			const TCHAR * btn_makeword;
			const TCHAR * btn_prevpage;
			const TCHAR * btn_nextpage;
			const TCHAR * btn_query;
			const TCHAR * btn_record_enable;
			const TCHAR * btn_record_disable;
			const TCHAR * btn_sound_enable;
			const TCHAR * btn_sound_disable;
			const TCHAR * png_lines;
			const TCHAR * btn_english_enable;
			const TCHAR * btn_english_disable;
			const TCHAR * SYS_SCROLLBAR;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_SINSTAR3 = _T("ICON:ICON_SINSTAR3");
				ICON_LOGO = _T("ICON:ICON_LOGO");
				ICON_LOGO1 = _T("ICON:ICON_LOGO1");
				ICON_LOGO2 = _T("ICON:ICON_LOGO2");
				ICON_LOGO3 = _T("ICON:ICON_LOGO3");
				ICON_LOGO4 = _T("ICON:ICON_LOGO4");
			}
			const TCHAR * ICON_SINSTAR3;
			const TCHAR * ICON_LOGO;
			const TCHAR * ICON_LOGO1;
			const TCHAR * ICON_LOGO2;
			const TCHAR * ICON_LOGO3;
			const TCHAR * ICON_LOGO4;
		}ICON;
		class _smenu{
			public:
			_smenu(){
				context_tray = _T("smenu:context_tray");
				context_status = _T("smenu:context_status");
			}
			const TCHAR * context_tray;
			const TCHAR * context_status;
		}smenu;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"ass_mode_english_prompt",402},
		{L"ass_mode_none",400},
		{L"ass_mode_phrase",401},
		{L"ass_mode_phrase_prompt",403},
		{L"btn_add_blur",65613},
		{L"btn_charmode",65573},
		{L"btn_close",2},
		{L"btn_del_blur",65614},
		{L"btn_english",65577},
		{L"btn_export_user_phrase",65609},
		{L"btn_filter_gbk",65578},
		{L"btn_help",65581},
		{L"btn_import_user_phrase",65608},
		{L"btn_install_sys_phrase",65607},
		{L"btn_make_phrase",65574},
		{L"btn_menu",65580},
		{L"btn_nextpage",65560},
		{L"btn_ok",1},
		{L"btn_prevpage",65558},
		{L"btn_query",65579},
		{L"btn_record",65575},
		{L"btn_sound",65576},
		{L"btn_status_extend",65569},
		{L"btn_status_shrink",65572},
		{L"btn_tts_ch_preview",65618},
		{L"btn_tts_en_preview",65620},
		{L"btn_update_now",65597},
		{L"cand_auto_input",65651},
		{L"cand_container",65559},
		{L"cand_english",65561},
		{L"cand_english_input",65564},
		{L"cand_normal",65557},
		{L"cand_phrase",65563},
		{L"cand_py_phrase_first",65652},
		{L"cand_tip",65565},
		{L"cbx_celib",65656},
		{L"cbx_full_blur",65590},
		{L"cbx_rhyme_blur",65589},
		{L"cbx_tts_ch_token",65617},
		{L"cbx_tts_en_token",65619},
		{L"cbx_tune_blur",65588},
		{L"cbx_update_interval",65596},
		{L"cell_00",100},
		{L"cell_01",101},
		{L"cell_02",102},
		{L"cell_03",103},
		{L"cell_04",104},
		{L"cell_05",105},
		{L"cell_06",106},
		{L"cell_07",107},
		{L"cell_08",108},
		{L"cell_09",109},
		{L"cell_10",110},
		{L"cell_11",111},
		{L"cell_12",112},
		{L"cell_13",113},
		{L"cell_14",114},
		{L"cell_15",115},
		{L"cell_16",116},
		{L"cell_17",117},
		{L"cell_18",118},
		{L"cell_19",119},
		{L"cell_20",120},
		{L"cell_21",121},
		{L"cell_22",122},
		{L"cell_23",123},
		{L"cell_24",124},
		{L"cell_25",125},
		{L"cell_26",126},
		{L"cell_27",127},
		{L"cell_28",128},
		{L"cell_29",129},
		{L"cell_30",130},
		{L"cell_31",131},
		{L"cell_32",132},
		{L"cell_33",133},
		{L"cell_34",134},
		{L"cell_35",135},
		{L"cell_36",136},
		{L"cell_37",137},
		{L"cell_38",138},
		{L"cell_39",139},
		{L"cell_40",140},
		{L"cell_41",141},
		{L"cell_42",142},
		{L"cell_43",143},
		{L"cell_44",144},
		{L"cell_45",145},
		{L"cell_46",146},
		{L"cell_47",147},
		{L"cell_48",148},
		{L"cell_49",149},
		{L"cell_parent",65587},
		{L"chk_auto_comp_promp",65632},
		{L"chk_auto_dot",65630},
		{L"chk_auto_select_cand",65631},
		{L"chk_auto_update",65595},
		{L"chk_disable_number_to_select_cand",65626},
		{L"chk_enable_23cand_hotkey",65623},
		{L"chk_full_skip_simple",65629},
		{L"chk_group_name",65600},
		{L"chk_jp_zcs",65616},
		{L"chk_py_blur",65615},
		{L"chk_show_op_tip",65653},
		{L"col_editor",65603},
		{L"col_group",65599},
		{L"col_remark",65605},
		{L"col_size",65601},
		{L"comp_english",65554},
		{L"comp_install",400},
		{L"comp_lineime",65553},
		{L"comp_normal",65546},
		{L"comp_sent",65555},
		{L"comp_spell",65549},
		{L"comp_umode",65551},
		{L"config",100},
		{L"edit_blur_from",65591},
		{L"edit_blur_to",65592},
		{L"edit_delay_time",65654},
		{L"edit_flm_addtion",65658},
		{L"edit_flm_name",65657},
		{L"edit_info",65545},
		{L"edit_phrase_ast_deepness_max",65636},
		{L"edit_predict_phrase_maxlength",65634},
		{L"edit_sent_record_max",65638},
		{L"edit_webmode_header",65633},
		{L"enter_for_clear",110},
		{L"enter_for_input",111},
		{L"follow_caret",102},
		{L"forcast_always",601},
		{L"forcast_disable",600},
		{L"forcast_no_cand",602},
		{L"gbk_show_as_gb",702},
		{L"gbk_show_manual",701},
		{L"gbk_show_only",700},
		{L"help",112},
		{L"hide_statusbar",101},
		{L"hk_2_cand",65624},
		{L"hk_3_cand",65625},
		{L"hk_bihua_heng",900},
		{L"hk_bihua_na",903},
		{L"hk_bihua_pie",902},
		{L"hk_bihua_shu",901},
		{L"hk_bihua_wild",905},
		{L"hk_bihua_zhe",904},
		{L"hk_filter_gbk",65646},
		{L"hk_input_en",65645},
		{L"hk_make_phrase",65641},
		{L"hk_record",65648},
		{L"hk_show_comp",65643},
		{L"hk_show_statusbar",65644},
		{L"hk_show_table",65642},
		{L"hk_switch_py",65639},
		{L"hk_to_sentmode",65650},
		{L"hk_to_umode",65640},
		{L"hk_tts",65647},
		{L"hk_turn_next",65628},
		{L"hk_turn_prev",65627},
		{L"ime_switch_disabled",102},
		{L"ime_switch_left_shift",100},
		{L"ime_switch_right_shift",101},
		{L"img_keymap",65538},
		{L"img_logo",65567},
		{L"input_big5",103},
		{L"key_map",110},
		{L"key_speed",111},
		{L"key_to_sentmode",65649},
		{L"link_comp_website",65537},
		{L"link_more",65544},
		{L"lst_catalog",65586},
		{L"lv_blur",65610},
		{L"mc_celib",65659},
		{L"mc_phraselib",65598},
		{L"memu_edit_symbol",603},
		{L"memu_edit_usercmd",604},
		{L"memu_edit_userdef",602},
		{L"memu_edit_userjm",605},
		{L"menu_auto",101},
		{L"menu_blend",65661},
		{L"menu_comp",65660},
		{L"menu_data_mgr",65662},
		{L"menu_exit",102},
		{L"menu_settings",103},
		{L"menu_skin",200},
		{L"menu_tool_base",701},
		{L"open_spchar",104},
		{L"prog_build_index",65541},
		{L"py_switch_disabled",122},
		{L"py_switch_left_ctrl",120},
		{L"py_switch_right_ctrl",121},
		{L"rate_adjust_auto",501},
		{L"rate_adjust_disable",500},
		{L"rate_adjust_fast",502},
		{L"skin_cloud",202},
		{L"skin_def",220},
		{L"skin_mgr",201},
		{L"slider_tts_speed",65621},
		{L"sound_beep",802},
		{L"sound_disable",800},
		{L"sound_wave",801},
		{L"spell_all",504},
		{L"spell_one",501},
		{L"spell_three",503},
		{L"spell_two",502},
		{L"spin_delay_time",65655},
		{L"spin_phrase_ast_deepness_max",65637},
		{L"spin_predict_phrase_maxlength",65635},
		{L"status_base",65571},
		{L"status_extend",65570},
		{L"status_shrink",65566},
		{L"stv_sent",65556},
		{L"svr_showicon",601},
		{L"tab_stage",65539},
		{L"txt_auto_complete",65552},
		{L"txt_blur_group",65611},
		{L"txt_blur_info",65612},
		{L"txt_build_time",65594},
		{L"txt_comp",65568},
		{L"txt_comp_name",65536},
		{L"txt_comps",65547},
		{L"txt_editor",65604},
		{L"txt_en_header",65562},
		{L"txt_group_size",65602},
		{L"txt_prog_title",65540},
		{L"txt_remark",65606},
		{L"txt_svr_ver",65593},
		{L"txt_temp_spell_flag",65550},
		{L"txt_tip",65548},
		{L"txt_tip_content",65583},
		{L"txt_tip_title",65582},
		{L"txt_title",65585},
		{L"txt_tts_speed",65622},
		{L"txt_ver_cur",65542},
		{L"txt_ver_new",65543},
		{L"txt_zoomin",65584},
		{L"userdef",505}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			ass_mode_english_prompt = namedXmlID[1].strName;
			ass_mode_none = namedXmlID[2].strName;
			ass_mode_phrase = namedXmlID[3].strName;
			ass_mode_phrase_prompt = namedXmlID[4].strName;
			btn_add_blur = namedXmlID[5].strName;
			btn_charmode = namedXmlID[6].strName;
			btn_close = namedXmlID[7].strName;
			btn_del_blur = namedXmlID[8].strName;
			btn_english = namedXmlID[9].strName;
			btn_export_user_phrase = namedXmlID[10].strName;
			btn_filter_gbk = namedXmlID[11].strName;
			btn_help = namedXmlID[12].strName;
			btn_import_user_phrase = namedXmlID[13].strName;
			btn_install_sys_phrase = namedXmlID[14].strName;
			btn_make_phrase = namedXmlID[15].strName;
			btn_menu = namedXmlID[16].strName;
			btn_nextpage = namedXmlID[17].strName;
			btn_ok = namedXmlID[18].strName;
			btn_prevpage = namedXmlID[19].strName;
			btn_query = namedXmlID[20].strName;
			btn_record = namedXmlID[21].strName;
			btn_sound = namedXmlID[22].strName;
			btn_status_extend = namedXmlID[23].strName;
			btn_status_shrink = namedXmlID[24].strName;
			btn_tts_ch_preview = namedXmlID[25].strName;
			btn_tts_en_preview = namedXmlID[26].strName;
			btn_update_now = namedXmlID[27].strName;
			cand_auto_input = namedXmlID[28].strName;
			cand_container = namedXmlID[29].strName;
			cand_english = namedXmlID[30].strName;
			cand_english_input = namedXmlID[31].strName;
			cand_normal = namedXmlID[32].strName;
			cand_phrase = namedXmlID[33].strName;
			cand_py_phrase_first = namedXmlID[34].strName;
			cand_tip = namedXmlID[35].strName;
			cbx_celib = namedXmlID[36].strName;
			cbx_full_blur = namedXmlID[37].strName;
			cbx_rhyme_blur = namedXmlID[38].strName;
			cbx_tts_ch_token = namedXmlID[39].strName;
			cbx_tts_en_token = namedXmlID[40].strName;
			cbx_tune_blur = namedXmlID[41].strName;
			cbx_update_interval = namedXmlID[42].strName;
			cell_00 = namedXmlID[43].strName;
			cell_01 = namedXmlID[44].strName;
			cell_02 = namedXmlID[45].strName;
			cell_03 = namedXmlID[46].strName;
			cell_04 = namedXmlID[47].strName;
			cell_05 = namedXmlID[48].strName;
			cell_06 = namedXmlID[49].strName;
			cell_07 = namedXmlID[50].strName;
			cell_08 = namedXmlID[51].strName;
			cell_09 = namedXmlID[52].strName;
			cell_10 = namedXmlID[53].strName;
			cell_11 = namedXmlID[54].strName;
			cell_12 = namedXmlID[55].strName;
			cell_13 = namedXmlID[56].strName;
			cell_14 = namedXmlID[57].strName;
			cell_15 = namedXmlID[58].strName;
			cell_16 = namedXmlID[59].strName;
			cell_17 = namedXmlID[60].strName;
			cell_18 = namedXmlID[61].strName;
			cell_19 = namedXmlID[62].strName;
			cell_20 = namedXmlID[63].strName;
			cell_21 = namedXmlID[64].strName;
			cell_22 = namedXmlID[65].strName;
			cell_23 = namedXmlID[66].strName;
			cell_24 = namedXmlID[67].strName;
			cell_25 = namedXmlID[68].strName;
			cell_26 = namedXmlID[69].strName;
			cell_27 = namedXmlID[70].strName;
			cell_28 = namedXmlID[71].strName;
			cell_29 = namedXmlID[72].strName;
			cell_30 = namedXmlID[73].strName;
			cell_31 = namedXmlID[74].strName;
			cell_32 = namedXmlID[75].strName;
			cell_33 = namedXmlID[76].strName;
			cell_34 = namedXmlID[77].strName;
			cell_35 = namedXmlID[78].strName;
			cell_36 = namedXmlID[79].strName;
			cell_37 = namedXmlID[80].strName;
			cell_38 = namedXmlID[81].strName;
			cell_39 = namedXmlID[82].strName;
			cell_40 = namedXmlID[83].strName;
			cell_41 = namedXmlID[84].strName;
			cell_42 = namedXmlID[85].strName;
			cell_43 = namedXmlID[86].strName;
			cell_44 = namedXmlID[87].strName;
			cell_45 = namedXmlID[88].strName;
			cell_46 = namedXmlID[89].strName;
			cell_47 = namedXmlID[90].strName;
			cell_48 = namedXmlID[91].strName;
			cell_49 = namedXmlID[92].strName;
			cell_parent = namedXmlID[93].strName;
			chk_auto_comp_promp = namedXmlID[94].strName;
			chk_auto_dot = namedXmlID[95].strName;
			chk_auto_select_cand = namedXmlID[96].strName;
			chk_auto_update = namedXmlID[97].strName;
			chk_disable_number_to_select_cand = namedXmlID[98].strName;
			chk_enable_23cand_hotkey = namedXmlID[99].strName;
			chk_full_skip_simple = namedXmlID[100].strName;
			chk_group_name = namedXmlID[101].strName;
			chk_jp_zcs = namedXmlID[102].strName;
			chk_py_blur = namedXmlID[103].strName;
			chk_show_op_tip = namedXmlID[104].strName;
			col_editor = namedXmlID[105].strName;
			col_group = namedXmlID[106].strName;
			col_remark = namedXmlID[107].strName;
			col_size = namedXmlID[108].strName;
			comp_english = namedXmlID[109].strName;
			comp_install = namedXmlID[110].strName;
			comp_lineime = namedXmlID[111].strName;
			comp_normal = namedXmlID[112].strName;
			comp_sent = namedXmlID[113].strName;
			comp_spell = namedXmlID[114].strName;
			comp_umode = namedXmlID[115].strName;
			config = namedXmlID[116].strName;
			edit_blur_from = namedXmlID[117].strName;
			edit_blur_to = namedXmlID[118].strName;
			edit_delay_time = namedXmlID[119].strName;
			edit_flm_addtion = namedXmlID[120].strName;
			edit_flm_name = namedXmlID[121].strName;
			edit_info = namedXmlID[122].strName;
			edit_phrase_ast_deepness_max = namedXmlID[123].strName;
			edit_predict_phrase_maxlength = namedXmlID[124].strName;
			edit_sent_record_max = namedXmlID[125].strName;
			edit_webmode_header = namedXmlID[126].strName;
			enter_for_clear = namedXmlID[127].strName;
			enter_for_input = namedXmlID[128].strName;
			follow_caret = namedXmlID[129].strName;
			forcast_always = namedXmlID[130].strName;
			forcast_disable = namedXmlID[131].strName;
			forcast_no_cand = namedXmlID[132].strName;
			gbk_show_as_gb = namedXmlID[133].strName;
			gbk_show_manual = namedXmlID[134].strName;
			gbk_show_only = namedXmlID[135].strName;
			help = namedXmlID[136].strName;
			hide_statusbar = namedXmlID[137].strName;
			hk_2_cand = namedXmlID[138].strName;
			hk_3_cand = namedXmlID[139].strName;
			hk_bihua_heng = namedXmlID[140].strName;
			hk_bihua_na = namedXmlID[141].strName;
			hk_bihua_pie = namedXmlID[142].strName;
			hk_bihua_shu = namedXmlID[143].strName;
			hk_bihua_wild = namedXmlID[144].strName;
			hk_bihua_zhe = namedXmlID[145].strName;
			hk_filter_gbk = namedXmlID[146].strName;
			hk_input_en = namedXmlID[147].strName;
			hk_make_phrase = namedXmlID[148].strName;
			hk_record = namedXmlID[149].strName;
			hk_show_comp = namedXmlID[150].strName;
			hk_show_statusbar = namedXmlID[151].strName;
			hk_show_table = namedXmlID[152].strName;
			hk_switch_py = namedXmlID[153].strName;
			hk_to_sentmode = namedXmlID[154].strName;
			hk_to_umode = namedXmlID[155].strName;
			hk_tts = namedXmlID[156].strName;
			hk_turn_next = namedXmlID[157].strName;
			hk_turn_prev = namedXmlID[158].strName;
			ime_switch_disabled = namedXmlID[159].strName;
			ime_switch_left_shift = namedXmlID[160].strName;
			ime_switch_right_shift = namedXmlID[161].strName;
			img_keymap = namedXmlID[162].strName;
			img_logo = namedXmlID[163].strName;
			input_big5 = namedXmlID[164].strName;
			key_map = namedXmlID[165].strName;
			key_speed = namedXmlID[166].strName;
			key_to_sentmode = namedXmlID[167].strName;
			link_comp_website = namedXmlID[168].strName;
			link_more = namedXmlID[169].strName;
			lst_catalog = namedXmlID[170].strName;
			lv_blur = namedXmlID[171].strName;
			mc_celib = namedXmlID[172].strName;
			mc_phraselib = namedXmlID[173].strName;
			memu_edit_symbol = namedXmlID[174].strName;
			memu_edit_usercmd = namedXmlID[175].strName;
			memu_edit_userdef = namedXmlID[176].strName;
			memu_edit_userjm = namedXmlID[177].strName;
			menu_auto = namedXmlID[178].strName;
			menu_blend = namedXmlID[179].strName;
			menu_comp = namedXmlID[180].strName;
			menu_data_mgr = namedXmlID[181].strName;
			menu_exit = namedXmlID[182].strName;
			menu_settings = namedXmlID[183].strName;
			menu_skin = namedXmlID[184].strName;
			menu_tool_base = namedXmlID[185].strName;
			open_spchar = namedXmlID[186].strName;
			prog_build_index = namedXmlID[187].strName;
			py_switch_disabled = namedXmlID[188].strName;
			py_switch_left_ctrl = namedXmlID[189].strName;
			py_switch_right_ctrl = namedXmlID[190].strName;
			rate_adjust_auto = namedXmlID[191].strName;
			rate_adjust_disable = namedXmlID[192].strName;
			rate_adjust_fast = namedXmlID[193].strName;
			skin_cloud = namedXmlID[194].strName;
			skin_def = namedXmlID[195].strName;
			skin_mgr = namedXmlID[196].strName;
			slider_tts_speed = namedXmlID[197].strName;
			sound_beep = namedXmlID[198].strName;
			sound_disable = namedXmlID[199].strName;
			sound_wave = namedXmlID[200].strName;
			spell_all = namedXmlID[201].strName;
			spell_one = namedXmlID[202].strName;
			spell_three = namedXmlID[203].strName;
			spell_two = namedXmlID[204].strName;
			spin_delay_time = namedXmlID[205].strName;
			spin_phrase_ast_deepness_max = namedXmlID[206].strName;
			spin_predict_phrase_maxlength = namedXmlID[207].strName;
			status_base = namedXmlID[208].strName;
			status_extend = namedXmlID[209].strName;
			status_shrink = namedXmlID[210].strName;
			stv_sent = namedXmlID[211].strName;
			svr_showicon = namedXmlID[212].strName;
			tab_stage = namedXmlID[213].strName;
			txt_auto_complete = namedXmlID[214].strName;
			txt_blur_group = namedXmlID[215].strName;
			txt_blur_info = namedXmlID[216].strName;
			txt_build_time = namedXmlID[217].strName;
			txt_comp = namedXmlID[218].strName;
			txt_comp_name = namedXmlID[219].strName;
			txt_comps = namedXmlID[220].strName;
			txt_editor = namedXmlID[221].strName;
			txt_en_header = namedXmlID[222].strName;
			txt_group_size = namedXmlID[223].strName;
			txt_prog_title = namedXmlID[224].strName;
			txt_remark = namedXmlID[225].strName;
			txt_svr_ver = namedXmlID[226].strName;
			txt_temp_spell_flag = namedXmlID[227].strName;
			txt_tip = namedXmlID[228].strName;
			txt_tip_content = namedXmlID[229].strName;
			txt_tip_title = namedXmlID[230].strName;
			txt_title = namedXmlID[231].strName;
			txt_tts_speed = namedXmlID[232].strName;
			txt_ver_cur = namedXmlID[233].strName;
			txt_ver_new = namedXmlID[234].strName;
			txt_zoomin = namedXmlID[235].strName;
			userdef = namedXmlID[236].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * ass_mode_english_prompt;
		 const wchar_t * ass_mode_none;
		 const wchar_t * ass_mode_phrase;
		 const wchar_t * ass_mode_phrase_prompt;
		 const wchar_t * btn_add_blur;
		 const wchar_t * btn_charmode;
		 const wchar_t * btn_close;
		 const wchar_t * btn_del_blur;
		 const wchar_t * btn_english;
		 const wchar_t * btn_export_user_phrase;
		 const wchar_t * btn_filter_gbk;
		 const wchar_t * btn_help;
		 const wchar_t * btn_import_user_phrase;
		 const wchar_t * btn_install_sys_phrase;
		 const wchar_t * btn_make_phrase;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_nextpage;
		 const wchar_t * btn_ok;
		 const wchar_t * btn_prevpage;
		 const wchar_t * btn_query;
		 const wchar_t * btn_record;
		 const wchar_t * btn_sound;
		 const wchar_t * btn_status_extend;
		 const wchar_t * btn_status_shrink;
		 const wchar_t * btn_tts_ch_preview;
		 const wchar_t * btn_tts_en_preview;
		 const wchar_t * btn_update_now;
		 const wchar_t * cand_auto_input;
		 const wchar_t * cand_container;
		 const wchar_t * cand_english;
		 const wchar_t * cand_english_input;
		 const wchar_t * cand_normal;
		 const wchar_t * cand_phrase;
		 const wchar_t * cand_py_phrase_first;
		 const wchar_t * cand_tip;
		 const wchar_t * cbx_celib;
		 const wchar_t * cbx_full_blur;
		 const wchar_t * cbx_rhyme_blur;
		 const wchar_t * cbx_tts_ch_token;
		 const wchar_t * cbx_tts_en_token;
		 const wchar_t * cbx_tune_blur;
		 const wchar_t * cbx_update_interval;
		 const wchar_t * cell_00;
		 const wchar_t * cell_01;
		 const wchar_t * cell_02;
		 const wchar_t * cell_03;
		 const wchar_t * cell_04;
		 const wchar_t * cell_05;
		 const wchar_t * cell_06;
		 const wchar_t * cell_07;
		 const wchar_t * cell_08;
		 const wchar_t * cell_09;
		 const wchar_t * cell_10;
		 const wchar_t * cell_11;
		 const wchar_t * cell_12;
		 const wchar_t * cell_13;
		 const wchar_t * cell_14;
		 const wchar_t * cell_15;
		 const wchar_t * cell_16;
		 const wchar_t * cell_17;
		 const wchar_t * cell_18;
		 const wchar_t * cell_19;
		 const wchar_t * cell_20;
		 const wchar_t * cell_21;
		 const wchar_t * cell_22;
		 const wchar_t * cell_23;
		 const wchar_t * cell_24;
		 const wchar_t * cell_25;
		 const wchar_t * cell_26;
		 const wchar_t * cell_27;
		 const wchar_t * cell_28;
		 const wchar_t * cell_29;
		 const wchar_t * cell_30;
		 const wchar_t * cell_31;
		 const wchar_t * cell_32;
		 const wchar_t * cell_33;
		 const wchar_t * cell_34;
		 const wchar_t * cell_35;
		 const wchar_t * cell_36;
		 const wchar_t * cell_37;
		 const wchar_t * cell_38;
		 const wchar_t * cell_39;
		 const wchar_t * cell_40;
		 const wchar_t * cell_41;
		 const wchar_t * cell_42;
		 const wchar_t * cell_43;
		 const wchar_t * cell_44;
		 const wchar_t * cell_45;
		 const wchar_t * cell_46;
		 const wchar_t * cell_47;
		 const wchar_t * cell_48;
		 const wchar_t * cell_49;
		 const wchar_t * cell_parent;
		 const wchar_t * chk_auto_comp_promp;
		 const wchar_t * chk_auto_dot;
		 const wchar_t * chk_auto_select_cand;
		 const wchar_t * chk_auto_update;
		 const wchar_t * chk_disable_number_to_select_cand;
		 const wchar_t * chk_enable_23cand_hotkey;
		 const wchar_t * chk_full_skip_simple;
		 const wchar_t * chk_group_name;
		 const wchar_t * chk_jp_zcs;
		 const wchar_t * chk_py_blur;
		 const wchar_t * chk_show_op_tip;
		 const wchar_t * col_editor;
		 const wchar_t * col_group;
		 const wchar_t * col_remark;
		 const wchar_t * col_size;
		 const wchar_t * comp_english;
		 const wchar_t * comp_install;
		 const wchar_t * comp_lineime;
		 const wchar_t * comp_normal;
		 const wchar_t * comp_sent;
		 const wchar_t * comp_spell;
		 const wchar_t * comp_umode;
		 const wchar_t * config;
		 const wchar_t * edit_blur_from;
		 const wchar_t * edit_blur_to;
		 const wchar_t * edit_delay_time;
		 const wchar_t * edit_flm_addtion;
		 const wchar_t * edit_flm_name;
		 const wchar_t * edit_info;
		 const wchar_t * edit_phrase_ast_deepness_max;
		 const wchar_t * edit_predict_phrase_maxlength;
		 const wchar_t * edit_sent_record_max;
		 const wchar_t * edit_webmode_header;
		 const wchar_t * enter_for_clear;
		 const wchar_t * enter_for_input;
		 const wchar_t * follow_caret;
		 const wchar_t * forcast_always;
		 const wchar_t * forcast_disable;
		 const wchar_t * forcast_no_cand;
		 const wchar_t * gbk_show_as_gb;
		 const wchar_t * gbk_show_manual;
		 const wchar_t * gbk_show_only;
		 const wchar_t * help;
		 const wchar_t * hide_statusbar;
		 const wchar_t * hk_2_cand;
		 const wchar_t * hk_3_cand;
		 const wchar_t * hk_bihua_heng;
		 const wchar_t * hk_bihua_na;
		 const wchar_t * hk_bihua_pie;
		 const wchar_t * hk_bihua_shu;
		 const wchar_t * hk_bihua_wild;
		 const wchar_t * hk_bihua_zhe;
		 const wchar_t * hk_filter_gbk;
		 const wchar_t * hk_input_en;
		 const wchar_t * hk_make_phrase;
		 const wchar_t * hk_record;
		 const wchar_t * hk_show_comp;
		 const wchar_t * hk_show_statusbar;
		 const wchar_t * hk_show_table;
		 const wchar_t * hk_switch_py;
		 const wchar_t * hk_to_sentmode;
		 const wchar_t * hk_to_umode;
		 const wchar_t * hk_tts;
		 const wchar_t * hk_turn_next;
		 const wchar_t * hk_turn_prev;
		 const wchar_t * ime_switch_disabled;
		 const wchar_t * ime_switch_left_shift;
		 const wchar_t * ime_switch_right_shift;
		 const wchar_t * img_keymap;
		 const wchar_t * img_logo;
		 const wchar_t * input_big5;
		 const wchar_t * key_map;
		 const wchar_t * key_speed;
		 const wchar_t * key_to_sentmode;
		 const wchar_t * link_comp_website;
		 const wchar_t * link_more;
		 const wchar_t * lst_catalog;
		 const wchar_t * lv_blur;
		 const wchar_t * mc_celib;
		 const wchar_t * mc_phraselib;
		 const wchar_t * memu_edit_symbol;
		 const wchar_t * memu_edit_usercmd;
		 const wchar_t * memu_edit_userdef;
		 const wchar_t * memu_edit_userjm;
		 const wchar_t * menu_auto;
		 const wchar_t * menu_blend;
		 const wchar_t * menu_comp;
		 const wchar_t * menu_data_mgr;
		 const wchar_t * menu_exit;
		 const wchar_t * menu_settings;
		 const wchar_t * menu_skin;
		 const wchar_t * menu_tool_base;
		 const wchar_t * open_spchar;
		 const wchar_t * prog_build_index;
		 const wchar_t * py_switch_disabled;
		 const wchar_t * py_switch_left_ctrl;
		 const wchar_t * py_switch_right_ctrl;
		 const wchar_t * rate_adjust_auto;
		 const wchar_t * rate_adjust_disable;
		 const wchar_t * rate_adjust_fast;
		 const wchar_t * skin_cloud;
		 const wchar_t * skin_def;
		 const wchar_t * skin_mgr;
		 const wchar_t * slider_tts_speed;
		 const wchar_t * sound_beep;
		 const wchar_t * sound_disable;
		 const wchar_t * sound_wave;
		 const wchar_t * spell_all;
		 const wchar_t * spell_one;
		 const wchar_t * spell_three;
		 const wchar_t * spell_two;
		 const wchar_t * spin_delay_time;
		 const wchar_t * spin_phrase_ast_deepness_max;
		 const wchar_t * spin_predict_phrase_maxlength;
		 const wchar_t * status_base;
		 const wchar_t * status_extend;
		 const wchar_t * status_shrink;
		 const wchar_t * stv_sent;
		 const wchar_t * svr_showicon;
		 const wchar_t * tab_stage;
		 const wchar_t * txt_auto_complete;
		 const wchar_t * txt_blur_group;
		 const wchar_t * txt_blur_info;
		 const wchar_t * txt_build_time;
		 const wchar_t * txt_comp;
		 const wchar_t * txt_comp_name;
		 const wchar_t * txt_comps;
		 const wchar_t * txt_editor;
		 const wchar_t * txt_en_header;
		 const wchar_t * txt_group_size;
		 const wchar_t * txt_prog_title;
		 const wchar_t * txt_remark;
		 const wchar_t * txt_svr_ver;
		 const wchar_t * txt_temp_spell_flag;
		 const wchar_t * txt_tip;
		 const wchar_t * txt_tip_content;
		 const wchar_t * txt_tip_title;
		 const wchar_t * txt_title;
		 const wchar_t * txt_tts_speed;
		 const wchar_t * txt_ver_cur;
		 const wchar_t * txt_ver_new;
		 const wchar_t * txt_zoomin;
		 const wchar_t * userdef;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int ass_mode_english_prompt	=	402;
		const static int ass_mode_none	=	400;
		const static int ass_mode_phrase	=	401;
		const static int ass_mode_phrase_prompt	=	403;
		const static int btn_add_blur	=	65613;
		const static int btn_charmode	=	65573;
		const static int btn_close	=	2;
		const static int btn_del_blur	=	65614;
		const static int btn_english	=	65577;
		const static int btn_export_user_phrase	=	65609;
		const static int btn_filter_gbk	=	65578;
		const static int btn_help	=	65581;
		const static int btn_import_user_phrase	=	65608;
		const static int btn_install_sys_phrase	=	65607;
		const static int btn_make_phrase	=	65574;
		const static int btn_menu	=	65580;
		const static int btn_nextpage	=	65560;
		const static int btn_ok	=	1;
		const static int btn_prevpage	=	65558;
		const static int btn_query	=	65579;
		const static int btn_record	=	65575;
		const static int btn_sound	=	65576;
		const static int btn_status_extend	=	65569;
		const static int btn_status_shrink	=	65572;
		const static int btn_tts_ch_preview	=	65618;
		const static int btn_tts_en_preview	=	65620;
		const static int btn_update_now	=	65597;
		const static int cand_auto_input	=	65651;
		const static int cand_container	=	65559;
		const static int cand_english	=	65561;
		const static int cand_english_input	=	65564;
		const static int cand_normal	=	65557;
		const static int cand_phrase	=	65563;
		const static int cand_py_phrase_first	=	65652;
		const static int cand_tip	=	65565;
		const static int cbx_celib	=	65656;
		const static int cbx_full_blur	=	65590;
		const static int cbx_rhyme_blur	=	65589;
		const static int cbx_tts_ch_token	=	65617;
		const static int cbx_tts_en_token	=	65619;
		const static int cbx_tune_blur	=	65588;
		const static int cbx_update_interval	=	65596;
		const static int cell_00	=	100;
		const static int cell_01	=	101;
		const static int cell_02	=	102;
		const static int cell_03	=	103;
		const static int cell_04	=	104;
		const static int cell_05	=	105;
		const static int cell_06	=	106;
		const static int cell_07	=	107;
		const static int cell_08	=	108;
		const static int cell_09	=	109;
		const static int cell_10	=	110;
		const static int cell_11	=	111;
		const static int cell_12	=	112;
		const static int cell_13	=	113;
		const static int cell_14	=	114;
		const static int cell_15	=	115;
		const static int cell_16	=	116;
		const static int cell_17	=	117;
		const static int cell_18	=	118;
		const static int cell_19	=	119;
		const static int cell_20	=	120;
		const static int cell_21	=	121;
		const static int cell_22	=	122;
		const static int cell_23	=	123;
		const static int cell_24	=	124;
		const static int cell_25	=	125;
		const static int cell_26	=	126;
		const static int cell_27	=	127;
		const static int cell_28	=	128;
		const static int cell_29	=	129;
		const static int cell_30	=	130;
		const static int cell_31	=	131;
		const static int cell_32	=	132;
		const static int cell_33	=	133;
		const static int cell_34	=	134;
		const static int cell_35	=	135;
		const static int cell_36	=	136;
		const static int cell_37	=	137;
		const static int cell_38	=	138;
		const static int cell_39	=	139;
		const static int cell_40	=	140;
		const static int cell_41	=	141;
		const static int cell_42	=	142;
		const static int cell_43	=	143;
		const static int cell_44	=	144;
		const static int cell_45	=	145;
		const static int cell_46	=	146;
		const static int cell_47	=	147;
		const static int cell_48	=	148;
		const static int cell_49	=	149;
		const static int cell_parent	=	65587;
		const static int chk_auto_comp_promp	=	65632;
		const static int chk_auto_dot	=	65630;
		const static int chk_auto_select_cand	=	65631;
		const static int chk_auto_update	=	65595;
		const static int chk_disable_number_to_select_cand	=	65626;
		const static int chk_enable_23cand_hotkey	=	65623;
		const static int chk_full_skip_simple	=	65629;
		const static int chk_group_name	=	65600;
		const static int chk_jp_zcs	=	65616;
		const static int chk_py_blur	=	65615;
		const static int chk_show_op_tip	=	65653;
		const static int col_editor	=	65603;
		const static int col_group	=	65599;
		const static int col_remark	=	65605;
		const static int col_size	=	65601;
		const static int comp_english	=	65554;
		const static int comp_install	=	400;
		const static int comp_lineime	=	65553;
		const static int comp_normal	=	65546;
		const static int comp_sent	=	65555;
		const static int comp_spell	=	65549;
		const static int comp_umode	=	65551;
		const static int config	=	100;
		const static int edit_blur_from	=	65591;
		const static int edit_blur_to	=	65592;
		const static int edit_delay_time	=	65654;
		const static int edit_flm_addtion	=	65658;
		const static int edit_flm_name	=	65657;
		const static int edit_info	=	65545;
		const static int edit_phrase_ast_deepness_max	=	65636;
		const static int edit_predict_phrase_maxlength	=	65634;
		const static int edit_sent_record_max	=	65638;
		const static int edit_webmode_header	=	65633;
		const static int enter_for_clear	=	110;
		const static int enter_for_input	=	111;
		const static int follow_caret	=	102;
		const static int forcast_always	=	601;
		const static int forcast_disable	=	600;
		const static int forcast_no_cand	=	602;
		const static int gbk_show_as_gb	=	702;
		const static int gbk_show_manual	=	701;
		const static int gbk_show_only	=	700;
		const static int help	=	112;
		const static int hide_statusbar	=	101;
		const static int hk_2_cand	=	65624;
		const static int hk_3_cand	=	65625;
		const static int hk_bihua_heng	=	900;
		const static int hk_bihua_na	=	903;
		const static int hk_bihua_pie	=	902;
		const static int hk_bihua_shu	=	901;
		const static int hk_bihua_wild	=	905;
		const static int hk_bihua_zhe	=	904;
		const static int hk_filter_gbk	=	65646;
		const static int hk_input_en	=	65645;
		const static int hk_make_phrase	=	65641;
		const static int hk_record	=	65648;
		const static int hk_show_comp	=	65643;
		const static int hk_show_statusbar	=	65644;
		const static int hk_show_table	=	65642;
		const static int hk_switch_py	=	65639;
		const static int hk_to_sentmode	=	65650;
		const static int hk_to_umode	=	65640;
		const static int hk_tts	=	65647;
		const static int hk_turn_next	=	65628;
		const static int hk_turn_prev	=	65627;
		const static int ime_switch_disabled	=	102;
		const static int ime_switch_left_shift	=	100;
		const static int ime_switch_right_shift	=	101;
		const static int img_keymap	=	65538;
		const static int img_logo	=	65567;
		const static int input_big5	=	103;
		const static int key_map	=	110;
		const static int key_speed	=	111;
		const static int key_to_sentmode	=	65649;
		const static int link_comp_website	=	65537;
		const static int link_more	=	65544;
		const static int lst_catalog	=	65586;
		const static int lv_blur	=	65610;
		const static int mc_celib	=	65659;
		const static int mc_phraselib	=	65598;
		const static int memu_edit_symbol	=	603;
		const static int memu_edit_usercmd	=	604;
		const static int memu_edit_userdef	=	602;
		const static int memu_edit_userjm	=	605;
		const static int menu_auto	=	101;
		const static int menu_blend	=	65661;
		const static int menu_comp	=	65660;
		const static int menu_data_mgr	=	65662;
		const static int menu_exit	=	102;
		const static int menu_settings	=	103;
		const static int menu_skin	=	200;
		const static int menu_tool_base	=	701;
		const static int open_spchar	=	104;
		const static int prog_build_index	=	65541;
		const static int py_switch_disabled	=	122;
		const static int py_switch_left_ctrl	=	120;
		const static int py_switch_right_ctrl	=	121;
		const static int rate_adjust_auto	=	501;
		const static int rate_adjust_disable	=	500;
		const static int rate_adjust_fast	=	502;
		const static int skin_cloud	=	202;
		const static int skin_def	=	220;
		const static int skin_mgr	=	201;
		const static int slider_tts_speed	=	65621;
		const static int sound_beep	=	802;
		const static int sound_disable	=	800;
		const static int sound_wave	=	801;
		const static int spell_all	=	504;
		const static int spell_one	=	501;
		const static int spell_three	=	503;
		const static int spell_two	=	502;
		const static int spin_delay_time	=	65655;
		const static int spin_phrase_ast_deepness_max	=	65637;
		const static int spin_predict_phrase_maxlength	=	65635;
		const static int status_base	=	65571;
		const static int status_extend	=	65570;
		const static int status_shrink	=	65566;
		const static int stv_sent	=	65556;
		const static int svr_showicon	=	601;
		const static int tab_stage	=	65539;
		const static int txt_auto_complete	=	65552;
		const static int txt_blur_group	=	65611;
		const static int txt_blur_info	=	65612;
		const static int txt_build_time	=	65594;
		const static int txt_comp	=	65568;
		const static int txt_comp_name	=	65536;
		const static int txt_comps	=	65547;
		const static int txt_editor	=	65604;
		const static int txt_en_header	=	65562;
		const static int txt_group_size	=	65602;
		const static int txt_prog_title	=	65540;
		const static int txt_remark	=	65606;
		const static int txt_svr_ver	=	65593;
		const static int txt_temp_spell_flag	=	65550;
		const static int txt_tip	=	65548;
		const static int txt_tip_content	=	65583;
		const static int txt_tip_title	=	65582;
		const static int txt_title	=	65585;
		const static int txt_tts_speed	=	65622;
		const static int txt_ver_cur	=	65542;
		const static int txt_ver_new	=	65543;
		const static int txt_zoomin	=	65584;
		const static int userdef	=	505;
		}id;

		class _string{
		public:
		const static int btn_close	=	0;
		const static int cfg_about	=	1;
		const static int cfg_about_title	=	2;
		const static int cfg_associate	=	3;
		const static int cfg_candidate	=	4;
		const static int cfg_celib	=	5;
		const static int cfg_habit	=	6;
		const static int cfg_hotkey	=	7;
		const static int cfg_misc	=	8;
		const static int cfg_phraselib	=	9;
		const static int cfg_pinyin	=	10;
		const static int cfg_tts	=	11;
		const static int keymap	=	12;
		const static int new_ver_found	=	13;
		const static int prog	=	14;
		const static int title_config	=	15;
		const static int ver	=	16;
		}string;

		class _color{
		public:
		const static int associate_english_prefix	=	0;
		const static int blue	=	1;
		const static int cand_comp	=	2;
		const static int cand_first	=	3;
		const static int cand_index	=	4;
		const static int cand_phonetic	=	5;
		const static int cand_text	=	6;
		const static int cand_wild	=	7;
		const static int comp_auto_complete	=	8;
		const static int comp_umode_prefix	=	9;
		const static int configborder	=	10;
		const static int gray	=	11;
		const static int green	=	12;
		const static int red	=	13;
		const static int sent_input	=	14;
		const static int sent_left	=	15;
		const static int sent_right	=	16;
		const static int tabnavbk	=	17;
		const static int temp_spell_flag	=	18;
		const static int tip_cand	=	19;
		const static int tip_comp	=	20;
		const static int white	=	21;
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
