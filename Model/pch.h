//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <vector>
#include <string>
#include <deque>

#ifndef ASSERT
#ifdef _DEBUG
# define ASSERT(x) { if (!(x)) { abort(); } _Analysis_assume_(x); }
#else
# define ASSERT(x)
#endif
#endif
