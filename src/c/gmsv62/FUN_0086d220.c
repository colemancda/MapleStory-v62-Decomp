/* FUN_0086d220 - 0x0086d220 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0086d220(int param_1)

{
  LPCSTR pCVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096dfd8);
  hModule = GetModuleHandleA(pCVar1);
  pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096dfc4);
  pFVar2 = GetProcAddress(hModule,pCVar1);
  if (pFVar2 != (FARPROC)0x0) {
    pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096dfac);
    pFVar2 = GetProcAddress(hModule,pCVar1);
    if ((pFVar2 != (FARPROC)0x0) &&
       ((local_94.dwMajorVersion < 5 ||
        ((local_94.dwMajorVersion == 5 && (local_94.dwMinorVersion == 0)))))) {
      *(undefined1 *)(param_1 + 0x2b8c) = 1;
      return 1;
    }
  }
  if (local_94.dwPlatformId != 2) {
    return 0;
  }
  DAT_0097fb5e = 1;
  if ((local_94.dwMajorVersion == 5) && (local_94.dwMinorVersion == 0)) {
    DAT_0096d720 = DAT_0096d720 * 2;
  }
  return 1;
}


