// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
#include "../include/reg.h"
#include <shellapi.h>
#include <imm.h>
#pragma comment(lib,"imm32.lib")

CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
	m_bLayoutInited = FALSE;
}

CMainDlg::~CMainDlg()
{
}

int CMainDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetMsgHandled(FALSE);
	return 0;
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	m_bLayoutInited = TRUE;
	return 0;
}
//TODO:消息映射
void CMainDlg::OnClose()
{
	CSimpleWnd::DestroyWindow();
}

BOOL Is64OS()
{
	SYSTEM_INFO si;
	GetNativeSystemInfo(&si);

	if (si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 ||
		si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_IA64)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

BOOL MyCopyFile(LPCTSTR pszSour, LPCTSTR pszDest)
{
	TCHAR szSour[512] = { 0 }, szDest[512] = { 0 };
	_tcscpy(szSour, pszSour);
	_tcscpy(szDest, pszDest);

	SHFILEOPSTRUCT fileOp = { 0 };
	fileOp.wFunc = FO_COPY;
	fileOp.pFrom = szSour;
	fileOp.pTo = szDest;
	fileOp.fFlags = FOF_NOCONFIRMATION | FOF_SILENT | FOF_FILESONLY;
	int nRet = SHFileOperation(&fileOp);
	return nRet == 0;
}


typedef UINT
(WINAPI
	*FunGetSystemWow64Directory)(
		LPTSTR lpBuffer,
		UINT uSize
		);

typedef HRESULT
(WINAPI *FunDllRegisterServer)();
typedef HRESULT
(WINAPI *FunDllUnregisterServer)();

typedef BOOL(WINAPI *FunWow64DisableWow64FsRedirection)(
	PVOID *OldValue
	);

typedef BOOL(WINAPI *FunWow64RevertWow64FsRedirection)(
	PVOID OldValue
	);

PVOID FsRedirection()
{
	HMODULE hMod = LoadLibrary(_T("Kernel32.dll"));
	FunWow64DisableWow64FsRedirection fWow64DisableWow64FsRedirection = (FunWow64DisableWow64FsRedirection)GetProcAddress(hMod, "Wow64DisableWow64FsRedirection");
	PVOID pData = NULL;
	if (fWow64DisableWow64FsRedirection)
	{
		fWow64DisableWow64FsRedirection(&pData);
	}
	FreeLibrary(hMod);
	return pData;
}

BOOL FsRevert(PVOID pOld)
{
	HMODULE hMod = LoadLibrary(_T("Kernel32.dll"));
	FunWow64RevertWow64FsRedirection fWow64RevertWow64FsRedirection = (FunWow64RevertWow64FsRedirection)GetProcAddress(hMod, "Wow64RevertWow64FsRedirection");
	BOOL bRet = FALSE;
	if (fWow64RevertWow64FsRedirection)
	{
		bRet= fWow64RevertWow64FsRedirection(pOld);
	}
	FreeLibrary(hMod);
	return bRet;
}

void CMainDlg::onInstall()
{
	TCHAR szSysDir[256] = { 0 };
	GetSystemDirectory(szSysDir, 256);
	TCHAR szSvrExe[256] = { 0 }, szSvrData[256] = { 0 };
	_tcscat(szSysDir, _T("\\sinstar2.ini"));
	GetPrivateProfileString(_T("server"), _T("exe"), NULL, szSvrExe, 256, szSysDir);
	GetPrivateProfileString(_T("server"), _T("data"), NULL, szSvrData, 256, szSysDir);

	if (GetFileAttributes(szSvrExe) == INVALID_FILE_ATTRIBUTES
		|| GetFileAttributes(szSvrData) == INVALID_FILE_ATTRIBUTES)
	{
		SMessageBox(m_hWnd, _T("没有找到sinstar2.x的安装路径,请先安装sinstar2.x"), _T("install"), MB_OK|MB_ICONSTOP);
	}
	else
	{
		TCHAR szClient[256] = { 0 };
#ifdef _DEBUG
		GetCurrentDirectory(256,szClient);
#else
		GetModuleFileName(NULL, szClient, 256);
		TCHAR * p = _tcsrchr(szClient, _T('\\'));
		*p = 0;
#endif
		_tcscat(szClient, _T("\\data"));
		CRegKey reg;
		LONG ret = reg.Open(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\SetoutSoft\\sinstar3"), KEY_WRITE | KEY_WOW64_64KEY);
		if (ret != ERROR_SUCCESS)
		{
			ret = reg.Create(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\SetoutSoft\\sinstar3"),0,0, KEY_WRITE | KEY_WOW64_64KEY);
			if (ret != ERROR_SUCCESS)
			{
				SMessageBox(m_hWnd, _T("打开注册表失败"), _T("uninstall"), MB_OK | MB_ICONSTOP);
				return;
			}
		}
		{
			reg.SetStringValue(_T("path_svr"), szSvrExe);
			reg.SetStringValue(_T("path_svr_data"), szSvrData);
			reg.SetStringValue(_T("path_client"), szClient);
			reg.Close();
		}
		//copy file
			SStringT strImeFile;
			if (Is64OS())
			{
				TCHAR szSysPath[MAX_PATH];
				TCHAR szSysWow64[MAX_PATH] = { 0 };//32
				GetSystemDirectory(szSysPath, MAX_PATH);//64

				HMODULE hMod = LoadLibrary(_T("Kernel32.dll"));
#ifdef _UNICODE
				FunGetSystemWow64Directory fGetSystemWow64Directory = (FunGetSystemWow64Directory)GetProcAddress(hMod, "GetSystemWow64DirectoryW");
#else
				FunGetSystemWow64Directory fGetSystemWow64Directory = (FunGetSystemWow64Directory)GetProcAddress(hMod, "GetSystemWow64DirectoryA");
#endif
				if (!fGetSystemWow64Directory) return;
				fGetSystemWow64Directory(szSysWow64, MAX_PATH);
				FreeLibrary(hMod);

				PVOID fsOld = FsRedirection();
				//copy 64 ver
				{
					SStringT strDest = SStringT().Format(_T("%s\\sinstar3_ime.ime"), szSysPath);
					SStringT strSour = SStringT().Format(_T("%s\\x64\\sinstar3_ime.dll"), szClient);
					MyCopyFile(strSour, strDest);
					strImeFile = strDest;
				}
				//copy 32 ver
				{
					SStringT strDest = SStringT().Format(_T("%s\\sinstar3_ime.ime"), szSysWow64);
					SStringT strSour = SStringT().Format(_T("%s\\sinstar3_ime.dll"), szClient);
					MyCopyFile(strSour, strDest);
				}
				FsRevert(fsOld);
			}
			else
			{
				TCHAR szSysPath[MAX_PATH];
				GetSystemDirectory(szSysPath, MAX_PATH);//64

				//copy 32 ver
				{
					SStringT strDest = SStringT().Format(_T("%s\\sinstar3_ime.ime"), szSysPath);
					SStringT strSour = SStringT().Format(_T("%s\\sinstar3_ime.dll"), szClient);
					strImeFile = strDest;
					CopyFile(strSour, strDest, FALSE);
				}
			}

			
			//install 32 ime
			if (!ImmInstallIME(strImeFile, _T("启程输入法3.0")))
			{
				SMessageBox(m_hWnd, _T("输入法安装Failed"), _T("install"), MB_OK);
			}
			else
			{
				SMessageBox(m_hWnd, _T("输入法安装成功,如果输入法列表里没有出来,可能需要重新启动"), _T("install"), MB_OK);
			}

			return;
			
			HMODULE hMod = LoadLibrary(strImeFile);
			if (!hMod)
			{
				SMessageBox(m_hWnd, _T("load ime failed"), _T("install"), MB_ICONSTOP | MB_OK);
				return;
			}

			
			FunDllRegisterServer funDllRegisterServer = (FunDllRegisterServer)GetProcAddress(hMod, "DllRegisterServer");
			if (!funDllRegisterServer)
			{
				FreeLibrary(hMod);
				return;
			}
			HRESULT hr = funDllRegisterServer();
			FreeLibrary(hMod);
			if (hr != S_OK)
			{
				SMessageBox(m_hWnd, _T("register ime failed"), _T("install"), MB_ICONSTOP | MB_OK);
				return;
			}

			SMessageBox(m_hWnd, _T("输入法安装成功,如果输入法列表里没有出来,可能需要重新启动"), _T("install"),  MB_OK);
		}
}

void CMainDlg::onUninstall()
{
	TCHAR szImePath[MAX_PATH];
	GetSystemDirectory(szImePath, MAX_PATH);
	_tcscat(szImePath, _T("\\sinstar3_ime.ime"));
	if (GetFileAttributes(szImePath) == INVALID_FILE_ATTRIBUTES)
	{
		SMessageBox(m_hWnd, _T("输入法没有安装"), _T("uninstall"), MB_ICONSTOP | MB_OK);
		return;
	}
	HMODULE hMod = LoadLibrary(szImePath);
	if (!hMod)
	{
		SMessageBox(m_hWnd, _T("load ime failed"), _T("uninstall"), MB_ICONSTOP | MB_OK);
		return;
	}

	FunDllUnregisterServer funDllUnregisterServer = (FunDllUnregisterServer)GetProcAddress(hMod, "DllUnregisterServer");
	if (!funDllUnregisterServer)
	{
		FreeLibrary(hMod);
		return;
	}
	HRESULT hr = funDllUnregisterServer();
	FreeLibrary(hMod);
	if (hr != S_OK)
	{
		SMessageBox(m_hWnd, _T("卸载输入法失败"), _T("uninstall"), MB_ICONSTOP | MB_OK);
		return;
	}

	//remove files
	if (Is64OS())
	{
		TCHAR szSysPath[MAX_PATH];
		TCHAR szSysWow64[MAX_PATH] = { 0 };//32
		GetSystemDirectory(szSysPath, MAX_PATH);//64

		HMODULE hMod = LoadLibrary(_T("Kernel32.dll"));
#ifdef _UNICODE
		FunGetSystemWow64Directory fGetSystemWow64Directory = (FunGetSystemWow64Directory)GetProcAddress(hMod, "GetSystemWow64DirectoryW");
#else
		FunGetSystemWow64Directory fGetSystemWow64Directory = (FunGetSystemWow64Directory)GetProcAddress(hMod, "GetSystemWow64DirectoryA");
#endif
		if (!fGetSystemWow64Directory) return;
		fGetSystemWow64Directory(szSysWow64, MAX_PATH);
		FreeLibrary(hMod);

		PVOID fsOld = FsRedirection();
		//del 64 ver
		{
			SStringT strDest = SStringT().Format(_T("%s\\sinstar3_ime.ime"), szSysPath);
			DeleteFile(strDest);
		}
		//del 32 ver
		{
			SStringT strDest = SStringT().Format(_T("%s\\sinstar3_ime.ime"), szSysWow64);
			DeleteFile(strDest);
		}
		FsRevert(fsOld);
	}
	else
	{
		TCHAR szSysPath[MAX_PATH];
		GetSystemDirectory(szSysPath, MAX_PATH);//32
		//del 32 ver
		{
			SStringT strDest = SStringT().Format(_T("%s\\sinstar3_ime.ime"), szSysPath);
			DeleteFile(strDest);
		}
	}

	//delete reg
	CRegKey reg;
	LONG ret = reg.Open(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\SetoutSoft"), KEY_WRITE | KEY_WOW64_64KEY);
	if (ret != ERROR_SUCCESS)
	{
		SMessageBox(m_hWnd, _T("打开注册表失败"), _T("uninstall"), MB_OK | MB_ICONSTOP);
		return;
	}
	reg.RecurseDeleteKey(_T("sinstar3"));
	reg.Close();
	SMessageBox(m_hWnd, _T("卸载输入法成功"), _T("uninstall"), MB_OK);
}


