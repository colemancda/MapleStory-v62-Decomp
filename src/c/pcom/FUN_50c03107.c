/* FUN_50c03107 - 0x50c03107 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c03107(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_50c214c8 & 1) == 0) {
    DAT_50c214c8 = DAT_50c214c8 | 1;
    if (DAT_50c1ca74 == (HMODULE)0x0) {
      DAT_50c214cc = (FARPROC)0x0;
      return -0x7fffbfff;
    }
    DAT_50c214cc = GetProcAddress(DAT_50c1ca74,s_FNotifyAlloc_50c1734f + 1);
  }
  if (DAT_50c214cc == (FARPROC)0x0) {
    return -0x7fffbfff;
  }
  iVar1 = (*DAT_50c214cc)(param_1,param_2,param_3);
  return iVar1;
}


