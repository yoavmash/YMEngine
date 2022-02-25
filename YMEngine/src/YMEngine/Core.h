#pragma once

#ifdef YME_PLATFORM_WINDOWS
	#ifdef YME_BUILD_DLL
		#define YMENGINE_API __declspec(dllexport)
	#else
		#define YMENGINE_API __declspec(dllimport)
	#endif
#else
	#error YMEngine only supports Windows!
#endif
