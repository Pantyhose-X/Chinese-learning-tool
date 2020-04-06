// dui-demo.cpp : main source file
//

#include "stdafx.h"
#include "IsSvrProxy.h"
#include "../include/reg.h"
#include "Minidump.h"
#include "ime/ui/SkinMananger.h"
#include "../helper/helper.h"
#include "worker.h"
#include <helper/SDpiHelper.hpp>
#include <helper/STime.h>
#include "ShellTypeReg.h"
#include <ShlObj.h>
#include <helper/SplitString.h>
#include <interface/SAttrStorage-i.h>

#define SYS_NAMED_RESOURCE _T("soui-sys-resource.dll")


//定义唯一的一个R,UIRES对象,ROBJ_IN_CPP是resource.h中定义的宏。
ROBJ_IN_CPP

SComMgr2 * g_ComMgr2 = NULL;

class CAttrStorage: public TObjRefImpl<IAttrStorage>
{
	typedef SMap<SStringW,SStringW> ATTRMAP;
	ATTRMAP m_mapAttr;

public:

	virtual void OnSetAttribute(const SStringW & strName, const SStringW & strValue,bool bHandled)
	{
		if(!bHandled)
		{
			m_mapAttr[strName]=strValue;
		}
	}

	virtual SStringW OnGetAttribute(const SStringW & strName) const
	{
		const ATTRMAP::CPair *p = m_mapAttr.Lookup(strName);
		if(p)
			return p->m_value;
		else
			return SStringW();
	}
};

class CAttrStorageFactory : public TObjRefImpl<IAttrStorageFactory>
{
public:
	virtual HRESULT CreateAttrStorage(SWindow *owner,IAttrStorage** ppAttrStorage) const
	{
		*ppAttrStorage = new CAttrStorage;
		return S_OK;
	}
};

#define SINSTAR3_SVR_MUTEX _T("sinstar3_svr_mutex_40AC2365-F592-4BE3-8B41-04A6B5337BFB")

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPTSTR lpstrCmdLine, int /*nCmdShow*/)
{
	SStringW cmd = S_CT2W(GetCommandLine());
	int argc = 0;
	LPWSTR *argv = CommandLineToArgvW(cmd,&argc);

	COPYDATASTRUCT cdCmd={CD_CMD_NULL,0};

	if(argc>1)
	{
		struct ImeFileInfo{
			TCHAR szExt[50];
			TCHAR szTypeId[100];
			TCHAR szTypeName[100];
			TCHAR szOpenFmt[100];
			int   iIcon;
		}imeFileInfo[]=
		{
			{
				_T(".cit"),
				_T("sinstar3.cit.2.0"),
				_T("启程输入法码表文件"),
				_T("%s -opencit \"%%1\""),
				1
			},
			{
				_T(".spl"),
				_T("sinstar3.spl.2.0"),
				_T("启程输入法词库文件"),
				_T("%s -openplt \"%%1\""),
				2
			},
			{
				_T(".sskn"),
				_T("sinstar3.skin.2.0"),
				_T("启程输入法皮肤文件"),
				_T("%s -openskin \"%%1\""),
				3
			},
		};

		if(_wcsicmp(argv[1],L"-reg")==0)
		{
			for(int i=0;i<ARRAYSIZE(imeFileInfo);i++)
			{
				CShellTypeReg::RegShellType(imeFileInfo[i].szExt,
					imeFileInfo[i].szTypeId,
					imeFileInfo[i].szTypeName,
					imeFileInfo[i].szOpenFmt,
					imeFileInfo[i].iIcon);
			}
			::SHChangeNotify(SHCNE_ASSOCCHANGED,SHCNF_FLUSH|SHCNF_FLUSHNOWAIT,NULL,NULL);
			return 0;
		}else if(_wcsicmp(argv[1],L"-unreg")==0)
		{
			for(int i=0;i<ARRAYSIZE(imeFileInfo);i++)
			{
				CShellTypeReg::UnregShellType(imeFileInfo[i].szExt);
			}
			::SHChangeNotify(SHCNE_ASSOCCHANGED,SHCNF_FLUSH|SHCNF_FLUSHNOWAIT,NULL,NULL);
			return 0;
		}else if(_wcsicmp(argv[1],L"-opencit")==0 && argc==3)
		{//install cit
			cdCmd.dwData = CD_CMD_INSTALL_CIT;
		}else if(_wcsicmp(argv[1],L"-openplt")==0 && argc==3)
		{//install plt
			cdCmd.dwData = CD_CMD_INSTALL_PLT;
		}else if(_wcsicmp(argv[1],L"-openskin")==0 && argc==3)
		{//install skin
			cdCmd.dwData = CD_CMD_INSTALL_SKIN;
		}
	}
	if(cdCmd.dwData != CD_CMD_NULL)
	{
		if(cdCmd.dwData == CD_CMD_INSTALL_CIT 
			|| cdCmd.dwData == CD_CMD_INSTALL_PLT
			|| cdCmd.dwData == CD_CMD_INSTALL_SKIN
			)
		{
			cdCmd.cbData = sizeof(wchar_t)*MAX_PATH;
			cdCmd.lpData = new wchar_t[MAX_PATH];
			wcscpy((wchar_t*)cdCmd.lpData,argv[2]);
		}
	}
	int nRet = 0;
	HWND hPrev = FindWindow(NULL,SINSTAR3_SERVER_HWND);
	if(hPrev)
	{
		if(cdCmd.dwData != CD_CMD_NULL)
		{
			::SendMessage(hPrev,WM_COPYDATA,0,(LPARAM)&cdCmd);
			delete [] (wchar_t*)cdCmd.lpData;
		}
		return 4;
	}

	TCHAR szSvrPath[MAX_PATH],szInstallPath[MAX_PATH];
	CRegKey reg;
	LONG ret = reg.Open(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\SetoutSoft\\sinstar3"), KEY_READ | KEY_WOW64_64KEY);
	if (ret != ERROR_SUCCESS)
	{
		return 1;
	}
	ULONG len = MAX_PATH;
	reg.QueryStringValue(_T("path_svr_data"), szSvrPath, &len);
	len=MAX_PATH;
	reg.QueryStringValue(_T("path_client"),szInstallPath,&len);
	reg.Close();
	if (GetFileAttributes(szSvrPath) == INVALID_FILE_ATTRIBUTES)
	{
		return 2;
	}

	SECURITY_ATTRIBUTES *psa = Helper_BuildLowIntegritySA();
	HANDLE hMutex = CreateMutex(psa, FALSE, SINSTAR3_SVR_MUTEX);
	Helper_FreeSa(psa);
	if(!hMutex && GetLastError() == ERROR_ACCESS_DENIED)
	{
		return 5;
	}
	if(hMutex && GetLastError() == ERROR_ALREADY_EXISTS)
	{
		CloseHandle(hMutex);
		return 5;
	}

	STime time = STime::GetCurrentTime();
	SStringT strTime = time.Format(_T("%y-%m-%d.%H-%M-%S"));
	SStringT strDump=SStringT().Format(_T("%s\\log\\isserver3_%s.dmp"),szInstallPath,strTime.c_str());
	CMinidump::SetDumpFile(strDump);
	CMinidump::Enable();

	HRESULT hRes = OleInitialize(NULL);
	SASSERT(SUCCEEDED(hRes));

	g_ComMgr2 = new SComMgr2(_T("imgdecoder-png"));
	TCHAR szCurrentDir[MAX_PATH] = { 0 };
	GetModuleFileName(NULL, szCurrentDir, sizeof(szCurrentDir));

	LPTSTR lpInsertPos = _tcsrchr(szCurrentDir, _T('\\'));
#ifdef _DEBUG
	_tcscpy(lpInsertPos + 1, _T("..\\..\\isserver3"));
#else
	_tcscpy(lpInsertPos + 1, _T("\0"));
#endif
	SetCurrentDirectory(szCurrentDir);
	{
		BOOL bLoaded = FALSE;
		CAutoRefPtr<SOUI::IImgDecoderFactory> pImgDecoderFactory;
		CAutoRefPtr<SOUI::IRenderFactory> pRenderFactory;
		bLoaded = g_ComMgr2->CreateRender_Skia((IObjRef**)&pRenderFactory);
		SASSERT_FMT(bLoaded, _T("load interface [render] failed!"));
		bLoaded = g_ComMgr2->CreateImgDecoder((IObjRef**)&pImgDecoderFactory);
		SASSERT_FMT(bLoaded, _T("load interface [%s] failed!"), _T("imgdecoder"));

		pRenderFactory->SetImgDecoderFactory(pImgDecoderFactory);
		SApplication *theApp = new SApplication(pRenderFactory, hInstance);
		theApp->RegisterWindowClass<SChatEdit>();
		theApp->RegisterWindowClass<SToggle2>();
		theApp->RegisterWindowClass<SCandView>();
		theApp->RegisterWindowClass<SSentView>();
		theApp->RegisterWindowClass<SEnglishCand>();
		theApp->RegisterWindowClass<SPhraseCand>();
		theApp->RegisterWindowClass<SSpellView>();
		theApp->RegisterWindowClass<SCompView>();
		theApp->RegisterWindowClass<SCaption2>();
		theApp->RegisterWindowClass<SCompBackground>();
		theApp->RegisterWindowClass<SStatusBackground>();
		theApp->RegisterWindowClass<SMutexView>();
		theApp->RegisterWindowClass<SFlagView>();
		theApp->RegisterWindowClass<SLineComp>();
		theApp->RegisterWindowClass<SApngPlayer>();

		theApp->RegisterSkinClass<SSkinAPNG>();
		theApp->RegisterSkinClass<SSkinPNGX>();
		theApp->RegisterSkinClass<SLineSkin>();

		theApp->RegisterWindowClass<STabCtrlEx>();
		theApp->RegisterWindowClass<STabPageEx>();
		theApp->RegisterWindowClass<SQrCtrl>();
		theApp->RegisterWindowClass<STipView>();

		IRealWndHandler * scintillaCreater = new SRealWndHandler_Scintilla;
		theApp->SetRealWndHandler(scintillaCreater);
		scintillaCreater->Release();
		
		IAttrStorageFactory *pAttrFac = new CAttrStorageFactory;
		theApp->SetAttrStorageFactory(pAttrFac);
		pAttrFac->Release();

		CScintillaWnd::InitScintilla(hInstance);
		new SOUI::SLogMgr(szInstallPath);
		SLogMgr::getSingletonPtr()->GetLogMgr()->setLoggerLevel(SOUI::LOG4Z_MAIN_LOGGER_ID,SOUI::ILog4zManager::LOG_LEVEL_INFO);
		//从DLL加载系统资源
		{
			HMODULE hModSysResource = LoadLibrary(SYS_NAMED_RESOURCE);
			if (hModSysResource)
			{
				CAutoRefPtr<IResProvider> sysResProvider;
				CreateResProvider(RES_PE, (IObjRef**)&sysResProvider);
				sysResProvider->Init((WPARAM)hModSysResource, 0);
				theApp->LoadSystemNamedResource(sysResProvider);
				FreeLibrary(hModSysResource);
			}
			else
			{
				SASSERT(0);
			}
		}

		TCHAR szPath[MAX_PATH];
		CRegKey reg;
		LONG ret = reg.Open(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\SetoutSoft\\sinstar3"), KEY_READ | KEY_WOW64_64KEY);
		if (ret == ERROR_SUCCESS)
		{
			ULONG len = MAX_PATH;
			reg.QueryStringValue(_T("path_client"), szPath, &len);
			reg.Close();
		}
		SStringT strDataPath = szPath;
		ret = reg.Create(HKEY_CURRENT_USER, _T("SOFTWARE\\SetoutSoft\\sinstar3"), 0, 0, KEY_WRITE | KEY_WOW64_64KEY);
		if(ret == ERROR_SUCCESS)
		{
			reg.Close();
		}

		CAutoRefPtr<IResProvider>   pResProvider;

		{
			SStringT strDefSkin = strDataPath + _T("\\defSkin");
			CreateResProvider(RES_FILE, (IObjRef**)&pResProvider);
			bLoaded = pResProvider->Init((LPARAM)(LPCTSTR)strDefSkin, 0);
			SASSERT(bLoaded);
		}
		theApp->InitXmlNamedID(namedXmlID, ARRAYSIZE(namedXmlID), TRUE);
		theApp->AddResProvider(pResProvider);

		new CDataCenter(strDataPath);
		new SNotifyCenter();
		new CWorker(strDataPath);

		CDataCenter::getSingletonPtr()->GetData().m_defUiDefine = SUiDef::getSingletonPtr()->GetUiDef();
		CDataCenter::getSingletonPtr()->GetData().m_ptSkinOffset = CSkinMananger::ExtractSkinOffset(pResProvider);

		g_SettingsG = new CSettingsGlobal();
		g_SettingsUI = new CSettingsUI();

		g_SettingsG->Load(strDataPath);
		g_SettingsUI->Load(strDataPath);

		if(!g_SettingsG->strFontDesc.IsEmpty())
		{
			FontInfo fi = SFontPool::FontInfoFromString(g_SettingsG->strFontDesc);
			SFontPool::getSingletonPtr()->SetDefFontInfo(fi);
		}

		pResProvider = NULL;
		if (!g_SettingsG->strSkin.IsEmpty())
		{
			g_ComMgr2->CreateResProvider_ZIP((IObjRef**)&pResProvider);
			ZIPRES_PARAM param;
			param.ZipFile(GETRENDERFACTORY, g_SettingsG->strSkin);
			if (!pResProvider->Init((WPARAM)&param, 0))
			{
				pResProvider = NULL;
			}
		}


		if (pResProvider)
		{
			IUiDefInfo * pUiDef = SUiDef::CreateUiDefInfo2(pResProvider, _T("uidef:xml_init"));
			if (!pUiDef->GetSkinPool() && !pUiDef->GetStylePool() && !pUiDef->GetObjDefAttr())
			{//不允许皮肤中存在全局的skin, style and defobjattr数据
				theApp->AddResProvider(pResProvider, NULL);

				IUiDefInfo * pBuiltinUidef = SUiDef::getSingleton().GetUiDef();
				pUiDef->SetObjDefAttr(pBuiltinUidef->GetObjDefAttr());
				pUiDef->SetStylePool(pBuiltinUidef->GetStylePool());
				pUiDef->SetSkinPool(pBuiltinUidef->GetSkinPool());
				pUiDef->GetNamedColor().Merge(pBuiltinUidef->GetNamedColor());
				pUiDef->GetNamedString().Merge(pBuiltinUidef->GetNamedString());
				pUiDef->GetNamedDimension().Merge(pBuiltinUidef->GetNamedDimension());


				SUiDef::getSingleton().SetUiDef(pUiDef,g_SettingsG->strFontDesc.IsEmpty());
				
				CDataCenter::getSingletonPtr()->GetData().m_ptSkinOffset = CSkinMananger::ExtractSkinOffset(pResProvider);
			}
			else
			{//外置皮肤中禁止出现全局skin, style and defobjattr表。
				SLOG_WARN("previous skin is invalid");
				g_SettingsG->strSkin.Empty();
				g_SettingsG->SetModified(true);
			}
			pUiDef->Release();
		}
		else
		{
			g_SettingsG->strSkin.Empty();
			g_SettingsG->SetModified(true);
		}

		// BLOCK: Run application
		{
			pugi::xml_document msgboxTemplate;
			if(theApp->LoadXmlDocment(msgboxTemplate,UIRES.LAYOUT.dlg_msgbox))
				SetMsgTemplate(msgboxTemplate.child(L"SOUI"));

			CIsSvrProxy svrProxy(strDataPath,szSvrPath);
			svrProxy.Create(SINSTAR3_SERVER_HWND, WS_POPUP, WS_EX_NOACTIVATE|WS_EX_TOOLWINDOW, 0, 0, 0, 0, 0, NULL);
			if (!svrProxy.IsWindow())
			{
				nRet = 3;
			}
			else
			{
				CDataCenter::getSingletonPtr()->GetData().m_nScale = SOUI::SDpiHelper::getScale(svrProxy.m_hWnd);

				Helper_ChangeWindowMessageFilter(WM_QUIT, MSGFLT_ADD);
				Helper_ChangeWindowMessageFilter(UM_CALL_FUN, MSGFLT_ADD);
				Helper_ChangeWindowMessageFilter(WM_COPYDATA, MSGFLT_ADD);

				if(cdCmd.dwData!=CD_CMD_NULL)
				{
					::SendMessage(svrProxy.m_hWnd,WM_COPYDATA,0,(LPARAM)&cdCmd);
					delete[] (wchar_t*)cdCmd.lpData;
				}
				nRet = theApp->Run(svrProxy.m_hWnd);
			}
		}
		g_SettingsG->Save(strDataPath);
		g_SettingsUI->Save(strDataPath);

		CScintillaWnd::UninitScintilla();

		delete CDataCenter::getSingletonPtr();
		delete CWorker::getSingletonPtr();
		delete SNotifyCenter::getSingletonPtr();
		delete g_SettingsG;
		delete g_SettingsUI;
		delete theApp;
		delete SOUI::SLogMgr::getSingletonPtr();
	}

	delete g_ComMgr2;
	
	OleUninitialize();
	CloseHandle(hMutex);
	return nRet;
}
