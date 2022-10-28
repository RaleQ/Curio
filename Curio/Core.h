#pragma once

#ifdef CURIO_PLATFORM_WINDOWS
	#ifdef CURIO_BUILD_DLL
		#define CURIO_API __declspec(dllexport)
	#else
		#define CURIO_API __declspec(dllimport)
	#endif
#else
	#error Curio only support Windows
#endif
