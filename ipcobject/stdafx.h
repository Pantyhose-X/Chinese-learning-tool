// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS
#include <Windows.h>
#include <assert.h>
#include <tchar.h>
#define GETLOGMGR() NULL
#include <helper/slog.h>
#define LOG_FILTER "ipcobject"
#include <helper/slog-def.h>
