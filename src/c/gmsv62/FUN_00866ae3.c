/* FUN_00866ae3 - 0x00866ae3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00866ae3(int param_1,undefined4 param_2)

{
  LPCSTR pCVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  _OSVERSIONINFOA local_118;
  undefined1 local_84 [128];
  
  FUN_0086a710(param_2);
  local_118.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_118);
  if (local_118.dwPlatformId == 2) {
    pCVar1 = (LPCSTR)FUN_00866977(&DAT_0096a090,local_84);
    hModule = LoadLibraryA(pCVar1);
    pCVar1 = (LPCSTR)FUN_00866977(&DAT_0096ce18,local_84);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    *(FARPROC *)(param_1 + 0x44) = pFVar2;
    pCVar1 = (LPCSTR)FUN_00866977(&DAT_0096ce04,local_84);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    *(FARPROC *)(param_1 + 0x48) = pFVar2;
    pCVar1 = (LPCSTR)FUN_00866977(&DAT_0096cdf0,local_84);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    *(FARPROC *)(param_1 + 0x4c) = pFVar2;
    pCVar1 = (LPCSTR)FUN_00866977(&DAT_0096cddc,local_84);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    *(FARPROC *)(param_1 + 0x50) = pFVar2;
    pCVar1 = (LPCSTR)FUN_00866977(&DAT_0096cdc8,local_84);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    *(FARPROC *)(param_1 + 0x54) = pFVar2;
  }
  return;
}


