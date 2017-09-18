#pragma once
#if defined LibExport && defined __cplusplus
#define LIBSPEC extern "C" { __declspec(dllexport)
#elif defined LibExport
#define LIBSPEC __declspec(dllexport)
#elif defined __cplusplus
#define LIBSPEC extern "C" { __declspec(dllimport)
#else 
#define LIBSPEC __declspec(dllimport)
#endif
LIBSPEC int f(int x);
#if defined __cplusplus
}
#endif