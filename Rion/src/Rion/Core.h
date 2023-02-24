#pragma once

#ifdef RN_PLATFORM_WINDOWS
	#ifdef RN_BUILD_DLL
		#define RION_API __declspec(dllexport)
	#else
		#define RION_API __declspec(dllimport)
	#endif
#else
	#error Rion only supports Windows
#endif