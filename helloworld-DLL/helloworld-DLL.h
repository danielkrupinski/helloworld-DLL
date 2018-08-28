#pragma once

#ifdef HELLOWORLDDLL_EXPORTS
#define HELLOWORLDDLL_API __declspec(dllexport)
#else
#define HELLOWORLDDLL_API __declspec(dllimport)
#endif

extern "C" HELLOWORLDDLL_API void hello();
