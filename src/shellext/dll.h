#ifndef COMPOSERSHELL_DLL_H
#define COMPOSERSHELL_DLL_H

#include <windows.h>

typedef struct _CSXGLOBALS {
    HINSTANCE module;
    DWORD runas;
    BOOLEAN runasSet;
    HBITMAP shield;
    BOOLEAN shieldSet;
} CSXGLOBALS;

#endif
