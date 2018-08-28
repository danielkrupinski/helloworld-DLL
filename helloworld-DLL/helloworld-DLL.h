#pragma once

#ifdef helloworld-DLL_EXPORTS
#define helloworld-DLL_API __declspec(dllexport)
#else
#define helloworld-DLL_API __declspec(dllimport)
#endif


