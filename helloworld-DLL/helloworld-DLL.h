#pragma once

#ifdef helloworld-DLL_EXPORTS
#define helloworld-DLL_API __declspec(dllexport)
#else
#define helloworld-DLL_API __declspec(dllimport)
#endif

extern "C" helloworld-DLL_API void hello();
