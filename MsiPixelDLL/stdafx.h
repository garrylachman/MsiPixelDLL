// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <string>
#include <msi.h>
#include <msiquery.h>
#include <tchar.h>
#include <atlbase.h>
#include <atlstr.h>
#include <array>

#include <plog/Log.h>
#include <plog/Appenders/EventLogAppender.h>
#include <plog/Formatters/MessageOnlyFormatter.h>

const wchar_t kEventSourceName[] = L"MsiPixelDLL";



// TODO: reference additional headers your program requires here
