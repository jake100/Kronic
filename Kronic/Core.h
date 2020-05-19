#pragma once

#ifdef KR_PLATFORM_WINDOWS
	#ifdef KR_BUILD_DLL
		#define KRONIC_API __declspec(dllexport)
	#else
		#define KRONIC_API __declspec(dllimport)
	#endif KR_BUILD_DLL
#else
	#error Kronic only support Windows

#endif // KR_PLATFORM_WINDOWS
