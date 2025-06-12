#pragma once

#ifdef DY_PLATFORM_WINDOWS
	#ifdef DY_BUILD_DLL
		#define DAISY_API _declspec(dllexport)
	#else
		#define DAISY_API _declspec(dllimport)
	#endif
#else 
	#error DAISY ONLY SUPPORTS WINDOWS!
#endif // DY_PLATFORM_WINDOWS
