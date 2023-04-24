#pragma once
#ifdef RAYS_PLATFORM_WINDOWS
	#ifdef RAYS_BUILD_DLL
         #define RAYS_API __declspec(dllexport)
    #else 
         #define RAYS_API __declspec(dllimport)
	#endif
#else
    #error Rays Engine is only support windows!
#endif