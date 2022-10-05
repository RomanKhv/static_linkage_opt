#pragma once

#ifdef MYLIB_EXPORTS
    #define LIB_API __declspec(dllexport)
#else
    #define LIB_API __declspec(dllimport)

    //#pragma comment(lib, "mydll")
#endif

LIB_API void fnStaticLib();
LIB_API void fnDll();
