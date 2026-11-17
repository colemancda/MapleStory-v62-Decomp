/* FUN_00889a89 - 0x00889a89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00889a89(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_009809f4 == (FARPROC)0x0) {
    hModule = LoadLibraryA(s_user32_dll_008f4cbc);
    if (hModule != (HMODULE)0x0) {
      DAT_009809f4 = GetProcAddress(hModule,s_MessageBoxA_008f4cb0);
      if (DAT_009809f4 != (FARPROC)0x0) {
        DAT_009809f8 = GetProcAddress(hModule,s_GetActiveWindow_008f4ca0);
        DAT_009809fc = GetProcAddress(hModule,s_GetLastActivePopup_008f4c8c);
        goto LAB_00889ad8;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00889ad8:
    if (DAT_009809f8 != (FARPROC)0x0) {
      iVar1 = (*DAT_009809f8)();
      if ((iVar1 != 0) && (DAT_009809fc != (FARPROC)0x0)) {
        iVar1 = (*DAT_009809fc)(iVar1);
      }
    }
    iVar1 = (*DAT_009809f4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


