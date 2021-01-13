#pragma once

#ifdef _TAIGA_TARGET_PLATFORM_WINDOWS
	#ifdef _TAIGA_DLL
		#define TAIGA __declspec(dllexport)
	#else
		#define	TAIGA __declspec(dllimport)
	#endif
#else
	#error Taiga: Nyah... platform target is either not defined or not supported. Check it, please! UwU
#endif