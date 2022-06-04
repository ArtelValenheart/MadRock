#pragma once

#ifdef MR_PLATFORM_WINDOWS
	#ifdef MR_BUILD_DLL
		#define MADROCK_API __declspec(dllexport)
	#else
		#define MADROCK_API __declspec(dllimport)
	#endif
#else
	#error MadRock only supports Windows!
#endif